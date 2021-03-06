<?php
/**
 * @file
 * dgu_glossary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dgu_glossary_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bootstrap_tour" && $api == "bootstrap_tour_tour") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dgu_glossary_node_info() {
  $items = array(
    'suggested_definition' => array(
      'name' => t('Predlo'.unichars1(382).'ena definicija'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Naslov'),
      'help' => '',
    ),
    'suggested_term' => array(
      'name' => t('Predlo'.unichars1(382).'eni termin'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Naslov'),
      'help' => '',
    ),
  );
  return $items;
}

function unichars1( $unicode , $encoding = 'UTF-8' )
{
	return mb_convert_encoding("&#{$unicode};", $encoding, 'HTML-ENTITIES');
}