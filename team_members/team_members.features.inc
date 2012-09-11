<?php
/**
 * @file
 * team_members.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function team_members_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function team_members_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function team_members_node_info() {
  $items = array(
    'team_member' => array(
      'name' => t('Team Member'),
      'base' => 'node_content',
      'description' => t('An employee.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
