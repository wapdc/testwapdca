<?php
/**
 * @file
 * filerapp.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function filerapp_user_default_roles() {
  $roles = array();

  // Exported role: Lobbyist.
  $roles['Lobbyist'] = array(
    'name' => 'Lobbyist',
    'weight' => 3,
  );

  return $roles;
}
