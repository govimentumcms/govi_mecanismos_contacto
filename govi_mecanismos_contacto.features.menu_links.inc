<?php

/**
 * @file
 * govi_mecanismos_contacto.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_mecanismos_contacto_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-mecanismos-de-contacto_localizacin-fsica-sucursales-o-regionales:transparencia/mecanismos-de-contacto/sucursales.
  $menu_links['menu-menu-mecanismos-de-contacto_localizacin-fsica-sucursales-o-regionales:transparencia/mecanismos-de-contacto/sucursales'] = array(
    'menu_name' => 'menu-menu-mecanismos-de-contacto',
    'link_path' => 'transparencia/mecanismos-de-contacto/sucursales',
    'router_path' => 'transparencia/mecanismos-de-contacto/sucursales',
    'link_title' => 'Localización física, sucursales o regionales',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-mecanismos-de-contacto_localizacin-fsica-sucursales-o-regionales:transparencia/mecanismos-de-contacto/sucursales',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-mecanismos-de-contacto_notificaciones-judiciales:node/2.
  $menu_links['menu-menu-mecanismos-de-contacto_notificaciones-judiciales:node/2'] = array(
    'menu_name' => 'menu-menu-mecanismos-de-contacto',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Notificaciones judiciales',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-mecanismos-de-contacto_notificaciones-judiciales:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-mecanismos-de-contacto_polticas-de-seguridad-de-la-informacin-y-proteccin-de-datos-pesonales:<front>.
  $menu_links['menu-menu-mecanismos-de-contacto_polticas-de-seguridad-de-la-informacin-y-proteccin-de-datos-pesonales:<front>'] = array(
    'menu_name' => 'menu-menu-mecanismos-de-contacto',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Políticas de seguridad de la información y protección de datos pesonales',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-mecanismos-de-contacto_polticas-de-seguridad-de-la-informacin-y-proteccin-de-datos-pesonales:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-mecanismos-de-contacto_sede-principal:transparencia/mecanismos-de-contacto/sede-principal.
  $menu_links['menu-menu-mecanismos-de-contacto_sede-principal:transparencia/mecanismos-de-contacto/sede-principal'] = array(
    'menu_name' => 'menu-menu-mecanismos-de-contacto',
    'link_path' => 'transparencia/mecanismos-de-contacto/sede-principal',
    'router_path' => 'transparencia/mecanismos-de-contacto/sede-principal',
    'link_title' => 'Sede principal',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-mecanismos-de-contacto_sede-principal:transparencia/mecanismos-de-contacto/sede-principal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Localización física, sucursales o regionales');
  t('Notificaciones judiciales');
  t('Políticas de seguridad de la información y protección de datos pesonales');
  t('Sede principal');

  return $menu_links;
}
