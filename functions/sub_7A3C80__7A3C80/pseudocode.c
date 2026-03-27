void __thiscall sub_7A3C80(float *this)
{
  float *v1; // ebx
  unsigned int v2; // ebp
  _DWORD *v3; // edi
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // esi
  unsigned int v10; // esi
  double v11; // st7
  int v12; // edi
  unsigned int v13; // ecx
  char *v14; // edx
  char *v15; // ecx
  char *v16; // ebx
  _DWORD *v17; // edi
  unsigned int v18; // ecx
  char *v19; // esi
  char *v20; // esi
  int v21; // eax
  double v22; // st7
  _DWORD *v23; // ecx
  unsigned int v24; // esi
  unsigned int v25; // ecx
  _DWORD *v26; // edi
  _DWORD *v27; // ebp
  float v28; // esi
  float v29; // ebx
  float *v30; // edi
  double v31; // st7
  double v32; // st7
  signed int v33; // ebp
  unsigned int v34; // esi
  _DWORD *v35; // edi
  unsigned int j; // esi
  _DWORD *v37; // ecx
  rsize_t v38; // [esp-4h] [ebp-78h]
  rsize_t v39; // [esp+8h] [ebp-6Ch]
  char v40; // [esp+23h] [ebp-51h] BYREF
  float v41; // [esp+24h] [ebp-50h]
  float *v42; // [esp+28h] [ebp-4Ch]
  float i; // [esp+2Ch] [ebp-48h]
  float v44; // [esp+30h] [ebp-44h]
  float v45; // [esp+34h] [ebp-40h]
  float v46; // [esp+38h] [ebp-3Ch]
  int v47[2]; // [esp+3Ch] [ebp-38h] BYREF
  int v48; // [esp+44h] [ebp-30h] BYREF
  void *v49; // [esp+48h] [ebp-2Ch]
  unsigned int v50; // [esp+4Ch] [ebp-28h]
  int v51; // [esp+50h] [ebp-24h]
  int v52; // [esp+54h] [ebp-20h] BYREF
  unsigned int v53; // [esp+58h] [ebp-1Ch]
  void *Src; // [esp+5Ch] [ebp-18h]
  int v55; // [esp+60h] [ebp-14h]
  int v56; // [esp+70h] [ebp-4h]

  v1 = this;
  v42 = this;
  v2 = 0;
  v3 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v4 = *((_DWORD **)this + 0x16);
  v56 = 0;
  if ( v4 )
  {
    v5 = *((_DWORD *)v1 + 0x17);
    v6 = *(_DWORD *)(v5 + 0x6C);
    v7 = v5 + 0x68;
    if ( v6 )
      v8 = (*(_DWORD *)(v7 + 8) - v6) >> 2;
    else
      v8 = 0;
    if ( (unsigned __int16)(v8 / 3) )
    {
      sub_7917E0(v4, (unsigned int *)&v48);
      v3 = v49;
    }
  }
  v44 = 0.0;
  v9 = 0;
  for ( i = 0.0; v9 < sub_78FA80(&v48); ++v9 )
  {
    if ( !v3 || v9 >= (int)(v50 - (_DWORD)v3) >> 2 )
    {
      _invalid_parameter_noinfo();
      v3 = v49;
    }
    v41 = *(float *)(v3[v9] + 0x28);
    v44 = v41 + v44;
    if ( i < (double)v41 )
      i = v41;
  }
  sub_78EAF0(&v40);
  v10 = 0;
  v11 = 1.0 - v1[0x3B];
  v12 = 0;
  v53 = 0;
  Src = 0;
  v55 = 0;
  v45 = v11;
  v13 = v50;
  v14 = (char *)v49;
  LOBYTE(v56) = 2;
  while ( v14 && v2 < (int)(v13 - (_DWORD)v14) >> 2 )
  {
    v41 = *(float *)(*(_DWORD *)&v14[4 * v2] + 0x28);
    if ( v45 * i >= v41 )
    {
      v46 = sub_78EA00(0.0, v1[0x3A]);
      v22 = v46;
      v46 = 1.0 - v46;
      v41 = v22 * i + v46 * v41;
      if ( v41 <= 0.0 )
        v41 = 0.0;
      v23 = v49;
      if ( !v49 || v2 >= (int)(v50 - (_DWORD)v49) >> 2 )
      {
        _invalid_parameter_noinfo();
        v23 = v49;
      }
      *(float *)(v23[v2] + 0x2C) = v41;
      v13 = v50;
      v14 = (char *)v49;
      v12 = v55;
      v10 = v53;
      ++v2;
    }
    else
    {
      if ( v2 >= (int)(v13 - (_DWORD)v14) >> 2 )
      {
        _invalid_parameter_noinfo();
        v14 = (char *)v49;
        v12 = v55;
        v10 = v53;
      }
      v15 = (char *)Src;
      v16 = &v14[4 * v2];
      if ( v10 && (int)((int)Src - v10) >> 2 < (unsigned int)((int)(v12 - v10) >> 2) )
      {
        *(_DWORD *)Src = *(_DWORD *)v16;
        Src = v15 + 4;
      }
      else
      {
        v17 = Src;
        if ( v10 > (unsigned int)Src )
          _invalid_parameter_noinfo();
        sub_7A3620((unsigned int *)&v52, (unsigned int **)v47, (unsigned int *)&v52, v17, v16);
      }
      v14 = (char *)v49;
      v18 = v50;
      v19 = (char *)v49;
      if ( (unsigned int)v49 > v50 )
      {
        _invalid_parameter_noinfo();
        v18 = v50;
        v14 = (char *)v49;
      }
      v20 = &v19[4 * v2];
      if ( (unsigned int)v20 > v18 || v20 < v14 )
      {
        _invalid_parameter_noinfo();
        v18 = v50;
        v14 = (char *)v49;
      }
      v21 = (int)(v18 - (_DWORD)(v20 + 4)) >> 2;
      if ( v21 > 0 )
      {
        HIDWORD(v38) = v20 + 4;
        LODWORD(v38) = 4 * v21;
        memmove_s(v20, v38, (const void *)v38, v39);
        v18 = v50;
        v14 = (char *)v49;
      }
      v1 = v42;
      v12 = v55;
      v10 = v53;
      v13 = v18 - 4;
      v50 = v13;
    }
  }
  sub_791410((int)&v48);
  sub_791410((int)&v52);
  v24 = 0;
  if ( sub_78FA80(&v52) )
  {
    do
    {
      v25 = v53;
      if ( !v53 || v24 >= (int)((int)Src - v53) >> 2 )
      {
        _invalid_parameter_noinfo();
        v25 = v53;
      }
      v26 = (_DWORD *)(v25 + 4 * v24);
      v27 = v49;
      if ( (unsigned int)v49 > v50 )
        _invalid_parameter_noinfo();
      sub_7A3620((unsigned int *)&v48, (unsigned int **)v47, (unsigned int *)&v48, v27, v26);
      ++v24;
    }
    while ( v24 < sub_78FA80(&v52) );
    v1 = v42;
  }
  v28 = v1[0x1C];
  v29 = 0.0;
  v41 = v28;
  if ( v28 != 0.0 )
  {
    while ( 1 )
    {
      v30 = v42;
      if ( v29 == 0.0 )
        sub_794630(*((_DWORD **)v42 + 0x17), 0);
      if ( SLODWORD(v28) >= 2 )
      {
        v45 = v30[0x38];
        v46 = v29;
        v32 = (double)SLODWORD(v29);
        if ( v29 < 0.0 )
          v32 = v32 + flt_A2FC78;
        v46 = v32 / (double)(LODWORD(v28) - 1);
        v31 = v45 + (v30[0x37] - v45) * v46;
      }
      else
      {
        v31 = 1.0;
      }
      i = v31;
      v33 = 0;
      v34 = 0;
      v46 = i * v44;
      i = 0.0;
      if ( sub_78FA80(&v48) )
      {
        v35 = v49;
        do
        {
          if ( v46 <= (double)i )
            break;
          if ( !v35 || v34 >= (int)(v50 - (_DWORD)v35) >> 2 )
          {
            _invalid_parameter_noinfo();
            v35 = v49;
          }
          v45 = *(float *)(v35[v34] + 0x28);
          ++v33;
          ++v34;
          i = v45 + i;
        }
        while ( v34 < sub_78FA80(&v48) );
        v30 = v42;
      }
      sub_794A90(*((_DWORD *)v30 + 0x17), LOWORD(v29));
      if ( v29 != 0.0 || v33 )
      {
        for ( j = 0; (int)j < v33; ++j )
        {
          v37 = v49;
          if ( !v49 || j >= (int)(v50 - (_DWORD)v49) >> 2 )
          {
            _invalid_parameter_noinfo();
            v37 = v49;
          }
          sub_78F420(v37[j], LOWORD(v29), *((_DWORD **)v30 + 0x17));
        }
      }
      else
      {
        sub_796100(*((_DWORD **)v30 + 0x17), 0, 0, 0);
      }
      if ( ++LODWORD(v29) >= LODWORD(v41) )
        break;
      v28 = v41;
    }
  }
  if ( v53 )
    FormHeapFree(v53);
  v53 = 0;
  Src = 0;
  v55 = 0;
  LOBYTE(v56) = 0;
  TESTexture::ClearComponentReferences(&v40);
  if ( v49 )
    FormHeapFree((unsigned int)v49);
}
