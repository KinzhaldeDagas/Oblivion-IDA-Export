double __userpurge sub_5AA3A0@<st0>(_DWORD *this@<ecx>, double result@<st0>, signed int arg0)
{
  int v6; // eax
  Tile *v7; // ecx
  _DWORD *v8; // ebx
  int v9; // edi
  _DWORD *v10; // edx
  _DWORD *v11; // ebx
  signed int v12; // ebp
  TESForm *v13; // eax
  EntryData *InventoryEntryOfItem; // ebx
  int v15; // edx
  Tile *v16; // ecx
  InterfaceManager *Singleton; // eax
  double v18; // st4
  double v19; // st4
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
  float v30; // [esp+0h] [ebp-34h]
  float v31; // [esp+0h] [ebp-34h]
  float v32; // [esp+0h] [ebp-34h]
  float v33; // [esp+0h] [ebp-34h]
  float v34; // [esp+0h] [ebp-34h]
  float v35; // [esp+0h] [ebp-34h]
  float v36; // [esp+0h] [ebp-34h]
  float v37; // [esp+0h] [ebp-34h]
  float v38; // [esp+0h] [ebp-34h]
  float v39; // [esp+0h] [ebp-34h]
  float v40; // [esp+0h] [ebp-34h]
  float v41; // [esp+0h] [ebp-34h]
  float v42; // [esp+0h] [ebp-34h]
  float v43; // [esp+0h] [ebp-34h]
  float v44; // [esp+0h] [ebp-34h]
  float a2; // [esp+4h] [ebp-30h]
  float a2a; // [esp+4h] [ebp-30h]
  float a2b; // [esp+4h] [ebp-30h]
  float a2c; // [esp+4h] [ebp-30h]
  float a2d; // [esp+4h] [ebp-30h]
  float a2e; // [esp+4h] [ebp-30h]
  float a2f; // [esp+4h] [ebp-30h]
  float a2g; // [esp+4h] [ebp-30h]
  float a2h; // [esp+4h] [ebp-30h]
  float a2i; // [esp+4h] [ebp-30h]
  float a2j; // [esp+4h] [ebp-30h]
  float a2k; // [esp+4h] [ebp-30h]
  float a2l; // [esp+4h] [ebp-30h]
  float a2m; // [esp+4h] [ebp-30h]
  float a2n; // [esp+4h] [ebp-30h]
  float a2o; // [esp+4h] [ebp-30h]
  char v61; // [esp+17h] [ebp-1Dh]
  int a3; // [esp+18h] [ebp-1Ch]
  _DWORD *v63; // [esp+1Ch] [ebp-18h] BYREF
  _DWORD *v64; // [esp+20h] [ebp-14h]
  _DWORD *v65; // [esp+24h] [ebp-10h]
  _DWORD *v66; // [esp+28h] [ebp-Ch]
  _DWORD *v67; // [esp+2Ch] [ebp-8h]
  _DWORD *v68; // [esp+30h] [ebp-4h]

  a2 = flt_A53954;
  v6 = *(this + 0xB);
  v7 = (Tile *)*(this + 1);
  v8 = *(_DWORD **)(v6 + 0x38);
  v9 = 0xFFFFFFFF;
  v65 = 0;
  a3 = 0xFFFFFFFF;
  Tile_SetFloat(v7, (_DWORD *)0xFAF, a2);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB0, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB1, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB2, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBB, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBC, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBD, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBE, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBF, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAF, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB0, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB1, flt_A53954);
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB2, flt_A53954);
  v68 = (_DWORD *)*(this + 0x15);
  v61 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = (_DWORD *)v8[1];
      v11 = (_DWORD *)v8[2];
      v66 = v10;
      v64 = v11;
      Tile_GetFloat(v11, 0xFB7);
      v12 = Double_To_SInt32(result);
      v63 = (_DWORD *)v12;
      v67 = (_DWORD *)v12;
      if ( v11 )
      {
        Tile_GetFloat(v11, 0xFB9);
        v13 = (TESForm *)Double_To_SInt32(result);
        InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v13, 0);
        if ( InventoryEntryOfItem )
        {
          sub_5AA210(&v63, (int)InventoryEntryOfItem->type);
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v15);
          FormHeapFree((unsigned int)InventoryEntryOfItem);
          v12 = (signed int)v63;
        }
        v11 = v64;
      }
      if ( (_DWORD *)v12 != v65 && (v12 & arg0) != 0 )
        break;
LABEL_44:
      v65 = (_DWORD *)v12;
      if ( (arg0 & (unsigned int)v67) != 0 )
      {
        Tile_SetFloat((Tile *)v11, (_DWORD *)0xFB6, fConstant_2);
        v42 = (float)a3;
        Tile_SetFloat((Tile *)v11, (_DWORD *)0xFAA, v42);
        a3 = ++v9;
        if ( v9 > (int)v68 && !v61 )
        {
          InterfaceManager_GetSingleton(0, 1);
          Singleton = InterfaceManager_GetSingleton(0, 1);
          v67 = (_DWORD *)++Singleton->unk08C;
          v18 = (double)(int)v67;
          if ( (int)v67 < 0 )
            v18 = v18 + flt_A2FC78;
          v43 = v18;
          Tile_SetFloat((Tile *)v11, (_DWORD *)0xFF0, v43);
          v61 = 1;
        }
      }
      else
      {
        Tile_SetFloat((Tile *)v11, (_DWORD *)0xFB6, 1.0);
        if ( v12 <= arg0 )
          v19 = flt_A53954;
        else
          v19 = flt_A6B040;
        v44 = v19;
        Tile_SetFloat((Tile *)v11, (_DWORD *)0xFAA, v44);
      }
      if ( !v66 )
        goto LABEL_55;
      v8 = v66;
    }
    if ( v12 == 1 )
    {
      v30 = (float)a3;
      Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFAF, v30);
LABEL_43:
      a3 = ++v9;
      goto LABEL_44;
    }
    if ( v12 == 2 )
    {
      v31 = (float)a3;
      Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB0, v31);
      goto LABEL_43;
    }
    if ( arg0 != 4 && arg0 != 8 )
    {
      if ( arg0 < 0xF )
        goto LABEL_44;
      if ( v12 == 4 )
      {
        v32 = (float)a3;
        Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB1, v32);
        goto LABEL_43;
      }
      if ( v12 != 5 )
      {
        switch ( v12 )
        {
          case 6:
            v33 = (float)a3;
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBB, v33);
            break;
          case 8:
            v34 = (float)a3;
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBC, v34);
            break;
          case 9:
            v35 = (float)a3;
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBD, v35);
            break;
          case 0xA:
            v36 = (float)a3;
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBE, v36);
            break;
          case 0xB:
            v37 = (float)a3;
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBF, v37);
            break;
          default:
            goto LABEL_44;
        }
        goto LABEL_43;
      }
      v16 = (Tile *)*(this + 1);
LABEL_42:
      v41 = (float)a3;
      Tile_SetFloat(v16, (_DWORD *)0xFB2, v41);
      goto LABEL_43;
    }
    if ( v12 == 4 )
    {
LABEL_32:
      v38 = (float)a3;
      Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAF, v38);
      goto LABEL_43;
    }
    if ( v12 == 5 )
    {
LABEL_34:
      v39 = (float)a3;
      Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB0, v39);
      goto LABEL_43;
    }
    if ( v12 != 6 )
    {
      if ( v12 == 8 )
        goto LABEL_32;
      if ( v12 == 9 )
        goto LABEL_34;
      if ( v12 != 0xA )
      {
        if ( v12 != 0xB )
          goto LABEL_44;
        v16 = (Tile *)*(this + 0xE);
        goto LABEL_42;
      }
    }
    v40 = (float)a3;
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB1, v40);
    goto LABEL_43;
  }
LABEL_55:
  v20 = v9 - 1;
  a2a = (float)(v20 < 0 ? 0 : v20);
  Tile_SetFloat((Tile *)*(this + 0xB), (_DWORD *)0xFAE, a2a);
  a2b = (float)(v20 < 0 ? 0 : v20);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB3, a2b);
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBF) == flt_A53954 )
  {
    v21 = (Tile *)*(this + 1);
    a2c = Tile_GetFloat(v21, 0xFB3);
    Tile_SetFloat(v21, (_DWORD *)0xFBF, a2c);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBE) == flt_A53954 )
  {
    v22 = (Tile *)*(this + 1);
    a2d = Tile_GetFloat(v22, 0xFBF);
    Tile_SetFloat(v22, (_DWORD *)0xFBE, a2d);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBD) == flt_A53954 )
  {
    v23 = (Tile *)*(this + 1);
    a2e = Tile_GetFloat(v23, 0xFBE);
    Tile_SetFloat(v23, (_DWORD *)0xFBD, a2e);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBC) == flt_A53954 )
  {
    v24 = (Tile *)*(this + 1);
    a2f = Tile_GetFloat(v24, 0xFBD);
    Tile_SetFloat(v24, (_DWORD *)0xFBC, a2f);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBB) == flt_A53954 )
  {
    v25 = (Tile *)*(this + 1);
    a2g = Tile_GetFloat(v25, 0xFBC);
    Tile_SetFloat(v25, (_DWORD *)0xFBB, a2g);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB2) == flt_A53954 )
  {
    v26 = (Tile *)*(this + 1);
    a2h = Tile_GetFloat(v26, 0xFBB);
    Tile_SetFloat(v26, (_DWORD *)0xFB2, a2h);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB1) == flt_A53954 )
  {
    v27 = (Tile *)*(this + 1);
    a2i = Tile_GetFloat(v27, 0xFB2);
    Tile_SetFloat(v27, (_DWORD *)0xFB1, a2i);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB0) == flt_A53954 )
  {
    v28 = (Tile *)*(this + 1);
    a2j = Tile_GetFloat(v28, 0xFB1);
    Tile_SetFloat(v28, (_DWORD *)0xFB0, a2j);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFAF) == flt_A53954 )
  {
    v29 = (Tile *)*(this + 1);
    a2k = Tile_GetFloat(v29, 0xFB0);
    Tile_SetFloat(v29, (_DWORD *)0xFAF, a2k);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB2) == flt_A53954 )
  {
    a2l = Tile_GetFloat((_DWORD *)*(this + 1), 0xFB3);
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB2, a2l);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB1) == flt_A53954 )
  {
    a2m = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB2);
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB1, a2m);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB0) == flt_A53954 )
  {
    a2n = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB1);
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB0, a2n);
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFAF) == flt_A53954 )
  {
    a2o = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB0);
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAF, a2o);
  }
  return result;
}
