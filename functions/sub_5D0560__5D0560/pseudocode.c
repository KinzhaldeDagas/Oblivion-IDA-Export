void __userpurge sub_5D0560(
        _DWORD *a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        _DWORD *a7)
{
  double Float; // st7
  double v10; // st7
  TESForm *v11; // eax
  EntryData *InventoryEntryOfItem; // eax
  unsigned int *v13; // ebx
  _DWORD *v14; // ebp
  int v15; // edx
  int v16; // eax
  _DWORD *v17; // esi
  char v18; // al
  _DWORD *v19; // esi
  float v20; // [esp+0h] [ebp-30h]
  float v21; // [esp+4h] [ebp-2Ch]
  float v22; // [esp+4h] [ebp-2Ch]
  float v23; // [esp+8h] [ebp-28h]
  float v24; // [esp+8h] [ebp-28h]
  float v25; // [esp+Ch] [ebp-24h]
  float v26; // [esp+10h] [ebp-20h]
  float v27; // [esp+10h] [ebp-20h]
  float a2; // [esp+14h] [ebp-1Ch]
  float a2a; // [esp+14h] [ebp-1Ch]
  float a2b; // [esp+14h] [ebp-1Ch]
  float a2c; // [esp+14h] [ebp-1Ch]
  float a2d; // [esp+14h] [ebp-1Ch]
  float a2e; // [esp+14h] [ebp-1Ch]
  float v34; // [esp+1Ch] [ebp-14h]
  int a3a; // [esp+24h] [ebp-Ch]
  int v40; // [esp+34h] [ebp+4h]
  void *v45; // [esp+34h] [ebp+4h]

  if ( a6 < 0x33 )
  {
    __asm { fld1 }
    __asm { fstp    [esp+14h+var_14]; a3 }
    Tile_SetFloat((Tile *)a1[0xF], (_DWORD *)0xFA1, v34);
  }
  else if ( a7 )
  {
    if ( a1[0xF] )
    {
      sub_57DE50(4);
      Float = Tile_GetFloat(a7, 0xFE0);
      a3a = Double_To_SInt32(Float);
      sub_588D90(a7, Float);
      __asm { fstp    qword ptr [esp+18h+var_8]; a3 }
      Tile_GetFloat((_DWORD *)a1[0xF], 0xFBD);
      __asm { fsubr   qword ptr [esp+18h+var_8] }
      __asm
      {
        fstp    [esp+1Ch+arg_0]
        fld     [esp+1Ch+arg_0]
        fstp    [esp+1Ch+a2]; a3
      }
      Tile_SetFloat((Tile *)a1[0xF], (_DWORD *)0xFAB, a2);
      v40 = 2 * a3a;
      __asm { fild    [esp+18h+arg_0] }
      __asm { fstp    [esp+1Ch+arg_0] }
      Tile_GetFloat(a7, 0xFCB);
      __asm { fsub    [esp+18h+arg_0] }
      __asm
      {
        fstp    [esp+1Ch+arg_4]
        fld     [esp+1Ch+arg_4]
        fstp    [esp+1Ch+a2]; a3
      }
      Tile_SetFloat((Tile *)a1[0xF], (_DWORD *)0xFCB, a2a);
      Tile_GetFloat(a7, 0xFCA);
      __asm { fsub    [esp+18h+arg_0] }
      __asm
      {
        fstp    [esp+1Ch+arg_0]
        fld     [esp+1Ch+arg_0]
        fstp    [esp+1Ch+a2]; a3
      }
      Tile_SetFloat((Tile *)a1[0xF], (_DWORD *)0xFCA, a2b);
      __asm { fild    [esp+18h+a3] }
      __asm { fstp    [esp+18h+arg_0] }
      sub_588C50(a7);
      __asm { fadd    [esp+18h+arg_0] }
      __asm
      {
        fstp    [esp+1Ch+arg_4]
        fld     [esp+1Ch+arg_4]
        fstp    [esp+1Ch+a2]; a3
      }
      Tile_SetFloat((Tile *)a1[0xF], (_DWORD *)0xFAD, a2c);
      sub_588CF0(a7);
      __asm { fadd    [esp+18h+arg_0] }
      __asm
      {
        fstp    [esp+1Ch+arg_0]
        fld     [esp+1Ch+arg_0]
        fstp    [esp+1Ch+a2]; a3
      }
      Tile_SetFloat((Tile *)a1[0xF], (_DWORD *)0xFAC, a2d);
      __asm { fld     dword ptr ds:0A379B4h }
      __asm { fstp    [esp+1Ch+a2]; a3 }
      Tile_SetFloat((Tile *)a1[0xF], (_DWORD *)0xFA1, a2e);
      v10 = Tile_GetFloat(a7, 0xFB9);
      v11 = (TESForm *)Double_To_SInt32(v10);
      InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v11, 0);
      v13 = (unsigned int *)InventoryEntryOfItem;
      if ( InventoryEntryOfItem )
        v45 = OblivionDynamicCast(
                InventoryEntryOfItem->type,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &MagicItem `RTTI Type Descriptor',
                0);
      else
        v45 = 0;
      sub_588D90((_DWORD *)a1[1], v10);
      __asm { fstp    [esp+1Ch+arg_4] }
      InterfaceManager_GetSingleton(0, 1);
      v14 = (_DWORD *)a1[1];
      sub_57D7F0();
      __asm { fstp    qword ptr [esp+1Ch+var_8] }
      Tile_GetFloat(v14, 0xFBA);
      __asm { fsubr   qword ptr [esp+1Ch+var_8] }
      v16 = a1[0x16];
      __asm { fstp    [esp+1Ch+a3] }
      if ( v16 != 1 && v16 != 2 )
      {
        if ( v45 )
        {
          __asm { fld     [esp+1Ch+arg_4] }
          v17 = (_DWORD *)a1[1];
          __asm { fstp    [esp+20h+var_20]; float }
          __asm { fld     [esp+24h+a3] }
          __asm { fstp    [esp+28h+var_28]; float }
          sub_588CF0(a7);
          __asm { fstp    [esp+2Ch+var_2C]; float }
          Tile_GetFloat(v17, 0xFB0);
          __asm { fstp    [esp+30h+var_30]; float }
          sub_57BB20((int)v45, v20, v21, v23, (int)v13, v26);
        }
        else
        {
          v18 = *(_BYTE *)(v13[2] + 4);
          if ( v18 == 0x26 || v18 == 0x2A || v18 == 0x14 || v18 == 0x21 )
          {
            __asm { fld     [esp+1Ch+arg_4] }
            v19 = (_DWORD *)a1[1];
            __asm { fstp    [esp+24h+var_20]; float }
            __asm
            {
              fld     [esp+24h+a3]
              fstp    [esp+24h+var_24]; float
            }
            sub_588CF0(a7);
            __asm { fstp    [esp+28h+var_28]; float }
            Tile_GetFloat(v19, 0xFB0);
            __asm { fstp    [esp+2Ch+var_2C]; float }
            sub_57BCC0(0, (char)a7, st5_0, a4, (int)v13, v22, v24, v25, v27);
          }
        }
      }
      if ( v13 )
      {
        ContainerEntryExtraData_DestroyDataTable(v13, v15);
        FormHeapFree((unsigned int)v13);
      }
    }
  }
}
