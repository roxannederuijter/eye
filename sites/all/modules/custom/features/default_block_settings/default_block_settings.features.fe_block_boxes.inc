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
  $fe_block_boxes->body = '<p>Kinderdijk 68</p>

<p>4331 HH Middelburg</p>

<p>0118 - 227500</p>

<p>info@eyeaccountancy.nl</p>
';

  $export['contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'googlemaps';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'googlemaps';
  $fe_block_boxes->body = '<p><iframe allowfullscreen="" frameborder="0" height="450" src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d2483.7396538763414!2d3.621527899999992!3d51.4996449!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x47c490dfbf534c0b%3A0x5bc5ed629253da6b!2sKinderdijk+68%2C+4331+HH+Middelburg!5e0!3m2!1sen!2snl!4v1435823748559" style="border:0" width="600"></iframe></p>
';

  $export['googlemaps'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'overige informatie';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'informatie';
  $fe_block_boxes->body = '<ul>
	<li><a href="/vacatures">Vacatures</a></li>
	<li><a href="/klachtenregeling">Klachtenregeling</a></li>
	<li><a href="/algemenevoorwaarden">Algemene voorwaarden</a></li>
	<li><a href="/disclaimer">Disclaimer</a></li>
</ul>
';

  $export['informatie'] = $fe_block_boxes;

  return $export;
}
