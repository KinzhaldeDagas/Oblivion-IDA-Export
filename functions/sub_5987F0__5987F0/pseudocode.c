double __userpurge sub_5987F0@<st0>(_DWORD *this@<ecx>, double result@<st0>, signed int arg0)
{
  _DWORD *v4; // ebp
  Tile *v5; // ecx
  _DWORD *v6; // ebx
  int v7; // edi
  bool v8; // zf
  _DWORD *v9; // ebp
  signed int v10; // ebx
  TESForm *v11; // eax
  TESObjectREFR *v12; // ecx
  EntryData *InventoryEntryOfItem; // eax
  unsigned int *v14; // ebp
  int v15; // edx
  Tile *v16; // ecx
  InterfaceManager *Singleton; // eax
  double v18; // st6
  double v19; // st6
  int v20; // edi
  Tile *v21; // edi
  Tile *v22; // edi
  Tile *v23; // edi
  Tile *v24; // edi
  Tile *v25; // edi
  Tile *v26; // edi
  Tile *v27; // edi
  Tile *v28; // edi
  Tile *v29; // edi
  float a2a; // [esp+0h] [ebp-38h]
  char a2; // [esp+0h] [ebp-38h]
  float a2b; // [esp+0h] [ebp-38h]
  float a2c; // [esp+0h] [ebp-38h]
  float a2d; // [esp+0h] [ebp-38h]
  float a2e; // [esp+0h] [ebp-38h]
  float a2f; // [esp+0h] [ebp-38h]
  float a2g; // [esp+0h] [ebp-38h]
  float a2h; // [esp+0h] [ebp-38h]
  float a2i; // [esp+0h] [ebp-38h]
  float a2j; // [esp+0h] [ebp-38h]
  float a2k; // [esp+0h] [ebp-38h]
  float a2l; // [esp+0h] [ebp-38h]
  float a2m; // [esp+0h] [ebp-38h]
  float a2n; // [esp+0h] [ebp-38h]
  float a2o; // [esp+0h] [ebp-38h]
  float a2p; // [esp+0h] [ebp-38h]
  float a2q; // [esp+0h] [ebp-38h]
  float a2r; // [esp+0h] [ebp-38h]
  float a2s; // [esp+0h] [ebp-38h]
  float a2t; // [esp+0h] [ebp-38h]
  float a2u; // [esp+0h] [ebp-38h]
  float a2v; // [esp+0h] [ebp-38h]
  float a2w; // [esp+0h] [ebp-38h]
  float a2x; // [esp+0h] [ebp-38h]
  float a2y; // [esp+0h] [ebp-38h]
  float a2z; // [esp+0h] [ebp-38h]
  float a2ba; // [esp+0h] [ebp-38h]
  float a2bb; // [esp+0h] [ebp-38h]
  float a2bc; // [esp+0h] [ebp-38h]
  float a2bd; // [esp+0h] [ebp-38h]
  float a2be; // [esp+0h] [ebp-38h]
  char v62; // [esp+17h] [ebp-21h]
  int a3; // [esp+18h] [ebp-20h]
  _DWORD *v64; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD *v65; // [esp+20h] [ebp-18h]
  _DWORD *v66; // [esp+24h] [ebp-14h]
  _DWORD *v67; // [esp+28h] [ebp-10h]
  _DWORD *v68; // [esp+2Ch] [ebp-Ch]
  _DWORD *v69; // [esp+30h] [ebp-8h]
  _DWORD *v70; // [esp+34h] [ebp-4h]

  a2a = flt_A53954; /*0x598800*/
  v4 = (_DWORD *)*(this + 0xC); /*0x598803*/
  v5 = (Tile *)*(this + 1); /*0x598806*/
  v6 = (_DWORD *)v4[0xE]; /*0x598809*/
  v7 = 0xFFFFFFFF; /*0x59880c*/
  v70 = v4; /*0x598814*/
  v66 = 0; /*0x598818*/
  a3 = 0xFFFFFFFF; /*0x598820*/
  Tile_SetFloat(v5, 0xFAFu, a2a); /*0x598824*/
  Tile_SetFloat((Tile *)*(this + 1), 0xFB0u, flt_A53954); /*0x59883b*/
  Tile_SetFloat((Tile *)*(this + 1), 0xFB1u, flt_A53954); /*0x598852*/
  Tile_SetFloat((Tile *)*(this + 1), 0xFB2u, flt_A53954); /*0x598869*/
  Tile_SetFloat((Tile *)*(this + 1), 0xFBDu, flt_A53954); /*0x598880*/
  Tile_SetFloat((Tile *)*(this + 1), 0xFBEu, flt_A53954); /*0x598897*/
  Tile_SetFloat((Tile *)*(this + 1), 0xFBFu, flt_A53954); /*0x5988ae*/
  Tile_SetFloat((Tile *)*(this + 1), 0xFC0u, flt_A53954); /*0x5988c5*/
  Tile_SetFloat((Tile *)*(this + 1), 0xFC1u, flt_A53954); /*0x5988dc*/
  Tile_SetFloat((Tile *)*(this + 0xE), 0xFAFu, flt_A53954); /*0x5988f3*/
  Tile_SetFloat((Tile *)*(this + 0xE), 0xFB0u, flt_A53954); /*0x59890a*/
  Tile_SetFloat((Tile *)*(this + 0xE), 0xFB1u, flt_A53954); /*0x598921*/
  Tile_SetFloat((Tile *)*(this + 0xE), 0xFB2u, flt_A53954); /*0x598938*/
  v8 = *((_BYTE *)this + 0x64) == 0; /*0x59893d*/
  v67 = (_DWORD *)*(this + 0x16); /*0x598944*/
  if ( !v8 ) /*0x598948*/
    v67 = (_DWORD *)*(this + 0x17); /*0x59894d*/
  v62 = 0; /*0x598953*/
  if ( v6 ) /*0x598958*/
  {
    while ( 1 ) /*0x598964*/
    {
      v9 = (_DWORD *)v6[2]; /*0x598964*/
      v68 = (_DWORD *)v6[1]; /*0x598974*/
      v65 = v9; /*0x598978*/
      Tile_GetFloat(v9, 0xFB7); /*0x59897c*/
      v10 = Double_To_SInt32(result); /*0x598988*/
      v64 = (_DWORD *)v10; /*0x59898a*/
      v69 = (_DWORD *)v10; /*0x59898e*/
      if ( v9 ) /*0x598992*/
      {
        if ( *((_BYTE *)this + 0x64) ) /*0x598994*/
        {
          a2 = *((_BYTE *)this + 0x61); /*0x5989a0*/
          Tile_GetFloat(v9, 0xFB9); /*0x5989a6*/
          v11 = (TESForm *)Double_To_SInt32(result); /*0x5989ab*/
          v12 = (TESObjectREFR *)*(this + 0x11); /*0x5989b0*/
        }
        else
        {
          a2 = 0; /*0x5989b5*/
          Tile_GetFloat(v9, 0xFB9); /*0x5989bc*/
          v11 = (TESForm *)Double_To_SInt32(result); /*0x5989c1*/
          v12 = (TESObjectREFR *)reference; /*0x5989c6*/
        }
        InventoryEntryOfItem = GetInventoryEntryOfItem(v12, v11, a2); /*0x5989cd*/
        v14 = (unsigned int *)InventoryEntryOfItem; /*0x5989d2*/
        if ( InventoryEntryOfItem ) /*0x5989d6*/
        {
          sub_5AA210(&v64, (int)InventoryEntryOfItem->type); /*0x5989e1*/
          ContainerEntryExtraData_DestroyDataTable(v14, v15); /*0x5989eb*/
          FormHeapFree((unsigned int)v14); /*0x5989f1*/
          v10 = (signed int)v64; /*0x5989f6*/
        }
        v9 = v65; /*0x5989fd*/
      }
      if ( (_DWORD *)v10 != v66 /*0x598a3f*/
        && (v10 & arg0) != 0
        && (Tile_GetFloat(v9, 0xFBC) == fConstant_2) == *((_BYTE *)this + 0x64) )
      {
        break; /*0x598a3f*/
      }
LABEL_50:
      if ( (Tile_GetFloat(v9, 0xFBC) == fConstant_2) == *((_BYTE *)this + 0x64) ) /*0x598c1c*/
        v66 = (_DWORD *)v10; /*0x598c1e*/
      if ( (arg0 & (unsigned int)v69) != 0 && (fConstant_2 == Tile_GetFloat(v9, 0xFBC)) == *((_BYTE *)this + 0x64) ) /*0x598c5c*/
      {
        Tile_SetFloat((Tile *)v9, 0xFB6u, fConstant_2); /*0x598c6d*/
        a2n = (float)a3; /*0x598c79*/
        Tile_SetFloat((Tile *)v9, 0xFAAu, a2n); /*0x598c81*/
        a3 = ++v7; /*0x598c8d*/
        if ( v7 > (int)v67 && !v62 ) /*0x598c9c*/
        {
          InterfaceManager_GetSingleton(0, 1); /*0x598ca6*/
          Singleton = InterfaceManager_GetSingleton(0, 1); /*0x598caf*/
          v18 = (double)(int)++Singleton->unk08C; /*0x598cbb*/
          if ( (int)Singleton->unk08C < 0 ) /*0x598cce*/
            v18 = v18 + flt_A2FC78; /*0x598cd0*/
          a2o = v18; /*0x598cd9*/
          Tile_SetFloat((Tile *)v9, 0xFF0u, a2o); /*0x598ce3*/
          v62 = 1; /*0x598ce8*/
        }
      }
      else
      {
        Tile_SetFloat((Tile *)v9, 0xFB6u, 1.0); /*0x598cfe*/
        if ( v10 <= arg0 ) /*0x598d0a*/
          v19 = flt_A53954; /*0x598d14*/
        else
          v19 = flt_A6B040; /*0x598d0c*/
        a2p = v19; /*0x598d1a*/
        Tile_SetFloat((Tile *)v9, 0xFAAu, a2p); /*0x598d22*/
      }
      if ( !v68 ) /*0x598d2c*/
      {
        v4 = v70; /*0x598d32*/
        goto LABEL_65; /*0x598d32*/
      }
      v6 = v68; /*0x598960*/
    }
    if ( v10 == 1 ) /*0x598a48*/
    {
      a2b = (float)a3; /*0x598a52*/
      Tile_SetFloat((Tile *)*(this + 1), 0xFAFu, a2b); /*0x598a5a*/
LABEL_49:
      a3 = ++v7; /*0x598bf0*/
      goto LABEL_50; /*0x598bf0*/
    }
    if ( v10 == 2 ) /*0x598a62*/
    {
      a2c = (float)a3; /*0x598a6c*/
      Tile_SetFloat((Tile *)*(this + 1), 0xFB0u, a2c); /*0x598a74*/
      goto LABEL_49; /*0x598a74*/
    }
    if ( arg0 != 4 && arg0 != 8 ) /*0x598a89*/
    {
      if ( arg0 < 0xF ) /*0x598a92*/
        goto LABEL_50; /*0x598a92*/
      if ( v10 == 4 ) /*0x598a9b*/
      {
        a2d = (float)a3; /*0x598aa5*/
        Tile_SetFloat((Tile *)*(this + 1), 0xFB1u, a2d); /*0x598aad*/
        goto LABEL_49; /*0x598aad*/
      }
      if ( v10 != 5 ) /*0x598ab5*/
      {
        switch ( v10 ) /*0x598ac3*/
        {
          case 6: /*0x598ac3*/
            a2e = (float)a3; /*0x598acd*/
            Tile_SetFloat((Tile *)*(this + 1), 0xFBDu, a2e); /*0x598ad5*/
            break;
          case 8: /*0x598ac3*/
            a2f = (float)a3; /*0x598ae7*/
            Tile_SetFloat((Tile *)*(this + 1), 0xFBEu, a2f); /*0x598aef*/
            break;
          case 9: /*0x598ac3*/
            a2g = (float)a3; /*0x598b01*/
            Tile_SetFloat((Tile *)*(this + 1), 0xFBFu, a2g); /*0x598b09*/
            break;
          case 0xA: /*0x598ac3*/
            a2h = (float)a3; /*0x598b1b*/
            Tile_SetFloat((Tile *)*(this + 1), 0xFC0u, a2h); /*0x598b23*/
            break;
          case 0xB: /*0x598ac3*/
            a2i = (float)a3; /*0x598b39*/
            Tile_SetFloat((Tile *)*(this + 1), 0xFC1u, a2i); /*0x598b41*/
            break;
          default:
            goto LABEL_50; /*0x598b2b*/
        }
        goto LABEL_49; /*0x598ad5*/
      }
      v16 = (Tile *)*(this + 1); /*0x598ab8*/
LABEL_48:
      a2m = (float)a3; /*0x598bdc*/
      Tile_SetFloat(v16, 0xFB2u, a2m); /*0x598be8*/
      goto LABEL_49; /*0x598be8*/
    }
    if ( v10 == 4 ) /*0x598b49*/
    {
LABEL_38:
      a2j = (float)a3; /*0x598b4b*/
      Tile_SetFloat((Tile *)*(this + 0xE), 0xFAFu, a2j); /*0x598b5b*/
      goto LABEL_49; /*0x598b5b*/
    }
    if ( v10 == 5 ) /*0x598b63*/
    {
LABEL_40:
      a2k = (float)a3; /*0x598b65*/
      Tile_SetFloat((Tile *)*(this + 0xE), 0xFB0u, a2k); /*0x598b75*/
      goto LABEL_49; /*0x598b75*/
    }
    if ( v10 != 6 ) /*0x598b7a*/
    {
      if ( v10 == 8 ) /*0x598b91*/
        goto LABEL_38; /*0x598b91*/
      if ( v10 == 9 ) /*0x598ba8*/
        goto LABEL_40; /*0x598ba8*/
      if ( v10 != 0xA ) /*0x598bbf*/
      {
        if ( v10 != 0xB ) /*0x598bd6*/
          goto LABEL_50; /*0x598bd6*/
        v16 = (Tile *)*(this + 0xE); /*0x598bd9*/
        goto LABEL_48; /*0x598bd9*/
      }
    }
    a2l = (float)a3; /*0x598b84*/
    Tile_SetFloat((Tile *)*(this + 0xE), 0xFB1u, a2l); /*0x598b8c*/
    goto LABEL_49; /*0x598b8c*/
  }
LABEL_65:
  v20 = v7 - 1; /*0x598d36*/
  a2q = (float)(v20 < 0 ? 0 : v20);
  Tile_SetFloat((Tile *)v4, 0xFAEu, a2q); /*0x598d58*/
  a2r = (float)(v20 < 0 ? 0 : v20);
  Tile_SetFloat((Tile *)*(this + 1), 0xFB3u, a2r); /*0x598d7d*/
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFC1) == flt_A53954 ) /*0x598d9a*/
  {
    v21 = (Tile *)*(this + 1); /*0x598d9c*/
    a2s = Tile_GetFloat(v21, 0xFB3); /*0x598dac*/
    Tile_SetFloat(v21, 0xFC1u, a2s); /*0x598db6*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFC0) == flt_A53954 ) /*0x598dd3*/
  {
    v22 = (Tile *)*(this + 1); /*0x598dd5*/
    a2t = Tile_GetFloat(v22, 0xFC1); /*0x598de5*/
    Tile_SetFloat(v22, 0xFC0u, a2t); /*0x598def*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBF) == flt_A53954 ) /*0x598e0c*/
  {
    v23 = (Tile *)*(this + 1); /*0x598e0e*/
    a2u = Tile_GetFloat(v23, 0xFC0); /*0x598e1e*/
    Tile_SetFloat(v23, 0xFBFu, a2u); /*0x598e28*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBE) == flt_A53954 ) /*0x598e45*/
  {
    v24 = (Tile *)*(this + 1); /*0x598e47*/
    a2v = Tile_GetFloat(v24, 0xFBF); /*0x598e57*/
    Tile_SetFloat(v24, 0xFBEu, a2v); /*0x598e61*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBD) == flt_A53954 ) /*0x598e7e*/
  {
    v25 = (Tile *)*(this + 1); /*0x598e80*/
    a2w = Tile_GetFloat(v25, 0xFBE); /*0x598e90*/
    Tile_SetFloat(v25, 0xFBDu, a2w); /*0x598e9a*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB2) == flt_A53954 ) /*0x598eb7*/
  {
    v26 = (Tile *)*(this + 1); /*0x598eb9*/
    a2x = Tile_GetFloat(v26, 0xFBD); /*0x598ec9*/
    Tile_SetFloat(v26, 0xFB2u, a2x); /*0x598ed3*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB1) == flt_A53954 ) /*0x598ef0*/
  {
    v27 = (Tile *)*(this + 1); /*0x598ef2*/
    a2y = Tile_GetFloat(v27, 0xFB2); /*0x598f02*/
    Tile_SetFloat(v27, 0xFB1u, a2y); /*0x598f0c*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB0) == flt_A53954 ) /*0x598f29*/
  {
    v28 = (Tile *)*(this + 1); /*0x598f2b*/
    a2z = Tile_GetFloat(v28, 0xFB1); /*0x598f3b*/
    Tile_SetFloat(v28, 0xFB0u, a2z); /*0x598f45*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFAF) == flt_A53954 ) /*0x598f62*/
  {
    v29 = (Tile *)*(this + 1); /*0x598f64*/
    a2ba = Tile_GetFloat(v29, 0xFB0); /*0x598f74*/
    Tile_SetFloat(v29, 0xFAFu, a2ba); /*0x598f7e*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB2) == flt_A53954 ) /*0x598f9b*/
  {
    a2bb = Tile_GetFloat((_DWORD *)*(this + 1), 0xFB3); /*0x598fae*/
    Tile_SetFloat((Tile *)*(this + 0xE), 0xFB2u, a2bb); /*0x598fb6*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB1) == flt_A53954 ) /*0x598fd3*/
  {
    a2bc = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB2); /*0x598fe6*/
    Tile_SetFloat((Tile *)*(this + 0xE), 0xFB1u, a2bc); /*0x598fee*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB0) == flt_A53954 ) /*0x59900b*/
  {
    a2bd = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB1); /*0x59901e*/
    Tile_SetFloat((Tile *)*(this + 0xE), 0xFB0u, a2bd); /*0x599026*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFAF) == flt_A53954 ) /*0x599043*/
  {
    a2be = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB0); /*0x599056*/
    Tile_SetFloat((Tile *)*(this + 0xE), 0xFAFu, a2be); /*0x59905e*/
  }
  return result; /*0x599063*/
}
