void __thiscall sub_7977D0(_DWORD *this, char a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  bool v5; // zf
  unsigned __int16 v6; // bp
  __int16 v7; // bx
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // ecx
  unsigned __int16 j; // bp
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  unsigned __int16 v18; // ax
  int v19; // ecx
  int v20; // edi
  int v21; // ecx
  int v22; // ecx
  int v23; // edi
  int v24; // eax
  int v25; // ebp
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // ebx
  int v31; // ecx
  int v32; // ecx
  int v33; // ebx
  int v34; // ecx
  char *v35; // ebx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  unsigned __int16 v41; // ax
  int v42; // ecx
  int v43; // eax
  int v44; // edx
  int v45; // ecx
  _WORD *v46; // ebx
  int v47; // eax
  int v48; // edx
  int v49; // ecx
  _WORD *v50; // ebx
  int v51; // edi
  unsigned int v52; // ebp
  int v53; // ecx
  int v54; // eax
  int v55; // edx
  int v56; // ecx
  _WORD *v57; // ebx
  int v58; // edi
  unsigned int v59; // ebp
  int v60; // ecx
  unsigned int *v61; // edi
  unsigned int v62; // eax
  unsigned int v63; // edx
  _WORD *v64; // eax
  _WORD *v65; // ebp
  char *v66; // ecx
  unsigned int v67; // eax
  char *v68; // edi
  unsigned int v69; // edx
  int *v70; // eax
  void *v71; // ebp
  unsigned int v72; // ecx
  char *v73; // edi
  void *v74; // ebx
  void *v75; // ebp
  int v76; // eax
  char *v77; // ecx
  void *v78; // ebx
  char *v79; // edi
  void *v80; // ebp
  int v81; // eax
  unsigned int v82; // ecx
  char *v83; // esi
  char *v84; // esi
  rsize_t v85; // [esp-Ch] [ebp-8Ch]
  rsize_t v86; // [esp-Ch] [ebp-8Ch]
  unsigned int v87; // [esp-8h] [ebp-88h]
  _BYTE v88[12]; // [esp-4h] [ebp-84h]
  char *v89; // [esp-4h] [ebp-84h]
  int i; // [esp+14h] [ebp-6Ch]
  int v91; // [esp+18h] [ebp-68h]
  unsigned __int16 v92; // [esp+1Ch] [ebp-64h]
  int v93; // [esp+1Ch] [ebp-64h]
  char *Dst; // [esp+20h] [ebp-60h]
  int k; // [esp+24h] [ebp-5Ch]
  int v96; // [esp+2Ch] [ebp-54h] BYREF
  int v97; // [esp+30h] [ebp-50h] BYREF
  int v98; // [esp+34h] [ebp-4Ch] BYREF
  int v99; // [esp+3Ch] [ebp-44h] BYREF
  int v100; // [esp+44h] [ebp-3Ch] BYREF
  char *v101; // [esp+48h] [ebp-38h]
  char *v102; // [esp+4Ch] [ebp-34h]
  int v103; // [esp+54h] [ebp-2Ch] BYREF
  char *v104; // [esp+58h] [ebp-28h]
  char *v105; // [esp+5Ch] [ebp-24h]
  int v106; // [esp+64h] [ebp-1Ch] BYREF
  unsigned int v107; // [esp+68h] [ebp-18h]
  int v108; // [esp+6Ch] [ebp-14h]
  int v109; // [esp+7Ch] [ebp-4h]

  v3 = *(this + 0x1B);
  if ( v3 )
    v4 = (*(this + 0x1C) - v3) >> 2;
  else
    v4 = 0;
  if ( (unsigned __int16)(v4 / 3) )
  {
    sub_7974F0(&v103, (char *)*((unsigned __int16 *)this + 0x10));
    v89 = (char *)*((unsigned __int16 *)this + 0x10);
    v109 = 0;
    sub_797570(&v100, v89);
    v87 = *((unsigned __int16 *)this + 0x10);
    LOBYTE(v109) = 1;
    v96 = 0;
    sub_7956B0(&v106, v87, &v96);
    v5 = *((_WORD *)this + 0x10) == 0;
    LOBYTE(v109) = 2;
    v91 = 0;
    if ( !v5 )
    {
      while ( 1 )
      {
        v6 = 0;
        for ( i = 0; ; i += *(unsigned __int16 *)(*(_DWORD *)(v12 + 4) + 2 * v6++) )
        {
          v7 = v91;
          if ( (__int16)v91 <= (__int16)0xFFFFFFFF )
            break;
          v8 = *(this + 0x13);
          if ( !v8 || (__int16)v91 >= (unsigned int)((*(this + 0x14) - v8) >> 4) )
            _invalid_parameter_noinfo();
          v9 = *(this + 0x13) + 0x10 * (__int16)v91;
          v10 = *(_DWORD *)(v9 + 4);
          if ( !v10 || v6 >= (unsigned __int16)((*(_DWORD *)(v9 + 8) - v10) >> 2) )
            break;
          v11 = *(this + 0xF);
          if ( !v11 || (unsigned __int16)v91 >= (unsigned int)((*(this + 0x10) - v11) >> 4) )
            _invalid_parameter_noinfo();
          v12 = *(this + 0xF) + 0x10 * (unsigned __int16)v91;
          v13 = *(_DWORD *)(v12 + 4);
          if ( !v13 || v6 >= (unsigned int)((*(_DWORD *)(v12 + 8) - v13) >> 1) )
            _invalid_parameter_noinfo();
        }
        if ( i > 0 )
          break;
        v96 = (unsigned __int16)v91;
        if ( !v104 || (unsigned __int16)v91 >= (unsigned int)((v105 - v104) >> 4) )
          _invalid_parameter_noinfo();
        v73 = &v104[0x10 * (unsigned __int16)v91];
        v74 = *((void **)v73 + 2);
        if ( *((_DWORD *)v73 + 1) > (unsigned int)v74 )
          _invalid_parameter_noinfo();
        v75 = *((void **)v73 + 1);
        if ( (unsigned int)v75 > *((_DWORD *)v73 + 2) )
          _invalid_parameter_noinfo();
        if ( v75 != v74 )
        {
          v76 = (*((_DWORD *)v73 + 2) - (int)v74) >> 1;
          v97 = (int)v75 + 2 * v76;
          if ( v76 > 0 )
          {
            HIDWORD(v85) = v74;
            LODWORD(v85) = 2 * v76;
            memmove_s(v75, v85, (const void *)(2 * v76), *(rsize_t *)&v88[4]);
          }
          *((_DWORD *)v73 + 2) = v97;
        }
        v77 = v101;
        if ( !v101 || v96 >= (unsigned int)((v102 - v101) >> 4) )
        {
          _invalid_parameter_noinfo();
          v77 = v101;
        }
        v78 = *(void **)&v77[0x10 * v96 + 8];
        v79 = &v77[0x10 * v96];
        if ( *((_DWORD *)v79 + 1) > (unsigned int)v78 )
          _invalid_parameter_noinfo();
        v80 = *((void **)v79 + 1);
        if ( (unsigned int)v80 > *((_DWORD *)v79 + 2) )
          _invalid_parameter_noinfo();
        if ( v80 != v78 )
        {
          v81 = (*((_DWORD *)v79 + 2) - (int)v78) >> 2;
          v97 = (int)v80 + 4 * v81;
          if ( v81 > 0 )
          {
            HIDWORD(v86) = v78;
            LODWORD(v86) = 4 * v81;
            memmove_s(v80, v86, (const void *)(4 * v81), *(rsize_t *)&v88[4]);
          }
          *((_DWORD *)v79 + 2) = v97;
        }
        v82 = v107;
        if ( !v107 || (unsigned __int16)v91 >= (unsigned int)((int)(v108 - v107) >> 2) )
        {
          _invalid_parameter_noinfo();
          v82 = v107;
        }
        v25 = v91;
        *(_DWORD *)(v82 + 4 * (unsigned __int16)v91) = 0;
LABEL_167:
        v91 = v25 + 1;
        if ( (unsigned __int16)(v25 + 1) >= *((_WORD *)this + 0x10) )
          goto LABEL_168;
      }
      if ( a2 )
      {
        for ( j = 0; ; ++j )
        {
          if ( v7 <= (__int16)0xFFFFFFFF )
            goto LABEL_29;
          v15 = *(this + 0x13);
          if ( !v15 || v7 >= (unsigned int)((*(this + 0x14) - v15) >> 4) )
            _invalid_parameter_noinfo();
          v16 = *(this + 0x13) + 0x10 * v7;
          v17 = *(_DWORD *)(v16 + 4);
          if ( v17 )
            v18 = (*(_DWORD *)(v16 + 8) - v17) >> 2;
          else
LABEL_29:
            v18 = 0;
          if ( j >= v18 - 1 )
            break;
          v19 = *(this + 0xF);
          if ( !v19 || (unsigned __int16)v91 >= (unsigned int)((*(this + 0x10) - v19) >> 4) )
            _invalid_parameter_noinfo();
          v20 = *(this + 0xF) + 0x10 * (unsigned __int16)v91;
          v21 = *(_DWORD *)(v20 + 4);
          if ( !v21 || j >= (unsigned int)((*(_DWORD *)(v20 + 8) - v21) >> 1) )
            _invalid_parameter_noinfo();
          if ( (*(_WORD *)(*(_DWORD *)(v20 + 4) + 2 * j) & 1) != 0 )
            i += 3;
          else
            i += 2;
          v7 = v91;
        }
      }
      else
      {
        if ( (__int16)v91 <= (__int16)0xFFFFFFFF )
          goto LABEL_47;
        v22 = *(this + 0x13);
        if ( !v22 || (__int16)v91 >= (unsigned int)((*(this + 0x14) - v22) >> 4) )
          _invalid_parameter_noinfo();
        v23 = *(this + 0x13) + 0x10 * (__int16)v91;
        v24 = *(_DWORD *)(v23 + 4);
        if ( v24 )
          LOWORD(v24) = (*(_DWORD *)(v23 + 8) - v24) >> 2;
        else
LABEL_47:
          LOWORD(v24) = 0;
        v24 = (unsigned __int16)v24;
        if ( (_WORD)v24 )
          v24 = (unsigned __int16)v24 - 1;
        i += 2 * v24;
      }
      v96 = FormHeapAlloc((unsigned int)i >> 0x1F != 0 ? 0xFFFFFFFF : 2 * i);
      Dst = (char *)v96;
      for ( k = 0; ; ++k )
      {
        while ( 1 )
        {
          v25 = v91;
          if ( (__int16)v91 <= (__int16)0xFFFFFFFF )
            goto LABEL_113;
          v26 = *(this + 0x13);
          if ( !v26 || (__int16)v91 >= (unsigned int)((*(this + 0x14) - v26) >> 4) )
            _invalid_parameter_noinfo();
          v27 = *(this + 0x13) + 0x10 * (__int16)v91;
          v28 = *(_DWORD *)(v27 + 4);
          if ( !v28 || (unsigned __int16)k >= (unsigned __int16)((*(_DWORD *)(v27 + 8) - v28) >> 2) )
          {
LABEL_113:
            v97 = (unsigned __int16)i;
            if ( !v104 || (unsigned __int16)v91 >= (unsigned int)((v105 - v104) >> 4) )
              _invalid_parameter_noinfo();
            v61 = (unsigned int *)&v104[0x10 * (unsigned __int16)v91];
            v62 = v61[1];
            if ( v62 )
              v63 = (int)(v61[2] - v62) >> 1;
            else
              v63 = 0;
            if ( v62 && v63 < (int)(v61[3] - v62) >> 1 )
            {
              v64 = (_WORD *)v61[2];
              *v64 = i;
              v61[2] = (unsigned int)(v64 + 1);
            }
            else
            {
              v65 = (_WORD *)v61[2];
              if ( v62 > (unsigned int)v65 )
                _invalid_parameter_noinfo();
              sub_795A40(v61, (unsigned int **)&v98, v61, v65, (int)&v97);
              v25 = v91;
            }
            v66 = v101;
            if ( !v101 || (unsigned __int16)v91 >= (unsigned int)((v102 - v101) >> 4) )
            {
              _invalid_parameter_noinfo();
              v66 = v101;
            }
            v67 = *(_DWORD *)&v66[0x10 * (unsigned __int16)v91 + 4];
            v68 = &v66[0x10 * (unsigned __int16)v91];
            if ( v67 )
              v69 = (int)(*((_DWORD *)v68 + 2) - v67) >> 2;
            else
              v69 = 0;
            if ( v67 && v69 < (int)(*((_DWORD *)v68 + 3) - v67) >> 2 )
            {
              v70 = *((int **)v68 + 2);
              *v70 = v96;
              *((_DWORD *)v68 + 2) = v70 + 1;
            }
            else
            {
              v71 = *((void **)v68 + 2);
              if ( v67 > (unsigned int)v71 )
                _invalid_parameter_noinfo();
              sub_7A3620(v68, (int)&v99, (int)v68, v71, (int)&v96);
              v25 = v91;
            }
            v72 = v107;
            if ( !v107 || (unsigned __int16)v91 >= (unsigned int)((int)(v108 - v107) >> 2) )
            {
              _invalid_parameter_noinfo();
              v72 = v107;
            }
            *(_DWORD *)(v72 + 4 * (unsigned __int16)v91) = i - 2;
            goto LABEL_167;
          }
          v29 = *(this + 0xF);
          if ( !v29 || (unsigned __int16)v91 >= (unsigned int)((*(this + 0x10) - v29) >> 4) )
            _invalid_parameter_noinfo();
          v30 = *(this + 0xF) + 0x10 * (unsigned __int16)v91;
          v31 = *(_DWORD *)(v30 + 4);
          if ( !v31 || (unsigned __int16)k >= (unsigned int)((*(_DWORD *)(v30 + 8) - v31) >> 1) )
            _invalid_parameter_noinfo();
          v32 = *(this + 0x13);
          v92 = *(_WORD *)(*(_DWORD *)(v30 + 4) + 2 * (unsigned __int16)k);
          if ( !v32 || (unsigned __int16)v91 >= (unsigned int)((*(this + 0x14) - v32) >> 4) )
            _invalid_parameter_noinfo();
          v33 = *(this + 0x13) + 0x10 * (unsigned __int16)v91;
          v34 = *(_DWORD *)(v33 + 4);
          if ( !v34 || (unsigned __int16)k >= (unsigned int)((*(_DWORD *)(v33 + 8) - v34) >> 2) )
            _invalid_parameter_noinfo();
          v97 = v92;
          v93 = 2 * v92;
          *(_DWORD *)v88 = v93;
          memcpy(Dst, *(const void **)(*(_DWORD *)(v33 + 4) + 4 * (unsigned __int16)k), *(size_t *)v88);
          v35 = &Dst[v93];
          v36 = *(this + 0x13);
          Dst += v93;
          if ( !v36 || (v37 = *(this + 0x14) - v36, v38 = (__int16)v91, (__int16)v91 >= (unsigned int)(v37 >> 4)) )
          {
            _invalid_parameter_noinfo();
            v38 = (__int16)v91;
          }
          v39 = *(this + 0x13) + 0x10 * v38;
          v40 = *(_DWORD *)(v39 + 4);
          v41 = v40 ? (*(_DWORD *)(v39 + 8) - v40) >> 2 : 0;
          if ( (unsigned __int16)k < v41 - 1 )
            break;
LABEL_112:
          ++k;
        }
        if ( !a2 )
          break;
        v42 = *(this + 0x13);
        if ( !(v97 % 2) )
          goto LABEL_99;
        if ( !v42 || (unsigned __int16)v91 >= (unsigned int)((*(this + 0x14) - v42) >> 4) )
          _invalid_parameter_noinfo();
        v43 = *(this + 0x13) + 0x10 * (unsigned __int16)v91;
        v44 = *(_DWORD *)(v43 + 4);
        v97 = v43;
        if ( !v44 || (unsigned __int16)k >= (unsigned int)((*(_DWORD *)(v43 + 8) - v44) >> 2) )
        {
          _invalid_parameter_noinfo();
          v43 = v97;
        }
        *(_WORD *)v35 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v43 + 4) + 4 * (unsigned __int16)k) + v93 - 2);
        v45 = *(this + 0x13);
        v46 = v35 + 2;
        if ( !v45 || (unsigned __int16)v91 >= (unsigned int)((*(this + 0x14) - v45) >> 4) )
          _invalid_parameter_noinfo();
        v47 = *(this + 0x13) + 0x10 * (unsigned __int16)v91;
        v48 = *(_DWORD *)(v47 + 4);
        v97 = v47;
        if ( !v48 || (unsigned __int16)k >= (unsigned int)((*(_DWORD *)(v47 + 8) - v48) >> 2) )
        {
          _invalid_parameter_noinfo();
          v47 = v97;
        }
        *v46 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v47 + 4) + 4 * (unsigned __int16)k) + v93 - 2);
        v49 = *(this + 0x13);
        v50 = v46 + 1;
        if ( !v49 || (unsigned __int16)v91 >= (unsigned int)((*(this + 0x14) - v49) >> 4) )
          _invalid_parameter_noinfo();
        v51 = *(this + 0x13) + 0x10 * (unsigned __int16)v91;
        v52 = (unsigned __int16)k + 1;
        v53 = *(_DWORD *)(v51 + 4);
        if ( !v53 || v52 >= (*(_DWORD *)(v51 + 8) - v53) >> 2 )
          _invalid_parameter_noinfo();
        *v50 = **(_WORD **)(*(_DWORD *)(v51 + 4) + 4 * v52);
        Dst = (char *)(v50 + 1);
      }
      v42 = *(this + 0x13);
LABEL_99:
      if ( !v42 || (unsigned __int16)v91 >= (unsigned int)((*(this + 0x14) - v42) >> 4) )
        _invalid_parameter_noinfo();
      v54 = *(this + 0x13) + 0x10 * (unsigned __int16)v91;
      v55 = *(_DWORD *)(v54 + 4);
      v97 = v54;
      if ( !v55 || (unsigned __int16)k >= (unsigned int)((*(_DWORD *)(v54 + 8) - v55) >> 2) )
      {
        _invalid_parameter_noinfo();
        v54 = v97;
      }
      *(_WORD *)v35 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v54 + 4) + 4 * (unsigned __int16)k) + v93 - 2);
      v56 = *(this + 0x13);
      v57 = v35 + 2;
      if ( !v56 || (unsigned __int16)v91 >= (unsigned int)((*(this + 0x14) - v56) >> 4) )
        _invalid_parameter_noinfo();
      v58 = *(this + 0x13) + 0x10 * (unsigned __int16)v91;
      v59 = (unsigned __int16)k + 1;
      v60 = *(_DWORD *)(v58 + 4);
      if ( !v60 || v59 >= (*(_DWORD *)(v58 + 8) - v60) >> 2 )
        _invalid_parameter_noinfo();
      *v57 = **(_WORD **)(*(_DWORD *)(v58 + 4) + 4 * v59);
      Dst = (char *)(v57 + 1);
      goto LABEL_112;
    }
LABEL_168:
    sub_7969B0(this);
    sub_796BC0(this + 0xE, &v103);
    sub_796D10(this + 0x12, &v100);
    sub_785580(this + 0xA, (int)&v106);
    if ( v107 )
      FormHeapFree(v107);
    v83 = v101;
    if ( v101 )
    {
      sub_794FC0(v101, v102);
      FormHeapFree((unsigned int)v83);
    }
    v84 = v104;
    if ( v104 )
    {
      sub_794FC0(v104, v105);
      FormHeapFree((unsigned int)v84);
    }
  }
}
