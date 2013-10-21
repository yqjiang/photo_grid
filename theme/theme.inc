<?php
/**
 * @file
 * Theming functions for the Photowall module.
 */

/**
 * Template preprocess handler for 'photowall' theme.
 */
function template_preprocess_yq_photo_grid(&$variables) {

  //Add CSS.
  drupal_add_css(drupal_get_path('module', 'yq_photo_grid') . '/css/yq_photo_grid.css');

  //Add JQuery plugin and JS.
  drupal_add_js(drupal_get_path('module', 'yq_photo_grid') . '/js/yq_photo_grid.js');

  $field_type = $variables['field_type'];

  $yq_photo_grid = array();
  $variables['items'] = array_reverse($variables['items']);
  foreach ($variables['items'] as $num => $item) {
  }
  dsm();
}
