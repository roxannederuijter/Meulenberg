<?php
/**
 * @file
 * content_nieuws.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_nieuws_taxonomy_default_vocabularies() {
  return array(
    'catogorie' => array(
      'name' => 'categorie',
      'machine_name' => 'catogorie',
      'description' => 'Categorie nieuws',
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
