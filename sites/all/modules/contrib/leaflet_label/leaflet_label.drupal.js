(function ($) {

  $(document).bind('leaflet.feature', function(e, lFeature, feature) {
    if (feature.label) {
      lFeature.bindLabel(feature.label);
    }
  });

})(jQuery);
