<?php
/**
 * @file
 * freshdesk_feed_and_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function freshdesk_feed_and_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tickets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tickets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tickets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_created_at' => 'field_created_at',
    'field_requester' => 'field_requester',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Requester */
  $handler->display->display_options['fields']['field_requester']['id'] = 'field_requester';
  $handler->display->display_options['fields']['field_requester']['table'] = 'field_data_field_requester';
  $handler->display->display_options['fields']['field_requester']['field'] = 'field_requester';
  $handler->display->display_options['fields']['field_requester']['label'] = '';
  $handler->display->display_options['fields']['field_requester']['element_label_colon'] = FALSE;
  /* Field: Content: Created at */
  $handler->display->display_options['fields']['field_created_at']['id'] = 'field_created_at';
  $handler->display->display_options['fields']['field_created_at']['table'] = 'field_data_field_created_at';
  $handler->display->display_options['fields']['field_created_at']['field'] = 'field_created_at';
  $handler->display->display_options['fields']['field_created_at']['label'] = '';
  $handler->display->display_options['fields']['field_created_at']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_created_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_created_at']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Content: HTML Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Created at (field_created_at) */
  $handler->display->display_options['sorts']['field_created_at_value']['id'] = 'field_created_at_value';
  $handler->display->display_options['sorts']['field_created_at_value']['table'] = 'field_data_field_created_at';
  $handler->display->display_options['sorts']['field_created_at_value']['field'] = 'field_created_at_value';
  $handler->display->display_options['sorts']['field_created_at_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  /* Filter criterion: Content: Responder (field_responder) */
  $handler->display->display_options['filters']['field_responder_value']['id'] = 'field_responder_value';
  $handler->display->display_options['filters']['field_responder_value']['table'] = 'field_data_field_responder';
  $handler->display->display_options['filters']['field_responder_value']['field'] = 'field_responder_value';
  $handler->display->display_options['filters']['field_responder_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_responder_value']['value'] = 'No Agent';
  $handler->display->display_options['path'] = 'tickets';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Current Investigations';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['tickets'] = $view;

  return $export;
}
