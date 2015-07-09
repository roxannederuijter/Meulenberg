<?php
/**
 * @file
 * content_diensten.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_diensten_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_usp'
  $field_bases['field_usp'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_usp',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'cck_list',
    'settings' => array(
      'rows' => 5,
    ),
    'translatable' => 0,
    'type' => 'list',
  );

  return $field_bases;
}
