<?php
/**
 * @file
 * mapping_demo_.features.inc
 */

/**
 * Implements hook_node_info().
 */
function mapping_demo__node_info() {
  $items = array(
    'poi_geofield' => array(
      'name' => t('POI Geofield'),
      'base' => 'node_content',
      'description' => t('Generic Point of Interest (POI) that uses geofield for geospatial data storing and displaying'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
