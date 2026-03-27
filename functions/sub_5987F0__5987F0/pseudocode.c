double __userpurge sub_5987F0@<st0>(_DWORD *this@<ecx>, double result@<st0>, signed int arg0)
{
  _DWORD *v6; // ebp
  Tile *v7; // ecx
  _DWORD *v8; // ebx
  int v9; // edi
  bool v10; // zf
  _DWORD *v11; // ebp
  signed int v12; // ebx
  TESForm *v13; // eax
  TESObjectREFR *v14; // ecx
  EntryData *InventoryEntryOfItem; // eax
  unsigned int *v16; // ebp
  int v17; // edx
  Tile *v18; // ecx
  InterfaceManager *Singleton; // eax
  double v20; // st4
  double v21; // st4
  int v22; // edi
  Tile *v23; // edi
  Tile *v24; // edi
  Tile *v25; // edi
  Tile *v26; // edi
  Tile *v27; // edi
  Tile *v28; // edi
  Tile *v29; // edi
  Tile *v30; // edi
  Tile *v31; // edi
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
  char v64; // [esp+17h] [ebp-21h]
  int a3; // [esp+18h] [ebp-20h]
  _DWORD *v66; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD *v67; // [esp+20h] [ebp-18h]
  _DWORD *v68; // [esp+24h] [ebp-14h]
  _DWORD *v69; // [esp+28h] [ebp-10h]
  _DWORD *v70; // [esp+2Ch] [ebp-Ch]
  _DWORD *v71; // [esp+30h] [ebp-8h]
  _DWORD *v72; // [esp+34h] [ebp-4h]

  a2a = flt_A53954;
  v6 = (_DWORD *)*(this + 0xC);
  v7 = (Tile *)*(this + 1);
  v8 = (_DWORD *)v6[0xE];
  v9 = 0xFFFFFFFF;
  v72 = v6;
  v68 = 0;
  a3 = 0xFFFFFFFF;
  Tile_SetFloat(v7, (_DWORD *)0xFAF, a2a);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB0, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB1, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB2, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBD, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBE, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBF, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFC0, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFC1, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAF, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB0, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB1, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB2, flt_A53954);
  v10 = *((_BYTE *)this + 0x64) == 0;
  v69 = (_DWORD *)*(this + 0x16);
  if ( !v10 )
    v69 = (_DWORD *)*(this + 0x17);
  v64 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v11 = (_DWORD *)v8[2];
      v70 = (_DWORD *)v8[1];
      v67 = v11;
      Tile_GetFloat(v11, 0xFB7);
      v12 = Double_To_SInt32(result);
      v66 = (_DWORD *)v12;
      v71 = (_DWORD *)v12;
      if ( v11 )
      {
        if ( *((_BYTE *)this + 0x64) )
        {
          a2 = *((_BYTE *)this + 0x61);
          Tile_GetFloat(v11, 0xFB9);
          v13 = (TESForm *)Double_To_SInt32(result);
          v14 = (TESObjectREFR *)*(this + 0x11);
        }
        else
        {
          a2 = 0;
          Tile_GetFloat(v11, 0xFB9);
          v13 = (TESForm *)Double_To_SInt32(result);
          v14 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
        }
        InventoryEntryOfItem = GetInventoryEntryOfItem(v14, v13, a2);
        v16 = (unsigned int *)InventoryEntryOfItem;
        if ( InventoryEntryOfItem )
        {
          sub_5AA210(&v66, (int)InventoryEntryOfItem->type);
          ContainerEntryExtraData_DestroyDataTable(v16, v17);
          FormHeapFree((unsigned int)v16);
          v12 = (signed int)v66;
        }
        v11 = v67;
      }
      if ( (_DWORD *)v12 != v68
        && (v12 & arg0) != 0
        && (Tile_GetFloat(v11, 0xFBC) == fConstant_2) == *((_BYTE *)this + 0x64) )
      {
        break;
      }
LABEL_50:
      if ( (Tile_GetFloat(v11, 0xFBC) == fConstant_2) == *((_BYTE *)this + 0x64) )
        v68 = (_DWORD *)v12;
      if ( (arg0 & (unsigned int)v71) != 0 && (fConstant_2 == Tile_GetFloat(v11, 0xFBC)) == *((_BYTE *)this + 0x64) )
      {
        Tile_SetFloat((Tile *)v11, (_DWORD *)0xFB6, fConstant_2);
        a2n = (float)a3;
        Tile_SetFloat((Tile *)v11, (_DWORD *)0xFAA, a2n);
        a3 = ++v9;
        if ( v9 > (int)v69 && !v64 )
        {
          InterfaceManager_GetSingleton(0, 1);
          Singleton = InterfaceManager_GetSingleton(0, 1);
          v20 = (double)(int)++Singleton->unk08C;
          if ( (int)Singleton->unk08C < 0 )
            v20 = v20 + flt_A2FC78;
          a2o = v20;
          Tile_SetFloat((Tile *)v11, (_DWORD *)0xFF0, a2o);
          v64 = 1;
        }
      }
      else
      {
        Tile_SetFloat((Tile *)v11, (_DWORD *)0xFB6, 1.0);
        if ( v12 <= arg0 )
          v21 = flt_A53954;
        else
          v21 = flt_A6B040;
        a2p = v21;
        Tile_SetFloat((Tile *)v11, (_DWORD *)0xFAA, a2p);
      }
      if ( !v70 )
      {
        v6 = v72;
        goto LABEL_65;
      }
      v8 = v70;
    }
    if ( v12 == 1 )
    {
      a2b = (float)a3;
      Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFAF, a2b);
LABEL_49:
      a3 = ++v9;
      goto LABEL_50;
    }
    if ( v12 == 2 )
    {
      a2c = (float)a3;
      Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB0, a2c);
      goto LABEL_49;
    }
    if ( arg0 != 4 && arg0 != 8 )
    {
      if ( arg0 < 0xF )
        goto LABEL_50;
      if ( v12 == 4 )
      {
        a2d = (float)a3;
        Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB1, a2d);
        goto LABEL_49;
      }
      if ( v12 != 5 )
      {
        switch ( v12 )
        {
          case 6:
            a2e = (float)a3;
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBD, a2e);
            break;
          case 8:
            a2f = (float)a3;
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBE, a2f);
            break;
          case 9:
            a2g = (float)a3;
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBF, a2g);
            break;
          case 0xA:
            a2h = (float)a3;
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFC0, a2h);
            break;
          case 0xB:
            a2i = (float)a3;
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFC1, a2i);
            break;
          default:
            goto LABEL_50;
        }
        goto LABEL_49;
      }
      v18 = (Tile *)*(this + 1);
LABEL_48:
      a2m = (float)a3;
      Tile_SetFloat(v18, (_DWORD *)0xFB2, a2m);
      goto LABEL_49;
    }
    if ( v12 == 4 )
    {
LABEL_38:
      a2j = (float)a3;
      Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAF, a2j);
      goto LABEL_49;
    }
    if ( v12 == 5 )
    {
LABEL_40:
      a2k = (float)a3;
      Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB0, a2k);
      goto LABEL_49;
    }
    if ( v12 != 6 )
    {
      if ( v12 == 8 )
        goto LABEL_38;
      if ( v12 == 9 )
        goto LABEL_40;
      if ( v12 != 0xA )
      {
        if ( v12 != 0xB )
          goto LABEL_50;
        v18 = (Tile *)*(this + 0xE);
        goto LABEL_48;
      }
    }
    a2l = (float)a3;
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB1, a2l);
    goto LABEL_49;
  }
LABEL_65:
  v22 = v9 - 1;
  a2q = (float)(v22 < 0 ? 0 : v22);
  Tile_SetFloat((Tile *)v6, (_DWORD *)0xFAE, a2q);
  a2r = (float)(v22 < 0 ? 0 : v22);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB3, a2r);
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFC1) == flt_A53954 )
  {
    v23 = (Tile *)*(this + 1);
    a2s = Tile_GetFloat(v23, 0xFB3);
    Tile_SetFloat(v23, (_DWORD *)0xFC1, a2s);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFC0) == flt_A53954 )
  {
    v24 = (Tile *)*(this + 1);
    a2t = Tile_GetFloat(v24, 0xFC1);
    Tile_SetFloat(v24, (_DWORD *)0xFC0, a2t);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBF) == flt_A53954 )
  {
    v25 = (Tile *)*(this + 1);
    a2u = Tile_GetFloat(v25, 0xFC0);
    Tile_SetFloat(v25, (_DWORD *)0xFBF, a2u);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBE) == flt_A53954 )
  {
    v26 = (Tile *)*(this + 1);
    a2v = Tile_GetFloat(v26, 0xFBF);
    Tile_SetFloat(v26, (_DWORD *)0xFBE, a2v);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBD) == flt_A53954 )
  {
    v27 = (Tile *)*(this + 1);
    a2w = Tile_GetFloat(v27, 0xFBE);
    Tile_SetFloat(v27, (_DWORD *)0xFBD, a2w);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB2) == flt_A53954 )
  {
    v28 = (Tile *)*(this + 1);
    a2x = Tile_GetFloat(v28, 0xFBD);
    Tile_SetFloat(v28, (_DWORD *)0xFB2, a2x);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB1) == flt_A53954 )
  {
    v29 = (Tile *)*(this + 1);
    a2y = Tile_GetFloat(v29, 0xFB2);
    Tile_SetFloat(v29, (_DWORD *)0xFB1, a2y);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB0) == flt_A53954 )
  {
    v30 = (Tile *)*(this + 1);
    a2z = Tile_GetFloat(v30, 0xFB1);
    Tile_SetFloat(v30, (_DWORD *)0xFB0, a2z);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFAF) == flt_A53954 )
  {
    v31 = (Tile *)*(this + 1);
    a2ba = Tile_GetFloat(v31, 0xFB0);
    Tile_SetFloat(v31, (_DWORD *)0xFAF, a2ba);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB2) == flt_A53954 )
  {
    a2bb = Tile_GetFloat((_DWORD *)*(this + 1), 0xFB3);
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB2, a2bb);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB1) == flt_A53954 )
  {
    a2bc = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB2);
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB1, a2bc);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB0) == flt_A53954 )
  {
    a2bd = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB1);
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB0, a2bd);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFAF) == flt_A53954 )
  {
    a2be = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB0);
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAF, a2be);
  }
  return result;
}
