<?php
/**
 * @file
 * default_imagestyles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function default_imagestyles_image_default_styles() {
  $styles = array();

  // Exported image style: banner.
  $styles['banner'] = array(
    'label' => 'Banner',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2560,
          'height' => 750,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_home.
  $styles['banner_home'] = array(
    'label' => 'Banner_home',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2560,
          'height' => 1000,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
