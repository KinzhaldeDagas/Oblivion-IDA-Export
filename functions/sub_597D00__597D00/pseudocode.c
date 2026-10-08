void __userpurge sub_597D00(int a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double a4@<st0>, int a5, Tile *a6)
{
  Tile *v8; // edi
  float *Singleton; // eax
  int v10; // ebp
  double v11; // st4
  _DWORD *v12; // eax
  double v13; // st7
  TESForm *v14; // eax
  EntryData *InventoryEntryOfItem; // eax
  unsigned int v16; // ebp
  _DWORD *v17; // ebx
  double v18; // st5
  _DWORD *v19; // esi
  int v20; // esi
  int v21; // edx
  char v22; // al
  Tile *v23; // esi
  float v24; // [esp+4h] [ebp-40h]
  float v25; // [esp+4h] [ebp-40h]
  float v26; // [esp+8h] [ebp-3Ch]
  int v27; // [esp+Ch] [ebp-38h]
  float a2; // [esp+10h] [ebp-34h]
  float a3; // [esp+24h] [ebp-20h]
  _DWORD *v30; // [esp+28h] [ebp-1Ch]
  double v31; // [esp+2Ch] [ebp-18h]
  _DWORD *v32; // [esp+2Ch] [ebp-18h]
  void *v33; // [esp+34h] [ebp-10h]
  double Float; // [esp+3Ch] [ebp-8h]
  double v35; // [esp+3Ch] [ebp-8h]
  float v36; // [esp+48h] [ebp+4h]
  float v37; // [esp+48h] [ebp+4h]
  float v38; // [esp+48h] [ebp+4h]
  float v39; // [esp+48h] [ebp+4h]
  float v40; // [esp+48h] [ebp+4h]
  float v41; // [esp+48h] [ebp+4h]
  float v42; // [esp+4Ch] [ebp+8h]
  float v43; // [esp+4Ch] [ebp+8h]
  int v44; // [esp+4Ch] [ebp+8h]

  if ( a5 == 0x33 || (unsigned int)(a5 - 0x10) <= 4 ) /*0x597d16*/
  {
    v8 = a6; /*0x597d1e*/
    if ( a6 ) /*0x597d26*/
    {
      if ( a5 == 0x10 && !Tile::IsVisible(a6) ) /*0x597d33*/
      {
        v8 = Tile::GetTileByName(a6, "cont_p4p5_header_text"); /*0x597d50*/
        Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x597d56*/
        a4 = InterfaceManager::SetCurrentFocusTarget(Singleton, st5_0, a4, st6_0, *(float *)&v8, (_DWORD *)0xFDD, 0); /*0x597d60*/
      }
      *(_DWORD *)(a1 + 0x3C) = 0; /*0x597d65*/
      sub_57BD80(); /*0x597d68*/
      if ( !v8 || !*(_DWORD *)(a1 + 0x34) ) /*0x597d75*/
      {
        v23 = *(Tile **)(a1 + 0x34); /*0x59814d*/
        if ( !v23 ) /*0x598152*/
          return; /*0x598152*/
        goto LABEL_40; /*0x598152*/
      }
      sub_57DE50(4); /*0x597d80*/
      Tile_GetFloat(v8, 0xFE0); /*0x597d8f*/
      v10 = Double_To_SInt32(a4); /*0x597d99*/
      if ( Tile_GetFloat(v8, 0xFD1) == fConstant_2 ) /*0x597db6*/
        v11 = Tile_GetFloat(v8, 0xFCB) * dbl_A2FAA0; /*0x597dc4*/
      else
        v11 = 0.0; /*0x597dcc*/
      sub_588D90(v8, a4); /*0x597dd4*/
      v31 = a4 - dbl_A2FAA0; /*0x597de2*/
      v12 = sub_589390(*(_DWORD **)(a1 + 0x34)); /*0x597de6*/
      sub_588D90(v12, v31); /*0x597ded*/
      v36 = v31 - v31; /*0x597dfa*/
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFAB, v36); /*0x597e0a*/
      v37 = (float)(2 * v10); /*0x597e22*/
      v42 = Tile_GetFloat(v8, 0xFCB) - v37; /*0x597e33*/
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFCB, v42); /*0x597e43*/
      v38 = Tile_GetFloat(v8, 0xFCA) - v37; /*0x597e5c*/
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFCA, v38); /*0x597e6c*/
      v39 = (float)v10; /*0x597e77*/
      v13 = sub_588C50(v8); /*0x597e7b*/
      v43 = v11 + v39 - (double)Double_To_SInt32(v13); /*0x597e99*/
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFAD, v43); /*0x597ea9*/
      v40 = sub_588CF0(v8) + v39; /*0x597ebd*/
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFAC, v40); /*0x597ecd*/
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFA1, fConstant_2); /*0x597ee4*/
      *(_DWORD *)(a1 + 0x3C) = v8; /*0x597eec*/
      if ( a5 == 0x33 ) /*0x597eef*/
      {
        if ( *(_BYTE *)(a1 + 0x64) ) /*0x597ef5*/
        {
          Tile_GetFloat(v8, 0xFAA); /*0x597f02*/
          *(_DWORD *)(a1 + 0x5C) = Double_To_SInt32(v13); /*0x597f0c*/
        }
        else
        {
          Tile_GetFloat(v8, 0xFAA); /*0x597f11*/
          *(_DWORD *)(a1 + 0x58) = Double_To_SInt32(v13); /*0x597f1b*/
        }
        Tile_GetFloat(v8, 0xFB9); /*0x597f25*/
        v14 = (TESForm *)Double_To_SInt32(v13); /*0x597f2a*/
        if ( *(_BYTE *)(a1 + 0x64) ) /*0x597f2f*/
          InventoryEntryOfItem = GetInventoryEntryOfItem(*(TESObjectREFR **)(a1 + 0x44), v14, *(_BYTE *)(a1 + 0x61)); /*0x597f48*/
        else
          InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v14, 0); /*0x597f3d*/
        v16 = (unsigned int)InventoryEntryOfItem; /*0x597f4d*/
        if ( InventoryEntryOfItem ) /*0x597f51*/
        {
          v30 = OblivionDynamicCast( /*0x597f7a*/
                  InventoryEntryOfItem->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectBOOK `RTTI Type Descriptor',
                  0);
          v32 = OblivionDynamicCast( /*0x597f95*/
                  *(void **)(v16 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESEnchantableForm `RTTI Type Descriptor',
                  0);
          v33 = OblivionDynamicCast( /*0x597faf*/
                  *(void **)(v16 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &MagicItem `RTTI Type Descriptor',
                  0);
          a3 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFB8); /*0x597fb8*/
          v17 = *(_DWORD **)(a1 + 4); /*0x597fbc*/
          Float = Tile_GetFloat(v17, 0xFC5); /*0x597fcb*/
          v18 = sub_588D90(v17, v13); /*0x597fd1*/
          v41 = v13 + Float; /*0x597fde*/
          InterfaceManager_GetSingleton(0, 1); /*0x597fe2*/
          v19 = *(_DWORD **)(a1 + 4); /*0x597fe7*/
          v35 = UI_GetVirtualScreenHeight(); /*0x597ff2*/
          *(float *)&v44 = v35 - Tile_GetFloat(v19, 0xFC4); /*0x59800c*/
          if ( v30 && (v30[0x22] & 1) != 0 && (v20 = v30[0x19]) != 0 ) /*0x598020*/
          {
            a2 = v41; /*0x598027*/
            v27 = 0; /*0x59802a*/
          }
          else
          {
            if ( !v32 || (v20 = v32[1]) == 0 ) /*0x59803b*/
            {
              if ( v33 ) /*0x59807a*/
              {
                v25 = sub_588CF0(v8); /*0x598097*/
                sub_57BB20((int)v33, a3, v25, *(float *)&v44, v16, v41); /*0x5980a3*/
              }
              else
              {
                v22 = *(_BYTE *)(*(_DWORD *)(v16 + 8) + 4); /*0x5980b0*/
                if ( v22 == 0x26 || v22 == 0x2A || v22 == 0x21 || v22 == 0x14 ) /*0x5980c1*/
                {
                  v26 = sub_588CF0(v8); /*0x5980e6*/
                  sub_57BCC0(v16, (char)v8, v18, st6_0, v16, a3, v26, *(float *)&v44, v41); /*0x5980f2*/
                }
                else
                {
                  sub_57BD80(); /*0x5980c3*/
                }
              }
              goto LABEL_36; /*0x5980ab*/
            }
            a2 = v41; /*0x598042*/
            v27 = v16; /*0x598045*/
          }
          v24 = sub_588CF0(v8); /*0x598058*/
          sub_57BB20(v20 + 0x18, a3, v24, *(float *)&v44, v27, a2); /*0x598067*/
LABEL_36:
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v16, v21); /*0x5980fa*/
          FormHeapFree(v16); /*0x598102*/
          return; /*0x598111*/
        }
        v23 = *(Tile **)(a1 + 0x34); /*0x598114*/
        if ( v23 ) /*0x598119*/
        {
LABEL_40:
          Tile_SetFloat(v23, (_DWORD *)0xFA1, 1.0); /*0x598154*/
          InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0; /*0x59816e*/
        }
      }
    }
  }
}
