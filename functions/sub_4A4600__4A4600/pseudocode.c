// Verified (Oblivion): supported factory IDs are 3 Weather, 4 Map, 5 Landscape, 6 Grass, 7 Sound; allocation sizes confirmed in this switch. Do not import Fallout's extra ID8.
void __stdcall TESRegionDataManager_CreateDataByID(OblivionRegionDataId dataID)
{
  TESRegionDataWeather *v1; // eax
  TESRegionDataMap *v2; // eax
  TESRegionDataLandscape *v3; // eax
  TESRegionDataGrass *v4; // eax
  TESRegionDataSound *v5; // eax
  OblivionRegionDataId dataIDa; // [esp+14h] [ebp+4h]

  switch ( dataID ) /*0x4a4632*/
  {
    case kOblivionRegionData_Weather: /*0x4a4632*/
      v1 = (TESRegionDataWeather *)FormHeapAlloc(0x10u); /*0x4a463b*/
      dataIDa = (OblivionRegionDataId)v1; /*0x4a4643*/
      if ( !v1 ) /*0x4a4651*/
        goto LABEL_12; /*0x4a4651*/
      TESRegionDataWeather_ctor(v1); /*0x4a4659*/
      break; /*0x4a466d*/
    case kOblivionRegionData_Map: /*0x4a4632*/
      v2 = (TESRegionDataMap *)FormHeapAlloc(0x10u); /*0x4a4672*/
      dataIDa = (OblivionRegionDataId)v2; /*0x4a467a*/
      if ( !v2 ) /*0x4a4688*/
        goto LABEL_12; /*0x4a4688*/
      TESRegionDataMap_ctor(v2); /*0x4a4690*/
      break; /*0x4a46a4*/
    case kOblivionRegionData_Landscape: /*0x4a4632*/
      v3 = (TESRegionDataLandscape *)FormHeapAlloc(0xCu); /*0x4a46a9*/
      dataIDa = (OblivionRegionDataId)v3; /*0x4a46b1*/
      if ( !v3 ) /*0x4a46bf*/
        goto LABEL_12; /*0x4a46bf*/
      TESRegionDataLandscape_ctor(v3); /*0x4a46c3*/
      break; /*0x4a46d7*/
    case kOblivionRegionData_Grass: /*0x4a4632*/
      v4 = (TESRegionDataGrass *)FormHeapAlloc(0xCu); /*0x4a46dc*/
      dataIDa = (OblivionRegionDataId)v4; /*0x4a46e4*/
      if ( !v4 ) /*0x4a46f2*/
        goto LABEL_12; /*0x4a46f2*/
      TESRegionDataGrass_ctor(v4); /*0x4a46f6*/
      break; /*0x4a470a*/
    case kOblivionRegionData_Sound: /*0x4a4632*/
      v5 = (TESRegionDataSound *)FormHeapAlloc(0x14u); /*0x4a470f*/
      dataIDa = (OblivionRegionDataId)v5; /*0x4a4717*/
      if ( v5 ) /*0x4a4725*/
        TESRegionDataSound_ctor(v5); /*0x4a4729*/
      else
LABEL_12:
        def_4A4632(dataIDa); /*0x4a4740*/
      break; /*0x4a473d*/
    default:
      JUMPOUT(0x4A4742); /*0x4a4742*/
  }
}
