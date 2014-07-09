<?php
/**
 * @file
 * openberkeley_base.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function openberkeley_base_defaultconfig_features() {
  return array(
    'openberkeley_base' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function openberkeley_base_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '0';
  $export['user_register'] = $strongarm;

  return $export;
}
