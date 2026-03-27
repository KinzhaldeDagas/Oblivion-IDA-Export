char __thiscall sub_959D60(_WORD *this, float *a2, float *a3, int *a4)
{
  unsigned __int16 v6; // ax
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // edx
  float *v10; // ebx
  unsigned int i; // edi
  float *v12; // ecx
  int *v13; // ebx
  int v14; // eax
  int *v15; // ecx
  int *v16; // eax
  bool v17; // zf
  unsigned int v18; // [esp+4h] [ebp-4h]

  if ( !(_BYTE)a4 )
    sub_959CA0(this);
  if ( !sub_95D540(a2, a3, (int)this, *((float **)this + 5)) )
    return 0;
  v6 = *(this + 0x12);
  if ( !v6 )
    return 0;
  v7 = 1;
  if ( *((_DWORD *)this + 1) == 1 || !*((_DWORD *)this + 2) || v6 <= 1u )
    return 1;
  v8 = (unsigned __int16)*(this + 0x11);
  v18 = v8;
  if ( !*(_DWORD *)this )
  {
    v9 = 0;
    a3 = 0;
    if ( !v8 )
      return 1;
    do
    {
      v10 = *(float **)(*((_DWORD *)this + 7) + 4 * v9);
      if ( v10 )
      {
        for ( i = v9 + 1; i < v8; ++i )
        {
          v12 = *(float **)(*((_DWORD *)this + 7) + 4 * i);
          if ( v12 )
          {
            if ( v10[5] > (double)v12[5] )
            {
              a2 = v10;
              v10 = v12;
              a4 = (int *)v12;
              NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0xC), v9, &a4);
              NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0xC), i, &a2);
              v9 = (unsigned int)a3;
              v8 = v18;
            }
          }
        }
      }
      a3 = (float *)++v9;
    }
    while ( v9 < v8 );
    return 1;
  }
  v13 = **((int ***)this + 7);
  a4 = v13;
  if ( v8 <= 1 )
    goto LABEL_27;
  do
  {
    v14 = sub_405020((int)(this + 0xC), v7);
    v15 = (int *)v14;
    if ( !v14 )
      goto LABEL_25;
    if ( *((float *)v13 + 5) > (double)*(float *)(v14 + 0x14) )
    {
      v16 = v13;
      v17 = v13 == 0;
      v13 = v15;
      if ( v17 )
        goto LABEL_25;
      v15 = v16;
    }
    sub_959C40(v15, 1);
LABEL_25:
    ++v7;
  }
  while ( v7 < v8 );
  a4 = v13;
LABEL_27:
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0xC), 0, &a4);
  return 1;
}
