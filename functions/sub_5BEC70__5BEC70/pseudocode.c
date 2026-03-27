void __usercall sub_5BEC70(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  _DWORD *OpenMenuTile; // eax
  InterfaceManager *Singleton; // eax
  int *v21; // eax
  int v22; // edi
  _BYTE *v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  int (__thiscall *v27)(int, PlayerCharacter *); // eax
  int v28; // eax
  char *m_data; // edi
  Tile **v30; // edi
  int v31; // ebp
  Tile *v32; // ecx
  InterfaceManager *v33; // edi
  double v34; // st7
  double v35; // st7
  double v36; // st5
  double v37; // st7
  double v38; // st6
  char v39; // bl
  double v40; // st7
  double v41; // st7
  float a2; // [esp+4h] [ebp-5Ch]
  PlayerCharacter *v43; // [esp+8h] [ebp-58h]
  char v44; // [esp+1Fh] [ebp-41h]
  BSStringT hinstDLL; // [esp+20h] [ebp-40h] BYREF
  float v46; // [esp+28h] [ebp-38h]
  double v47; // [esp+2Ch] [ebp-34h]
  float v48; // [esp+34h] [ebp-2Ch]
  float v49; // [esp+38h] [ebp-28h]
  float v50; // [esp+3Ch] [ebp-24h]
  unsigned int v51; // [esp+4Ch] [ebp-14h]
  int v52; // [esp+50h] [ebp-10h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A);
  if ( OpenMenuTile )
  {
    v50 = COERCE_FLOAT(Tile_GetParentMenu(OpenMenuTile));
    if ( !InterfaceManager_MenuModeHasFocus(0x40A) )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_57DA20((int)Singleton, st5_0, a3, a4, "Menus\\Misc\\cursor.dds", 1);
    }
    v21 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0xD8) + 0x58) + 0x33C))(
                   *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x58),
                   0);
    HIBYTE(v46) = 0;
    if ( v21 )
      HIBYTE(v46) = sub_6B7260(v21);
    if ( *(_DWORD *)(a1 + 0x28) == 2 && sub_5BEB70(a1, a3, a4) )
    {
      v22 = 0;
      v23 = (_BYTE *)(a1 + 0x38);
      v24 = 4;
      do
      {
        if ( *v23 )
          ++v22;
        v23 += 0x14;
        --v24;
      }
      while ( v24 );
      sub_5BEA90(1);
      if ( Actor_GetSkillMasteryLevel(0x20) != 4 && Actor_GetSkillMasteryLevel(0x20) != 3
        || (Actor_GetSkillMasteryLevel(0x20) == 4 || Actor_GetSkillMasteryLevel(0x20) == 3) && v22 )
      {
        if ( !Actor_GetSkillMasteryLevel(0x20) || Actor_GetSkillMasteryLevel(0x20) == 1 )
          v25 = Double_To_SInt32(fDispositionReduction);
        else
          v25 = 2 * Double_To_SInt32(fDispositionReduction);
        if ( Seed - *(_DWORD *)(a1 + 0x80) > v25 && !HIBYTE(v46) )
        {
          (*(void (__cdecl **)(PlayerCharacter *, float))(**(_DWORD **)(a1 + 0xD8) + 0x374))(
            TESDataHandler_g_PlayerRef,
            flt_A30634);
          *(_DWORD *)&hinstDLL.m_dataLen = 0;
          v46 = 0.0;
          v26 = *(_DWORD *)(a1 + 0xD8);
          v27 = *(int (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v26 + 0x224);
          v43 = TESDataHandler_g_PlayerRef;
          v52 = 0;
          v28 = v27(v26, v43);
          BSStringT_Static_Format(&hinstDLL, "%i", v28);
          m_data = hinstDLL.m_data;
          Tile_SetString(*(_DWORD **)(a1 + 0xCC), (_DWORD *)0xFDE, hinstDLL.m_data);
          *(_DWORD *)(a1 + 0x80) = Seed;
          v51 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)m_data);
        }
      }
      v30 = (Tile **)(a1 + 0x3C);
      v31 = 4;
      do
      {
        v32 = *v30;
        hinstDLL.m_data = (char *)(unsigned __int8)-(*((_BYTE *)v30 + 0xFFFFFFFC) != 0);
        a2 = (float)(int)hinstDLL.m_data;
        Tile_SetFloat(v32, (_DWORD *)0xFA7, a2);
        v30 += 5;
        --v31;
      }
      while ( v31 );
      if ( !LODWORD(v47) || *(_DWORD *)(LODWORD(v47) + 0x24) != 1 )
        JUMPOUT(0x5BF0E0);
      v33 = InterfaceManager_GetSingleton(0, 1);
      v34 = sub_57D7A0();
      LODWORD(v47) = Double_To_SInt32(v34 * dbl_A2FAA0 + *(float *)v33->unk020);
      *(float *)&hinstDLL.m_data = (float)SLODWORD(v47);
      v47 = sub_57D7F0();
      v35 = sub_57D7F0();
      LODWORD(v47) = Double_To_SInt32(v47 - (v35 * dbl_A2FAA0 + *(float *)&v33->unk020[2]));
      *(float *)&hinstDLL.m_dataLen = (float)SLODWORD(v47);
      v46 = 0.0;
      v49 = (float)*(int *)(a1 + 0xE0);
      v50 = (float)*(int *)(a1 + 0xE4);
      *(float *)&v47 = v49 - *(float *)&hinstDLL.m_data;
      *((float *)&v47 + 1) = v50 - *(float *)&hinstDLL.m_dataLen;
      v48 = 0.0 - 0.0;
      v36 = *(float *)&v47 * *(float *)&v47;
      *(float *)&v47 = *((float *)&v47 + 1) * *((float *)&v47 + 1) + v36 + v48 * v48;
      *(float *)&v47 = sqrt(*(float *)&v47);
      v37 = *(float *)&v47;
      v38 = (double)*(int *)(a1 + 0xDC);
      if ( v38 < *(float *)&v47 || (v38 = (double)*(int *)(a1 + 0xE8), v38 > v37) )
      {
        v39 = 0;
        sub_57DA20((int)v33, v36, v38, v37, "Menus\\Misc\\cursor.dds", 1);
      }
      else
      {
        v39 = 1;
        sub_57DA20((int)v33, v36, v38, v37, "Menus\\Persuasion\\Ball_cursor.dds", 1);
        *(_DWORD *)(a1 + 0x84) = sub_5BE6F0(
                                   (signed int *)a1,
                                   (HINSTANCE)hinstDLL.m_data,
                                   *(float *)&hinstDLL.m_dataLen,
                                   (void *)LODWORD(v46));
        sub_5BE800((Tile **)a1);
      }
      if ( v44 || !v39 )
        JUMPOUT(0x5BF0B4);
      switch ( *(_DWORD *)(a1 + 0x14 * *(_DWORD *)(a1 + 0x84) + 0x2C) )
      {
        case 1:
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 5;
          goto LABEL_39;
        case 2:
          v40 = flt_A3D9A4;
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 5;
          *(float *)(*(_DWORD *)(a1 + 0xD8) + 0x74) = v40;
          def_5BF036(a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
          return;
        case 3:
          v41 = flt_A3D9A4;
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 1;
          *(float *)(*(_DWORD *)(a1 + 0xD8) + 0x74) = v41;
          def_5BF036(a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
          return;
        case 4:
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 1;
LABEL_39:
          *(float *)(*(_DWORD *)(a1 + 0xD8) + 0x74) = 1.0;
          def_5BF036(a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
          break;
        default:
          JUMPOUT(0x5BF0A0);
      }
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 7;
      *(float *)(*(_DWORD *)(a1 + 0xD8) + 0x74) = 0.0;
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0xD8) + 0x304))(
        *(_DWORD *)(a1 + 0xD8),
        0.0,
        0);
      sub_5BEA90(0);
    }
  }
}
