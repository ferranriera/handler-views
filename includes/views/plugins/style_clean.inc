<?php


class StyleFetalClean extends views_plugin_style_table {

    function options_form(&$form, &$form_state) {
        parent::options_form($form, $form_state);
    }

    /**
     * Sets our own default options.
     */
    function option_definition() {
        $options = parent::option_definition();
        return $options;
    }

    function options_submit(&$form, &$form_state) {
        parent::options_submit($form, $form_state);
    }

}