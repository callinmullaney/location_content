<?php
/**
 * @file
 * location_content.features.inc
 */

/**
 * Implements hook_default_asset_type().
 */
function location_content_default_asset_type() {
  $items = array();
  $items['location'] = entity_import('asset_type', '{
    "type" : "location",
    "title" : "Location",
    "plural" : "Locations",
    "data" : {
      "icon" : "map-marker",
      "viewable" : 0,
      "pathauto" : 0,
      "path" : "",
      "title_label" : "",
      "auto_title" : 0,
      "auto_title_pattern" : "",
      "render_title" : 0,
      "allow_status" : 0,
      "usage_info" : 0,
      "instance_info" : 0,
      "purge" : 0,
      "no_multiple" : 0,
      "require_instance" : 0
    },
    "rdf_mapping" : [],
    "public" : false
  }');
  return $items;
}
