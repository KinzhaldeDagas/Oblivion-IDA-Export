void __thiscall sub_7A9240(float *this, char a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  _DWORD *v8; // edi
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  int v11; // edx
  int v12; // edi
  unsigned int v13; // esi
  int *v14; // esi
  _DWORD *v15; // ebp
  unsigned int v16; // ebx
  int v17; // ecx
  char v18; // bl
  unsigned int v19; // esi
  int *v20; // esi
  _DWORD *v21; // ebx
  unsigned int v22; // ebp
  int v23; // ecx
  char v24; // bp
  char *v25; // esi
  _DWORD *v26; // ebx
  unsigned int v27; // ebp
  float *v28; // esi
  double v29; // st4
  double v30; // st6
  double v31; // st4
  double v32; // st5
  double v33; // st6
  char *v34; // esi
  unsigned int v35; // edi
  int *v36; // ebx
  _DWORD *v37; // edi
  unsigned int v38; // eax
  bool v39; // cc
  unsigned int *v40; // ecx
  int v41; // [esp-1Ch] [ebp-B0h] BYREF
  int *v42; // [esp-10h] [ebp-A4h] BYREF
  _DWORD *v43; // [esp-Ch] [ebp-A0h]
  int v44; // [esp-8h] [ebp-9Ch]
  int *v45; // [esp-4h] [ebp-98h]
  char v46; // [esp+17h] [ebp-7Dh] BYREF
  float v47; // [esp+18h] [ebp-7Ch]
  int v48; // [esp+1Ch] [ebp-78h]
  float *v49; // [esp+20h] [ebp-74h]
  int v50; // [esp+24h] [ebp-70h] BYREF
  int v51; // [esp+28h] [ebp-6Ch]
  float v52; // [esp+2Ch] [ebp-68h]
  char *v53; // [esp+30h] [ebp-64h]
  unsigned int v54; // [esp+34h] [ebp-60h]
  unsigned int v55; // [esp+3Ch] [ebp-58h]
  int v56; // [esp+40h] [ebp-54h] BYREF
  int v57; // [esp+44h] [ebp-50h]
  char *v58; // [esp+48h] [ebp-4Ch]
  _DWORD *v59; // [esp+4Ch] [ebp-48h]
  int *v60; // [esp+50h] [ebp-44h] BYREF
  _DWORD *v61; // [esp+54h] [ebp-40h]
  int v62; // [esp+58h] [ebp-3Ch]
  int *v63; // [esp+5Ch] [ebp-38h] BYREF
  _DWORD *v64; // [esp+60h] [ebp-34h]
  int v65; // [esp+64h] [ebp-30h]
  int *v66; // [esp+68h] [ebp-2Ch] BYREF
  _DWORD *v67; // [esp+6Ch] [ebp-28h]
  int v68; // [esp+70h] [ebp-24h]
  int v69; // [esp+74h] [ebp-20h] BYREF
  int v70; // [esp+78h] [ebp-1Ch] BYREF
  _DWORD *v71; // [esp+7Ch] [ebp-18h]
  unsigned int v72; // [esp+80h] [ebp-14h]
  int v73; // [esp+84h] [ebp-10h]
  int v74; // [esp+90h] [ebp-4h]

  v49 = this;
  v5 = a3;
  v6 = a4;
  v74 = 0;
  if ( a3 )
    v7 = (int)(a4 - a3) >> 2;
  else
    v7 = 0;
  v69 = 0;
  v50 = 0;
  sub_7A8E20(&v70, (v7 + 0x1F) >> 5, &v50);
  LOBYTE(v74) = 1;
  sub_7A8980((unsigned int *)&v69, v7);
  v45 = (int *)&v46;
  LOBYTE(v74) = 2;
  v46 = 0;
  v52 = COERCE_FLOAT(&v42);
  v8 = v71;
  if ( (unsigned int)v71 > v72 )
    _invalid_parameter_noinfo();
  v43 = v8;
  v44 = 0;
  v42 = &v69;
  if ( v69 )
    sub_7A8800((unsigned int *)&v42, v69);
  v9 = v71;
  v52 = COERCE_FLOAT(&v41);
  if ( (unsigned int)v71 > v72 )
    _invalid_parameter_noinfo();
  sub_7A8E90(&v69, v9, 0, (int)v42, v43, v44, v45);
  if ( v5 > v6 )
    _invalid_parameter_noinfo();
  v10 = (_DWORD *)v5;
  v55 = v5;
  while ( 1 )
  {
    if ( v5 > v6 )
      _invalid_parameter_noinfo();
    if ( v10 == (_DWORD *)v6 )
      break;
    if ( (unsigned int)v10 >= v6 )
      _invalid_parameter_noinfo();
    v11 = *v10;
    v47 = flt_A32048;
    v56 = v11;
    v57 = 0;
    v48 = 0xFFFFFFFF;
    if ( v5 > v6 )
      _invalid_parameter_noinfo();
    v58 = &a2;
    v12 = ((int)((int)v10 - v5) >> 2) + 1;
    v59 = v10;
    v50 = (int)(v10 + 1);
    if ( (unsigned int)(v10 + 1) > v6 || (unsigned int)(v10 + 1) < v5 )
      _invalid_parameter_noinfo();
    v53 = v58;
    v54 = v50;
    while ( 1 )
    {
      if ( v5 > v6 )
        _invalid_parameter_noinfo();
      if ( !v53 || v53 != &a2 )
        _invalid_parameter_noinfo();
      if ( v54 == v6 )
        break;
      v13 = (unsigned int)v71;
      if ( (unsigned int)v71 > v72 )
        _invalid_parameter_noinfo();
      v64 = (_DWORD *)v13;
      v65 = 0;
      v63 = &v69;
      sub_7A8800((unsigned int *)&v63, v12);
      v14 = v63;
      v15 = v64;
      if ( v63 )
      {
        if ( v64 )
          goto LABEL_36;
      }
      else
      {
        _invalid_parameter_noinfo();
        _invalid_parameter_noinfo();
      }
      _invalid_parameter_noinfo();
LABEL_36:
      v16 = v14[2];
      if ( v16 > v14[3] )
        _invalid_parameter_noinfo();
      v17 = (int)v15 - v16;
      v18 = v65;
      if ( v65 + 0x20 * (v17 >> 2) >= (unsigned int)*v14 )
        _invalid_parameter_noinfo();
      if ( ((1 << v18) & *v15) != 0 )
      {
        v10 = (_DWORD *)v55;
        v6 = a4;
        v5 = a3;
        break;
      }
      v19 = (unsigned int)v71;
      if ( (unsigned int)v71 > v72 )
        _invalid_parameter_noinfo();
      v67 = (_DWORD *)v19;
      v68 = 0;
      v66 = &v69;
      sub_7A8800((unsigned int *)&v66, v12);
      v20 = v66;
      v21 = v67;
      if ( v66 )
      {
        if ( v67 )
          goto LABEL_47;
      }
      else
      {
        _invalid_parameter_noinfo();
        _invalid_parameter_noinfo();
      }
      _invalid_parameter_noinfo();
LABEL_47:
      v22 = v20[2];
      if ( v22 > v20[3] )
        _invalid_parameter_noinfo();
      v23 = (int)v21 - v22;
      v24 = v68;
      if ( v68 + 0x20 * (v23 >> 2) >= (unsigned int)*v20 )
        _invalid_parameter_noinfo();
      if ( ((1 << v24) & *v21) != 0 )
      {
        v26 = (_DWORD *)v54;
      }
      else
      {
        v25 = v53;
        if ( !v53 )
          _invalid_parameter_noinfo();
        v26 = (_DWORD *)v54;
        if ( v54 >= *((_DWORD *)v25 + 2) )
          _invalid_parameter_noinfo();
        v27 = v55;
        v28 = (float *)(*v26 + 4);
        if ( v55 >= a4 )
          _invalid_parameter_noinfo();
        v29 = *v28 - *(float *)(*(_DWORD *)v27 + 4);
        v30 = v29 * v29;
        v31 = v28[1] - *(float *)(*(_DWORD *)v27 + 8);
        v32 = v30;
        v33 = v28[2] - *(float *)(*(_DWORD *)v27 + 0xC);
        *(float *)&v51 = v31 * v31 + v32 + v33 * v33;
        LODWORD(v52) = (v51 >> 1) + 0x1FC00000;
        if ( v49[4] > (double)v52 && v47 > (double)v52 )
        {
          v47 = v52;
          if ( (unsigned int)v26 >= *((_DWORD *)v53 + 2) )
            _invalid_parameter_noinfo();
          v57 = *v26;
          v48 = v12;
        }
      }
      v34 = v53;
      ++v12;
      if ( !v53 )
        _invalid_parameter_noinfo();
      if ( (unsigned int)v26 >= *((_DWORD *)v34 + 2) )
        _invalid_parameter_noinfo();
      v10 = (_DWORD *)v55;
      v6 = a4;
      v54 = (unsigned int)(v26 + 1);
      v5 = a3;
    }
    if ( v57 )
    {
      v35 = (unsigned int)v71;
      if ( (unsigned int)v71 > v72 )
        _invalid_parameter_noinfo();
      v60 = &v69;
      v61 = (_DWORD *)v35;
      v62 = 0;
      sub_7A8800((unsigned int *)&v60, v48);
      v36 = v60;
      v37 = v61;
      if ( !v60 )
      {
        _invalid_parameter_noinfo();
        _invalid_parameter_noinfo();
        goto LABEL_76;
      }
      if ( !v61 )
LABEL_76:
        _invalid_parameter_noinfo();
      v38 = v36[2];
      v39 = v38 <= v36[3];
      v51 = v38;
      if ( !v39 )
      {
        _invalid_parameter_noinfo();
        v38 = v51;
      }
      if ( v62 + 0x20 * ((int)((int)v37 - v38) >> 2) >= (unsigned int)*v36 )
        _invalid_parameter_noinfo();
      v40 = (unsigned int *)v49;
      v45 = &v56;
      *v37 |= 1 << v62;
      sub_7A8F30(v40, v45);
      v5 = a3;
    }
    if ( (unsigned int)v10 >= v6 )
      _invalid_parameter_noinfo();
    v55 = v50;
    v10 = (_DWORD *)v50;
  }
  v69 = 0;
  if ( v71 )
    FormHeapFree((unsigned int)v71);
  v71 = 0;
  v72 = 0;
  v73 = 0;
  if ( v5 )
    FormHeapFree(v5);
}
