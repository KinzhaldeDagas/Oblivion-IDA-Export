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
  double v20; // st7
  float v21; // [esp+0h] [ebp-30h]
  float v22; // [esp+4h] [ebp-2Ch]
  float v23; // [esp+4h] [ebp-2Ch]
  float v24; // [esp+8h] [ebp-28h]
  float v25; // [esp+8h] [ebp-28h]
  float v26; // [esp+Ch] [ebp-24h]
  float v27; // [esp+10h] [ebp-20h]
  float v28; // [esp+10h] [ebp-20h]
  float a2; // [esp+14h] [ebp-1Ch]
  float a2a; // [esp+14h] [ebp-1Ch]
  float a2b; // [esp+14h] [ebp-1Ch]
  float a2c; // [esp+14h] [ebp-1Ch]
  float a2d; // [esp+14h] [ebp-1Ch]
  float a2e; // [esp+14h] [ebp-1Ch]
  float v35; // [esp+1Ch] [ebp-14h]
  int a3a; // [esp+24h] [ebp-Ch]
  int v41; // [esp+34h] [ebp+4h]
  void *v46; // [esp+34h] [ebp+4h]

  if ( a6 < 0x33 ) /*0x5d056b*/
  {
    __asm { fld1 } /*0x5d07f1*/
    __asm { fstp    [esp+14h+var_14]; value }
    Tile_SetFloat((Tile *)a1[0xF], 0xFA1u, v35); /*0x5d07ff*/
  }
  else if ( a7 ) /*0x5d0578*/
  {
    if ( a1[0xF] ) /*0x5d057e*/
    {
      sub_57DE50(4); /*0x5d058b*/
      Float = Tile_GetFloat(a7, 0xFE0); /*0x5d059a*/
      a3a = Double_To_SInt32(Float); /*0x5d05a8*/
      sub_588D90(a7, Float); /*0x5d05ac*/
      __asm { fstp    qword ptr [esp+18h+var_8]; a3 } /*0x5d05b1*/
      Tile_GetFloat((_DWORD *)a1[0xF], 0xFBD); /*0x5d05bd*/
      __asm { fsubr   qword ptr [esp+18h+var_8] } /*0x5d05c2*/
      __asm
      {
        fstp    [esp+1Ch+arg_0]
        fld     [esp+1Ch+arg_0]
        fstp    [esp+1Ch+a2]; value
      }
      Tile_SetFloat((Tile *)a1[0xF], 0xFABu, a2); /*0x5d05da*/
      v41 = 2 * a3a; /*0x5d05e2*/
      __asm { fild    [esp+18h+arg_0] } /*0x5d05e6*/
      __asm { fstp    [esp+1Ch+arg_0] }
      Tile_GetFloat(a7, 0xFCB); /*0x5d05f5*/
      __asm { fsub    [esp+18h+arg_0] } /*0x5d05fa*/
      __asm
      {
        fstp    [esp+1Ch+arg_4]
        fld     [esp+1Ch+arg_4]
        fstp    [esp+1Ch+a2]; value
      }
      Tile_SetFloat((Tile *)a1[0xF], 0xFCBu, a2a); /*0x5d0612*/
      Tile_GetFloat(a7, 0xFCA); /*0x5d061e*/
      __asm { fsub    [esp+18h+arg_0] } /*0x5d0623*/
      __asm
      {
        fstp    [esp+1Ch+arg_0]
        fld     [esp+1Ch+arg_0]
        fstp    [esp+1Ch+a2]; value
      }
      Tile_SetFloat((Tile *)a1[0xF], 0xFCAu, a2b); /*0x5d063b*/
      __asm { fild    [esp+18h+a3] } /*0x5d0640*/
      __asm { fstp    [esp+18h+arg_0] }
      sub_588C50(a7); /*0x5d064a*/
      __asm { fadd    [esp+18h+arg_0] } /*0x5d064f*/
      __asm
      {
        fstp    [esp+1Ch+arg_4]
        fld     [esp+1Ch+arg_4]
        fstp    [esp+1Ch+a2]; value
      }
      Tile_SetFloat((Tile *)a1[0xF], 0xFADu, a2c); /*0x5d0667*/
      sub_588CF0(a7); /*0x5d066e*/
      __asm { fadd    [esp+18h+arg_0] } /*0x5d0673*/
      __asm
      {
        fstp    [esp+1Ch+arg_0]
        fld     [esp+1Ch+arg_0]
        fstp    [esp+1Ch+a2]; value
      }
      Tile_SetFloat((Tile *)a1[0xF], 0xFACu, a2d); /*0x5d068b*/
      __asm { fld     dword ptr ds:0A379B4h } /*0x5d0690*/
      __asm { fstp    [esp+1Ch+a2]; value }
      Tile_SetFloat((Tile *)a1[0xF], 0xFA1u, a2e); /*0x5d06a2*/
      v10 = Tile_GetFloat(a7, 0xFB9); /*0x5d06b0*/
      v11 = (TESForm *)Double_To_SInt32(v10); /*0x5d06b5*/
      InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v11, 0); /*0x5d06c1*/
      v13 = (unsigned int *)InventoryEntryOfItem; /*0x5d06c6*/
      if ( InventoryEntryOfItem ) /*0x5d06ca*/
        v46 = OblivionDynamicCast( /*0x5d06e6*/
                InventoryEntryOfItem->type,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &MagicItem `RTTI Type Descriptor',
                0);
      else
        v46 = 0; /*0x5d06ec*/
      sub_588D90((_DWORD *)a1[1], v10); /*0x5d06f8*/
      __asm { fstp    [esp+1Ch+arg_4] } /*0x5d06fd*/
      InterfaceManager_GetSingleton(0, 1); /*0x5d0705*/
      v14 = (_DWORD *)a1[1]; /*0x5d070a*/
      UI_GetVirtualScreenHeight(); /*0x5d0710*/
      __asm { fstp    qword ptr [esp+1Ch+var_8] } /*0x5d0715*/
      Tile_GetFloat(v14, 0xFBA); /*0x5d0720*/
      __asm { fsubr   qword ptr [esp+1Ch+var_8] } /*0x5d0725*/
      v16 = a1[0x16]; /*0x5d0729*/
      __asm { fstp    [esp+1Ch+a3] } /*0x5d072f*/
      if ( v16 != 1 && v16 != 2 ) /*0x5d073c*/
      {
        if ( v46 ) /*0x5d0748*/
        {
          __asm { fld     [esp+1Ch+arg_4] } /*0x5d074a*/
          v17 = (_DWORD *)a1[1]; /*0x5d074e*/
          __asm { fstp    [esp+20h+var_20]; float } /*0x5d0752*/
          __asm { fld     [esp+24h+a3] }
          __asm { fstp    [esp+28h+var_28]; float }
          sub_588CF0(a7); /*0x5d0760*/
          __asm { fstp    [esp+2Ch+var_2C]; float } /*0x5d0766*/
          Tile_GetFloat(v17, 0xFB0); /*0x5d0770*/
          __asm { fstp    [esp+30h+var_30]; float } /*0x5d0776*/
          sub_57BB20((int)v46, v21, v22, v24, (int)v13, v27); /*0x5d077a*/
        }
        else
        {
          v18 = *(_BYTE *)(v13[2] + 4); /*0x5d0787*/
          if ( v18 == 0x26 || v18 == 0x2A || v18 == 0x14 || v18 == 0x21 ) /*0x5d0798*/
          {
            __asm { fld     [esp+1Ch+arg_4] } /*0x5d079a*/
            v19 = (_DWORD *)a1[1]; /*0x5d079e*/
            __asm { fstp    [esp+24h+var_20]; float } /*0x5d07a4*/
            __asm
            {
              fld     [esp+24h+a3]
              fstp    [esp+24h+var_24]; float
            }
            sub_588CF0(a7); /*0x5d07b1*/
            __asm { fstp    [esp+28h+var_28]; float } /*0x5d07b7*/
            v20 = Tile_GetFloat(v19, 0xFB0); /*0x5d07c1*/
            __asm { fstp    [esp+2Ch+var_2C]; float } /*0x5d07c7*/
            sub_57BCC0(st5_0, a4, v20, (int)v13, v23, v25, v26, v28); /*0x5d07cb*/
          }
        }
      }
      if ( v13 ) /*0x5d07d6*/
      {
        ContainerEntryExtraData_DestroyDataTable(v13, v15); /*0x5d07da*/
        FormHeapFree((unsigned int)v13); /*0x5d07e0*/
      }
    }
  }
}
