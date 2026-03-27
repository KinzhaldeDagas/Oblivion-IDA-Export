char __thiscall sub_5A95C0(int this, char *arg0, float a3, char *a2, char *a5)
{
  int v8; // eax
  unsigned int v9; // ebp
  int v10; // kr00_4
  double v11; // st7
  double v12; // st6
  double v13; // st4
  bool v14; // c0
  double v15; // st7
  int v16; // kr04_4
  double v17; // st5
  BSStringT *v18; // ecx
  char ***v19; // edi
  int v20; // esi
  char ***v21; // eax
  char *v22; // eax
  char *v23; // ecx
  int v24; // eax
  int *v25; // eax
  unsigned int v26; // esi
  Tile *v27; // ecx
  char v29; // bl
  double v30; // st7
  double v31; // st6
  double v32; // st5
  char *v33; // ecx
  int v34; // eax
  int v35; // kr08_4
  double v36; // st4
  int v37; // kr0C_4
  double v38; // st4
  double v39; // st4
  float a2a; // [esp+28h] [ebp+Ch]

  if ( !arg0 )
    return 0;
  if ( *(_DWORD *)(this + 0x24) == 2 )
  {
    sub_584820(this);
  }
  else if ( *(_DWORD *)(this + 0x24) == 4 )
  {
    sub_584390(this);
  }
  v8 = FormHeapAlloc(0x20u);
  if ( v8 )
  {
    *(_DWORD *)v8 = 0;
    *(_WORD *)(v8 + 4) = 0;
    *(_WORD *)(v8 + 6) = 0;
    *(_DWORD *)(v8 + 0x10) = 0;
    *(_WORD *)(v8 + 0x14) = 0;
    *(_WORD *)(v8 + 0x16) = 0;
    *(_DWORD *)(v8 + 0x18) = 0;
    *(_WORD *)(v8 + 0x1C) = 0;
    *(_WORD *)(v8 + 0x1E) = 0;
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  BSStringT_Set((BSStringT *)v9, 0, 0);
  BSStringT_Append((BSStringT *)v9, arg0);
  v10 = strlen(arg0);
  v11 = (double)v10;
  if ( v10 < 0 )
    v11 = v11 + dbl_A30E60;
  v12 = dbl_A46E48;
  v13 = dbl_A30E48;
  v14 = v13 < v11 / v12 + 1.0;
  v15 = v13;
  if ( v14 )
  {
    v16 = strlen(arg0);
    v17 = (double)v16;
    if ( v16 < 0 )
      v17 = v17 + dbl_A30E60;
    v15 = v17 / v12 + 1.0;
  }
  *(float *)(v9 + 8) = v15;
  *(_BYTE *)(v9 + 0xC) = 0;
  BSStringT_Set((BSStringT *)(v9 + 0x10), a2, 0);
  v18 = (BSStringT *)(v9 + 0x18);
  if ( a5 )
    BSStringT_Set(v18, a5, 0);
  else
    BSStringT_Set(v18, 0, 0);
  v19 = (char ***)(this + 0x2C);
  v20 = this + 0x2C;
  if ( this == 0xFFFFFFD4 )
  {
LABEL_26:
    if ( *(_DWORD *)(this + 0x30) || *v19 )
    {
      v29 = 0;
      if ( this + 0x2C != *(_DWORD *)(this + 0x30) )
        goto LABEL_53;
      v30 = dbl_A30E48;
      v31 = 1.0;
      v32 = dbl_A46E48;
      do
      {
        if ( *(_DWORD *)v9 && (v33 = **v19) != 0 )
        {
          v34 = _strcmp(v33, *(char **)v9);
          v30 = dbl_A30E48;
          v31 = 1.0;
          v32 = dbl_A46E48;
        }
        else
        {
          v34 = 2 * (*(_DWORD *)v9 == 0) - 1;
        }
        if ( !v34 )
        {
          v35 = strlen(arg0);
          v36 = (double)v35;
          if ( v35 < 0 )
            v36 = v36 + dbl_A30E60;
          if ( v36 / v32 + v31 <= v30 )
          {
            v39 = v30;
          }
          else
          {
            v37 = strlen(arg0);
            v38 = (double)v37;
            if ( v37 < 0 )
              v38 = v38 + dbl_A30E60;
            v39 = v38 / v32 + v31;
          }
          a2a = v39;
          v29 = 1;
          *((float *)*v19 + 2) = a2a;
        }
      }
      while ( this + 0x2C == *(_DWORD *)(this + 0x30) );
      if ( v29 )
      {
        sub_5A9060((unsigned int *)v9);
        FormHeapFree(v9);
        *(float *)(this + 0x3C) = a3;
        *(_BYTE *)(this + 0x38) = 2;
        return 1;
      }
      else
      {
LABEL_53:
        BSSimpleList_PushBack(v19, v9);
        *(float *)(this + 0x3C) = a3;
        *(_BYTE *)(this + 0x38) = 2;
        return 1;
      }
    }
    else
    {
      BSSimpleList_PushBack(v19, v9);
      *((_BYTE *)*v19 + 0xC) = 1;
      Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFDE, **v19);
      Tile_SetFloat(*(Tile **)(this + 0x34), (_DWORD *)0xFA1, fConstant_2);
      Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFAF, (*v19)[4]);
      if ( a5 )
      {
        v25 = sub_65A970(TESDataHandler_g_PlayerRef, a5, 0, 0x121, 0);
        v26 = (unsigned int)v25;
        if ( v25 )
        {
          sub_6B73E0(v25);
          FormHeapFree(v26);
        }
      }
      v27 = *(Tile **)(this + 0x34);
      if ( (*v19)[4] )
        Tile_SetFloat(v27, (_DWORD *)0xFB0, fConstant_2);
      else
        Tile_SetFloat(v27, (_DWORD *)0xFB0, 1.0);
      *(float *)(this + 0x3C) = a3;
      *(_BYTE *)(this + 0x38) = 2;
      return 1;
    }
  }
  else
  {
    while ( 1 )
    {
      v21 = *(char ****)(v20 + 4);
      if ( v21 )
      {
        v22 = **v21;
        if ( v22 && (v23 = **(char ***)v20) != 0 )
          v24 = _strcmp(v23, v22);
        else
          v24 = 2 * (v22 == 0) - 1;
        if ( !v24 )
          break;
      }
      v20 = *(_DWORD *)(v20 + 4);
      if ( !v20 )
        goto LABEL_26;
    }
    sub_5A9060((unsigned int *)v9);
    FormHeapFree(v9);
    return 0;
  }
}
