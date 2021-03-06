<?php
/**
 * @file
 * content_dienst.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_dienst_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_dienst_node_info() {
  $items = array(
    'dienst' => array(
      'name' => t('Dienst'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
