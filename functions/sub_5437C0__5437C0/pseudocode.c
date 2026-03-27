void __usercall sub_5437C0(Sky *ecx0@<ecx>, int a2@<ebx>, double a3@<st0>)
{
  Precipitation *precipitation; // ecx
  Clouds *clouds; // ecx
  TESForm *v7; // eax
  TESForm *v8; // eax
  TESForm *v9; // eax
  TESForm *v10; // eax
  float *p_unk0D0; // edi
  float *p_unk0D4; // ebx
  TESSaveLoad *v13; // ecx
  size_t v14; // [esp+4h] [ebp-40h]
  size_t v15; // [esp+4h] [ebp-40h]
  size_t v16; // [esp+4h] [ebp-40h]
  size_t v17; // [esp+8h] [ebp-3Ch]
  size_t v18; // [esp+8h] [ebp-3Ch]
  size_t v19; // [esp+8h] [ebp-3Ch]
  size_t v20; // [esp+10h] [ebp-34h]
  size_t v21; // [esp+18h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-2Ch]
  int v23; // [esp+1Ch] [ebp-28h]
  size_t v24; // [esp+20h] [ebp-24h] BYREF
  size_t X_4; // [esp+28h] [ebp-1Ch] BYREF
  int v26; // [esp+30h] [ebp-14h] BYREF
  char v27[4]; // [esp+34h] [ebp-10h] BYREF
  int v28; // [esp+38h] [ebp-Ch]

  precipitation = ecx0->precipitation;
  ecx0->firstWeather = 0;
  ecx0->secondWeather = 0;
  ecx0->weather018 = 0;
  ecx0->weatherOverride = 0;
  if ( precipitation )
    sub_53D6C0((int)precipitation);
  clouds = ecx0->clouds;
  if ( clouds )
    sub_53BBC0(clouds);
  LODWORD(X_4) = 4;
  SaveLoad_LoadFormID(v27, X_4, v26, *(int *)v27, v28);
  if ( HIDWORD(X_4) )
  {
    v7 = TESForm_LookupByFormID(HIDWORD(X_4));
    ecx0->firstWeather = (TESWeather *)OblivionDynamicCast(
                                         v7,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESWeather `RTTI Type Descriptor',
                                         0);
  }
  LODWORD(v24) = 4;
  SaveLoad_LoadFormID(&v26, v24, X_4, SHIDWORD(X_4), v26);
  if ( (_DWORD)X_4 )
  {
    v8 = TESForm_LookupByFormID(X_4);
    ecx0->secondWeather = (TESWeather *)OblivionDynamicCast(
                                          v8,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                          &TESWeather `RTTI Type Descriptor',
                                          0);
  }
  LODWORD(v21) = 4;
  SaveLoad_LoadFormID((char *)&X_4 + 4, v21, v24, SHIDWORD(v24), X_4);
  if ( HIDWORD(v24) )
  {
    v9 = TESForm_LookupByFormID(HIDWORD(v24));
    ecx0->weather018 = (TESWeather *)OblivionDynamicCast(
                                       v9,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESWeather `RTTI Type Descriptor',
                                       0);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Du )
  {
    LODWORD(v20) = 4;
    SaveLoad_LoadFormID(&X_4, v20, v22, v23, v24);
    if ( (_DWORD)v24 )
    {
      v10 = TESForm_LookupByFormID(v24);
      ecx0->weatherOverride = (TESWeather *)OblivionDynamicCast(
                                              v10,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                              &TESWeather `RTTI Type Descriptor',
                                              0);
    }
  }
  LODWORD(v17) = 4;
  p_unk0D0 = &ecx0->unk0D0;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &ecx0->unk0D0, v17);
  if ( _isnan(ecx0->unk0D0) || !_finite(*p_unk0D0) )
    *p_unk0D0 = 0.0;
  HIDWORD(v14) = a2;
  LODWORD(v14) = 4;
  p_unk0D4 = &ecx0->unk0D4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &ecx0->unk0D4, v14);
  if ( _isnan(ecx0->unk0D4) || !_finite(*p_unk0D4) )
    *p_unk0D4 = *p_unk0D0;
  LODWORD(v15) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &ecx0->weatherPercent, v15);
  LODWORD(v16) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &ecx0->unk0DC, v16);
  v13 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x69u )
  {
    LODWORD(v18) = 4;
    SaveLoad_LoadData((int)v13, &v24, v18);
    LODWORD(v19) = 4;
    ecx0->Flags0FC ^= ((unsigned __int8)v24 ^ (unsigned __int8)ecx0->Flags0FC) & 8;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &ecx0->unk0F4, v19);
    v13 = SaveLoad_CurrentSavegame;
  }
  v13->flags |= 0x400u;
  sub_542F20(ecx0, a3, 0.0);
  SaveLoad_CurrentSavegame->flags &= ~0x400u;
  sub_540850(ecx0, a3);
}
