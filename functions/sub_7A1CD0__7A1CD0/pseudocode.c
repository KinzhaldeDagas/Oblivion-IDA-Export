unsigned int __thiscall sub_7A1CD0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // eax
  unsigned int v26; // ebx
  int i; // ebp
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int j; // edi
  int v35; // ecx
  unsigned int result; // eax
  unsigned int v37; // ebx
  int v38; // ecx
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // edi
  int v43; // eax
  int v44; // ecx
  int v45; // ebp
  int v46; // edi
  int v47; // eax
  int v48; // ecx
  int v49; // edi
  int v50; // eax
  int v51; // eax
  _DWORD *v52; // edi
  int v53; // ebp
  int v54; // eax
  unsigned int v55; // ebx
  int m; // ebp
  int v57; // eax
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int v61; // edi
  int v62; // eax
  int n; // ebp
  int v64; // ecx
  unsigned int v65; // ebx
  int v66; // ecx
  int v67; // eax
  int v68; // edx
  int v69; // ecx
  int v70; // edi
  int v71; // eax
  int v72; // eax
  _DWORD *v73; // edi
  int v74; // ebp
  int v75; // eax
  rsize_t v76; // [esp-4h] [ebp-B8h]
  int v77; // [esp+14h] [ebp-A0h]
  int k; // [esp+14h] [ebp-A0h]
  int ii; // [esp+14h] [ebp-A0h]
  int v80; // [esp+18h] [ebp-9Ch]
  int v81; // [esp+18h] [ebp-9Ch]
  int v82; // [esp+20h] [ebp-94h] BYREF
  char v83; // [esp+24h] [ebp-90h]
  int v84; // [esp+34h] [ebp-80h]
  int v85; // [esp+38h] [ebp-7Ch]
  int v86; // [esp+3Ch] [ebp-78h] BYREF
  char v87; // [esp+40h] [ebp-74h]
  int v88; // [esp+50h] [ebp-64h]
  int v89; // [esp+54h] [ebp-60h]
  _BYTE v90[40]; // [esp+58h] [ebp-5Ch] BYREF
  _BYTE v91[40]; // [esp+80h] [ebp-34h] BYREF
  int v92; // [esp+B0h] [ebp-4h]

  *(this + 1) = a3;
  *this = a2;
  v77 = 0;
  sub_7A1660(this);
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(this + 7);
    if ( !v6 || !((*(this + 8) - v6) >> 4) )
      _invalid_parameter_noinfo();
    v7 = *(this + 7);
    v8 = *(_DWORD *)(v7 + 4);
    if ( !v8 || v4 >= (*(_DWORD *)(v7 + 8) - v8) / 0x30 )
      break;
    v9 = *(this + 0xA);
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        LODWORD(v76) = 0x2A;
        v85 = 0xF;
        v84 = 0;
        v83 = 0;
        sub_414500(&v82, 0, "default reached in CFrondEngine::Compute()", v76);
        v92 = 0;
        sub_789190((std::exception *)v90, &v82, 0);
        ThrowException__((int)v90, &_TI3_AVIdvFileError__);
      }
      v10 = *(this + 7);
      if ( !v10 || !((*(this + 8) - v10) >> 4) )
        _invalid_parameter_noinfo();
      v11 = *(this + 7);
      v12 = *(_DWORD *)(v11 + 4);
      if ( !v12 || v4 >= (*(_DWORD *)(v11 + 8) - v12) / 0x30 )
        _invalid_parameter_noinfo();
      v13 = *(_DWORD *)(v11 + 4);
      v14 = *(_DWORD *)(v13 + v5 + 4);
      v15 = v5 + v13;
      if ( v14 )
      {
        v16 = (int)((unsigned __int64)(0x92492493LL * (*(_DWORD *)(v15 + 8) - v14)) >> 0x20) >> 5;
        v77 += (v16 + (v16 >> 0x1F)) * (2 * *(this + 0xD) - 1);
      }
      ++v4;
      v5 += 0x30;
    }
    else
    {
      v17 = *(this + 7);
      if ( !v17 || !((*(this + 8) - v17) >> 4) )
        _invalid_parameter_noinfo();
      v18 = *(this + 7);
      v19 = *(_DWORD *)(v18 + 4);
      if ( !v19 || v4 >= (*(_DWORD *)(v18 + 8) - v19) / 0x30 )
        _invalid_parameter_noinfo();
      v20 = *(_DWORD *)(v18 + 4);
      v21 = *(_DWORD *)(v20 + v5 + 4);
      v22 = v5 + v20;
      if ( v21 )
        v23 = (*(_DWORD *)(v22 + 8) - v21) / 0x38;
      else
        v23 = 0;
      ++v4;
      v5 += 0x30;
      v77 += 2 * v23 * *(this + 0xB);
    }
  }
  if ( v77 > 0xFFFF )
  {
    v24 = (_DWORD *)sub_7A54A0((int)&v82, "frond vertices exceed %d", 0xFFFF);
    v92 = 1;
    sub_6F7DD0((std::exception *)v90, v24);
    ThrowException__((int)v90, &_TI2_AVruntime_error_std__);
  }
  sub_798090((_DWORD *)*this, *((_WORD *)this + 0x28));
  v25 = *(this + 0xA);
  if ( v25 )
  {
    if ( v25 != 1 )
    {
      LODWORD(v76) = 0x2A;
      v89 = 0xF;
      v88 = 0;
      v87 = 0;
      sub_414500(&v86, 0, "default reached in CFrondEngine::Compute()", v76);
      v92 = 2;
      sub_789190((std::exception *)v91, &v86, 0);
      ThrowException__((int)v91, &_TI3_AVIdvFileError__);
    }
    v26 = 0;
    for ( i = 0; ; i += 0x30 )
    {
      v28 = *(this + 7);
      if ( !v28 || !((*(this + 8) - v28) >> 4) )
        _invalid_parameter_noinfo();
      v29 = *(this + 7);
      v30 = *(_DWORD *)(v29 + 4);
      if ( !v30 || v26 >= (*(_DWORD *)(v29 + 8) - v30) / 0x30 )
        break;
      v31 = *(this + 7);
      if ( !v31 || !((*(this + 8) - v31) >> 4) )
        _invalid_parameter_noinfo();
      v32 = *(this + 7);
      v33 = *(_DWORD *)(v32 + 4);
      if ( !v33 || v26 >= (*(_DWORD *)(v32 + 8) - v33) / 0x30 )
        _invalid_parameter_noinfo();
      sub_79FD10((void **)this, i + *(_DWORD *)(v32 + 4));
      ++v26;
    }
    for ( j = 0; ; ++j )
    {
      v35 = *(this + 7);
      v80 = j;
      result = v35 ? (*(this + 8) - v35) >> 4 : 0;
      if ( (unsigned __int16)j >= result )
        break;
      sub_794A90(*this, j);
      v37 = 0;
      for ( k = 0; ; k += 0x30 )
      {
        v38 = *(this + 7);
        if ( !v38 || (unsigned __int16)j >= (unsigned int)((*(this + 8) - v38) >> 4) )
          _invalid_parameter_noinfo();
        v39 = *(this + 7) + 0x10 * (unsigned __int16)j;
        v40 = *(_DWORD *)(v39 + 4);
        if ( !v40 || v37 >= (*(_DWORD *)(v39 + 8) - v40) / 0x30 )
          break;
        v41 = *(this + 7);
        if ( !v41 || !((*(this + 8) - v41) >> 4) )
          _invalid_parameter_noinfo();
        v42 = *(this + 7);
        v43 = *(_DWORD *)(v42 + 4);
        if ( !v43 || v37 >= (*(_DWORD *)(v42 + 8) - v43) / 0x30 )
          _invalid_parameter_noinfo();
        v44 = *(this + 7);
        v45 = k + *(_DWORD *)(v42 + 4);
        if ( !v44 || (unsigned __int16)v80 >= (unsigned int)((*(this + 8) - v44) >> 4) )
          _invalid_parameter_noinfo();
        v46 = *(this + 7) + 0x10 * (unsigned __int16)v80;
        v47 = *(_DWORD *)(v46 + 4);
        if ( !v47 || v37 >= (*(_DWORD *)(v46 + 8) - v47) / 0x30 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(k + *(_DWORD *)(v46 + 4) + 0x2C) = *(_DWORD *)(v45 + 0x2C);
        v48 = *(this + 7);
        if ( !v48 || (unsigned __int16)v80 >= (unsigned int)((*(this + 8) - v48) >> 4) )
          _invalid_parameter_noinfo();
        v49 = *(this + 7) + 0x10 * (unsigned __int16)v80;
        v50 = *(_DWORD *)(v49 + 4);
        if ( !v50 || v37 >= (*(_DWORD *)(v49 + 8) - v50) / 0x30 )
          _invalid_parameter_noinfo();
        v51 = *(this + 7);
        v52 = (_DWORD *)(k + *(_DWORD *)(v49 + 4));
        if ( !v51 || !((*(this + 8) - v51) >> 4) )
          _invalid_parameter_noinfo();
        v53 = *(this + 7);
        v54 = *(_DWORD *)(v53 + 4);
        if ( !v54 || v37 >= (*(_DWORD *)(v53 + 8) - v54) / 0x30 )
          _invalid_parameter_noinfo();
        sub_79A450(this, (unsigned __int16)v80, *(_DWORD *)(k + *(_DWORD *)(v53 + 4) + 0x28), v52);
        j = v80;
        ++v37;
      }
    }
  }
  else
  {
    v55 = 0;
    for ( m = 0; ; m += 0x30 )
    {
      v57 = *(this + 7);
      if ( !v57 || !((*(this + 8) - v57) >> 4) )
        _invalid_parameter_noinfo();
      v58 = *(this + 7);
      v59 = *(_DWORD *)(v58 + 4);
      if ( !v59 || v55 >= (*(_DWORD *)(v58 + 8) - v59) / 0x30 )
        break;
      v60 = *(this + 7);
      if ( !v60 || !((*(this + 8) - v60) >> 4) )
        _invalid_parameter_noinfo();
      v61 = *(this + 7);
      v62 = *(_DWORD *)(v61 + 4);
      if ( !v62 || v55 >= (*(_DWORD *)(v61 + 8) - v62) / 0x30 )
        _invalid_parameter_noinfo();
      sub_79C540((char **)this, m + *(_DWORD *)(v61 + 4));
      ++v55;
    }
    for ( n = 0; ; ++n )
    {
      v64 = *(this + 7);
      v65 = 0;
      v81 = n;
      result = v64 ? (*(this + 8) - v64) >> 4 : 0;
      if ( (unsigned __int16)n >= result )
        break;
      sub_794A90(*this, n);
      for ( ii = 0; ; ii += 0x30 )
      {
        v66 = *(this + 7);
        if ( !v66 || (unsigned __int16)n >= (unsigned int)((*(this + 8) - v66) >> 4) )
          _invalid_parameter_noinfo();
        v67 = *(this + 7) + 0x10 * (unsigned __int16)n;
        v68 = *(_DWORD *)(v67 + 4);
        if ( !v68 || v65 >= (*(_DWORD *)(v67 + 8) - v68) / 0x30 )
          break;
        v69 = *(this + 7);
        if ( !v69 || (unsigned __int16)n >= (unsigned int)((*(this + 8) - v69) >> 4) )
          _invalid_parameter_noinfo();
        v70 = *(this + 7) + 0x10 * (unsigned __int16)n;
        v71 = *(_DWORD *)(v70 + 4);
        if ( !v71 || v65 >= (*(_DWORD *)(v70 + 8) - v71) / 0x30 )
          _invalid_parameter_noinfo();
        v72 = *(this + 7);
        v73 = (_DWORD *)(ii + *(_DWORD *)(v70 + 4));
        if ( !v72 || !((*(this + 8) - v72) >> 4) )
          _invalid_parameter_noinfo();
        v74 = *(this + 7);
        v75 = *(_DWORD *)(v74 + 4);
        if ( !v75 || v65 >= (*(_DWORD *)(v74 + 8) - v75) / 0x30 )
          _invalid_parameter_noinfo();
        sub_79A390(this, v81, *(_DWORD *)(ii + *(_DWORD *)(v74 + 4) + 0x28), v73);
        n = v81;
        ++v65;
      }
    }
  }
  return result;
}
