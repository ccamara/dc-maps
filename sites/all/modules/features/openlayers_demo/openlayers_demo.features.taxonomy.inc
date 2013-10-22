<?php
/**
 * @file
 * openlayers_demo.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openlayers_demo_taxonomy_default_vocabularies() {
  return array(
    'poi_types' => array(
      'name' => 'POI types',
      'machine_name' => 'poi_types',
      'description' => 'Test vocabulary for POIs CT',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
