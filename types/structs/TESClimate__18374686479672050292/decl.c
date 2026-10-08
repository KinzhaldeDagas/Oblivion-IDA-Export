struct TESClimate
{
TESForm form;
TESModel model;
OblivionTESWeatherList weatherList; ///< Verified: inline 8-byte weather-list head; WLS(T) loader/save and Sky weighted selection use this member.
TESTexture weatherTextures[2];
unsigned int unknown50;
unsigned __int16 weatherAndMoonFlags; ///< Verified Oblivion: low byte contributes to Sky weather reselection interval; word bits 0x8000 and 0x4000 gate Masser/Secunda. Oblivion default high byte is 0xC3; Fallout constructor/default writes 0xFF at byte +0x55. Other bits Unknown.
unsigned __int8 pad56[2];
};
