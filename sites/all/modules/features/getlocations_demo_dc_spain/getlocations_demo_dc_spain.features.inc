<?php
/**
 * @file
 * getlocations_demo_dc_spain.features.inc
 */

/**
 * Implements hook_views_api().
 */
function getlocations_demo_dc_spain_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function getlocations_demo_dc_spain_node_info() {
  $items = array(
    'poi_getlocations' => array(
      'name' => t('POI Getlocations'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
