<?php
/**
 * @file
 * views_producten.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_producten_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'producten';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Producten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Producten';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Algemeen: Ongefilterde tekst */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Stel, u heeft een bestand, maar u weet niet of wij dit voor u kunnen produceren. Ons bedrijf kan u voorzien in vrijwel alles wat met drukwerk te maken heeft. Hieronder vindt u een overzicht van onze producten';
  /* Voet: Algemeen: Ongefilterde tekst */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = 'Wilt u graag iets laten drukken, maar ziet u uw product niet in dit rijtje staan? Neem gerust contact met ons op. De kans is erg groot dat wij u toch kunnen helpen!';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Veld: Inhoud: tekst */
  $handler->display->display_options['fields']['field_tekst']['id'] = 'field_tekst';
  $handler->display->display_options['fields']['field_tekst']['table'] = 'field_data_field_tekst';
  $handler->display->display_options['fields']['field_tekst']['field'] = 'field_tekst';
  $handler->display->display_options['fields']['field_tekst']['label'] = '';
  $handler->display->display_options['fields']['field_tekst']['element_label_colon'] = FALSE;
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
    'producten' => 'producten',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'producten';
  $translatables['producten'] = array(
    t('Master'),
    t('Producten'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Stel, u heeft een bestand, maar u weet niet of wij dit voor u kunnen produceren. Ons bedrijf kan u voorzien in vrijwel alles wat met drukwerk te maken heeft. Hieronder vindt u een overzicht van onze producten'),
    t('Wilt u graag iets laten drukken, maar ziet u uw product niet in dit rijtje staan? Neem gerust contact met ons op. De kans is erg groot dat wij u toch kunnen helpen!'),
    t('Page'),
  );
  $export['producten'] = $view;

  return $export;
}
