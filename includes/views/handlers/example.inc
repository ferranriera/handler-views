<?php

/**
 * @file
 * Handler view fields. To do the logic that you want in a view.
 */

class Example extends views_handler_field {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function query() {

  }

  function render($data) {

     //Here you have the $data to the logic that you want
  }
}
