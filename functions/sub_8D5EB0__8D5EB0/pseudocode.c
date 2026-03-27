char __thiscall sub_8D5EB0(const void **this, int a2, float *a3, float a4)
{
  unsigned __int64 v5; // rax
  int v6; // ecx
  float *v7; // edi
  _DWORD *v8; // ebx
  int v9; // esi
  float v10; // eax
  double v11; // st7
  _DWORD *ThreadLocalStoragePointer; // ecx
  _DWORD *v13; // edi
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  _DWORD *v19; // ecx
  char *v20; // edx
  char *v21; // eax
  int v22; // eax
  int v23; // edi
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  int v26; // eax
  int v27; // edi
  int v28; // eax
  _DWORD *v29; // esi
  int v30; // eax
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // esi
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  _DWORD *v39; // edx
  int v40; // edi
  bool v41; // zf
  int v42; // eax
  _DWORD *v43; // ecx
  unsigned __int64 v44; // rax
  float v45; // eax
  int v46; // ecx
  float v47; // edx
  float v48; // eax
  int v49; // edi
  _DWORD *v50; // ecx
  char *v51; // edx
  int v52; // eax
  int v53; // ebx
  int v54; // ecx
  int *v55; // ecx
  int v56; // edx
  int v57; // eax
  int v58; // esi
  int v59; // eax
  int v60; // esi
  int v61; // edx
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // edx
  int v66; // edi
  _DWORD *v67; // ecx
  _DWORD *v68; // ecx
  _DWORD *v69; // ecx
  _DWORD *v70; // ecx
  int v72; // [esp-8h] [ebp-339Ch]
  int v73; // [esp+28h] [ebp-336Ch]
  char *v74; // [esp+28h] [ebp-336Ch]
  int v75; // [esp+2Ch] [ebp-3368h]
  char *v76; // [esp+30h] [ebp-3364h]
  int v77; // [esp+30h] [ebp-3364h]
  int v78; // [esp+34h] [ebp-3360h]
  unsigned int v79; // [esp+34h] [ebp-3360h]
  int v80; // [esp+34h] [ebp-3360h]
  char *v81; // [esp+38h] [ebp-335Ch]
  int v82; // [esp+3Ch] [ebp-3358h]
  int v83; // [esp+3Ch] [ebp-3358h]
  char *v85; // [esp+44h] [ebp-3350h]
  int v86; // [esp+44h] [ebp-3350h]
  _DWORD *v87; // [esp+48h] [ebp-334Ch]
  int v88; // [esp+4Ch] [ebp-3348h]
  float v89; // [esp+50h] [ebp-3344h] BYREF
  float v90; // [esp+54h] [ebp-3340h]
  float v91; // [esp+58h] [ebp-333Ch]
  float v92; // [esp+5Ch] [ebp-3338h]
  signed int v93[6]; // [esp+60h] [ebp-3334h] BYREF
  int v94; // [esp+78h] [ebp-331Ch]
  int v95; // [esp+7Ch] [ebp-3318h]
  float v96[4]; // [esp+80h] [ebp-3314h] BYREF
  __int16 v97; // [esp+90h] [ebp-3304h] BYREF
  int v98; // [esp+94h] [ebp-3300h]
  signed int v99; // [esp+98h] [ebp-32FCh]
  int v100; // [esp+9Ch] [ebp-32F8h]
  int v101; // [esp+A4h] [ebp-32F0h]
  _DWORD v102[11]; // [esp+A8h] [ebp-32ECh] BYREF
  _DWORD v103[20]; // [esp+D4h] [ebp-32C0h] BYREF
  _DWORD v104[4]; // [esp+124h] [ebp-3270h] BYREF
  __int128 v105; // [esp+134h] [ebp-3260h]
  __int128 v106; // [esp+144h] [ebp-3250h]
  float v107; // [esp+218h] [ebp-317Ch]
  float v108; // [esp+21Ch] [ebp-3178h]
  int v109; // [esp+220h] [ebp-3174h]
  int v110; // [esp+224h] [ebp-3170h]
  int v111; // [esp+234h] [ebp-3160h] BYREF
  int v112; // [esp+238h] [ebp-315Ch]
  int v113; // [esp+23Ch] [ebp-3158h]
  char v114; // [esp+240h] [ebp-3154h] BYREF
  _DWORD v115[12]; // [esp+344h] [ebp-3050h] BYREF
  _BYTE v116[12292]; // [esp+374h] [ebp-3020h] BYREF
  float v117; // [esp+3378h] [ebp-1Ch]
  int v118; // [esp+3384h] [ebp-10h]

  if ( byte_BA8180 || (LOBYTE(v5) = sub_9246E0((int)this, 3), (byte_BA8180 = v5) != 0) )
  {
    v6 = (int)*(this + 8);
    v7 = a3;
    v93[1] = 0x3E8;
    v93[2] = 0x3E8;
    v93[3] = 0x3E8;
    v93[4] = 4;
    v93[5] = 4;
    v8 = this + 5;
    v93[0] = 2;
    v94 = 0;
    v95 = 0;
    v87 = v8;
    LODWORD(v5) = (*(int (__thiscall **)(int, float *, _DWORD *, signed int *))(*(_DWORD *)v6 + 0xC))(v6, a3, v8, v93);
    if ( (_DWORD)v5 != 1 )
    {
      v9 = a2;
      ++*(_DWORD *)(a2 + 0x88);
      v10 = *a3;
      v90 = *(float *)(a2 + 0x18);
      v89 = v10;
      v91 = v90 - v10;
      v92 = fConstant_1 / v91;
      sub_8D2E10(v104, a2 + 0x170);
      v11 = fConstant_1 / a4;
      v107 = a4;
      *(float *)v102 = a4;
      *(float *)&v102[2] = v91;
      *(float *)&v102[3] = v92;
      v109 = 1;
      v110 = 0x3F800000;
      v105 = 0;
      v106 = 0;
      v104[2] = 0x3FB33333;
      v104[1] = 0x3F000000;
      v104[3] = 0;
      v102[4] = 0x3F800000;
      v108 = v11;
      *(float *)&v102[1] = v11;
      sub_923B10((int)&v89, (int)v104, (int)v102, v94, v95, v103);
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex]
                                                                                + 0x1A8) )
      {
        v13 = *(_DWORD **)(ThreadLocalStoragePointer[TlsIndex] + 0x1A4);
        *v13 = "LtTOI";
        v13[3] = "SolveToi";
        v14 = __rdtsc();
        HIDWORD(v14) = v14;
        LODWORD(v14) = ThreadLocalStoragePointer[TlsIndex];
        v13[1] = HIDWORD(v14);
        *(_DWORD *)(v14 + 0x1A4) = v13 + 4;
        v7 = a3;
      }
      v15 = *((_DWORD *)v7 + 1);
      if ( *(_BYTE *)(v15 + 0x91) )
        v15 = *((_DWORD *)v7 + 2);
      v16 = *(_DWORD *)(v15 + 0x54);
      v17 = *(_DWORD *)(v16 + 0x38);
      v73 = v16;
      v18 = ThreadLocalStoragePointer[TlsIndex];
      v19 = *(_DWORD **)(v18 + 0x19C);
      v75 = v18;
      v76 = (char *)v19[8];
      v20 = &v76[(v17 + 0x10) & 0xFFFFFFF0];
      if ( (unsigned int)v20 > v19[0xB] )
      {
        v21 = (char *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v19 + 0xC))(v19, (v17 + 0x10) & 0xFFFFFFF0);
        v81 = v21;
      }
      else
      {
        v21 = (char *)v19[8];
        v19[8] = v20;
        v81 = v76;
      }
      LODWORD(v96[0]) = v21;
      sub_8B18C0((int)v8, v21, 0, v17);
      v111 = (int)&v114;
      v72 = (int)*(this + 8);
      v112 = 0;
      v113 = 0x80000040;
      sub_8D4AF0(v93, (int)v103, (int)a3, v72, a2, (int)&v111, v96);
      nullsub_5(v103);
      v22 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      v23 = v75;
      if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
      {
        v24 = *(_DWORD **)(v75 + 0x1A4);
        *v24 = "StEvtCleanup";
        v25 = __rdtsc();
        v24[1] = v25;
        *(_DWORD *)(v75 + 0x1A4) = v24 + 3;
      }
      v26 = v8[1] - 1;
      if ( v26 >= 0 )
      {
        v27 = v26 << 6;
        v78 = v26 << 6;
        v82 = v8[1];
        do
        {
          v28 = *(_DWORD *)(v27 + *v8 + 4);
          v29 = (_DWORD *)(v27 + *v8);
          if ( *(_DWORD *)(v28 + 0x54) == v73 && v81[*(unsigned __int16 *)(v28 + 0x8C)] == 8
            || (v30 = v29[2], *(_DWORD *)(v30 + 0x54) == v73) && v81[*(unsigned __int16 *)(v30 + 0x8C)] == 8 )
          {
            v31 = v29[1];
            v32 = v29[6];
            v100 = v29[2];
            v97 = 0xFFFF;
            v98 = 0;
            v99 = v31;
            v101 = v32;
            sub_8DC920(v31, *(_DWORD *)(v31 + 8), (int)&v97);
            v33 = v29[1];
            if ( *(_DWORD *)(v33 + 0x98) )
              sub_8DC0A0(v33, v33, (int)&v97);
            v34 = v29[2];
            v35 = *(_DWORD *)(v34 + 0x98);
            if ( v35 )
              sub_8DC0A0(v35, v34, (int)&v97);
            v36 = *v8;
            v37 = *v8 + (--v8[1] << 6);
            v38 = v27 + v36;
            *(_DWORD *)v38 = *(_DWORD *)v37;
            v39 = (_DWORD *)(v38 + 4);
            v40 = 2;
            do
            {
              *v39 = *(_DWORD *)((char *)v39 + v37 - v38);
              ++v39;
              --v40;
            }
            while ( v40 );
            v27 = v78;
            v8 = v87;
            *(_DWORD *)(v38 + 0xC) = *(_DWORD *)(v37 + 0xC);
            *(_DWORD *)(v38 + 0x10) = *(_DWORD *)(v37 + 0x10);
            *(_DWORD *)(v38 + 0x14) = *(_DWORD *)(v37 + 0x14);
            *(_DWORD *)(v38 + 0x18) = *(_DWORD *)(v37 + 0x18);
            *(_OWORD *)(v38 + 0x20) = *(_OWORD *)(v37 + 0x20);
            *(_OWORD *)(v38 + 0x30) = *(_OWORD *)(v37 + 0x30);
          }
          v27 -= 0x40;
          v41 = v82 == 1;
          v78 = v27;
          --v82;
        }
        while ( !v41 );
        v9 = a2;
        v23 = v75;
      }
      v42 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      if ( *(_DWORD *)(v42 + 0x1A4) < *(_DWORD *)(v42 + 0x1A8) )
      {
        v43 = *(_DWORD **)(v23 + 0x1A4);
        *v43 = "StCollide";
        v44 = __rdtsc();
        v43[1] = v44;
        *(_DWORD *)(v23 + 0x1A4) = v43 + 3;
      }
      sub_8D2C90(v96, *a3, *(float *)(v9 + 0x18));
      v45 = v96[1];
      v46 = *(_DWORD *)(v9 + 0x74) + 0x10;
      *(float *)v46 = v96[0];
      v47 = v96[2];
      *(float *)(v46 + 4) = v45;
      v48 = v96[3];
      *(float *)(v46 + 8) = v47;
      *(float *)(v46 + 0xC) = v48;
      v49 = *(_DWORD *)(v9 + 0x74);
      v77 = v112;
      v83 = v111;
      if ( !v112 || (sub_8D4590(v111, v112, v9, 0), *(_DWORD *)(dword_BA7D98 + 4) == 1) )
      {
LABEL_60:
        v66 = v75;
      }
      else
      {
        v50 = *(_DWORD **)(v75 + 0x19C);
        v88 = *(_DWORD *)(*(_DWORD *)v83 + 0x54);
        v79 = *(_DWORD *)(v88 + 0x38);
        v85 = (char *)v50[8];
        v51 = &v85[(v79 + 0x10) & 0xFFFFFFF0];
        if ( (unsigned int)v51 > v50[0xB] )
        {
          v74 = (char *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v50 + 0xC))(v50, (v79 + 0x10) & 0xFFFFFFF0);
        }
        else
        {
          v50[8] = v51;
          v74 = v85;
        }
        v99 = v79 | 0x80000000;
        sub_8B18C0((int)v8, v74, 0, v79);
        v52 = 0;
        v117 = 3.4028235e38;
        v86 = 0;
        if ( v77 > 0 )
        {
          do
          {
            v53 = *(_DWORD *)(v83 + 4 * v52);
            v74[*(unsigned __int16 *)(v53 + 0x8C)] = 1;
            v54 = 0;
            v80 = 0;
            if ( *(int *)(v53 + 0x3C) > 0 )
            {
              while ( 1 )
              {
                v55 = (int *)(*(_DWORD *)(v53 + 0x38) + 8 * v54);
                v56 = v55[1];
                v57 = *(_DWORD *)(v56 + 0x10);
                v58 = *(_DWORD *)(v57 + v56 + 0x54);
                v59 = v56 + v57;
                if ( v58 != v88 || !v74[*(unsigned __int16 *)(v59 + 0x8C)] )
                {
                  v60 = *v55;
                  v61 = *(_DWORD *)v49;
                  v115[0] = v116;
                  v117 = 3.4028235e38;
                  v118 = 0;
                  v62 = 0x3C * *(char *)(v60 + 8) + v61 + 0x1A14;
                  *(_DWORD *)(v49 + 0x28) = v62;
                  *(_BYTE *)(v49 + 0xC) = *(_BYTE *)(v62 + 0x10);
                  sub_8E6D10(v60, v49, (int)v115);
                  v63 = dword_BA7D98;
                  v64 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
                  v65 = *(_DWORD *)(dword_BA7D98 + 8);
                  if ( v65 <= v64 || (LODWORD(v96[0]) = v65 - v64, v65 == v64) )
                  {
                    *(_DWORD *)(v63 + 4) = 1;
                    v63 = dword_BA7D98;
                  }
                  if ( *(_DWORD *)(v63 + 4) == 1 )
                  {
                    v68 = *(_DWORD **)(v75 + 0x19C);
                    v41 = v74 == (char *)v68[0xA];
                    v68[8] = v74;
                    if ( v41 )
                      (*(void (__thiscall **)(_DWORD *, char *))(*v68 + 0x10))(v68, v74);
                    if ( v99 >= 0 )
                      sub_8A75D0(*(_DWORD *)(v75 + 0x19C), v74, v99 & 0x3FFFFFFF, 0x14);
                    v8 = v87;
                    v9 = a2;
                    goto LABEL_60;
                  }
                  if ( (_BYTE *)v115[0] != v116 )
                    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD *))(**(_DWORD **)(v60 + 0x10) + 0x14))(
                      *(_DWORD *)(v60 + 0x10),
                      *(_DWORD *)(v60 + 0x14),
                      *(_DWORD *)(v60 + 0x18),
                      v49,
                      v115);
                  if ( v117 < (double)flt_A9A020 )
                    sub_8D3600(this, (int)v115, (_DWORD *)v60);
                }
                v54 = ++v80;
                if ( v80 >= *(_DWORD *)(v53 + 0x3C) )
                {
                  v52 = v86;
                  break;
                }
              }
            }
            v86 = ++v52;
          }
          while ( v52 < v77 );
          v8 = v87;
          v9 = a2;
        }
        v66 = v75;
        v67 = *(_DWORD **)(v75 + 0x19C);
        v41 = v74 == (char *)v67[0xA];
        v67[8] = v74;
        if ( v41 )
          (*(void (__thiscall **)(_DWORD *, char *))(*v67 + 0x10))(v67, v74);
        if ( v99 >= 0 )
          sub_8A75D0(*(_DWORD *)(v75 + 0x19C), v74, v99 & 0x3FFFFFFF, 0x14);
      }
      if ( v113 >= 0 )
        sub_8A75D0(*(_DWORD *)(v66 + 0x19C), (_DWORD *)v111, 4 * v113, 0x14);
      v69 = *(_DWORD **)(v66 + 0x19C);
      v41 = v81 == (char *)v69[0xA];
      v69[8] = v81;
      if ( v41 )
        (*(void (__thiscall **)(_DWORD *, char *))(*v69 + 0x10))(v69, v81);
      (*(void (__thiscall **)(_DWORD, float *, _DWORD *, signed int *))(*(_DWORD *)*(this + 8) + 0x18))(
        *(this + 8),
        a3,
        v8,
        v93);
      v41 = (*(_DWORD *)(v9 + 0x88))-- == 1;
      if ( v41 )
      {
        if ( *(_DWORD *)(v9 + 0x84) )
        {
          if ( !*(_BYTE *)(v9 + 0x90) )
            sub_899210(v9);
        }
      }
      LODWORD(v5) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
      {
        v70 = *(_DWORD **)(v66 + 0x1A4);
        *v70 = "lt";
        v5 = __rdtsc();
        v70[1] = v5;
        *(_DWORD *)(v66 + 0x1A4) = v70 + 3;
      }
    }
  }
  return v5;
}
