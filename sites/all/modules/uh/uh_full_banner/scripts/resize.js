(function ($) {
    Drupal.behaviors.sauer = {
        attach: function (context, settings) {
            $(document).ready(function () {
                //if(jQuery.fn.jquery < 1.6){return;}
                // Define the target element(s)
                var slides = $("#block-views-home-banner-block .field-name-field-banner img", context);

                var listenImageresize = function(elm, image_width, image_height) {
                    var doc_width = $(window).width();
                    // can also use $(document).width(), which makes resizing faster
                    var doc_height = $(window).height() - $(elm).offset().top; //($("#zone-branding").offset().top + $("#zone-branding").outerHeight()); // can also use $(document).height(), which makes resizing faster

                    var image_ratio = image_width / image_height;
                    var new_width = doc_width;

                    var new_height = Math.round(new_width / image_ratio);
                    $(elm).width(new_width);
                    $(elm).height(new_height);
                    $(elm).removeAttr('width').removeAttr('height');
                    if (new_height < doc_height) {
                        new_height = doc_height;
                        new_width = Math.round(new_height * image_ratio);
                        $(elm).width(new_width);
                        $(elm).height(new_height);
                        var width_offset = Math.round((new_width - doc_width) / 2);
                        $(elm).css("left", "-" + width_offset + "px");
                    }
                };

                var getImage = function(img, callback){
                    var image;

                    image = new Image();
                    image.onload = function () {callback(img, image.width, image.height)};
                    image.src = img.attr("src");
                };

                var startImageResize = function() {
                    slides.each(function(){getImage($(this), listenImageresize);});
                }

                startImageResize();
                $(window).on("resize", function () {
                    startImageResize();
                });

            });
        }
    };
})(jQuery);