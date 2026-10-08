struct Sky
{
void **vtbl;
NiNode *nodeSkyRoot;
NiNode *nodeMoonsRoot;
TESClimate *firstClimate; ///< Verified: climate chosen from destination cell/worldspace; Sky_SetClimateAndRefreshChildren assigns it.
TESWeather *firstWeather; ///< Verified: active Sky firstWeather; weather update installs region/climate result here.
TESWeather *secondWeather; ///< Verified: previous weather during transition; cleared when transition completes or fast change occurs.
TESWeather *weather018; ///< Verified: cached candidate selected from firstClimate weatherList before region override path.
TESWeather *weatherOverride; ///< Verified: explicit weather override used when present.
Atmosphere *atmosphere;
Stars *stars;
Sun *sun;
Clouds *clouds;
Moon *masserMoon;
Moon *secundaMoon;
Precipitation *precipitation;
UInt32 unk03C[30];
float unk0B4;
float unk0B8;
float unk0BC;
float windSpeed;
float unk0C4;
float unk0C8;
float unk0CC;
float unk0D0;
float unk0D4;
float weatherPercent; ///< Verified: normalized transition fraction used by weather blending; 1.0 when no secondWeather.
UInt32 unk0DC;
UInt32 unk0E0;
float unk0E4;
UInt32 unk0E8;
UInt32 unk0EC;
float unk0F0;
float unk0F4;
UInt32 unk0F8;
UInt32 Flags0FC; ///< Verified: Sky runtime flags; bit 0 selection pending, bit 3 weatherPercent smoothing, bit 4 fast/forced weather transition among observed uses.
UInt8 unk100;
UInt8 unk101[3];
};
