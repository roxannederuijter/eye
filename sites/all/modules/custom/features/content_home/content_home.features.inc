<?php
/**
 * @file
 * content_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_home_node_info() {
  $items = array(
    'home' => array(
      'name' => t('Home'),
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
