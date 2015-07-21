<?php
/**
 * @file
 * content_ds_settings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function content_ds_settings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dienst|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dienst';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|dienst|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|webform|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'webform';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|webform|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function content_ds_settings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_wie_zijn_wij|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_wie_zijn_wij';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_medewerker1',
        1 => 'field_naam',
        2 => 'field_telefoon',
        3 => 'field_mobiel',
        4 => 'field_mail2',
      ),
      'middle' => array(
        5 => 'field_title',
        6 => 'field_title_text',
        7 => 'field_bodys',
      ),
      'right' => array(
        8 => 'field_medewerker2',
        9 => 'field_naam2',
        10 => 'field_telefoon2',
        11 => 'field_mobiel2',
        12 => 'field_mail',
      ),
    ),
    'fields' => array(
      'field_medewerker1' => 'left',
      'field_naam' => 'left',
      'field_telefoon' => 'left',
      'field_mobiel' => 'left',
      'field_mail2' => 'left',
      'field_title' => 'middle',
      'field_title_text' => 'middle',
      'field_bodys' => 'middle',
      'field_medewerker2' => 'right',
      'field_naam2' => 'right',
      'field_telefoon2' => 'right',
      'field_mobiel2' => 'right',
      'field_mail' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['field_collection_item|field_wie_zijn_wij|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_wie_zijn_wij|diff_standard';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_wie_zijn_wij';
  $ds_layout->view_mode = 'diff_standard';
  $ds_layout->layout = 'ds_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_medewerker1',
        1 => 'field_naam',
        2 => 'field_telefoon',
        3 => 'field_mobiel',
        4 => 'field_mail',
      ),
      'middle' => array(
        5 => 'field_title',
        6 => 'field_title_text',
        7 => 'field_bodys',
      ),
      'right' => array(
        8 => 'field_medewerker2',
        9 => 'field_naam2',
        10 => 'field_telefoon2',
        11 => 'field_mobiel2',
        12 => 'field_mail2',
      ),
    ),
    'fields' => array(
      'field_medewerker1' => 'left',
      'field_naam' => 'left',
      'field_telefoon' => 'left',
      'field_mobiel' => 'left',
      'field_mail' => 'left',
      'field_title' => 'middle',
      'field_title_text' => 'middle',
      'field_bodys' => 'middle',
      'field_medewerker2' => 'right',
      'field_naam2' => 'right',
      'field_telefoon2' => 'right',
      'field_mobiel2' => 'right',
      'field_mail2' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['field_collection_item|field_wie_zijn_wij|diff_standard'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_wie_zijn_wij|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_wie_zijn_wij';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_naam',
        1 => 'field_over',
      ),
      'right' => array(
        2 => 'field_naam2',
        3 => 'field_over2',
      ),
    ),
    'fields' => array(
      'field_naam' => 'left',
      'field_over' => 'left',
      'field_naam2' => 'right',
      'field_over2' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['field_collection_item|field_wie_zijn_wij|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dienst|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dienst';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_paragraph_s',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_paragraph_s' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|dienst|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|home|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'home';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_wie_zijn_wij',
      ),
    ),
    'fields' => array(
      'field_wie_zijn_wij' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|home|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_body',
        1 => 'field_image',
      ),
      'right' => array(
        2 => 'title',
        3 => 'webform',
      ),
    ),
    'fields' => array(
      'field_body' => 'left',
      'field_image' => 'left',
      'title' => 'right',
      'webform' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|webform|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_kolommen_afbeeldingen|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_kolommen_afbeeldingen';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_afbeelding',
      ),
      'right' => array(
        1 => 'field_afbeelding_rechts',
      ),
    ),
    'fields' => array(
      'field_afbeelding' => 'left',
      'field_afbeelding_rechts' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|2_kolommen_afbeeldingen|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_kolommen_tekst_afbeelding_link|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_kolommen_tekst_afbeelding_link';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_afbeelding',
      ),
      'right' => array(
        1 => 'field_tekst_rechts',
      ),
    ),
    'fields' => array(
      'field_afbeelding' => 'left',
      'field_tekst_rechts' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|2_kolommen_tekst_afbeelding_link|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_kolommen_tekst_afbeelding_rech|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_kolommen_tekst_afbeelding_rech';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_tekst_lang',
      ),
      'right' => array(
        1 => 'field_afbeelding_rechts',
      ),
    ),
    'fields' => array(
      'field_tekst_lang' => 'left',
      'field_afbeelding_rechts' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|2_kolommen_tekst_afbeelding_rech|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_kolommen_tekst|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_kolommen_tekst';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_tekst_lang',
      ),
      'right' => array(
        1 => 'field_tekst_rechts',
      ),
    ),
    'fields' => array(
      'field_tekst_lang' => 'left',
      'field_tekst_rechts' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|2_kolommen_tekst|default'] = $ds_layout;

  return $export;
}
