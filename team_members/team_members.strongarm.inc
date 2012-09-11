<?php
/**
 * @file
 * team_members.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function team_members_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_team_member';
  $strongarm->value = array();
  $export['menu_options_team_member'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_team_member';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_team_member'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_team_member';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_team_member'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_team_member';
  $strongarm->value = '1';
  $export['node_preview_team_member'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_team_member';
  $strongarm->value = 1;
  $export['node_submitted_team_member'] = $strongarm;

  return $export;
}
