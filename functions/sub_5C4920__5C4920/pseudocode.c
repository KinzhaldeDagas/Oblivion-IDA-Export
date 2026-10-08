void __thiscall sub_5C4920(_DWORD *this)
{
  TESForm *v2; // ebp
  Data *data; // esi
  int IsFemale; // eax
  Data *v5; // esi
  int v6; // eax
  TESFormVtbl **v7; // edi
  const char *v8; // eax
  const char *v9; // eax
  Tile *v10; // eax
  char *LoadForm; // eax
  const char *value; // eax
  const char *v13; // eax
  Tile *ControlTile; // eax
  char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  Tile *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  Tile *v21; // eax
  _BYTE v22[20]; // [esp-14h] [ebp-44h] BYREF
  float v23; // [esp+0h] [ebp-30h]
  TESFormVtbl *vtbl; // [esp+18h] [ebp-18h]
  _BYTE *v25; // [esp+1Ch] [ebp-14h]
  _BYTE *v26; // [esp+20h] [ebp-10h]
  int v27; // [esp+2Ch] [ebp-4h]

  v2 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c4959*/
  data = v2[9].member.modlist.data; /*0x5c495b*/
  IsFemale = TESActorBase_IsFemale(v2); /*0x5c4963*/
  if ( sub_52B490(data, IsFemale) ) /*0x5c496b*/
  {
    v5 = v2[9].member.modlist.data; /*0x5c4974*/
    v6 = TESActorBase_IsFemale(v2); /*0x5c497c*/
    v2[0x13].vtbl = (TESFormVtbl *)sub_52B490(v5, v6); /*0x5c4989*/
  }
  v7 = (TESFormVtbl **)&v2[9].member.modlist.data->name[0x70]; /*0x5c499d*/
  vtbl = v2[0x13].vtbl; /*0x5c49a5*/
  if ( vtbl ) /*0x5c49a9*/
  {
    if ( !sub_51FE80(vtbl) || !sub_51FFD0(vtbl, (int)v2) ) /*0x5c49bd*/
    {
      vtbl = 0; /*0x5c49cc*/
      if ( v7 ) /*0x5c49d0*/
      {
        if ( v7[1] || *v7 ) /*0x5c49d7*/
        {
          do /*0x5c4a05*/
          {
            if ( !*v7 ) /*0x5c49e0*/
              break; /*0x5c49e4*/
            if ( sub_51FE80(*v7) && sub_51FFD0(*v7, (int)v2) ) /*0x5c49f2*/
              break; /*0x5c49f9*/
            v7 = (TESFormVtbl **)v7[1]; /*0x5c49fb*/
            vtbl = (TESFormVtbl *)((char *)vtbl + 1); /*0x5c49fe*/
          }
          while ( v7 ); /*0x5c4a05*/
        }
      }
      if ( *v7 ) /*0x5c4a07*/
      {
        LoadForm = (char *)(*v7)->LoadForm; /*0x5c4a7b*/
        if ( !LoadForm ) /*0x5c4a80*/
          LoadForm = EmptyString; /*0x5c4a82*/
        v23 = *(float *)&LoadForm; /*0x5c4a87*/
        value = g_gameSetting_sHair.value; /*0x5c4a88*/
        *(_DWORD *)&v22[0x10] = 0xFB4; /*0x5c4a8d*/
        v25 = &v22[8]; /*0x5c4a97*/
        *(_DWORD *)&v22[8] = 0; /*0x5c4a9d*/
        *(_WORD *)&v22[0xC] = 0; /*0x5c4a9f*/
        *(_WORD *)&v22[0xE] = 0; /*0x5c4aa3*/
        BSStringT_Set((BSStringT *)&v22[8], value, 0); /*0x5c4aa7*/
        v13 = g_gameSetting_sMain.value; /*0x5c4aac*/
        v26 = v22; /*0x5c4ab6*/
        v27 = 1; /*0x5c4abc*/
        *(_DWORD *)v22 = 0; /*0x5c4ac4*/
        *(_WORD *)&v22[4] = 0; /*0x5c4ac6*/
        *(_WORD *)&v22[6] = 0; /*0x5c4aca*/
        BSStringT_Set((BSStringT *)v22, v13, 0); /*0x5c4ace*/
        v27 = 0xFFFFFFFF; /*0x5c4ad5*/
        ControlTile = RaceSexMenu_FindControlTile(this, *(BSStringT *)v22, *(BSStringT *)&v22[8]); /*0x5c4add*/
        Tile_SetString(ControlTile, *(_DWORD **)&v22[0x10], (char *)LODWORD(v23)); /*0x5c4ae4*/
        v15 = (char *)(*v7)->LoadForm; /*0x5c4aeb*/
        if ( !v15 ) /*0x5c4af0*/
          v15 = EmptyString; /*0x5c4af2*/
        v23 = *(float *)&v15; /*0x5c4af7*/
        v16 = stru_B38FB8.value; /*0x5c4af8*/
        *(_DWORD *)&v22[0x10] = 0xFB4; /*0x5c4afd*/
        v26 = &v22[8]; /*0x5c4b07*/
        *(_DWORD *)&v22[8] = 0; /*0x5c4b0d*/
        *(_WORD *)&v22[0xC] = 0; /*0x5c4b0f*/
        *(_WORD *)&v22[0xE] = 0; /*0x5c4b13*/
        BSStringT_Set((BSStringT *)&v22[8], v16, 0); /*0x5c4b17*/
        v17 = g_gameSetting_sHair.value; /*0x5c4b1c*/
        v25 = v22; /*0x5c4b26*/
        v27 = 2; /*0x5c4b2c*/
        *(_DWORD *)v22 = 0; /*0x5c4b34*/
        *(_WORD *)&v22[4] = 0; /*0x5c4b36*/
        *(_WORD *)&v22[6] = 0; /*0x5c4b3a*/
        BSStringT_Set((BSStringT *)v22, v17, 0); /*0x5c4b3e*/
        v27 = 0xFFFFFFFF; /*0x5c4b45*/
        v18 = RaceSexMenu_FindControlTile(this, *(BSStringT *)v22, *(BSStringT *)&v22[8]); /*0x5c4b4d*/
        Tile_SetString(v18, *(_DWORD **)&v22[0x10], (char *)LODWORD(v23)); /*0x5c4b54*/
        v19 = stru_B38FB8.value; /*0x5c4b5d*/
        v23 = (float)(int)vtbl; /*0x5c4b67*/
        v26 = &v22[0xC]; /*0x5c4b6b*/
        *(_DWORD *)&v22[0xC] = 0; /*0x5c4b71*/
        *(_WORD *)&v22[0x10] = 0; /*0x5c4b73*/
        *(_WORD *)&v22[0x12] = 0; /*0x5c4b77*/
        BSStringT_Set((BSStringT *)&v22[0xC], v19, 0); /*0x5c4b7b*/
        v20 = g_gameSetting_sHair.value; /*0x5c4b80*/
        v25 = &v22[4]; /*0x5c4b8a*/
        v27 = 3; /*0x5c4b90*/
        *(_DWORD *)&v22[4] = 0; /*0x5c4b98*/
        *(_WORD *)&v22[8] = 0; /*0x5c4b9a*/
        *(_WORD *)&v22[0xA] = 0; /*0x5c4b9e*/
        BSStringT_Set((BSStringT *)&v22[4], v20, 0); /*0x5c4ba2*/
        v27 = 0xFFFFFFFF; /*0x5c4ba9*/
        v21 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v22[4], *(BSStringT *)&v22[0xC]); /*0x5c4bb1*/
        sub_5C2B50(v21, v23); /*0x5c4bb9*/
        *(this + 0x21C) = vtbl; /*0x5c4bc2*/
        v2[0x13].vtbl = *v7; /*0x5c4bca*/
      }
      else
      {
        v2[0x13].vtbl = 0; /*0x5c4a0d*/
        v23 = *(float *)&stru_B38B80.value; /*0x5c4a18*/
        v8 = g_gameSetting_sHair.value; /*0x5c4a19*/
        *(_DWORD *)&v22[0x10] = 0xFB4; /*0x5c4a1e*/
        vtbl = (TESFormVtbl *)&v22[8]; /*0x5c4a28*/
        *(_DWORD *)&v22[8] = 0; /*0x5c4a2e*/
        *(_WORD *)&v22[0xC] = 0; /*0x5c4a30*/
        *(_WORD *)&v22[0xE] = 0; /*0x5c4a34*/
        BSStringT_Set((BSStringT *)&v22[8], v8, 0); /*0x5c4a38*/
        v9 = g_gameSetting_sMain.value; /*0x5c4a3d*/
        v25 = v22; /*0x5c4a47*/
        v27 = 0; /*0x5c4a4d*/
        *(_DWORD *)v22 = 0; /*0x5c4a51*/
        *(_WORD *)&v22[4] = 0; /*0x5c4a53*/
        *(_WORD *)&v22[6] = 0; /*0x5c4a57*/
        BSStringT_Set((BSStringT *)v22, v9, 0); /*0x5c4a5b*/
        v27 = 0xFFFFFFFF; /*0x5c4a62*/
        v10 = RaceSexMenu_FindControlTile(this, *(BSStringT *)v22, *(BSStringT *)&v22[8]); /*0x5c4a6a*/
        Tile_SetString(v10, *(_DWORD **)&v22[0x10], (char *)LODWORD(v23)); /*0x5c4a71*/
      }
    }
  }
  sub_5C34D0(this); /*0x5c4bd2*/
}
