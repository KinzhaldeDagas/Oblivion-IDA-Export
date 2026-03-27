// local variable allocation has failed, the output may be wrong!
void __userpurge sub_750260(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // esi
  __int16 v10; // cx
  bool v11; // c0
  double v12; // st7
  int v13; // esi
  unsigned __int8 v14; // al
  bool v15; // zf
  NiObjectVtbl *v16; // esi
  NiObject *v17; // eax
  int v18; // edi
  unsigned __int8 v19; // al
  NiObjectVtbl *v20; // edi
  double v21; // st5
  double v22; // st5
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // ebp
  int *v26; // esi
  double v27; // st7
  int v28; // ecx
  void (__thiscall *v29)(NiObjectVtbl *, _DWORD, int, float *); // edx
  double v30; // st7
  int v31; // edx
  void (__thiscall *v32)(NiObjectVtbl *, _DWORD, int, float *); // eax
  char v33; // cl
  char v34; // dl
  double v35; // st7
  double v36; // st6
  double v37; // st5
  unsigned int v38; // ecx
  float *v39; // edx
  float *v40; // edx
  double v41; // st2
  float *v42; // edx
  unsigned int v43; // eax
  _BYTE *v44; // edx
  float *v45; // edx
  float *v46; // esi
  double v47; // st4
  double v48; // st7
  double v49; // st6
  double v50; // rt1
  void (__thiscall *Destructor)(NiRefObject *, bool); // eax
  void (__stdcall *v52)(_DWORD, int, float *); // eax
  int v53; // edx
  float v54; // [esp+30h] [ebp-6Ch]
  float v56; // [esp+40h] [ebp-5Ch]
  NiObject *v57; // [esp+40h] [ebp-5Ch]
  char v60; // [esp+4Eh] [ebp-4Eh]
  char v61; // [esp+4Fh] [ebp-4Dh]
  float v62; // [esp+50h] [ebp-4Ch]
  float *v63; // [esp+54h] [ebp-48h]
  int v64; // [esp+54h] [ebp-48h]
  float v65; // [esp+58h] [ebp-44h] BYREF
  float v66; // [esp+5Ch] [ebp-40h]
  char v67[4]; // [esp+60h] [ebp-3Ch] BYREF
  float v68; // [esp+64h] [ebp-38h]
  NiObjectVtbl *v69; // [esp+68h] [ebp-34h]
  float v70; // [esp+6Ch] [ebp-30h] BYREF
  float v71; // [esp+70h] [ebp-2Ch]
  double v72; // [esp+74h] [ebp-28h]
  double v73; // [esp+7Ch] [ebp-20h]
  int v74; // [esp+84h] [ebp-18h] BYREF
  int v75; // [esp+88h] [ebp-14h] BYREF
  double v76; // [esp+8Ch] [ebp-10h] BYREF
  double v77; // [esp+94h] [ebp-8h] OVERLAPPED BYREF

  v6 = *(float *)(a1 + 0x20);
  v7 = *(float *)&a5;
  v8 = *(float *)&a5;
  if ( *(float *)&a5 < v6 )
    *(float *)(a1 + 0x50) = -flt_A7DEB4;
  if ( *(_DWORD *)(a1 + 0x30) )
  {
    v9 = *(_DWORD *)(a1 + 0x44);
    if ( v9 )
    {
      v10 = *(_WORD *)(a1 + 8);
      if ( (*(_WORD *)(a1 + 8) & 0x20) != 0 )
        *(float *)(a1 + 0x28) = flt_A7A164;
      if ( -flt_A7DEB4 == v6 || (v10 & 6) != 0 )
      {
        v12 = v7;
      }
      else
      {
        v11 = *(float *)(v9 + 0x48) < v8 - v6;
        v12 = v7;
        if ( v11 )
          *(float *)(a1 + 0x20) = v7;
      }
      v56 = v12;
      if ( !sub_6C36B0((float *)a1, v56) )
      {
        if ( *(_DWORD *)(a1 + 0x48) )
        {
          if ( *(_DWORD *)(a1 + 0x3C) )
          {
            v57 = *(NiObject **)(a1 + 0x48);
            *(float *)&a5 = -flt_A7DEB4;
            if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3EA50, v57) )
            {
              v13 = *(_DWORD *)(a1 + 0x48);
              sub_6CD0F0(v13);
              v14 = sub_6CC550(v13);
              v15 = v14 == (unsigned __int8)byte_A79EFC;
              LOBYTE(v75) = v14;
              if ( !v15 )
                *(float *)&a5 = sub_74F7F0(v13, v75);
            }
            v16 = sub_74FA90((_DWORD *)a1);
            *(float *)&v75 = -flt_A7DEB4;
            LOBYTE(a5) = *(float *)&v75 != *(float *)&a5;
            v17 = *(NiObject **)(a1 + 0x3C);
            *((float *)&v73 + 1) = *(float *)&v75;
            if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3CF5C, v17) )
            {
              v18 = *(_DWORD *)(a1 + 0x3C);
              sub_6CD0F0(v18);
              v19 = sub_6CC550(v18);
              v15 = v19 == (unsigned __int8)byte_A79EFC;
              LOBYTE(v75) = v19;
              if ( !v15 )
                *((float *)&v73 + 1) = sub_74F7F0(v18, v75);
            }
            v20 = sub_53D850((_DWORD *)a1);
            v21 = flt_A7DEB4;
            v69 = v20;
            v22 = -v21;
            if ( v16 )
            {
              if ( v20 )
              {
                v62 = *(float *)(a1 + 0x28);
                if ( (_BYTE)a5 || v22 != *((float *)&v73 + 1) )
                  v62 = *((float *)&v73 + 1);
                if ( (*(_BYTE *)(a1 + 8) & 0x20) != 0 && *(NiObjectVtbl **)(a1 + 0x4C) != v20 )
                {
                  v23 = *(_DWORD *)(a1 + 0x30);
                  *(float *)(a1 + 0x50) = v62;
                  (*((void (__thiscall **)(NiObjectVtbl *, float, int, int))v16->super.Destructor + 0x18))(
                    v16,
                    COERCE_FLOAT(LODWORD(v62)),
                    v23,
                    a1 + 0x54);
                  *(_DWORD *)(a1 + 0x4C) = v20;
                  return;
                }
                *(_DWORD *)(a1 + 0x4C) = v20;
                v24 = sub_6D2940(v16, &a5, &v75, v67);
                v25 = a5;
                v63 = (float *)v24;
                if ( *(float *)&a5 != 0.0
                  || (*((unsigned __int8 (__thiscall **)(NiObjectVtbl *, _DWORD))v16->super.Destructor + 0x2C))(v16, 0) )
                {
                  if ( (*((unsigned __int8 (__thiscall **)(NiObjectVtbl *, _DWORD))v16->super.Destructor + 0x2C))(
                         v16,
                         0) )
                  {
                    (*((void (__thiscall **)(NiObjectVtbl *, _DWORD, _DWORD, int *))v16->super.Destructor + 0x18))(
                      v16,
                      0.0,
                      *(_DWORD *)(a1 + 0x30),
                      &a5);
                    if ( (_BYTE)a5 )
                    {
                      v64 = *(int *)(a1 + 0x50);
                      *((float *)&v72 + 1) = *(float *)(*(_DWORD *)(a1 + 0x30) + 0xE8);
                      *(float *)(a1 + 0x50) = v62;
                      if ( (*((unsigned __int8 (__thiscall **)(NiObjectVtbl *, _DWORD, int, int, int))v20->super.Destructor
                            + 0x2C))(
                             v20,
                             0,
                             a2,
                             a3,
                             a4) )
                      {
                        *(float *)&v76 = v66 - *(float *)v67;
                        if ( *(float *)v67 > (double)v66 )
                        {
                          *(float *)v67 = 0.0;
                          *(float *)&v76 = v66;
                        }
                        if ( (*((unsigned __int8 (__thiscall **)(NiObjectVtbl *, _DWORD, _DWORD, float *))v20->super.Destructor
                              + 0x17))(
                               v20,
                               0.0,
                               *(_DWORD *)(a1 + 0x30),
                               &v70) )
                        {
                          *(float *)&v75 = *((float *)&v73 + 1) + *((float *)&v72 + 1);
                          sub_750040((_DWORD *)a1, *(float *)&v75, v62, *(float *)&v64, 0.0, v62, *(float *)v67);
                        }
                      }
                      else
                      {
                        v26 = (int *)sub_6D2940(v20, &v77, &v76, (_BYTE *)&v65 + 3);
                        v75 = *v26;
                        *(float *)&v76 = *(float *)((char *)v26 + HIBYTE(v65) * (LODWORD(v77) - 1));
                        *(float *)&v73 = 0.0;
                        v27 = *(float *)v67;
                        *(double *)((char *)&v77 + 4) = v66;
                        if ( v66 >= (double)*(float *)v67 )
                        {
                          v30 = v66;
                        }
                        else
                        {
                          v28 = *(_DWORD *)(a1 + 0x30);
                          v29 = *((void (__thiscall **)(NiObjectVtbl *, _DWORD, int, float *))v20->super.Destructor
                                + 0x17);
                          v73 = *(float *)&v76 - v27;
                          *(float *)&v77 = v27 + v73 * dbl_A2FAA0;
                          v29(v20, LODWORD(v77), v28, &v70);
                          *(float *)&v73 = v73;
                          *(float *)&v77 = *(float *)&v73 + *(float *)&v74;
                          sub_750040(
                            (_DWORD *)a1,
                            *(float *)&v77,
                            *(float *)&v76,
                            *(float *)v67,
                            *(float *)&v75,
                            *(float *)&v76,
                            v70);
                          *(float *)v67 = *(float *)v26;
                          v30 = *(double *)((char *)&v77 + 4);
                        }
                        v31 = *(_DWORD *)(a1 + 0x30);
                        v32 = *((void (__thiscall **)(NiObjectVtbl *, _DWORD, int, float *))v20->super.Destructor + 0x17);
                        *(double *)((char *)&v77 + 4) = v30 - *(float *)v67;
                        *(float *)&v77 = *(float *)v67 + *(double *)((char *)&v77 + 4) * dbl_A2FAA0;
                        v32(v20, LODWORD(v77), v31, &v70);
                        *(float *)&v75 = *((float *)&v72 + 1) + v76 + v71;
                        sub_750040(
                          (_DWORD *)a1,
                          *(float *)&v75,
                          v62,
                          *(float *)&v64,
                          *(float *)&v73,
                          v62,
                          *(float *)v67);
                      }
                    }
                    return;
                  }
                  *(float *)&v74 = 0.0;
                  v33 = sub_6BDBA0(v62, (int)v63, v75, v25, &v74, v67[0]);
                  if ( -flt_A7DEB4 == *(float *)(a1 + 0x50) )
                  {
                    *(float *)(a1 + 0x50) = v62;
                    *(_BYTE *)(a1 + 0x54) = v33;
                    return;
                  }
                  v34 = *(_BYTE *)(a1 + 0x54);
                  *((float *)&v72 + 1) = *(float *)(a1 + 0x50);
                  v60 = v34;
                  v35 = v62;
                  *(_BYTE *)(a1 + 0x54) = v33;
                  *(float *)(a1 + 0x50) = v62;
                  v61 = 0;
                  v36 = dbl_A2FAA0;
                  HIDWORD(v73) = 0;
                  v37 = *((float *)&v72 + 1);
                  while ( 1 )
                  {
                    if ( SHIDWORD(v73) >= 0x14 )
                      return;
                    v77 = v37;
                    v76 = v35;
                    LOBYTE(a5) = v35 < v37;
                    if ( v60 )
                    {
                      v38 = v25;
                      if ( v25 )
                      {
                        v39 = (float *)((char *)v63 + (unsigned __int8)v67[0] * (v25 - 1));
                        do
                        {
                          if ( *v39 <= v37 && !*((_BYTE *)v39 + 4) )
                            break;
                          --v38;
                          v39 = (float *)((char *)v39 - (unsigned __int8)v67[0]);
                        }
                        while ( v38 );
                      }
                    }
                    else
                    {
                      v38 = 0;
                      if ( v25 )
                      {
                        v40 = v63;
                        do
                        {
                          v41 = *v40;
                          if ( v41 > v37 && ((_BYTE)a5 || v41 <= v35) && *((_BYTE *)v40 + 4) )
                            break;
                          ++v38;
                          v40 = (float *)((char *)v40 + (unsigned __int8)v67[0]);
                        }
                        while ( v38 < v25 );
                      }
                      if ( v38 == v25 )
                      {
                        if ( !(_BYTE)a5 )
                          return;
                        v38 = 0;
                        if ( v25 )
                        {
                          v42 = v63;
                          do
                          {
                            if ( *v42 < v35 && *((_BYTE *)v42 + 4) )
                              break;
                            ++v38;
                            v42 = (float *)((char *)v42 + (unsigned __int8)v67[0]);
                          }
                          while ( v38 < v25 );
                        }
                        if ( v38 == v25 )
                          return;
                      }
                    }
                    v43 = v38;
                    if ( v38 < v25 )
                    {
                      v44 = (char *)v63 + v38 * (unsigned __int8)v67[0] + 4;
                      do
                      {
                        if ( !*v44 )
                          break;
                        ++v43;
                        v44 += (unsigned __int8)v67[0];
                      }
                      while ( v43 < v25 );
                    }
                    if ( v43 == v25 )
                      --v43;
                    v45 = (float *)((char *)v63 + v38 * (unsigned __int8)v67[0]);
                    v46 = (float *)((char *)v63 + v43 * (unsigned __int8)v67[0]);
                    if ( (_BYTE)a5 )
                    {
                      v47 = *v46;
                      if ( v47 <= v37 )
                      {
                        v68 = v35;
                        v71 = *v63;
                        v66 = *v45;
                        if ( v47 >= v35 )
                        {
                          v50 = v36;
                          v49 = v35;
                          v48 = v50;
                        }
                        else
                        {
                          v48 = v36;
                          v49 = *v46;
                        }
                        v65 = v49;
                        *(float *)&v73 = v48 * (v65 - v66) + v66;
                        v35 = *(float *)&v73;
                      }
                      else
                      {
                        v68 = *(float *)((char *)v63 + (unsigned __int8)v67[0] * (v25 - 1));
                        v71 = v37;
                        v66 = *v45;
                        v65 = *v46;
                        *(float *)&v73 = v36 * (v65 - v66) + v66;
                        v35 = *(float *)&v73;
                      }
                    }
                    else
                    {
                      if ( *v46 < v35 )
                      {
                        Destructor = v69->super.Destructor;
                        v68 = *v46;
                        v52 = *((void (__stdcall **)(_DWORD, int, float *))Destructor + 0x17);
                        v71 = v37;
                        v66 = *v45;
                        v53 = *(_DWORD *)(a1 + 0x30);
                        v65 = *v46;
                        *(float *)&v73 = v36 * (v65 - v66) + v66;
                        v52(LODWORD(v73), v53, &v70);
                        goto LABEL_86;
                      }
                      v68 = v35;
                      v71 = v37;
                      v66 = *v45;
                      v65 = *v46;
                    }
                    v54 = v35;
                    (*((void (__stdcall **)(_DWORD, _DWORD, float *))v69->super.Destructor + 0x17))(
                      LODWORD(v54),
                      *(_DWORD *)(a1 + 0x30),
                      &v70);
LABEL_86:
                    *(float *)&v73 = *(float *)(*(_DWORD *)(a1 + 0x30) + 0xE8);
                    if ( (_BYTE)a5 )
                      *(float *)&v73 = *(float *)(a1 + 0x18) - *(float *)(a1 + 0x14) + *(float *)&v73;
                    *(float *)&a5 = *(float *)&v73 + v76 - v77;
                    sub_750040((_DWORD *)a1, *(float *)&a5, v68, v71, v66, v65, v70);
                    if ( *v46 >= v76 )
                    {
                      v61 = 1;
                    }
                    else
                    {
                      *((float *)&v72 + 1) = v68;
                      v60 = sub_6BDBA0(v68, (int)v63, v75, v25, &v74, v67[0]);
                    }
                    ++HIDWORD(v73);
                    if ( v61 )
                      return;
                    v36 = dbl_A2FAA0;
                    v37 = *((float *)&v72 + 1);
                    v35 = v62;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
