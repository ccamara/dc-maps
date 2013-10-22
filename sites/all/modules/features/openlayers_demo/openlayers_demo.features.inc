<?php
/**
 * @file
 * openlayers_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlayers_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openlayers_demo_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
