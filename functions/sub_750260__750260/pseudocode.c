// local variable allocation has failed, the output may be wrong!
void __userpurge sub_750260(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float a5)
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
  float v25; // ebp
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
  float v38; // ecx
  float *v39; // edx
  float *v40; // edx
  double v41; // st2
  float *v42; // edx
  float v43; // eax
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
  float applicationTimea; // [esp+40h] [ebp-5Ch]
  NiObject *applicationTimeb; // [esp+40h] [ebp-5Ch]
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

  v6 = *(float *)(a1 + 0x20); /*0x750266*/
  v7 = a5; /*0x750269*/
  v8 = a5; /*0x75026d*/
  if ( a5 < v6 ) /*0x750276*/
    *(float *)(a1 + 0x50) = -flt_A7DEB4; /*0x750280*/
  if ( *(_DWORD *)(a1 + 0x30) ) /*0x750283*/
  {
    v9 = *(_DWORD *)(a1 + 0x44); /*0x75028e*/
    if ( v9 ) /*0x750293*/
    {
      v10 = *(_WORD *)(a1 + 8); /*0x750299*/
      if ( (*(_WORD *)(a1 + 8) & 0x20) != 0 ) /*0x7502a4*/
        *(float *)(a1 + 0x28) = flt_A7A164; /*0x7502ac*/
      if ( -flt_A7DEB4 == v6 || (v10 & 6) != 0 ) /*0x7502c3*/
      {
        v12 = v7; /*0x7502dc*/
      }
      else
      {
        v11 = *(float *)(v9 + 0x48) < v8 - v6; /*0x7502ca*/
        v12 = v7; /*0x7502ce*/
        if ( v11 ) /*0x7502d3*/
          *(float *)(a1 + 0x20) = v7; /*0x7502d5*/
      }
      applicationTimea = v12; /*0x7502e1*/
      if ( !NiTimeController_IsUpdateUnchanged((NiTimeController *)a1, applicationTimea) ) /*0x7502e4*/
      {
        if ( *(_DWORD *)(a1 + 0x48) ) /*0x7502f1*/
        {
          if ( *(_DWORD *)(a1 + 0x3C) ) /*0x7502fc*/
          {
            applicationTimeb = *(NiObject **)(a1 + 0x48); /*0x75030c*/
            a5 = -flt_A7DEB4; /*0x750314*/
            if ( NiRTTI::IsObjectOfRTTIType(&stru_B3EA50, applicationTimeb) ) /*0x750318*/
            {
              v13 = *(_DWORD *)(a1 + 0x48); /*0x750324*/
              NiBlendInterpolator_RecomputeNormalizedWeights(v13); /*0x750329*/
              v14 = sub_6CC550(v13); /*0x750330*/
              v15 = v14 == (unsigned __int8)byte_A79EFC; /*0x750335*/
              LOBYTE(v75) = v14; /*0x75033b*/
              if ( !v15 ) /*0x75033f*/
                a5 = sub_74F7F0(v13, v75); /*0x75034d*/
            }
            v16 = sub_74FA90((_DWORD *)a1); /*0x750360*/
            *(float *)&v75 = -flt_A7DEB4; /*0x750362*/
            LOBYTE(a5) = *(float *)&v75 != a5; /*0x750380*/
            v17 = *(NiObject **)(a1 + 0x3C); /*0x750385*/
            *((float *)&v73 + 1) = *(float *)&v75; /*0x750388*/
            if ( NiRTTI::IsObjectOfRTTIType(&stru_B3CF5C, v17) ) /*0x750393*/
            {
              v18 = *(_DWORD *)(a1 + 0x3C); /*0x75039f*/
              NiBlendInterpolator_RecomputeNormalizedWeights(v18); /*0x7503a4*/
              v19 = sub_6CC550(v18); /*0x7503ab*/
              v15 = v19 == (unsigned __int8)byte_A79EFC; /*0x7503b0*/
              LOBYTE(v75) = v19; /*0x7503b6*/
              if ( !v15 ) /*0x7503ba*/
                *((float *)&v73 + 1) = sub_74F7F0(v18, v75); /*0x7503c8*/
            }
            v20 = sub_53D850((_DWORD *)a1); /*0x7503d9*/
            v21 = flt_A7DEB4; /*0x7503db*/
            v69 = v20; /*0x7503e1*/
            v22 = -v21; /*0x7503e5*/
            if ( v16 ) /*0x7503f8*/
            {
              if ( v20 ) /*0x750400*/
              {
                v62 = *(float *)(a1 + 0x28); /*0x75040e*/
                if ( LOBYTE(a5) || v22 != *((float *)&v73 + 1) ) /*0x750416*/
                  v62 = *((float *)&v73 + 1); /*0x750418*/
                if ( (*(_BYTE *)(a1 + 8) & 0x20) != 0 && *(NiObjectVtbl **)(a1 + 0x4C) != v20 ) /*0x75042d*/
                {
                  v23 = *(_DWORD *)(a1 + 0x30); /*0x75042f*/
                  *(float *)(a1 + 0x50) = v62; /*0x750439*/
                  (*((void (__thiscall **)(NiObjectVtbl *, float, int, int))v16->super.Destructor + 0x18))( /*0x750449*/
                    v16,
                    COERCE_FLOAT(LODWORD(v62)),
                    v23,
                    a1 + 0x54);
                  *(_DWORD *)(a1 + 0x4C) = v20; /*0x75044b*/
                  return; /*0x750454*/
                }
                *(_DWORD *)(a1 + 0x4C) = v20; /*0x750469*/
                v24 = sub_6D2940(v16, &a5, &v75, v67); /*0x75046c*/
                v25 = a5; /*0x750471*/
                v63 = (float *)v24; /*0x750477*/
                if ( a5 != 0.0 /*0x750488*/
                  || (*((unsigned __int8 (__thiscall **)(NiObjectVtbl *, _DWORD))v16->super.Destructor + 0x2C))(v16, 0) )
                {
                  if ( (*((unsigned __int8 (__thiscall **)(NiObjectVtbl *, _DWORD))v16->super.Destructor + 0x2C))( /*0x75049e*/
                         v16,
                         0) )
                  {
                    (*((void (__thiscall **)(NiObjectVtbl *, _DWORD, _DWORD, float *))v16->super.Destructor + 0x18))( /*0x7504be*/
                      v16,
                      0.0,
                      *(_DWORD *)(a1 + 0x30),
                      &a5);
                    if ( LOBYTE(a5) ) /*0x7504c5*/
                    {
                      v64 = *(int *)(a1 + 0x50); /*0x7504d1*/
                      *((float *)&v72 + 1) = *(float *)(*(_DWORD *)(a1 + 0x30) + 0xE8); /*0x7504df*/
                      *(float *)(a1 + 0x50) = v62; /*0x7504e7*/
                      if ( (*((unsigned __int8 (__thiscall **)(NiObjectVtbl *, _DWORD, int, int, int))v20->super.Destructor /*0x7504f2*/
                            + 0x2C))(
                             v20,
                             0,
                             a2,
                             a3,
                             a4) )
                      {
                        *(float *)&v76 = v66 - *(float *)v67; /*0x75050a*/
                        if ( *(float *)v67 > (double)v66 ) /*0x750515*/
                        {
                          *(float *)v67 = 0.0; /*0x750519*/
                          *(float *)&v76 = v66; /*0x75051d*/
                        }
                        if ( (*((unsigned __int8 (__thiscall **)(NiObjectVtbl *, _DWORD, _DWORD, float *))v20->super.Destructor /*0x75053b*/
                              + 0x17))(
                               v20,
                               0.0,
                               *(_DWORD *)(a1 + 0x30),
                               &v70) )
                        {
                          *(float *)&v75 = *((float *)&v73 + 1) + *((float *)&v72 + 1); /*0x750574*/
                          sub_750040((_DWORD *)a1, *(float *)&v75, v62, *(float *)&v64, 0.0, v62, *(float *)v67); /*0x75057f*/
                        }
                      }
                      else
                      {
                        v26 = (int *)sub_6D2940(v20, &v77, &v76, (_BYTE *)&v65 + 3); /*0x7505a9*/
                        v75 = *v26; /*0x7505b7*/
                        *(float *)&v76 = *(float *)((char *)v26 + HIBYTE(v65) * (LODWORD(v77) - 1)); /*0x7505be*/
                        *(float *)&v73 = 0.0; /*0x7505c4*/
                        v27 = *(float *)v67; /*0x7505c8*/
                        *(double *)((char *)&v77 + 4) = v66; /*0x7505d0*/
                        if ( v66 >= (double)*(float *)v67 ) /*0x7505db*/
                        {
                          v30 = v66; /*0x750668*/
                        }
                        else
                        {
                          v28 = *(_DWORD *)(a1 + 0x30); /*0x7505e1*/
                          v29 = *((void (__thiscall **)(NiObjectVtbl *, _DWORD, int, float *))v20->super.Destructor /*0x7505ec*/
                                + 0x17);
                          v73 = *(float *)&v76 - v27; /*0x7505f6*/
                          *(float *)&v77 = v27 + v73 * dbl_A2FAA0; /*0x750606*/
                          v29(v20, LODWORD(v77), v28, &v70); /*0x750611*/
                          *(float *)&v73 = v73; /*0x75061a*/
                          *(float *)&v77 = *(float *)&v73 + *(float *)&v74; /*0x75064c*/
                          sub_750040( /*0x750657*/
                            (_DWORD *)a1,
                            *(float *)&v77,
                            *(float *)&v76,
                            *(float *)v67,
                            *(float *)&v75,
                            *(float *)&v76,
                            v70);
                          *(float *)v67 = *(float *)v26; /*0x75065e*/
                          v30 = *(double *)((char *)&v77 + 4); /*0x750662*/
                        }
                        v31 = *(_DWORD *)(a1 + 0x30); /*0x75066e*/
                        v32 = *((void (__thiscall **)(NiObjectVtbl *, _DWORD, int, float *))v20->super.Destructor + 0x17); /*0x750675*/
                        *(double *)((char *)&v77 + 4) = v30 - *(float *)v67; /*0x75067e*/
                        *(float *)&v77 = *(float *)v67 + *(double *)((char *)&v77 + 4) * dbl_A2FAA0; /*0x75068f*/
                        v32(v20, LODWORD(v77), v31, &v70); /*0x75069a*/
                        *(float *)&v75 = *((float *)&v72 + 1) + v76 + v71; /*0x7506d1*/
                        sub_750040( /*0x7506dc*/
                          (_DWORD *)a1,
                          *(float *)&v75,
                          v62,
                          *(float *)&v64,
                          *(float *)&v73,
                          v62,
                          *(float *)v67);
                      }
                    }
                    return; /*0x75058b*/
                  }
                  *(float *)&v74 = 0.0; /*0x75070a*/
                  v33 = sub_6BDBA0(v62, (int)v63, v75, v25, &v74, v67[0]); /*0x75071c*/
                  if ( -flt_A7DEB4 == *(float *)(a1 + 0x50) ) /*0x75072a*/
                  {
                    *(float *)(a1 + 0x50) = v62; /*0x750732*/
                    *(_BYTE *)(a1 + 0x54) = v33; /*0x750736*/
                    return; /*0x75073d*/
                  }
                  v34 = *(_BYTE *)(a1 + 0x54); /*0x750743*/
                  *((float *)&v72 + 1) = *(float *)(a1 + 0x50); /*0x750746*/
                  v60 = v34; /*0x75074a*/
                  v35 = v62; /*0x75074e*/
                  *(_BYTE *)(a1 + 0x54) = v33; /*0x750752*/
                  *(float *)(a1 + 0x50) = v62; /*0x750755*/
                  v61 = 0; /*0x750758*/
                  v36 = dbl_A2FAA0; /*0x75075d*/
                  HIDWORD(v73) = 0; /*0x750763*/
                  v37 = *((float *)&v72 + 1); /*0x750767*/
                  while ( 1 ) /*0x750779*/
                  {
                    if ( SHIDWORD(v73) >= 0x14 ) /*0x75077e*/
                      return; /*0x75077e*/
                    v77 = v37; /*0x75078b*/
                    v76 = v35; /*0x750791*/
                    LOBYTE(a5) = v35 < v37; /*0x75079e*/
                    if ( v60 ) /*0x7507a8*/
                    {
                      v38 = v25; /*0x7507ac*/
                      if ( v25 != 0.0 ) /*0x7507ae*/
                      {
                        v39 = (float *)((char *)v63 + (unsigned __int8)v67[0] * (LODWORD(v25) - 1)); /*0x7507bf*/
                        do /*0x7507df*/
                        {
                          if ( *v39 <= v37 && !*((_BYTE *)v39 + 4) ) /*0x7507ce*/
                            break; /*0x7507d2*/
                          --LODWORD(v38); /*0x7507d8*/
                          v39 = (float *)((char *)v39 - (unsigned __int8)v67[0]); /*0x7507db*/
                        }
                        while ( v38 != 0.0 ); /*0x7507df*/
                      }
                    }
                    else
                    {
                      v38 = 0.0; /*0x7507e6*/
                      if ( v25 != 0.0 ) /*0x7507ea*/
                      {
                        v40 = v63; /*0x7507f1*/
                        do /*0x750825*/
                        {
                          v41 = *v40; /*0x7507f5*/
                          if ( v41 > v37 && (LOBYTE(a5) || v41 <= v35) && *((_BYTE *)v40 + 4) ) /*0x750814*/
                            break; /*0x750818*/
                          ++LODWORD(v38); /*0x75081e*/
                          v40 = (float *)((char *)v40 + (unsigned __int8)v67[0]); /*0x750821*/
                        }
                        while ( LODWORD(v38) < LODWORD(v25) ); /*0x750825*/
                      }
                      if ( LODWORD(v38) == LODWORD(v25) ) /*0x750829*/
                      {
                        if ( !LOBYTE(a5) ) /*0x750830*/
                          return; /*0x750830*/
                        v38 = 0.0; /*0x750836*/
                        if ( v25 != 0.0 ) /*0x75083a*/
                        {
                          v42 = v63; /*0x750841*/
                          do /*0x75085d*/
                          {
                            if ( *v42 < v35 && *((_BYTE *)v42 + 4) ) /*0x750850*/
                              break; /*0x750854*/
                            ++LODWORD(v38); /*0x750856*/
                            v42 = (float *)((char *)v42 + (unsigned __int8)v67[0]); /*0x750859*/
                          }
                          while ( LODWORD(v38) < LODWORD(v25) ); /*0x75085d*/
                        }
                        if ( LODWORD(v38) == LODWORD(v25) ) /*0x750861*/
                          return; /*0x750861*/
                      }
                    }
                    v43 = v38; /*0x750869*/
                    if ( LODWORD(v38) < LODWORD(v25) ) /*0x75086b*/
                    {
                      v44 = (char *)v63 + LODWORD(v38) * (unsigned __int8)v67[0] + 4; /*0x75087b*/
                      do /*0x75088b*/
                      {
                        if ( !*v44 ) /*0x75087f*/
                          break; /*0x750882*/
                        ++LODWORD(v43); /*0x750884*/
                        v44 += (unsigned __int8)v67[0]; /*0x750887*/
                      }
                      while ( LODWORD(v43) < LODWORD(v25) ); /*0x75088b*/
                    }
                    if ( LODWORD(v43) == LODWORD(v25) ) /*0x75088f*/
                      --LODWORD(v43); /*0x750891*/
                    v45 = (float *)((char *)v63 + LODWORD(v38) * (unsigned __int8)v67[0]); /*0x7508a0*/
                    v46 = (float *)((char *)v63 + LODWORD(v43) * (unsigned __int8)v67[0]); /*0x7508a7*/
                    if ( LOBYTE(a5) ) /*0x7508b0*/
                    {
                      v47 = *v46; /*0x7508bc*/
                      if ( v47 <= v37 ) /*0x7508c1*/
                      {
                        v68 = v35; /*0x75090f*/
                        v71 = *v63; /*0x750915*/
                        v66 = *v45; /*0x75091b*/
                        if ( v47 >= v35 ) /*0x750928*/
                        {
                          v50 = v36; /*0x750930*/
                          v49 = v35; /*0x750930*/
                          v48 = v50; /*0x750930*/
                        }
                        else
                        {
                          v48 = v36; /*0x75092a*/
                          v49 = *v46; /*0x75092c*/
                        }
                        v65 = v49; /*0x750932*/
                        *(float *)&v73 = v48 * (v65 - v66) + v66; /*0x750944*/
                        v35 = *(float *)&v73; /*0x750948*/
                      }
                      else
                      {
                        v68 = *(float *)((char *)v63 + (unsigned __int8)v67[0] * (LODWORD(v25) - 1)); /*0x7508d6*/
                        v71 = v37; /*0x7508dc*/
                        v66 = *v45; /*0x7508e2*/
                        v65 = *v46; /*0x7508e8*/
                        *(float *)&v73 = v36 * (v65 - v66) + v66; /*0x7508fa*/
                        v35 = *(float *)&v73; /*0x7508fe*/
                      }
                    }
                    else
                    {
                      if ( *v46 < v35 ) /*0x750959*/
                      {
                        Destructor = v69->super.Destructor; /*0x750963*/
                        v68 = *v46; /*0x750965*/
                        v52 = *((void (__stdcall **)(_DWORD, int, float *))Destructor + 0x17); /*0x750969*/
                        v71 = v37; /*0x75096e*/
                        v66 = *v45; /*0x750978*/
                        v53 = *(_DWORD *)(a1 + 0x30); /*0x75097f*/
                        v65 = *v46; /*0x750982*/
                        *(float *)&v73 = v36 * (v65 - v66) + v66; /*0x750996*/
                        v52(LODWORD(v73), v53, &v70); /*0x7509a1*/
                        goto LABEL_86; /*0x7509a3*/
                      }
                      v68 = v35; /*0x7509a9*/
                      v71 = v37; /*0x7509af*/
                      v66 = *v45; /*0x7509b5*/
                      v65 = *v46; /*0x7509bb*/
                    }
                    v54 = v35; /*0x7509d2*/
                    (*((void (__stdcall **)(_DWORD, _DWORD, float *))v69->super.Destructor + 0x17))( /*0x7509d5*/
                      LODWORD(v54),
                      *(_DWORD *)(a1 + 0x30),
                      &v70);
LABEL_86:
                    *(float *)&v73 = *(float *)(*(_DWORD *)(a1 + 0x30) + 0xE8); /*0x7509d7*/
                    if ( LOBYTE(a5) ) /*0x7509e9*/
                      *(float *)&v73 = *(float *)(a1 + 0x18) - *(float *)(a1 + 0x14) + *(float *)&v73; /*0x7509f5*/
                    a5 = *(float *)&v73 + v76 - v77; /*0x750a32*/
                    sub_750040((_DWORD *)a1, a5, v68, v71, v66, v65, v70); /*0x750a3d*/
                    if ( *v46 >= v76 ) /*0x750a4d*/
                    {
                      v61 = 1; /*0x750a7e*/
                    }
                    else
                    {
                      *((float *)&v72 + 1) = v68; /*0x750a5b*/
                      v60 = sub_6BDBA0(v68, (int)v63, v75, v25, &v74, v67[0]); /*0x750a78*/
                    }
                    ++HIDWORD(v73); /*0x750a83*/
                    if ( v61 ) /*0x750a91*/
                      return; /*0x750a91*/
                    v36 = dbl_A2FAA0; /*0x75076d*/
                    v37 = *((float *)&v72 + 1); /*0x750777*/
                    v35 = v62; /*0x750777*/
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
