<?php
/**
 * @file
 * default_block_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function default_block_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'contact';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'contact';
  $fe_block_boxes->body = '<p>Drukkerij Meulenberg</p>

<p>Rotterdamsekaai 61</p>

<p>4331 GN Middelburg&nbsp;</p>

<p>T: 0118 – 635 126&nbsp;</p>

<p><a href="mailto:drukkerij@meulenberg.nl">drukkerij@meulenberg.nl</a></p>
';

  $export['contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'call to action';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'cta';
  $fe_block_boxes->body = '<p><a class="buttonred" href="/offerte">Offerte aanvragen</a></p>
';

  $export['cta'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ga naar';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'ga_naar';
  $fe_block_boxes->body = '<ul>
	<li><a href="/medewerkers">Medewerkers</a></li>
</ul>
';

  $export['ga_naar'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'googlemaps';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'googlemaps';
  $fe_block_boxes->body = '<p><iframe allowfullscreen="" frameborder="0" height="450" src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d2483.6507246395936!2d3.622329000000002!3d51.50127669999999!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x47c4912009d134a9%3A0x82ba192733895328!2sRotterdamsekaai+61%2C+4331+GN+Middelburg!5e0!3m2!1sen!2snl!4v1435926029354" style="border:0" width="600"></iframe></p>
';

  $export['googlemaps'] = $fe_block_boxes;

  return $export;
}
