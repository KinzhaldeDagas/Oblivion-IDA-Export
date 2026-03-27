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

  if ( a5 >= 0x3E9 || (unsigned int)(a5 - 0xE) <= 4 )
  {
    v8 = a6;
    if ( a6 )
    {
      if ( a5 == 0xE && !sub_5893B0(a6) )
      {
        v8 = sub_58B800(a6, "inv_p4p5_header_text");
        Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
        a4 = sub_57F9F0(Singleton, a2, a4, st6_0, *(float *)&v8, (_DWORD *)0xFDD, 0);
      }
      *(_BYTE *)(a1 + 0x44) = 0xFF;
      *(_DWORD *)(a1 + 0x3C) = 0;
      sub_57BD80();
      if ( !v8 || !*(_DWORD *)(a1 + 0x28) )
      {
        v22 = *(Tile **)(a1 + 0x28);
        if ( !v22 )
          return;
        goto LABEL_33;
      }
      sub_57DE50(4);
      Tile_GetFloat(v8, 0xFE0);
      v10 = Double_To_SInt32(a4);
      if ( Tile_GetFloat(v8, 0xFD1) == fConstant_2 )
        v11 = Tile_GetFloat(v8, 0xFCB) * dbl_A2FAA0;
      else
        v11 = 0.0;
      sub_588D90(v8, a4);
      v31 = a4 - dbl_A2FAA0;
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAB, v31);
      v32 = (float)(2 * v10);
      v37 = Tile_GetFloat(v8, 0xFCB) - v32;
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFCB, v37);
      v33 = Tile_GetFloat(v8, 0xFCA) - v32;
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFCA, v33);
      v34 = (float)v10;
      v12 = sub_588C50(v8);
      v38 = v11 + v34 - (double)Double_To_SInt32(v12);
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAD, v38);
      v35 = sub_588CF0(v8) + v34;
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAC, v35);
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFA1, fConstant_2);
      *(_DWORD *)(a1 + 0x3C) = v8;
      if ( a5 >= 0x3E9 )
      {
        Tile_GetFloat(v8, 0xFAA);
        *(_DWORD *)(a1 + 0x54) = Double_To_SInt32(v12);
        Tile_GetFloat(v8, 0xFB9);
        v13 = (TESForm *)Double_To_SInt32(v12);
        InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v13, 0);
        v15 = (unsigned int)InventoryEntryOfItem;
        if ( InventoryEntryOfItem )
        {
          v16 = OblivionDynamicCast(
                  InventoryEntryOfItem->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectBOOK `RTTI Type Descriptor',
                  0);
          v28 = OblivionDynamicCast(
                  *(void **)(v15 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESEnchantableForm `RTTI Type Descriptor',
                  0);
          v29 = OblivionDynamicCast(
                  *(void **)(v15 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &MagicItem `RTTI Type Descriptor',
                  0);
          a3 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFB8);
          v17 = sub_588D90((_DWORD *)*(_DWORD *)(a1 + 4), v12);
          v36 = v12;
          InterfaceManager_GetSingleton(0, 1);
          v18 = *(_DWORD **)(a1 + 4);
          v30 = sub_57D7F0();
          *(float *)&v39 = v30 - Tile_GetFloat(v18, 0xFBA);
          if ( v16 && (v16[0x88] & 1) != 0 && (v16 = *((_BYTE **)v16 + 0x19)) != 0 )
          {
            v23 = sub_588CF0(v8);
            sub_57BB20((int)(v16 + 0x18), a3, v23, *(float *)&v39, 0, v36);
          }
          else if ( v28 && (v20 = v28[1]) != 0 )
          {
            v24 = sub_588CF0(v8);
            sub_57BB20(v20 + 0x18, a3, v24, *(float *)&v39, v15, v36);
          }
          else if ( v29 )
          {
            v25 = sub_588CF0(v8);
            sub_57BB20((int)v29, a3, v25, *(float *)&v39, v15, v36);
          }
          else
          {
            v21 = *(_BYTE *)(*(_DWORD *)(v15 + 8) + 4);
            if ( v21 == 0x26 || v21 == 0x2A || v21 == 0x21 || v21 == 0x14 )
            {
              v26 = sub_588CF0(v8);
              sub_57BCC0((char)v16, (char)v8, v17, st6_0, v15, a3, v26, *(float *)&v39, v36);
            }
            else
            {
              sub_57BD80();
            }
          }
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v15, v19);
          FormHeapFree(v15);
          return;
        }
        v22 = *(Tile **)(a1 + 0x28);
        if ( !v22 )
          return;
LABEL_33:
        Tile_SetFloat(v22, (_DWORD *)0xFA1, 1.0);
        InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0;
      }
    }
  }
}
