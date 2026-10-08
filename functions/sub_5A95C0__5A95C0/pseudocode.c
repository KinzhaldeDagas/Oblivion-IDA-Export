char __thiscall sub_5A95C0(int this, char *arg0, float a3, char *a2, char *a5)
{
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // kr00_4
  double v8; // st7
  double v9; // st6
  double v10; // st4
  bool v11; // c0
  double v12; // st7
  int v13; // kr04_4
  double v14; // st5
  BSStringT *v15; // ecx
  const char ***v16; // edi
  int v17; // esi
  const char ***v18; // eax
  const char *v19; // eax
  const char *v20; // ecx
  int v21; // eax
  _DWORD *v22; // eax
  unsigned int v23; // esi
  Tile *v24; // ecx
  char v26; // bl
  double v27; // st7
  double v28; // st6
  double v29; // st5
  const char *v30; // ecx
  int v31; // eax
  int v32; // kr08_4
  double v33; // st4
  int v34; // kr0C_4
  double v35; // st4
  double v36; // st4
  float a2a; // [esp+28h] [ebp+Ch]

  if ( !arg0 ) /*0x5a95d1*/
    return 0; /*0x5a994e*/
  if ( *(_DWORD *)(this + 0x24) == 2 ) /*0x5a95dd*/
  {
    sub_584820(this); /*0x5a95eb*/
  }
  else if ( *(_DWORD *)(this + 0x24) == 4 ) /*0x5a95e2*/
  {
    Menu::StartFadeIn((_DWORD *)this); /*0x5a95e4*/
  }
  v5 = FormHeapAlloc(0x20u); /*0x5a95f3*/
  if ( v5 ) /*0x5a95fd*/
  {
    *(_DWORD *)v5 = 0; /*0x5a95ff*/
    *(_WORD *)(v5 + 4) = 0; /*0x5a9601*/
    *(_WORD *)(v5 + 6) = 0; /*0x5a9605*/
    *(_DWORD *)(v5 + 0x10) = 0; /*0x5a9609*/
    *(_WORD *)(v5 + 0x14) = 0; /*0x5a960c*/
    *(_WORD *)(v5 + 0x16) = 0; /*0x5a9610*/
    *(_DWORD *)(v5 + 0x18) = 0; /*0x5a9614*/
    *(_WORD *)(v5 + 0x1C) = 0; /*0x5a9617*/
    *(_WORD *)(v5 + 0x1E) = 0; /*0x5a961b*/
    v6 = v5; /*0x5a961f*/
  }
  else
  {
    v6 = 0; /*0x5a9623*/
  }
  BSStringT_Set((BSStringT *)v6, 0, 0); /*0x5a9629*/
  BSStringT_Append((BSStringT *)v6, arg0); /*0x5a9631*/
  v7 = strlen(arg0); /*0x5a9638*/
  v8 = (double)v7; /*0x5a9651*/
  if ( v7 < 0 ) /*0x5a9655*/
    v8 = v8 + dbl_A30E60; /*0x5a9657*/
  v9 = dbl_A46E48; /*0x5a965d*/
  v10 = dbl_A30E48; /*0x5a9669*/
  v11 = v10 < v8 / v9 + 1.0; /*0x5a966f*/
  v12 = v10; /*0x5a9673*/
  if ( v11 ) /*0x5a9678*/
  {
    v13 = strlen(arg0); /*0x5a967e*/
    v14 = (double)v13; /*0x5a9692*/
    if ( v13 < 0 ) /*0x5a9696*/
      v14 = v14 + dbl_A30E60; /*0x5a9698*/
    v12 = v14 / v9 + 1.0; /*0x5a96a0*/
  }
  *(float *)(v6 + 8) = v12; /*0x5a96ac*/
  *(_BYTE *)(v6 + 0xC) = 0; /*0x5a96b5*/
  BSStringT_Set((BSStringT *)(v6 + 0x10), a2, 0); /*0x5a96b9*/
  v15 = (BSStringT *)(v6 + 0x18); /*0x5a96c5*/
  if ( a5 ) /*0x5a96c8*/
    BSStringT_Set(v15, a5, 0); /*0x5a96cb*/
  else
    BSStringT_Set(v15, 0, 0); /*0x5a96ce*/
  v16 = (const char ***)(this + 0x2C); /*0x5a96d7*/
  v17 = this + 0x2C; /*0x5a96da*/
  if ( this == 0xFFFFFFD4 ) /*0x5a96dc*/
  {
LABEL_26:
    if ( *(_DWORD *)(this + 0x30) || *v16 ) /*0x5a9729*/
    {
      v26 = 0; /*0x5a9827*/
      if ( this + 0x2C != *(_DWORD *)(this + 0x30) ) /*0x5a982c*/
        goto LABEL_53; /*0x5a982c*/
      v27 = dbl_A30E48; /*0x5a9832*/
      v28 = 1.0; /*0x5a9838*/
      v29 = dbl_A46E48; /*0x5a983a*/
      do /*0x5a98ef*/
      {
        if ( *(_DWORD *)v6 && (v30 = **v16) != 0 ) /*0x5a984d*/
        {
          v31 = CRT_StricmpLocaleDispatch(v30, *(const char **)v6); /*0x5a9857*/
          v27 = dbl_A30E48; /*0x5a985c*/
          v28 = 1.0; /*0x5a9865*/
          v29 = dbl_A46E48; /*0x5a9867*/
        }
        else
        {
          v31 = 2 * (*(_DWORD *)v6 == 0) - 1; /*0x5a987a*/
        }
        if ( !v31 ) /*0x5a987e*/
        {
          v32 = strlen(arg0); /*0x5a9886*/
          v33 = (double)v32; /*0x5a989a*/
          if ( v32 < 0 ) /*0x5a989e*/
            v33 = v33 + dbl_A30E60; /*0x5a98a0*/
          if ( v33 / v29 + v28 <= v27 ) /*0x5a98b1*/
          {
            v36 = v27; /*0x5a98db*/
          }
          else
          {
            v34 = strlen(arg0); /*0x5a98b5*/
            v35 = (double)v34; /*0x5a98c9*/
            if ( v34 < 0 ) /*0x5a98cd*/
              v35 = v35 + dbl_A30E60; /*0x5a98cf*/
            v36 = v35 / v29 + v28; /*0x5a98d7*/
          }
          a2a = v36; /*0x5a98df*/
          v26 = 1; /*0x5a98e7*/
          *((float *)*v16 + 2) = a2a; /*0x5a98e9*/
        }
      }
      while ( this + 0x2C == *(_DWORD *)(this + 0x30) ); /*0x5a98ef*/
      if ( v26 ) /*0x5a98fd*/
      {
        sub_5A9060((unsigned int *)v6); /*0x5a9924*/
        FormHeapFree(v6); /*0x5a992a*/
        *(float *)(this + 0x3C) = a3; /*0x5a993a*/
        *(_BYTE *)(this + 0x38) = 2; /*0x5a993e*/
        return 1; /*0x5a9944*/
      }
      else
      {
LABEL_53:
        BSSimpleList_PushBack(v16, v6); /*0x5a9902*/
        *(float *)(this + 0x3C) = a3; /*0x5a9910*/
        *(_BYTE *)(this + 0x38) = 2; /*0x5a9913*/
        return 1; /*0x5a9919*/
      }
    }
    else
    {
      BSSimpleList_PushBack(v16, v6); /*0x5a9735*/
      *((_BYTE *)*v16 + 0xC) = 1; /*0x5a9740*/
      Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFDE, (char *)**v16); /*0x5a9751*/
      Tile_SetFloat(*(Tile **)(this + 0x34), 0xFA1u, fConstant_2); /*0x5a9768*/
      Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFAF, (char *)(*v16)[4]); /*0x5a977b*/
      if ( a5 ) /*0x5a9782*/
      {
        TESObjectREFR_PlayResolvedAnimSoundNote(reference, a5, 0, 0x121, 0); /*0x5a9794*/
        v23 = (unsigned int)v22; /*0x5a9799*/
        if ( v22 ) /*0x5a979d*/
        {
          sub_6B73E0(v22); /*0x5a97a1*/
          FormHeapFree(v23); /*0x5a97a7*/
        }
      }
      v24 = *(Tile **)(this + 0x34); /*0x5a97b6*/
      if ( (*v16)[4] ) /*0x5a97b1*/
        Tile_SetFloat(v24, 0xFB0u, fConstant_2); /*0x5a980b*/
      else
        Tile_SetFloat(v24, 0xFB0u, 1.0); /*0x5a97c5*/
      *(float *)(this + 0x3C) = a3; /*0x5a97cf*/
      *(_BYTE *)(this + 0x38) = 2; /*0x5a97d2*/
      return 1; /*0x5a97d8*/
    }
  }
  else
  {
    while ( 1 ) /*0x5a96e0*/
    {
      v18 = *(const char ****)(v17 + 4); /*0x5a96e0*/
      if ( v18 ) /*0x5a96e7*/
      {
        v19 = **v18; /*0x5a96eb*/
        if ( v19 && (v20 = **(const char ***)v17) != 0 ) /*0x5a96f5*/
          v21 = CRT_StricmpLocaleDispatch(v20, v19); /*0x5a96f9*/
        else
          v21 = 2 * (v19 == 0) - 1; /*0x5a970e*/
        if ( !v21 ) /*0x5a9712*/
          break; /*0x5a9712*/
      }
      v17 = *(_DWORD *)(v17 + 4); /*0x5a9718*/
      if ( !v17 ) /*0x5a971d*/
        goto LABEL_26; /*0x5a971d*/
    }
    sub_5A9060((unsigned int *)v6); /*0x5a97e3*/
    FormHeapFree(v6); /*0x5a97e9*/
    return 0; /*0x5a97f4*/
  }
}
