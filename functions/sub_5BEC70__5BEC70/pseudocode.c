void __usercall sub_5BEC70(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  InterfaceManager *Singleton; // eax
  UInt32 *v7; // eax
  int v8; // edi
  _BYTE *v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  int (__thiscall *v13)(int, PlayerCharacter *); // eax
  int v14; // eax
  char *m_data; // edi
  Tile **v16; // edi
  int v17; // ebp
  Tile *v18; // ecx
  InterfaceManager *v19; // edi
  double VirtualScreenWidth; // st7
  double v21; // st7
  double v22; // st5
  double v23; // st7
  double v24; // st6
  char v25; // bl
  double v26; // st7
  double v27; // st7
  float a2; // [esp+4h] [ebp-5Ch]
  PlayerCharacter *v29; // [esp+8h] [ebp-58h]
  char v30; // [esp+1Fh] [ebp-41h]
  BSStringT hinstDLL; // [esp+20h] [ebp-40h] BYREF
  float v32; // [esp+28h] [ebp-38h]
  double VirtualScreenHeight; // [esp+2Ch] [ebp-34h]
  float v34; // [esp+34h] [ebp-2Ch]
  float v35; // [esp+38h] [ebp-28h]
  float v36; // [esp+3Ch] [ebp-24h]
  unsigned int v37; // [esp+4Ch] [ebp-14h]
  int v38; // [esp+50h] [ebp-10h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A); /*0x5bec9e*/
  if ( OpenMenuTile ) /*0x5becaa*/
  {
    v36 = COERCE_FLOAT(Tile_GetParentMenu(OpenMenuTile)); /*0x5becbc*/
    if ( !InterfaceManager_MenuModeHasFocus(0x40A) ) /*0x5becc0*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5beccf*/
      sub_57DA20((int)Singleton, st5_0, a3, a4, "Menus\\Misc\\cursor.dds", 1); /*0x5bece0*/
    }
    v7 = (UInt32 *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0xD8) + 0x58) + 0x33C))( /*0x5becf7*/
                     *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x58),
                     0);
    HIBYTE(v32) = 0; /*0x5becfb*/
    if ( v7 ) /*0x5becff*/
      HIBYTE(v32) = SoundHandle::IsPlaying(v7); /*0x5bed0c*/
    if ( *(_DWORD *)(a1 + 0x28) == 2 && sub_5BEB70(a1, a3, a4) ) /*0x5bed1d*/
    {
      v8 = 0; /*0x5bed2a*/
      v9 = (_BYTE *)(a1 + 0x38); /*0x5bed2c*/
      v10 = 4; /*0x5bed2f*/
      do /*0x5bed41*/
      {
        if ( *v9 ) /*0x5bed34*/
          ++v8; /*0x5bed38*/
        v9 += 0x14; /*0x5bed3b*/
        --v10; /*0x5bed3e*/
      }
      while ( v10 ); /*0x5bed41*/
      sub_5BEA90(1); /*0x5bed45*/
      if ( Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) != kSkillMastery_Master /*0x5bed9b*/
        && Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) != kSkillMastery_Expert
        || (Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) == kSkillMastery_Master
         || Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) == kSkillMastery_Expert)
        && v8 )
      {
        if ( Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) == kSkillMastery_Novice /*0x5bedc2*/
          || Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) == kSkillMastery_Apprentice )
        {
          v11 = Double_To_SInt32(MEMORY[0xB38E28]); /*0x5bedd9*/
        }
        else
        {
          v11 = 2 * Double_To_SInt32(MEMORY[0xB38E28]); /*0x5bedcf*/
        }
        if ( *(_DWORD *)&MEMORY[0xB33E90][0x10] - *(_DWORD *)(a1 + 0x80) > v11 && !HIBYTE(v32) ) /*0x5bedf6*/
        {
          (*(void (__cdecl **)(PlayerCharacter *, float))(**(_DWORD **)(a1 + 0xD8) + 0x374))( /*0x5bee1a*/
            reference,
            kTerrainLODQuadRayDirectionZ);
          *(_DWORD *)&hinstDLL.m_dataLen = 0; /*0x5bee1c*/
          v32 = 0.0; /*0x5bee20*/
          v12 = *(_DWORD *)(a1 + 0xD8); /*0x5bee2a*/
          v13 = *(int (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v12 + 0x224); /*0x5bee38*/
          v29 = reference; /*0x5bee3e*/
          v38 = 0; /*0x5bee3f*/
          v14 = v13(v12, v29); /*0x5bee43*/
          BSStringT_Static_Format(&hinstDLL, "%i", v14); /*0x5bee50*/
          m_data = hinstDLL.m_data; /*0x5bee55*/
          Tile_SetString(*(_DWORD **)(a1 + 0xCC), (_DWORD *)0xFDE, hinstDLL.m_data); /*0x5bee68*/
          *(_DWORD *)(a1 + 0x80) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5bee74*/
          v37 = 0xFFFFFFFF; /*0x5bee7a*/
          FormHeapFree((unsigned int)m_data); /*0x5bee82*/
        }
      }
      v16 = (Tile **)(a1 + 0x3C); /*0x5bee8a*/
      v17 = 4; /*0x5bee8d*/
      do /*0x5beebc*/
      {
        v18 = *v16; /*0x5bee98*/
        hinstDLL.m_data = (char *)(unsigned __int8)-(*((_BYTE *)v16 + 0xFFFFFFFC) != 0); /*0x5beea1*/
        a2 = (float)(int)hinstDLL.m_data; /*0x5beea9*/
        Tile_SetFloat(v18, 0xFA7u, a2); /*0x5beeb1*/
        v16 += 5; /*0x5beeb6*/
        --v17; /*0x5beeb9*/
      }
      while ( v17 ); /*0x5beebc*/
      if ( !LODWORD(VirtualScreenHeight) || *(_DWORD *)(LODWORD(VirtualScreenHeight) + 0x24) != 1 ) /*0x5beece*/
        JUMPOUT(0x5BF0E0); /*0x5bf0e0*/
      v19 = InterfaceManager_GetSingleton(0, 1); /*0x5beedf*/
      VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x5beee1*/
      LODWORD(VirtualScreenHeight) = Double_To_SInt32(VirtualScreenWidth * dbl_A2FAA0 + *(float *)v19->unk020); /*0x5beef4*/
      *(float *)&hinstDLL.m_data = (float)SLODWORD(VirtualScreenHeight); /*0x5beefc*/
      VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5bef05*/
      v21 = UI_GetVirtualScreenHeight(); /*0x5bef09*/
      LODWORD(VirtualScreenHeight) = Double_To_SInt32(VirtualScreenHeight - (v21 * dbl_A2FAA0 + *(float *)&v19->unk020[2])); /*0x5bef20*/
      *(float *)&hinstDLL.m_dataLen = (float)SLODWORD(VirtualScreenHeight); /*0x5bef28*/
      v32 = 0.0; /*0x5bef2e*/
      v35 = (float)*(int *)(a1 + 0xE0); /*0x5bef38*/
      v36 = (float)*(int *)(a1 + 0xE4); /*0x5bef42*/
      *(float *)&VirtualScreenHeight = v35 - *(float *)&hinstDLL.m_data; /*0x5bef4e*/
      *((float *)&VirtualScreenHeight + 1) = v36 - *(float *)&hinstDLL.m_dataLen; /*0x5bef5a*/
      v34 = 0.0 - 0.0; /*0x5bef62*/
      v22 = *(float *)&VirtualScreenHeight * *(float *)&VirtualScreenHeight; /*0x5bef7a*/
      *(float *)&VirtualScreenHeight = *((float *)&VirtualScreenHeight + 1) * *((float *)&VirtualScreenHeight + 1) /*0x5bef82*/
                                     + v22
                                     + v34 * v34;
      *(float *)&VirtualScreenHeight = sqrt(*(float *)&VirtualScreenHeight); /*0x5bef8f*/
      v23 = *(float *)&VirtualScreenHeight; /*0x5bef9b*/
      v24 = (double)*(int *)(a1 + 0xDC); /*0x5bef9f*/
      if ( v24 < *(float *)&VirtualScreenHeight || (v24 = (double)*(int *)(a1 + 0xE8), v24 > v23) ) /*0x5befbb*/
      {
        v25 = 0; /*0x5bf007*/
        sub_57DA20((int)v19, v22, v24, v23, "Menus\\Misc\\cursor.dds", 1); /*0x5bf009*/
      }
      else
      {
        v25 = 1; /*0x5befc6*/
        sub_57DA20((int)v19, v22, v24, v23, "Menus\\Persuasion\\Ball_cursor.dds", 1); /*0x5befc8*/
        *(_DWORD *)(a1 + 0x84) = sub_5BE6F0( /*0x5befef*/
                                   (signed int *)a1,
                                   (HINSTANCE)hinstDLL.m_data,
                                   *(float *)&hinstDLL.m_dataLen,
                                   (void *)LODWORD(v32));
        sub_5BE800((Tile **)a1, v22, v24); /*0x5beff5*/
      }
      if ( v30 || !v25 ) /*0x5bf01b*/
        JUMPOUT(0x5BF0B4); /*0x5bf0b4*/
      switch ( *(_DWORD *)(a1 + 0x14 * *(_DWORD *)(a1 + 0x84) + 0x2C) ) /*0x5bf036*/
      {
        case 1: /*0x5bf036*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 5; /*0x5bf043*/
          goto LABEL_39; /*0x5bf04a*/
        case 2: /*0x5bf036*/
          v26 = flt_A3D9A4; /*0x5bf052*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 5; /*0x5bf058*/
          *(float *)(*(_DWORD *)(a1 + 0xD8) + 0x74) = v26; /*0x5bf065*/
          def_5BF036(a1); /*0x5bf068*/
          return; /*0x5bf068*/
        case 3: /*0x5bf036*/
          v27 = flt_A3D9A4; /*0x5bf070*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 1; /*0x5bf076*/
          *(float *)(*(_DWORD *)(a1 + 0xD8) + 0x74) = v27; /*0x5bf083*/
          def_5BF036(a1); /*0x5bf086*/
          return; /*0x5bf086*/
        case 4: /*0x5bf036*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 1; /*0x5bf08e*/
LABEL_39:
          *(float *)(*(_DWORD *)(a1 + 0xD8) + 0x74) = 1.0; /*0x5bf095*/
          def_5BF036(a1); /*0x5bf09e*/
          break; /*0x5bf09e*/
        default:
          JUMPOUT(0x5BF0A0); /*0x5bf0a0*/
      }
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 7; /*0x5bf115*/
      *(float *)(*(_DWORD *)(a1 + 0xD8) + 0x74) = 0.0; /*0x5bf122*/
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0xD8) + 0x304))( /*0x5bf13a*/
        *(_DWORD *)(a1 + 0xD8),
        0.0,
        0);
      sub_5BEA90(0); /*0x5bf13d*/
    }
  }
}
