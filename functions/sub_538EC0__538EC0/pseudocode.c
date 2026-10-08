PlayerCharacter *__thiscall sub_538EC0(_DWORD *this, float *a2, float *a3, float a4, float *a5, _BYTE *a6)
{
  PlayerCharacter *result; // eax
  bool v8; // zf
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  double v13; // st6
  char v14; // bl
  double v15; // st7
  _DWORD *v16; // edi
  int v17; // esi
  char v18; // al
  PlayerCharacter *v19; // edi
  int v20; // ebx
  char *v21; // eax
  _DWORD *v22; // esi
  int v23; // eax
  char *v24; // edi
  char v25; // bl
  bool v26; // cc
  _DWORD *v27; // ecx
  int v28; // ecx
  __m128 *v29; // eax
  PlayerCharacter *v30; // ebx
  int v31; // eax
  int v32; // esi
  __m128 v33; // xmm1
  __m128 v34; // xmm3
  __m128 v35; // xmm4
  __m128 v36; // xmm0
  float v37; // xmm2_4
  float v38; // xmm5_4
  __m128 v39; // xmm0
  __m128 v40; // xmm2
  __m128 v41; // xmm0
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  __m128 v44; // xmm0
  double v45; // st6
  __m128 v46; // xmm3
  UInt32 v47; // eax
  void (__thiscall *v48)(int, bhkWorldRayCastData *); // edx
  int v49; // eax
  PlayerCharacter *v50; // eax
  __m128 v51; // xmm0
  int v52; // edi
  int **v53; // edx
  PlayerCharacter *v54; // eax
  float *v55; // esi
  PlayerCharacter *v56; // ebx
  int v57; // eax
  int v58; // eax
  _BYTE *v59; // ecx
  int v60; // edx
  int v61; // [esp+18h] [ebp-588h]
  char v62; // [esp+37h] [ebp-569h]
  PlayerCharacter *v63; // [esp+38h] [ebp-568h]
  PlayerCharacter *v64; // [esp+3Ch] [ebp-564h]
  float v65; // [esp+40h] [ebp-560h]
  float v66; // [esp+40h] [ebp-560h]
  PlayerCharacter *v67; // [esp+40h] [ebp-560h]
  float v68; // [esp+44h] [ebp-55Ch]
  float v69; // [esp+44h] [ebp-55Ch]
  int v70; // [esp+44h] [ebp-55Ch]
  PlayerCharacter *v71; // [esp+48h] [ebp-558h]
  float v72; // [esp+48h] [ebp-558h]
  float v73; // [esp+4Ch] [ebp-554h]
  float v74; // [esp+4Ch] [ebp-554h]
  float v75; // [esp+50h] [ebp-550h]
  float v76; // [esp+50h] [ebp-550h]
  int v77; // [esp+50h] [ebp-550h]
  PlayerCharacter *v78; // [esp+58h] [ebp-548h]
  float v79; // [esp+5Ch] [ebp-544h]
  float v80; // [esp+60h] [ebp-540h]
  int v81; // [esp+64h] [ebp-53Ch]
  int v82; // [esp+68h] [ebp-538h] BYREF
  int v83; // [esp+6Ch] [ebp-534h]
  int v84; // [esp+70h] [ebp-530h]
  int v85; // [esp+74h] [ebp-52Ch]
  int v86; // [esp+78h] [ebp-528h] BYREF
  _BYTE *v87; // [esp+7Ch] [ebp-524h]
  _DWORD *v88; // [esp+80h] [ebp-520h]
  int v89; // [esp+84h] [ebp-51Ch]
  char *v90; // [esp+88h] [ebp-518h]
  int v91; // [esp+8Ch] [ebp-514h]
  int v92; // [esp+90h] [ebp-510h]
  int v93; // [esp+94h] [ebp-50Ch]
  int v94; // [esp+98h] [ebp-508h] BYREF
  int v95; // [esp+9Ch] [ebp-504h] BYREF
  int v96[4]; // [esp+A0h] [ebp-500h] BYREF
  int v97; // [esp+B0h] [ebp-4F0h]
  int **v98; // [esp+BCh] [ebp-4E4h]
  __int16 v99; // [esp+C2h] [ebp-4DEh]
  __m128 v100; // [esp+D0h] [ebp-4D0h] BYREF
  float v101; // [esp+E0h] [ebp-4C0h]
  float v102; // [esp+E4h] [ebp-4BCh]
  __m128 v103; // [esp+F0h] [ebp-4B0h] BYREF
  __m128 v104; // [esp+100h] [ebp-4A0h] BYREF
  __m128 v105; // [esp+110h] [ebp-490h]
  __m128 v106; // [esp+120h] [ebp-480h] BYREF
  __m128 v107; // [esp+130h] [ebp-470h] BYREF
  __int128 v108; // [esp+140h] [ebp-460h]
  __m128 v109[4]; // [esp+150h] [ebp-450h] BYREF
  bhkWorldRayCastData v110; // [esp+190h] [ebp-410h] BYREF
  __m128 v111; // [esp+210h] [ebp-390h]
  int v112[4]; // [esp+240h] [ebp-360h] BYREF
  char *v113; // [esp+250h] [ebp-350h]
  int v114; // [esp+254h] [ebp-34Ch]
  unsigned int v115; // [esp+258h] [ebp-348h]
  char v116; // [esp+260h] [ebp-340h] BYREF
  float v117[107]; // [esp+3E0h] [ebp-1C0h] BYREF
  unsigned int v118; // [esp+59Ch] [ebp-4h]

  result = 0; /*0x538f12*/
  unk_B365A8 = 0; /*0x538f14*/
  v8 = *((_BYTE *)this + 4) == 0; /*0x538f19*/
  v88 = this; /*0x538f1c*/
  v93 = (int)a2; /*0x538f20*/
  v92 = (int)a3; /*0x538f24*/
  v87 = a6; /*0x538f28*/
  v64 = 0; /*0x538f2c*/
  if ( !v8 ) /*0x538f30*/
  {
    *(float *)&v112[1] = flt_A563E4; /*0x538f43*/
    v112[0] = (int)&hkAllCdPointCollector::`vftable'; /*0x538f4a*/
    v113 = &v116; /*0x538f55*/
    v115 = 0x80000008; /*0x538f5c*/
    v114 = 0; /*0x538f67*/
    v9 = *this; /*0x538f6e*/
    v8 = *this == 0; /*0x538f70*/
    v118 = 0; /*0x538f72*/
    v89 = 0; /*0x538f79*/
    if ( !v8 ) /*0x538f7d*/
    {
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x58))(v9); /*0x538f84*/
      if ( v10 ) /*0x538f88*/
        v11 = *(_DWORD *)(v10 + 0x2B0); /*0x538f8a*/
      else
        v11 = 0; /*0x538f92*/
      v89 = v11; /*0x538f94*/
    }
    v68 = *a3 * a4; /*0x538fab*/
    v75 = a3[1] * a4; /*0x538fb4*/
    v65 = a4 * a3[2]; /*0x538fbb*/
    v69 = *a2 + v68; /*0x538fc5*/
    v76 = a2[1] + v75; /*0x538fd0*/
    v12 = v65 + a2[2]; /*0x538fd8*/
    *v87 = 0; /*0x538fdb*/
    v66 = v12; /*0x538fde*/
    *a5 = flt_A563E4; /*0x538fe8*/
    NiPickContext_ctor(v96); /*0x538ff1*/
    unk_B3A6E4 = 0xDAD; /*0x538ff6*/
    v13 = hkFactor; /*0x539002*/
    v14 = 0; /*0x539008*/
    v15 = *a2 * v13; /*0x53900a*/
    LOBYTE(v118) = 1; /*0x53900c*/
    LOWORD(v97) = 0x100; /*0x539016*/
    v103.m128_f32[0] = v15; /*0x539026*/
    v103.m128_f32[1] = a2[1] * v13; /*0x539032*/
    v8 = *this == 0; /*0x53903e*/
    v103.m128_f32[2] = a2[2] * v13; /*0x539042*/
    v104.m128_f32[0] = v69 * v13; /*0x53904f*/
    v104.m128_f32[1] = v76 * v13; /*0x53905c*/
    v104.m128_f32[2] = v13 * v66; /*0x539067*/
    if ( !v8 ) /*0x53906e*/
    {
      v102 = flt_A34BA0; /*0x539082*/
      v101 = v102; /*0x53908b*/
      v100 = v104; /*0x539092*/
      sub_538920(); /*0x53909a*/
      v16 = (_DWORD *)*this; /*0x53909f*/
      if ( v16 ) /*0x5390a3*/
      {
        v17 = v16[2]; /*0x5390a5*/
        if ( v17 ) /*0x5390aa*/
        {
          bhkRefObject_UpdateHavokObject(v16); /*0x5390ae*/
          (*(void (__thiscall **)(int, __m128 *, __m128 *, int *, _DWORD))(*(_DWORD *)v17 + 0x30))( /*0x5390d4*/
            v17,
            &v103,
            &v100,
            v112,
            0);
          bhkRefObject_UpdateHavokObject(v16); /*0x5390d8*/
        }
      }
      if ( v114 > 0 ) /*0x5390eb*/
      {
        hkpCdPointCollector_SortHitsByDistance(v112); /*0x5390f4*/
        v14 = 1; /*0x5390f9*/
      }
    }
    v18 = useFuzzyPicking; /*0x539101*/
    v73 = flt_A563E4; /*0x539106*/
    v19 = 0; /*0x53910a*/
    v80 = v73; /*0x53910e*/
    v79 = v73; /*0x539112*/
    v67 = 0; /*0x539116*/
    v78 = 0; /*0x53911a*/
    v85 = 0; /*0x53911e*/
    v62 = v18; /*0x539122*/
    v84 = 0; /*0x539126*/
    v83 = 0; /*0x53912a*/
    v81 = 0; /*0x53912e*/
    if ( v14 ) /*0x539132*/
    {
      v71 = 0; /*0x53913f*/
      v63 = 0; /*0x539143*/
      v90 = 0; /*0x539147*/
      v77 = 0; /*0x53914b*/
      if ( v114 > 0 ) /*0x53914f*/
      {
        v20 = 0; /*0x539155*/
        v70 = 0; /*0x539157*/
        do /*0x539160*/
        {
          v21 = v113; /*0x539160*/
          unk_B3A6E4 = 0xDAF; /*0x539167*/
          v22 = *(_DWORD **)&v21[v20 + 0x28]; /*0x539171*/
          v111 = *(__m128 *)&v21[v20]; /*0x53917b*/
          if ( !v22 ) /*0x539183*/
            goto LABEL_61; /*0x539183*/
          unk_B3A6E4 = 0xDB0; /*0x53918a*/
          sub_4806E0((int)v22); /*0x539194*/
          unk_B3A6E4 = 0xDB1; /*0x53919e*/
          if ( v23 ) /*0x5391a8*/
            v63 = sub_4DC270(v23); /*0x5391b3*/
          if ( !v63 || v63 == reference ) /*0x5391c9*/
            goto LABEL_61; /*0x5391c9*/
          if ( *((_BYTE *)v22 + 0x18) == 1 ) /*0x5391d3*/
            v24 = (char *)v22 + v22[4]; /*0x5391d8*/
          else
            v24 = 0; /*0x5391dc*/
          v25 = 0; /*0x5391e4*/
          v91 = v22[7] & 0x3F; /*0x5391e9*/
          if ( v91 == 1 ) /*0x5391ed*/
          {
            if ( *v22 && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v22 + 8))(*v22) == 0x18 ) /*0x539209*/
LABEL_29:
              v25 = 1; /*0x53920b*/
          }
          else if ( (unsigned int)(v91 - 4) <= 2 ) /*0x5391f5*/
          {
            goto LABEL_29; /*0x5391f5*/
          }
          if ( v24 && v24 != v90 && v25 ) /*0x539223*/
          {
            v26 = v83 < dword_B11918; /*0x53922d*/
            v90 = v24; /*0x539233*/
            if ( v26 ) /*0x539237*/
            {
              v27 = (_DWORD *)*v88; /*0x539241*/
              ++v83; /*0x539243*/
              *(_QWORD *)&v108 = 0; /*0x539248*/
              v28 = *sub_497340(v27, &v95); /*0x539263*/
              v29 = *((__m128 **)v24 + 0x14); /*0x539265*/
              LODWORD(v108) = v28; /*0x539268*/
              v109[0] = v29[1]; /*0x539273*/
              v109[1] = v29[2]; /*0x53927f*/
              v109[2] = v29[3]; /*0x53928b*/
              v109[3] = v29[4]; /*0x5392ae*/
              sub_88FD10(&v106, v109, &v103); /*0x5392b6*/
              sub_88FD10(&v107, v109, &v104); /*0x5392d2*/
              v102 = 1.0; /*0x5392e0*/
              (*(void (__thiscall **)(_DWORD, char *, __m128 *, __m128 *))(*(_DWORD *)*v22 + 0x14))( /*0x5392fc*/
                *v22,
                (char *)&v82 + 3,
                &v106,
                &v100);
              if ( *sub_538A70(v100.m128_f32, (bool *)&v86 + 3) ) /*0x53930f*/
              {
                v30 = v63; /*0x53931f*/
                if ( v73 > (double)v102 ) /*0x53932e*/
                {
                  v73 = v102; /*0x539330*/
                  v67 = v63; /*0x539334*/
                }
                goto LABEL_42; /*0x539338*/
              }
            }
          }
          else
          {
            unk_B3A6E4 = 0xDB2; /*0x539342*/
            if ( v71 != v63 ) /*0x53934c*/
            {
              if ( v63->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v63) ) /*0x539358*/
              {
                if ( v81 < dword_B11920 ) /*0x539368*/
                {
                  ++v81; /*0x539372*/
                  v31 = (int)v63->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v63); /*0x53937b*/
                  sub_481890((int)v96, (float *)v93, (float *)v92, a4, v31, 0); /*0x53939a*/
                }
              }
            }
          }
          v30 = v63; /*0x5393a2*/
LABEL_42:
          switch ( v91 ) /*0x5393bd*/
          {
            case 1: /*0x5393bd*/
            case 0xD: /*0x5393bd*/
            case 0x11: /*0x5393bd*/
            case 0x12: /*0x5393bd*/
              break;
            case 6: /*0x5393bd*/
              if ( v24 ) /*0x5393c6*/
                goto LABEL_44; /*0x5393c6*/
              break; /*0x5393c6*/
            default:
LABEL_44:
              if ( v62 ) /*0x5393d1*/
              {
                v32 = v89; /*0x5393d7*/
                if ( v89 ) /*0x5393dd*/
                {
                  v33 = _mm_sub_ps(v104, v103); /*0x5393fb*/
                  v34 = _mm_sub_ps(v111, v103); /*0x5393fe*/
                  v35 = (__m128)LODWORD(kHeadBodyNormalMatchRadius); /*0x539401*/
                  v36 = _mm_mul_ps(v33, v33); /*0x539414*/
                  v36.m128_f32[0] = _mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0] /*0x539426*/
                                  + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]);
                  v37 = 1.0 / fsqrt(v36.m128_f32[0]); /*0x53942d*/
                  v38 = *(float *)&dword_A46C30 - (float)((float)(v36.m128_f32[0] * v37) * v37); /*0x539439*/
                  v35.m128_f32[0] = v35.m128_f32[0] * v37; /*0x53943d*/
                  v39 = v35; /*0x539441*/
                  v39.m128_f32[0] = v35.m128_f32[0] * v38; /*0x539444*/
                  v40 = _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v33); /*0x53944f*/
                  v41 = _mm_mul_ps(v40, v34); /*0x539452*/
                  v33.m128_f32[0] = _mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]; /*0x53945c*/
                  v42 = _mm_shuffle_ps(v41, v41, 0xAA); /*0x539460*/
                  v42.m128_f32[0] = v42.m128_f32[0] + v33.m128_f32[0]; /*0x539464*/
                  v43 = _mm_sub_ps(v34, _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v40)); /*0x539475*/
                  v44 = _mm_mul_ps(v43, v43); /*0x539478*/
                  v100.m128_i32[0] = fsqrt( /*0x539492*/
                                       _mm_shuffle_ps(v44, v44, 0xAA).m128_f32[0]
                                     + (float)(_mm_shuffle_ps(v44, v44, 0x55).m128_f32[0] + v44.m128_f32[0]));
                  v45 = dbl_A372E0; /*0x5394a2*/
                  v105 = v34; /*0x5394a8*/
                  v72 = v100.m128_f32[0] * v45; /*0x5394b4*/
                  if ( v79 > (double)v72 && v84 < dword_B11910 ) /*0x5394d7*/
                  {
                    if ( v78 && v78 == v30 ) /*0x5394e7*/
                    {
                      v46 = _mm_mul_ps(v34, v34); /*0x5394e9*/
                      v100.m128_i32[0] = fsqrt( /*0x539503*/
                                           _mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0]
                                         + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]));
                      v80 = v45 * v100.m128_f32[0]; /*0x539517*/
                      v79 = v72; /*0x53951b*/
                    }
                    else
                    {
                      ++v84; /*0x539524*/
                      bhkWorldRayCastData::Init(&v110); /*0x539534*/
                      v47 = *sub_497340((_DWORD *)*v88, &v94); /*0x539549*/
                      v110.WorldRayCastInput.From = (hkVector4)v103; /*0x539553*/
                      v110.unk60 = unk_BA7A40; /*0x539562*/
                      v110.WorldRayCastInput.FilterInfo = v47; /*0x539579*/
                      v110.WorldRayCastInput.To = (hkVector4)v111; /*0x539580*/
                      sub_538C00(v117); /*0x539588*/
                      v48 = *(void (__thiscall **)(int, bhkWorldRayCastData *))(*(_DWORD *)v32 + 0x88); /*0x53958f*/
                      v110.RayHitCollector2 = (hkRayHitCollector *)v117; /*0x5395a3*/
                      LOBYTE(v118) = 2; /*0x5395ad*/
                      v110.RayHitCollector1 = 0; /*0x5395b5*/
                      v48(v32, &v110); /*0x5395c0*/
                      if ( SLODWORD(v117[5]) <= 0 /*0x5395f2*/
                        || (sub_4806E0(*(_DWORD *)(LODWORD(v117[4]) + 0x20)), v49)
                        && (v50 = sub_4DC270(v49)) != 0
                        && v50 == v30 )
                      {
                        v51 = _mm_mul_ps(v105, v105); /*0x5395fe*/
                        v100.m128_i32[0] = fsqrt( /*0x539618*/
                                             _mm_shuffle_ps(v51, v51, 0xAA).m128_f32[0]
                                           + (float)(_mm_shuffle_ps(v51, v51, 0x55).m128_f32[0] + v51.m128_f32[0]));
                        v78 = v30; /*0x53962e*/
                        v80 = v100.m128_f32[0] * dbl_A372E0; /*0x539632*/
                        v79 = v72; /*0x53963a*/
                        if ( v24 ) /*0x53963e*/
                          v52 = *((_DWORD *)v24 + 3); /*0x539640*/
                        else
                          v52 = 0; /*0x539645*/
                        v85 = v52; /*0x539647*/
                      }
                      LOBYTE(v118) = 1; /*0x539652*/
                      sub_538C80(v117); /*0x53965a*/
                    }
                  }
                }
              }
              break; /*0x53951f*/
          }
          v19 = v67; /*0x539665*/
          v71 = v30; /*0x539669*/
          v20 = v70; /*0x53966d*/
LABEL_61:
          v20 += 0x30; /*0x539671*/
          v26 = ++v77 < v114; /*0x53967b*/
          v70 = v20; /*0x539686*/
        }
        while ( v26 ); /*0x539160*/
      }
    }
    v74 = v73 * a4; /*0x539692*/
    if ( v99 ) /*0x5396a5*/
    {
      v53 = v98; /*0x5396a7*/
      unk_B3A6E4 = 0xDB6; /*0x5396ae*/
      v61 = **v53; /*0x5396bc*/
      unk_B3A6E4 = 0xDB7; /*0x5396bd*/
      v54 = sub_4DC270(v61); /*0x5396c7*/
      v55 = a5; /*0x5396cc*/
      unk_B3A6E4 = 0xDB8; /*0x5396d0*/
      v64 = v54; /*0x5396da*/
      *a5 = *((float *)*v98 + 5); /*0x5396ed*/
      unk_B3A6E4 = 0xDB9; /*0x5396ef*/
      if ( v74 < (double)*a5 ) /*0x539708*/
      {
        *a5 = v74; /*0x53970a*/
        v64 = v19; /*0x53970c*/
      }
    }
    else
    {
      if ( v19 ) /*0x539714*/
      {
        *a5 = v74; /*0x53971e*/
        v64 = v19; /*0x539720*/
      }
      v55 = a5; /*0x539724*/
    }
    v56 = v64; /*0x539735*/
    unk_B3A6E4 = 0xDBA; /*0x539739*/
    if ( !v62 ) /*0x539743*/
      goto LABEL_81; /*0x539743*/
    if ( v64 && v64->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v64) ) /*0x539753*/
    {
      v57 = (unsigned __int8)v64->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v64)->member.type - 0x1A; /*0x539769*/
      if ( v57 ) /*0x53976c*/
      {
        v58 = v57 - 2; /*0x53976e*/
        if ( v58 && v58 != 2 ) /*0x539776*/
          goto LABEL_81; /*0x539776*/
      }
      else if ( (*(_DWORD *)&v64->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v64)[5].member.type & 2) != 0 ) /*0x53978d*/
      {
LABEL_81:
        LOBYTE(v118) = 0; /*0x5397b8*/
        NiPickContext_dtor(v96); /*0x5397c7*/
        v118 = 0xFFFFFFFF; /*0x5397d3*/
        hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v112); /*0x5397de*/
        return v56; /*0x5397e3*/
      }
    }
    if ( v78 ) /*0x539795*/
    {
      if ( v64 != v78 ) /*0x539799*/
      {
        v59 = v87; /*0x53979f*/
        v60 = v85; /*0x5397a3*/
        *v55 = v80; /*0x5397a7*/
        *v59 = 1; /*0x5397a9*/
        unk_B365A8 = v60; /*0x5397b0*/
        v56 = v78; /*0x5397b6*/
      }
    }
    goto LABEL_81; /*0x5397b6*/
  }
  return result; /*0x5397e5*/
}
