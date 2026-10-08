// AchievementsNative evidence: InventoryMenu list update helper sets list user0 to last visible list index and controls row user8/listindex for filtered inventory rows.
double __userpurge sub_5AA3A0@<st0>(_DWORD *this@<ecx>, double result@<st0>, signed int arg0)
{
  int v4; // eax
  Tile *v5; // ecx
  _DWORD *v6; // ebx
  int v7; // edi
  _DWORD *v8; // edx
  _DWORD *v9; // ebx
  signed int v10; // ebp
  TESForm *v11; // eax
  EntryData *InventoryEntryOfItem; // ebx
  int v13; // edx
  Tile *v14; // ecx
  InterfaceManager *Singleton; // eax
  double v16; // st6
  double v17; // st6
  int v18; // edi
  Tile *v19; // edi
  Tile *v20; // edi
  Tile *v21; // edi
  Tile *v22; // edi
  Tile *v23; // edi
  Tile *v24; // edi
  Tile *v25; // edi
  Tile *v26; // edi
  Tile *v27; // edi
  float v28; // [esp+0h] [ebp-34h]
  float v29; // [esp+0h] [ebp-34h]
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
  char v59; // [esp+17h] [ebp-1Dh]
  int a3; // [esp+18h] [ebp-1Ch]
  _DWORD *v61; // [esp+1Ch] [ebp-18h] BYREF
  _DWORD *v62; // [esp+20h] [ebp-14h]
  _DWORD *v63; // [esp+24h] [ebp-10h]
  _DWORD *v64; // [esp+28h] [ebp-Ch]
  _DWORD *v65; // [esp+2Ch] [ebp-8h]
  _DWORD *v66; // [esp+30h] [ebp-4h]

  a2 = flt_A53954; /*0x5aa3af*/
  v4 = *(this + 0xB); /*0x5aa3b2*/
  v5 = (Tile *)*(this + 1); /*0x5aa3b5*/
  v6 = *(_DWORD **)(v4 + 0x38); /*0x5aa3b8*/
  v7 = 0xFFFFFFFF; /*0x5aa3bb*/
  v63 = 0; /*0x5aa3c3*/
  a3 = 0xFFFFFFFF; /*0x5aa3cb*/
  Tile_SetFloat(v5, (_DWORD *)0xFAF, a2); /*0x5aa3cf*/
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB0, flt_A53954); /*0x5aa3e6*/
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB1, flt_A53954); /*0x5aa3fd*/
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB2, flt_A53954); /*0x5aa414*/
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBB, flt_A53954); /*0x5aa42b*/
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBC, flt_A53954); /*0x5aa442*/
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBD, flt_A53954); /*0x5aa459*/
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBE, flt_A53954); /*0x5aa470*/
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBF, flt_A53954); /*0x5aa487*/
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAF, flt_A53954); /*0x5aa49e*/
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB0, flt_A53954); /*0x5aa4b5*/
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB1, flt_A53954); /*0x5aa4cc*/
  Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB2, flt_A53954); /*0x5aa4e3*/
  v66 = (_DWORD *)*(this + 0x15); /*0x5aa4ed*/
  v59 = 0; /*0x5aa4f1*/
  if ( v6 ) /*0x5aa4f6*/
  {
    while ( 1 ) /*0x5aa504*/
    {
      v8 = (_DWORD *)v6[1]; /*0x5aa504*/
      v9 = (_DWORD *)v6[2]; /*0x5aa50a*/
      v64 = v8; /*0x5aa513*/
      v62 = v9; /*0x5aa517*/
      Tile_GetFloat(v9, 0xFB7); /*0x5aa51b*/
      v10 = Double_To_SInt32(result); /*0x5aa527*/
      v61 = (_DWORD *)v10; /*0x5aa529*/
      v65 = (_DWORD *)v10; /*0x5aa52d*/
      if ( v9 ) /*0x5aa531*/
      {
        Tile_GetFloat(v9, 0xFB9); /*0x5aa53c*/
        v11 = (TESForm *)Double_To_SInt32(result); /*0x5aa541*/
        InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v11, 0); /*0x5aa552*/
        if ( InventoryEntryOfItem ) /*0x5aa556*/
        {
          sub_5AA210(&v61, (int)InventoryEntryOfItem->type); /*0x5aa561*/
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v13); /*0x5aa56b*/
          FormHeapFree((unsigned int)InventoryEntryOfItem); /*0x5aa571*/
          v10 = (signed int)v61; /*0x5aa576*/
        }
        v9 = v62; /*0x5aa57d*/
      }
      if ( (_DWORD *)v10 != v63 && (v10 & arg0) != 0 ) /*0x5aa591*/
        break; /*0x5aa591*/
LABEL_44:
      v63 = (_DWORD *)v10; /*0x5aa742*/
      if ( (arg0 & (unsigned int)v65) != 0 ) /*0x5aa751*/
      {
        Tile_SetFloat((Tile *)v9, (_DWORD *)0xFB6, fConstant_2); /*0x5aa765*/
        v40 = (float)a3; /*0x5aa771*/
        Tile_SetFloat((Tile *)v9, (_DWORD *)0xFAA, v40); /*0x5aa779*/
        a3 = ++v7; /*0x5aa785*/
        if ( v7 > (int)v66 && !v59 ) /*0x5aa794*/
        {
          InterfaceManager_GetSingleton(0, 1); /*0x5aa79e*/
          Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5aa7a7*/
          v65 = (_DWORD *)++Singleton->unk08C; /*0x5aa7bc*/
          v16 = (double)(int)v65; /*0x5aa7c0*/
          if ( (int)v65 < 0 ) /*0x5aa7c4*/
            v16 = v16 + flt_A2FC78; /*0x5aa7c6*/
          v41 = v16; /*0x5aa7cf*/
          Tile_SetFloat((Tile *)v9, (_DWORD *)0xFF0, v41); /*0x5aa7d9*/
          v59 = 1; /*0x5aa7de*/
        }
      }
      else
      {
        Tile_SetFloat((Tile *)v9, (_DWORD *)0xFB6, 1.0); /*0x5aa7ef*/
        if ( v10 <= arg0 ) /*0x5aa7fb*/
          v17 = flt_A53954; /*0x5aa805*/
        else
          v17 = flt_A6B040; /*0x5aa7fd*/
        v42 = v17; /*0x5aa80b*/
        Tile_SetFloat((Tile *)v9, (_DWORD *)0xFAA, v42); /*0x5aa813*/
      }
      if ( !v64 ) /*0x5aa81d*/
        goto LABEL_55; /*0x5aa81d*/
      v6 = v64; /*0x5aa500*/
    }
    if ( v10 == 1 ) /*0x5aa59a*/
    {
      v28 = (float)a3; /*0x5aa5a4*/
      Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFAF, v28); /*0x5aa5ac*/
LABEL_43:
      a3 = ++v7; /*0x5aa73e*/
      goto LABEL_44; /*0x5aa73e*/
    }
    if ( v10 == 2 ) /*0x5aa5b4*/
    {
      v29 = (float)a3; /*0x5aa5be*/
      Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB0, v29); /*0x5aa5c6*/
      goto LABEL_43; /*0x5aa5c6*/
    }
    if ( arg0 != 4 && arg0 != 8 ) /*0x5aa5d7*/
    {
      if ( arg0 < 0xF ) /*0x5aa5e0*/
        goto LABEL_44; /*0x5aa5e0*/
      if ( v10 == 4 ) /*0x5aa5e9*/
      {
        v30 = (float)a3; /*0x5aa5f3*/
        Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB1, v30); /*0x5aa5fb*/
        goto LABEL_43; /*0x5aa5fb*/
      }
      if ( v10 != 5 ) /*0x5aa603*/
      {
        switch ( v10 ) /*0x5aa611*/
        {
          case 6: /*0x5aa611*/
            v31 = (float)a3; /*0x5aa61b*/
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBB, v31); /*0x5aa623*/
            break;
          case 8: /*0x5aa611*/
            v32 = (float)a3; /*0x5aa635*/
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBC, v32); /*0x5aa63d*/
            break;
          case 9: /*0x5aa611*/
            v33 = (float)a3; /*0x5aa64f*/
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBD, v33); /*0x5aa657*/
            break;
          case 0xA: /*0x5aa611*/
            v34 = (float)a3; /*0x5aa669*/
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBE, v34); /*0x5aa671*/
            break;
          case 0xB: /*0x5aa611*/
            v35 = (float)a3; /*0x5aa687*/
            Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFBF, v35); /*0x5aa68f*/
            break;
          default:
            goto LABEL_44; /*0x5aa679*/
        }
        goto LABEL_43; /*0x5aa623*/
      }
      v14 = (Tile *)*(this + 1); /*0x5aa606*/
LABEL_42:
      v39 = (float)a3; /*0x5aa72a*/
      Tile_SetFloat(v14, (_DWORD *)0xFB2, v39); /*0x5aa736*/
      goto LABEL_43; /*0x5aa736*/
    }
    if ( v10 == 4 ) /*0x5aa697*/
    {
LABEL_32:
      v36 = (float)a3; /*0x5aa699*/
      Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAF, v36); /*0x5aa6a9*/
      goto LABEL_43; /*0x5aa6a9*/
    }
    if ( v10 == 5 ) /*0x5aa6b1*/
    {
LABEL_34:
      v37 = (float)a3; /*0x5aa6b3*/
      Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB0, v37); /*0x5aa6c3*/
      goto LABEL_43; /*0x5aa6c3*/
    }
    if ( v10 != 6 ) /*0x5aa6c8*/
    {
      if ( v10 == 8 ) /*0x5aa6df*/
        goto LABEL_32; /*0x5aa6df*/
      if ( v10 == 9 ) /*0x5aa6f6*/
        goto LABEL_34; /*0x5aa6f6*/
      if ( v10 != 0xA ) /*0x5aa70d*/
      {
        if ( v10 != 0xB ) /*0x5aa724*/
          goto LABEL_44; /*0x5aa724*/
        v14 = (Tile *)*(this + 0xE); /*0x5aa727*/
        goto LABEL_42; /*0x5aa727*/
      }
    }
    v38 = (float)a3; /*0x5aa6d2*/
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB1, v38); /*0x5aa6da*/
    goto LABEL_43; /*0x5aa6da*/
  }
LABEL_55:
  v18 = v7 - 1; /*0x5aa824*/
  a2a = (float)(v18 < 0 ? 0 : v18);
  Tile_SetFloat((Tile *)*(this + 0xB), (_DWORD *)0xFAE, a2a); /*0x5aa847*/
  a2b = (float)(v18 < 0 ? 0 : v18);
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB3, a2b); /*0x5aa86c*/
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBF) == flt_A53954 ) /*0x5aa889*/
  {
    v19 = (Tile *)*(this + 1); /*0x5aa88b*/
    a2c = Tile_GetFloat(v19, 0xFB3); /*0x5aa89b*/
    Tile_SetFloat(v19, (_DWORD *)0xFBF, a2c); /*0x5aa8a5*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBE) == flt_A53954 ) /*0x5aa8c2*/
  {
    v20 = (Tile *)*(this + 1); /*0x5aa8c4*/
    a2d = Tile_GetFloat(v20, 0xFBF); /*0x5aa8d4*/
    Tile_SetFloat(v20, (_DWORD *)0xFBE, a2d); /*0x5aa8de*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBD) == flt_A53954 ) /*0x5aa8fb*/
  {
    v21 = (Tile *)*(this + 1); /*0x5aa8fd*/
    a2e = Tile_GetFloat(v21, 0xFBE); /*0x5aa90d*/
    Tile_SetFloat(v21, (_DWORD *)0xFBD, a2e); /*0x5aa917*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBC) == flt_A53954 ) /*0x5aa934*/
  {
    v22 = (Tile *)*(this + 1); /*0x5aa936*/
    a2f = Tile_GetFloat(v22, 0xFBD); /*0x5aa946*/
    Tile_SetFloat(v22, (_DWORD *)0xFBC, a2f); /*0x5aa950*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFBB) == flt_A53954 ) /*0x5aa96d*/
  {
    v23 = (Tile *)*(this + 1); /*0x5aa96f*/
    a2g = Tile_GetFloat(v23, 0xFBC); /*0x5aa97f*/
    Tile_SetFloat(v23, (_DWORD *)0xFBB, a2g); /*0x5aa989*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB2) == flt_A53954 ) /*0x5aa9a6*/
  {
    v24 = (Tile *)*(this + 1); /*0x5aa9a8*/
    a2h = Tile_GetFloat(v24, 0xFBB); /*0x5aa9b8*/
    Tile_SetFloat(v24, (_DWORD *)0xFB2, a2h); /*0x5aa9c2*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB1) == flt_A53954 ) /*0x5aa9df*/
  {
    v25 = (Tile *)*(this + 1); /*0x5aa9e1*/
    a2i = Tile_GetFloat(v25, 0xFB2); /*0x5aa9f1*/
    Tile_SetFloat(v25, (_DWORD *)0xFB1, a2i); /*0x5aa9fb*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFB0) == flt_A53954 ) /*0x5aaa18*/
  {
    v26 = (Tile *)*(this + 1); /*0x5aaa1a*/
    a2j = Tile_GetFloat(v26, 0xFB1); /*0x5aaa2a*/
    Tile_SetFloat(v26, (_DWORD *)0xFB0, a2j); /*0x5aaa34*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 1), 0xFAF) == flt_A53954 ) /*0x5aaa51*/
  {
    v27 = (Tile *)*(this + 1); /*0x5aaa53*/
    a2k = Tile_GetFloat(v27, 0xFB0); /*0x5aaa63*/
    Tile_SetFloat(v27, (_DWORD *)0xFAF, a2k); /*0x5aaa6d*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB2) == flt_A53954 ) /*0x5aaa8a*/
  {
    a2l = Tile_GetFloat((_DWORD *)*(this + 1), 0xFB3); /*0x5aaa9d*/
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB2, a2l); /*0x5aaaa5*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB1) == flt_A53954 ) /*0x5aaac2*/
  {
    a2m = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB2); /*0x5aaad5*/
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB1, a2m); /*0x5aaadd*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB0) == flt_A53954 ) /*0x5aaafa*/
  {
    a2n = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB1); /*0x5aab0d*/
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFB0, a2n); /*0x5aab15*/
  }
  if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFAF) == flt_A53954 ) /*0x5aab32*/
  {
    a2o = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB0); /*0x5aab45*/
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAF, a2o); /*0x5aab4d*/
  }
  return result; /*0x5aab52*/
}
