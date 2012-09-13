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

/**
 * Implements hook_image_default_styles().
 */
function team_members_image_default_styles() {
  $styles = array();

  // Exported image style: association_logo
  $styles['team_member_portrait'] = array(
    'name' => 'team_member_portrait',
    'effects' => array(
      53 => array(
        'label' => 'Scale and crop',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_scale_and_crop_dimensions',
        'form callback' => 'image_scale_and_crop_form',
        'summary theme' => 'image_scale_and_crop_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '180',
          'height' => '220',
          'upscale' => 1,
        ),
        'weight' => '2',
      ),
    ),
  );


  return $styles;
}