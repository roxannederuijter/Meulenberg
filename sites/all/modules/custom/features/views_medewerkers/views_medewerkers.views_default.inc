<?php
/**
 * @file
 * views_medewerkers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_medewerkers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'medewerkers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Medewerkers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Medewerkers';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Veld: Afbeelding */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Veld: Inhoud: Naam */
  $handler->display->display_options['fields']['field_naam']['id'] = 'field_naam';
  $handler->display->display_options['fields']['field_naam']['table'] = 'field_data_field_naam';
  $handler->display->display_options['fields']['field_naam']['field'] = 'field_naam';
  $handler->display->display_options['fields']['field_naam']['label'] = '';
  $handler->display->display_options['fields']['field_naam']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Functie */
  $handler->display->display_options['fields']['field_functie']['id'] = 'field_functie';
  $handler->display->display_options['fields']['field_functie']['table'] = 'field_data_field_functie';
  $handler->display->display_options['fields']['field_functie']['field'] = 'field_functie';
  $handler->display->display_options['fields']['field_functie']['label'] = '';
  $handler->display->display_options['fields']['field_functie']['element_label_colon'] = FALSE;
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
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'medewerker' => 'medewerker',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'medewerkers_block');
  $translatables['medewerkers'] = array(
    t('Master'),
    t('Medewerkers'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Block'),
  );
  $export['medewerkers'] = $view;

  return $export;
}
