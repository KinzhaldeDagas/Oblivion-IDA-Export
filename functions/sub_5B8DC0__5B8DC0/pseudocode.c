// Confirmation callback for accepted world-map fast travel. It re-identifies the selected marker/ref from stored tile data and then calls PlayerCharacter_FastTravelCore with that ref.
void __usercall WorldMapMenu_ConfirmFastTravelSelection(
        double a1@<st7>,
        double a2@<st6>,
        double st2_0@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>)
{
  Tile *OpenMenuTile; // eax
  Tile *v7; // ebp
  int ParentMenu; // esi
  TESObjectREFR **v9; // ebx
  TESObjectREFR *v10; // edi
  float *v11; // eax
  double v12; // st6
  double v13; // st6
  TESModel *v14; // eax
  const char *ModelPath; // eax
  const char *v16; // ecx
  int v17; // eax
  double v18; // st6
  void (__thiscall **v19)(int, int, _DWORD *); // ebx
  double Float; // st7
  int v21; // eax
  InterfaceManager *Singleton; // eax
  InterfaceManager *v23; // eax
  double v24; // st7
  InterfaceManager *v25; // eax
  InterfaceManager *v26; // eax
  _DWORD *a3; // [esp+8h] [ebp-24h]
  float v28; // [esp+20h] [ebp-Ch]
  float v29; // [esp+24h] [ebp-8h]

  if ( InterfaceManager_ConsumeMessageButton() == 1 ) /*0x5b8dca*/
  {
    OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FF); /*0x5b8dd6*/
    v7 = OpenMenuTile; /*0x5b8ddb*/
    if ( OpenMenuTile ) /*0x5b8de2*/
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5b8df1*/
      v9 = *(TESObjectREFR ***)(ParentMenu + 0xC4);// ParentMenu+0xC4 is the map marker/reference list scanned to match selected map tile coordinates/model path. /*0x5b8df3*/
      while ( v9 ) /*0x5b8dfb*/
      {
        v10 = *v9; /*0x5b8e02*/
        if ( !*v9 ) /*0x5b8e02*/
          break; /*0x5b8e02*/
        v11 = v10->vtbl->GetPos(*v9); /*0x5b8e16*/
        v9 = (TESObjectREFR **)v9[1]; /*0x5b8e20*/
        v12 = (double)*(int *)(ParentMenu + 0x98); /*0x5b8e59*/
        if ( *(int *)(ParentMenu + 0x98) < 0 ) /*0x5b8e5f*/
          v12 = v12 + flt_A2FC78; /*0x5b8e61*/
        v28 = (*v11 - (double)*(int *)(ParentMenu + 0xA0)) /*0x5b8e79*/
            / (double)(*(_DWORD *)(ParentMenu + 0xA4) - *(_DWORD *)(ParentMenu + 0xA0))
            * v12;
        v13 = (double)*(int *)(ParentMenu + 0x9C); /*0x5b8e99*/
        if ( *(int *)(ParentMenu + 0x9C) < 0 ) /*0x5b8e9f*/
          v13 = v13 + dbl_A30E60; /*0x5b8ea1*/
        v29 = (1.0 /*0x5b8eab*/
             - ((double)*(int *)(ParentMenu + 0xA8) - v11[1])
             / (double)(*(_DWORD *)(ParentMenu + 0xA8) - *(_DWORD *)(ParentMenu + 0xAC)))
            * v13;
        v14 = (TESModel *)sub_4D7730(v10); /*0x5b8eaf*/
        ModelPath = TESModel_GetModelPath(v14); /*0x5b8eb6*/
        if ( ModelPath && (v16 = *(const char **)(ParentMenu + 0xB0)) != 0 ) /*0x5b8ec7*/
          v17 = CRT_StricmpLocaleDispatch(v16, ModelPath); /*0x5b8ecb*/
        else
          v17 = 2 * (ModelPath == 0) - 1; /*0x5b8ee0*/
        if ( !v17 && v28 == *(float *)(ParentMenu + 0xB8) ) /*0x5b8ef7*/
        {
          v18 = v29; /*0x5b8eff*/
          if ( v29 == *(float *)(ParentMenu + 0xBC) ) /*0x5b8f0a*/
          {
            if ( *(_DWORD *)(ParentMenu + 0xF4) ) /*0x5b8f1c*/
            {
              a3 = *(_DWORD **)(ParentMenu + 0xF4); /*0x5b8f2d*/
              v19 = (void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)ParentMenu + 0x14); /*0x5b8f33*/
              Float = Tile_GetFloat(a3, 0xFA8); /*0x5b8f36*/
              v21 = Double_To_SInt32(Float); /*0x5b8f3b*/
              (*v19)(ParentMenu, v21, a3); /*0x5b8f45*/
            }
            Tile_SetFloat(v7, 0xFA1u, 1.0); /*0x5b8f54*/
            Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5b8f61*/
            sub_57CFE0((int)Singleton, a6, v18, 1.0, a1, a2, st2_0, a4, 1, 0); /*0x5b8f6b*/
            v23 = InterfaceManager_GetSingleton(0, 1); /*0x5b8f74*/
            v24 = sub_583E60(v23, (char)v7, a6, v18, a5, 1.0); /*0x5b8f7e*/
            v25 = InterfaceManager_GetSingleton(0, 1); /*0x5b8f87*/
            InterfaceManager_ProcessGlobalHotkeys(v25, v24, a5, a6, v18, a4, a1, a2, st2_0); /*0x5b8f91*/
            v26 = InterfaceManager_GetSingleton(0, 1); /*0x5b8f9a*/
            InterfaceManager::UpdateMenuFades(v26, (char)v7, a6, v18, v24); /*0x5b8fa4*/
            PlayerCharacter_FastTravelCore((int *)reference, (int)v7, a1, a4, a5, a6, v18, v24, st2_0, a2, v10);// 3DTheft decode: accepted world-map fast-travel confirmation calls PlayerCharacter_FastTravelCore with the selected marker/reference. /*0x5b8fb0*/
            return; /*0x5b8fb0*/
          }
        }
      }
    }
  }
}
