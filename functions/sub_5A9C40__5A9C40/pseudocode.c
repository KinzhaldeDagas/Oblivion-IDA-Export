// AchievementsNative evidence: InventoryMenu mouseover path positions focus box from active tile focusinset/size/position; item rows id >= 0x3E9 pass row absolute Y into magic popup path.
void __userpurge sub_5A9C40(
        int a1@<ecx>,
        double a2@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        signed int a5,
        Tile *a6)
{
  Tile *v8; // edi
  float *Singleton; // eax
  int v10; // ebx
  double v11; // st4
  double v12; // st7
  TESForm *v13; // eax
  EntryData *InventoryEntryOfItem; // eax
  unsigned int v15; // ebx
  _BYTE *v16; // ebp
  double v17; // st5
  _DWORD *v18; // esi
  int v19; // edx
  int v20; // esi
  char v21; // al
  Tile *v22; // esi
  float v23; // [esp+4h] [ebp-38h]
  float v24; // [esp+4h] [ebp-38h]
  float v25; // [esp+4h] [ebp-38h]
  float v26; // [esp+8h] [ebp-34h]
  float a3; // [esp+24h] [ebp-18h]
  _DWORD *v28; // [esp+28h] [ebp-14h]
  void *v29; // [esp+2Ch] [ebp-10h]
  double v30; // [esp+34h] [ebp-8h]
  float v31; // [esp+40h] [ebp+4h]
  float v32; // [esp+40h] [ebp+4h]
  float v33; // [esp+40h] [ebp+4h]
  float v34; // [esp+40h] [ebp+4h]
  float v35; // [esp+40h] [ebp+4h]
  float v36; // [esp+40h] [ebp+4h]
  float v37; // [esp+44h] [ebp+8h]
  float v38; // [esp+44h] [ebp+8h]
  int v39; // [esp+44h] [ebp+8h]

  if ( a5 >= 0x3E9 || (unsigned int)(a5 - 0xE) <= 4 ) /*0x5a9c59*/
  {
    v8 = a6; /*0x5a9c61*/
    if ( a6 ) /*0x5a9c69*/
    {
      if ( a5 == 0xE && !Tile::IsVisible(a6) ) /*0x5a9c76*/
      {
        v8 = Tile::GetTileByName(a6, "inv_p4p5_header_text"); /*0x5a9c93*/
        Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5a9c99*/
        a4 = InterfaceManager::SetCurrentFocusTarget(Singleton, a2, a4, st6_0, *(float *)&v8, (_DWORD *)0xFDD, 0); /*0x5a9ca3*/
      }
      *(_BYTE *)(a1 + 0x44) = 0xFF; /*0x5a9ca8*/
      *(_DWORD *)(a1 + 0x3C) = 0; /*0x5a9cac*/
      sub_57BD80(); /*0x5a9caf*/
      if ( !v8 || !*(_DWORD *)(a1 + 0x28) ) /*0x5a9cbc*/
      {
        v22 = *(Tile **)(a1 + 0x28); /*0x5aa06a*/
        if ( !v22 ) /*0x5aa06f*/
          return; /*0x5aa06f*/
        goto LABEL_33; /*0x5aa06f*/
      }
      sub_57DE50(4); /*0x5a9cc7*/
      Tile_GetFloat(v8, 0xFE0); /*0x5a9cd6*/
      v10 = Double_To_SInt32(a4); /*0x5a9ce0*/
      if ( Tile_GetFloat(v8, 0xFD1) == fConstant_2 ) /*0x5a9cfd*/
        v11 = Tile_GetFloat(v8, 0xFCB) * dbl_A2FAA0; /*0x5a9d0b*/
      else
        v11 = 0.0; /*0x5a9d13*/
      sub_588D90(v8, a4); /*0x5a9d1b*/
      v31 = a4 - dbl_A2FAA0; /*0x5a9d2a*/
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAB, v31); /*0x5a9d3a*/
      v32 = (float)(2 * v10); /*0x5a9d51*/
      v37 = Tile_GetFloat(v8, 0xFCB) - v32; /*0x5a9d62*/
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFCB, v37); /*0x5a9d72*/
      v33 = Tile_GetFloat(v8, 0xFCA) - v32; /*0x5a9d8b*/
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFCA, v33); /*0x5a9d9b*/
      v34 = (float)v10; /*0x5a9da6*/
      v12 = sub_588C50(v8); /*0x5a9daa*/
      v38 = v11 + v34 - (double)Double_To_SInt32(v12); /*0x5a9dc8*/
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAD, v38); /*0x5a9dd8*/
      v35 = sub_588CF0(v8) + v34; /*0x5a9dec*/
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAC, v35); /*0x5a9dfc*/
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFA1, fConstant_2); /*0x5a9e13*/
      *(_DWORD *)(a1 + 0x3C) = v8; /*0x5a9e1e*/
      if ( a5 >= 0x3E9 ) /*0x5a9e21*/
      {
        Tile_GetFloat(v8, 0xFAA); /*0x5a9e2e*/
        *(_DWORD *)(a1 + 0x54) = Double_To_SInt32(v12); /*0x5a9e3f*/
        Tile_GetFloat(v8, 0xFB9); /*0x5a9e42*/
        v13 = (TESForm *)Double_To_SInt32(v12); /*0x5a9e47*/
        InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v13, 0); /*0x5a9e55*/
        v15 = (unsigned int)InventoryEntryOfItem; /*0x5a9e5a*/
        if ( InventoryEntryOfItem ) /*0x5a9e5e*/
        {
          v16 = OblivionDynamicCast( /*0x5a9e87*/
                  InventoryEntryOfItem->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectBOOK `RTTI Type Descriptor',
                  0);
          v28 = OblivionDynamicCast( /*0x5a9ea0*/
                  *(void **)(v15 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESEnchantableForm `RTTI Type Descriptor',
                  0);
          v29 = OblivionDynamicCast( /*0x5a9eba*/
                  *(void **)(v15 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &MagicItem `RTTI Type Descriptor',
                  0);
          a3 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFB8); /*0x5a9ec3*/
          v17 = sub_588D90((_DWORD *)*(_DWORD *)(a1 + 4), v12); /*0x5a9eca*/
          v36 = v12; /*0x5a9ecf*/
          InterfaceManager_GetSingleton(0, 1); /*0x5a9ed7*/
          v18 = *(_DWORD **)(a1 + 4); /*0x5a9edc*/
          v30 = UI_GetVirtualScreenHeight(); /*0x5a9ee7*/
          *(float *)&v39 = v30 - Tile_GetFloat(v18, 0xFBA); /*0x5a9efd*/
          if ( v16 && (v16[0x88] & 1) != 0 && (v16 = *((_BYTE **)v16 + 0x19)) != 0 ) /*0x5a9f11*/
          {
            v23 = sub_588CF0(v8); /*0x5a9f2f*/
            sub_57BB20((int)(v16 + 0x18), a3, v23, *(float *)&v39, 0, v36); /*0x5a9f3e*/
          }
          else if ( v28 && (v20 = v28[1]) != 0 ) /*0x5a9f58*/
          {
            v24 = sub_588CF0(v8); /*0x5a9f75*/
            sub_57BB20(v20 + 0x18, a3, v24, *(float *)&v39, v15, v36); /*0x5a9f84*/
          }
          else if ( v29 ) /*0x5a9f97*/
          {
            v25 = sub_588CF0(v8); /*0x5a9fb4*/
            sub_57BB20((int)v29, a3, v25, *(float *)&v39, v15, v36); /*0x5a9fc0*/
          }
          else
          {
            v21 = *(_BYTE *)(*(_DWORD *)(v15 + 8) + 4); /*0x5a9fcd*/
            if ( v21 == 0x26 || v21 == 0x2A || v21 == 0x21 || v21 == 0x14 ) /*0x5a9fde*/
            {
              v26 = sub_588CF0(v8); /*0x5aa003*/
              sub_57BCC0((char)v16, (char)v8, v17, st6_0, v15, a3, v26, *(float *)&v39, v36); /*0x5aa00f*/
            }
            else
            {
              sub_57BD80(); /*0x5a9fe0*/
            }
          }
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v15, v19); /*0x5aa019*/
          FormHeapFree(v15); /*0x5aa01f*/
          return; /*0x5aa02e*/
        }
        v22 = *(Tile **)(a1 + 0x28); /*0x5aa031*/
        if ( !v22 ) /*0x5aa036*/
          return; /*0x5aa036*/
LABEL_33:
        Tile_SetFloat(v22, (_DWORD *)0xFA1, 1.0); /*0x5aa071*/
        InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0; /*0x5aa08b*/
      }
    }
  }
}
