<?php
/**
 * @file
 * default_imagestyles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function default_imagestyles_image_default_styles() {
  $styles = array();

  // Exported image style: banner.
  $styles['banner'] = array(
    'label' => 'Banner',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2560,
          'height' => 772,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news.
  $styles['news'] = array(
    'label' => 'News',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 205,
          'height' => 104,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
