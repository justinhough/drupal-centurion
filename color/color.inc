<?php

// Put the logo path into JavaScript for the live preview.
drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'centurion'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'top' => t('Header top'),
    'bottom' => t('Header bottom'),
    'bg' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
  ),
  // Centurion Pre-Defined Color Schemes
  'schemes' => array(
    'default' => array(
      'title' => t('Black (Default)'),
      'colors' => array(
        'top' => '#000',
        'bottom' => '#000',
        'bg' => '#FFF',
        'sidebar' => '#EDEDED',
        'sidebarborders' => '#DDD',
        'footer' => '#333',
        'titleslogan' => '#FEFEFE',
        'text' => '#333',
        'link' => '#000',
      ),
    ),
    'orange' => array(
      'title' => t('Orange'),
      'colors' => array(
        'top' => '#000',
        'bottom' => '#000',
        'bg' => '#FFF',
        'sidebar' => '#EDEDED',
        'sidebarborders' => '#DDD',
        'footer' => '#333',
        'titleslogan' => '#FEFEFE',
        'text' => '#333',
        'link' => '#000',
      ),
    ),
    //
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
