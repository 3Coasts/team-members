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
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '220',
          'height' => '180',
        ),
        'weight' => '1',
      ),
    ),
  );


  return $styles;
}