<?php
/**
 * @file
 * govi_mecanismos_contacto.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_mecanismos_contacto_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion_geografica|node|mecanismos_atencion_ciudadano|form';
  $field_group->group_name = 'group_ubicacion_geografica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mecanismos_atencion_ciudadano';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Código postal y ubicación geográfica',
    'weight' => '12',
    'children' => array(
      0 => 'field_atencion_codigo_postal',
      1 => 'field_atencion_enlace_mapa',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Código postal y ubicación geográfica',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ubicacion-geografica field-group-fieldset',
        'description' => 'Para obtener el código postal y el enlace al visor donde el ciduadano podrá acceder al mapa con la ubicación geográfica de su Entidad, ingrese al servicio nacional del código postal en la dirección <a href="http://codigopostal.gov.co" target="_blank">codigopostal.gov.co</a> e ingrese la dirección de su entidad siguiendo el Estandar de Direcciones que puede encontrar en <a href="http://codigopostal.gov.co/sites/default/files/EstandardeDiligenciamientoDirecciones.pdf" target="_blank">este enlace</a>.
Cuando el servicio halla retornado el código postal de su entidad, ingrese ese número en el campo "Código Postal", luego haga click derecho en el enlace ¿Quiéres ver tu código postal en el mapa? y seleccione "Copiar el link de la locación", luego de esto pegue la URL en el campo "Enlace al mapa"',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ubicacion_geografica|node|mecanismos_atencion_ciudadano|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Código postal y ubicación geográfica');

  return $field_groups;
}
