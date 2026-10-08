void __thiscall sub_5437C0(Sky *ecx0)
{
  Precipitation *precipitation; // ecx
  Clouds *clouds; // ecx
  TESForm *v6; // eax
  TESForm *v7; // eax
  TESForm *v8; // eax
  TESForm *v9; // eax
  float *p_unk0D0; // edi
  float *p_unk0D4; // ebx
  TESSaveLoadGame_SerializationView *v12; // ecx
  int v13; // [esp+20h] [ebp-24h] BYREF
  UInt32 X; // [esp+24h] [ebp-20h]
  UInt32 X_4; // [esp+28h] [ebp-1Ch] BYREF
  int a1; // [esp+2Ch] [ebp-18h] BYREF
  unsigned int destination; // [esp+30h] [ebp-14h] BYREF
  char v18[4]; // [esp+34h] [ebp-10h] BYREF

  precipitation = ecx0->precipitation; /*0x5437c6*/
  ecx0->firstWeather = 0; /*0x5437ce*/
  ecx0->secondWeather = 0; /*0x5437d1*/
  ecx0->weather018 = 0; /*0x5437d4*/
  ecx0->weatherOverride = 0; /*0x5437d7*/
  if ( precipitation ) /*0x5437da*/
    sub_53D6C0((int)precipitation); /*0x5437dc*/
  clouds = ecx0->clouds; /*0x5437e1*/
  if ( clouds ) /*0x5437e6*/
    sub_53BBC0(clouds); /*0x5437e8*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)v18, 4u); /*0x5437fa*/
  if ( a1 ) /*0x543805*/
  {
    v6 = TESForm_LookupByFormID(a1); /*0x543814*/
    ecx0->firstWeather = (TESWeather *)OblivionDynamicCast( /*0x543825*/
                                         v6,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESWeather `RTTI Type Descriptor',
                                         0);
  }
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &destination, 4u); /*0x543835*/
  if ( X_4 ) /*0x543840*/
  {
    v7 = TESForm_LookupByFormID(X_4); /*0x54384f*/
    ecx0->secondWeather = (TESWeather *)OblivionDynamicCast( /*0x543860*/
                                          v7,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                          &TESWeather `RTTI Type Descriptor',
                                          0);
  }
  SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)&a1, 4u); /*0x543870*/
  if ( X ) /*0x54387b*/
  {
    v8 = TESForm_LookupByFormID(X); /*0x54388a*/
    ecx0->weather018 = (TESWeather *)OblivionDynamicCast( /*0x54389b*/
                                       v8,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESWeather `RTTI Type Descriptor',
                                       0);
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x5Du ) /*0x5438a8*/
  {
    SaveLoad_LoadFormID(g_TESSaveLoadGame, &X_4, 4u); /*0x5438b1*/
    if ( v13 ) /*0x5438bc*/
    {
      v9 = TESForm_LookupByFormID(v13); /*0x5438cb*/
      ecx0->weatherOverride = (TESWeather *)OblivionDynamicCast( /*0x5438dc*/
                                              v9,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                              &TESWeather `RTTI Type Descriptor',
                                              0);
    }
  }
  p_unk0D0 = &ecx0->unk0D0; /*0x5438e7*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &ecx0->unk0D0, 4u); /*0x5438ee*/
  if ( _isnan(ecx0->unk0D0) || !_finite(*p_unk0D0) ) /*0x54390f*/
    *p_unk0D0 = 0.0; /*0x54391d*/
  p_unk0D4 = &ecx0->unk0D4; /*0x543928*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &ecx0->unk0D4, 4u); /*0x54392f*/
  if ( _isnan(ecx0->unk0D4) || !_finite(*p_unk0D4) ) /*0x543950*/
    *p_unk0D4 = *p_unk0D0; /*0x54395e*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &ecx0->weatherPercent, 4u); /*0x54396f*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &ecx0->unk0DC, 4u); /*0x543983*/
  v12 = g_TESSaveLoadGame; /*0x543988*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x69u ) /*0x543993*/
  {
    SaveLoad_LoadData(v12, &v13, 4u); /*0x54399c*/
    ecx0->Flags0FC ^= ((unsigned __int8)v13 ^ (unsigned __int8)ecx0->Flags0FC) & 8; /*0x5439b0*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &ecx0->unk0F4, 4u); /*0x5439c3*/
    v12 = g_TESSaveLoadGame; /*0x5439c8*/
  }
  v12->flags |= 0x400u; /*0x5439ce*/
  Sky__Update(ecx0, 0.0); /*0x5439dd*/
  g_TESSaveLoadGame->flags &= ~0x400u; /*0x5439e7*/
  OB_Sky_UpdateHDRWeatherAndTreeDimmerConstants_010201A0(ecx0); /*0x5439f0*/
}
