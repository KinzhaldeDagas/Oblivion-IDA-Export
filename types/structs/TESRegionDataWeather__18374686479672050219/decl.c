struct TESRegionDataWeather
{
TESRegionData base; ///< Verified TESRegionData base.
OblivionTESWeatherList weatherList; ///< Verified 8-byte weather-list member at +8 from ctor/dtor init helpers.
};
