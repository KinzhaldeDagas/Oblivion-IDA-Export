_DWORD *__userpurge sub_784C30@<eax>(_DWORD *this@<ecx>, int a2@<edi>, _DWORD *a3, int a4, int a5)
{
  int *v6; // ebp
  int v7; // edi
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int **v11; // ebx
  int *v12; // eax
  int v13; // ebx
  int v14; // eax
  int *v15; // eax
  char v16; // al
  _DWORD *v17; // ecx
  _BYTE *v18; // eax
  bool v19; // zf
  int v20; // eax
  int v22; // ecx
  rsize_t v23; // [esp-4h] [ebp-6Ch]
  int v25; // [esp+18h] [ebp-50h] BYREF
  char v26; // [esp+1Ch] [ebp-4Ch]
  int v27; // [esp+2Ch] [ebp-3Ch]
  int v28; // [esp+30h] [ebp-38h]
  _DWORD v29[13]; // [esp+34h] [ebp-34h] BYREF

  if ( *(_BYTE *)(a5 + 0x2D) )
  {
    LODWORD(v23) = 0x1B;
    v28 = 0xF;
    v27 = 0;
    v26 = 0;
    sub_414500(&v25, a2, "invalid map/set<T> iterator", v23);
    v29[0xC] = 0;
    sub_4146E0((std::exception *)v29, &v25);
    v29[0] = &std::out_of_range::`vftable';
    ThrowException__((int)v29, &_TI3_AVout_of_range_std__);
  }
  v6 = (int *)a5;
  sub_7846D0(&a4);
  if ( *(_BYTE *)(*v6 + 0x2D) )
  {
    v7 = v6[2];
LABEL_8:
    v9 = v6[1];
    if ( !*(_BYTE *)(v7 + 0x2D) )
      *(_DWORD *)(v7 + 4) = v9;
    v10 = *(this + 1);
    if ( *(int **)(v10 + 4) == v6 )
    {
      *(_DWORD *)(v10 + 4) = v7;
    }
    else if ( *(int **)v9 == v6 )
    {
      *(_DWORD *)v9 = v7;
    }
    else
    {
      *(_DWORD *)(v9 + 8) = v7;
    }
    v11 = (int **)*(this + 1);
    if ( *v11 == v6 )
    {
      if ( *(_BYTE *)(v7 + 0x2D) )
        v12 = (int *)v9;
      else
        v12 = sub_784070((_DWORD *)v7);
      *v11 = v12;
    }
    v13 = *(this + 1);
    if ( *(int **)(v13 + 8) == v6 )
    {
      if ( *(_BYTE *)(v7 + 0x2D) )
        *(_DWORD *)(v13 + 8) = v9;
      else
        *(_DWORD *)(v13 + 8) = sub_784090(v7);
    }
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v6[2] + 0x2D) )
  {
    v7 = *v6;
    goto LABEL_8;
  }
  v8 = a5;
  v7 = *(_DWORD *)(a5 + 8);
  if ( (int *)a5 == v6 )
    goto LABEL_8;
  *(_DWORD *)(*v6 + 4) = a5;
  *(_DWORD *)v8 = *v6;
  if ( v8 == v6[2] )
  {
    v9 = v8;
  }
  else
  {
    v9 = *(_DWORD *)(v8 + 4);
    if ( !*(_BYTE *)(v7 + 0x2D) )
      *(_DWORD *)(v7 + 4) = v9;
    *(_DWORD *)v9 = v7;
    *(_DWORD *)(v8 + 8) = v6[2];
    *(_DWORD *)(v6[2] + 4) = v8;
  }
  v14 = *(this + 1);
  if ( *(int **)(v14 + 4) == v6 )
  {
    *(_DWORD *)(v14 + 4) = v8;
  }
  else
  {
    v15 = (int *)v6[1];
    if ( (int *)*v15 == v6 )
      *v15 = v8;
    else
      v15[2] = v8;
  }
  *(_DWORD *)(v8 + 4) = v6[1];
  v16 = *(_BYTE *)(v8 + 0x2C);
  *(_BYTE *)(v8 + 0x2C) = *((_BYTE *)v6 + 0x2C);
  *((_BYTE *)v6 + 0x2C) = v16;
LABEL_35:
  if ( *((_BYTE *)v6 + 0x2C) == 1 )
  {
    v17 = this;
    if ( v7 != *(_DWORD *)(*(this + 1) + 4) )
    {
      do
      {
        if ( *(_BYTE *)(v7 + 0x2C) != 1 )
          break;
        v18 = *(_BYTE **)v9;
        if ( v7 == *(_DWORD *)v9 )
        {
          v18 = *(_BYTE **)(v9 + 8);
          if ( !v18[0x2C] )
          {
            v18[0x2C] = 1;
            *(_BYTE *)(v9 + 0x2C) = 0;
            sub_784740(v17, v9);
            v18 = *(_BYTE **)(v9 + 8);
            v17 = this;
          }
          if ( v18[0x2D] )
            goto LABEL_53;
          if ( *(_BYTE *)(*(_DWORD *)v18 + 0x2C) != 1 || *(_BYTE *)(*((_DWORD *)v18 + 2) + 0x2C) != 1 )
          {
            if ( *(_BYTE *)(*((_DWORD *)v18 + 2) + 0x2C) == 1 )
            {
              *(_BYTE *)(*(_DWORD *)v18 + 0x2C) = 1;
              v18[0x2C] = 0;
              sub_784790(v17, v18);
              v18 = *(_BYTE **)(v9 + 8);
              v17 = this;
            }
            v18[0x2C] = *(_BYTE *)(v9 + 0x2C);
            *(_BYTE *)(v9 + 0x2C) = 1;
            *(_BYTE *)(*((_DWORD *)v18 + 2) + 0x2C) = 1;
            sub_784740(v17, v9);
            break;
          }
        }
        else
        {
          if ( !v18[0x2C] )
          {
            v18[0x2C] = 1;
            *(_BYTE *)(v9 + 0x2C) = 0;
            sub_784790(v17, (_DWORD *)v9);
            v18 = *(_BYTE **)v9;
            v17 = this;
          }
          if ( v18[0x2D] )
            goto LABEL_53;
          if ( *(_BYTE *)(*((_DWORD *)v18 + 2) + 0x2C) != 1 || *(_BYTE *)(*(_DWORD *)v18 + 0x2C) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)v18 + 0x2C) == 1 )
            {
              *(_BYTE *)(*((_DWORD *)v18 + 2) + 0x2C) = 1;
              v18[0x2C] = 0;
              sub_784740(v17, (int)v18);
              v18 = *(_BYTE **)v9;
              v17 = this;
            }
            v18[0x2C] = *(_BYTE *)(v9 + 0x2C);
            *(_BYTE *)(v9 + 0x2C) = 1;
            *(_BYTE *)(*(_DWORD *)v18 + 0x2C) = 1;
            sub_784790(v17, (_DWORD *)v9);
            break;
          }
        }
        v18[0x2C] = 0;
LABEL_53:
        v7 = v9;
        v19 = v9 == *(_DWORD *)(v17[1] + 4);
        v9 = *(_DWORD *)(v9 + 4);
      }
      while ( !v19 );
    }
    *(_BYTE *)(v7 + 0x2C) = 1;
  }
  if ( (unsigned int)v6[9] >= 0x10 )
    FormHeapFree(v6[4]);
  v6[9] = 0xF;
  v6[8] = 0;
  *((_BYTE *)v6 + 0x10) = 0;
  FormHeapFree((unsigned int)v6);
  v20 = *(this + 2);
  if ( v20 )
    *(this + 2) = v20 - 1;
  v22 = a5;
  *a3 = a4;
  a3[1] = v22;
  return a3;
}
