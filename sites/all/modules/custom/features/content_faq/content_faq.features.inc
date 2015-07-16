<?php
/**
 * @file
 * content_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_faq_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('faq'),
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
