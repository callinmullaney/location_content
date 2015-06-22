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
    "name" : "Location",
    "plural" : "Locations",
    "data" : { "icon" : "map-marker" },
    "rdf_mapping" : [],
    "public" : false
  }');
  return $items;
}
