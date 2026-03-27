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

  if ( a5 == 0x33 || (unsigned int)(a5 - 0x10) <= 4 )
  {
    v8 = a6;
    if ( a6 )
    {
      if ( a5 == 0x10 && !sub_5893B0(a6) )
      {
        v8 = sub_58B800(a6, "cont_p4p5_header_text");
        Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
        a4 = sub_57F9F0(Singleton, st5_0, a4, st6_0, *(float *)&v8, (_DWORD *)0xFDD, 0);
      }
      *(_DWORD *)(a1 + 0x3C) = 0;
      sub_57BD80();
      if ( !v8 || !*(_DWORD *)(a1 + 0x34) )
      {
        v23 = *(Tile **)(a1 + 0x34);
        if ( !v23 )
          return;
        goto LABEL_40;
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
      v12 = sub_589390(*(_DWORD **)(a1 + 0x34));
      sub_588D90(v12, v31);
      v36 = v31 - v31;
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFAB, v36);
      v37 = (float)(2 * v10);
      v42 = Tile_GetFloat(v8, 0xFCB) - v37;
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFCB, v42);
      v38 = Tile_GetFloat(v8, 0xFCA) - v37;
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFCA, v38);
      v39 = (float)v10;
      v13 = sub_588C50(v8);
      v43 = v11 + v39 - (double)Double_To_SInt32(v13);
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFAD, v43);
      v40 = sub_588CF0(v8) + v39;
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFAC, v40);
      Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFA1, fConstant_2);
      *(_DWORD *)(a1 + 0x3C) = v8;
      if ( a5 == 0x33 )
      {
        if ( *(_BYTE *)(a1 + 0x64) )
        {
          Tile_GetFloat(v8, 0xFAA);
          *(_DWORD *)(a1 + 0x5C) = Double_To_SInt32(v13);
        }
        else
        {
          Tile_GetFloat(v8, 0xFAA);
          *(_DWORD *)(a1 + 0x58) = Double_To_SInt32(v13);
        }
        Tile_GetFloat(v8, 0xFB9);
        v14 = (TESForm *)Double_To_SInt32(v13);
        if ( *(_BYTE *)(a1 + 0x64) )
          InventoryEntryOfItem = GetInventoryEntryOfItem(*(TESObjectREFR **)(a1 + 0x44), v14, *(_BYTE *)(a1 + 0x61));
        else
          InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v14, 0);
        v16 = (unsigned int)InventoryEntryOfItem;
        if ( InventoryEntryOfItem )
        {
          v30 = OblivionDynamicCast(
                  InventoryEntryOfItem->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectBOOK `RTTI Type Descriptor',
                  0);
          v32 = OblivionDynamicCast(
                  *(void **)(v16 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESEnchantableForm `RTTI Type Descriptor',
                  0);
          v33 = OblivionDynamicCast(
                  *(void **)(v16 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &MagicItem `RTTI Type Descriptor',
                  0);
          a3 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFB8);
          v17 = *(_DWORD **)(a1 + 4);
          Float = Tile_GetFloat(v17, 0xFC5);
          v18 = sub_588D90(v17, v13);
          v41 = v13 + Float;
          InterfaceManager_GetSingleton(0, 1);
          v19 = *(_DWORD **)(a1 + 4);
          v35 = sub_57D7F0();
          *(float *)&v44 = v35 - Tile_GetFloat(v19, 0xFC4);
          if ( v30 && (v30[0x22] & 1) != 0 && (v20 = v30[0x19]) != 0 )
          {
            a2 = v41;
            v27 = 0;
          }
          else
          {
            if ( !v32 || (v20 = v32[1]) == 0 )
            {
              if ( v33 )
              {
                v25 = sub_588CF0(v8);
                sub_57BB20((int)v33, a3, v25, *(float *)&v44, v16, v41);
              }
              else
              {
                v22 = *(_BYTE *)(*(_DWORD *)(v16 + 8) + 4);
                if ( v22 == 0x26 || v22 == 0x2A || v22 == 0x21 || v22 == 0x14 )
                {
                  v26 = sub_588CF0(v8);
                  sub_57BCC0(v16, (char)v8, v18, st6_0, v16, a3, v26, *(float *)&v44, v41);
                }
                else
                {
                  sub_57BD80();
                }
              }
              goto LABEL_36;
            }
            a2 = v41;
            v27 = v16;
          }
          v24 = sub_588CF0(v8);
          sub_57BB20(v20 + 0x18, a3, v24, *(float *)&v44, v27, a2);
LABEL_36:
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v16, v21);
          FormHeapFree(v16);
          return;
        }
        v23 = *(Tile **)(a1 + 0x34);
        if ( v23 )
        {
LABEL_40:
          Tile_SetFloat(v23, (_DWORD *)0xFA1, 1.0);
          InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0;
        }
      }
    }
  }
}
