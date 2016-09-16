<?php

/**
 * @file
 * Include file for defining views handlers and data.
 */

/**
 * Implements hook_views_data().
 */
function handler_views_views_data() {
    $data['fetal']['example'] = array(
        'title' => t('Banners'),
        'help' => t('Display a Fetal Banners'),
        'field' => array('handler' => 'example'),
    );

  return $data;
}

/**
 * Implements hook_views_plugins().
 */
function handler_views_views_plugins() {
  $plugins = array(
      'style' => array(
          'clean_style' => array(
              'title' => t('Clean'),
              'help' => t('Clean Style'),
              'handler' => 'StyleFetalClean',
              'parent' => 'default',
              'theme' => 'clean-style',
              'theme path' => drupal_get_path('theme', 'fetal_2016').'/templates/views/clean',
              'theme file' => 'theme.inc',
              'uses row plugin' => TRUE,
              'uses grouping' => FALSE,
              'uses options' => FALSE,
              'type' => 'normal',
          ),
      ),
  );
  return $plugins;
}