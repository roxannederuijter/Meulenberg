<?php
/**
 * @file
 * views_ons.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_ons_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'over_ons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Over ons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Over ons';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Inhoud: over ons */
  $handler->display->display_options['fields']['field_over_ons']['id'] = 'field_over_ons';
  $handler->display->display_options['fields']['field_over_ons']['table'] = 'field_data_field_over_ons';
  $handler->display->display_options['fields']['field_over_ons']['field'] = 'field_over_ons';
  $handler->display->display_options['fields']['field_over_ons']['label'] = '';
  $handler->display->display_options['fields']['field_over_ons']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_over_ons']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_over_ons']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_over_ons']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_over_ons']['delta_offset'] = '0';
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['over_ons'] = array(
    t('Master'),
    t('Over ons'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Block'),
  );
  $export['over_ons'] = $view;

  return $export;
}
