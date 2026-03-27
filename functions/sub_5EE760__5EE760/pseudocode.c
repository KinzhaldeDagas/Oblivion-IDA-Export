void __thiscall sub_5EE760(int this, TESChildCELL *a2, float a3, float a4, NiPoint3 *a5, NiPoint3 *a6)
{
  PlayerCharacter *v6; // ebx
  float v8; // eax
  TESChildCELL v9; // edx
  int v10; // eax
  NiTransform *v11; // ebx
  float *v12; // eax
  float v13; // ecx
  float v14; // edx
  int *v15; // eax
  float v16; // ecx
  float v17; // edx
  bhkCharacterProxy *CharProxy; // eax
  double v19; // st7
  double v20; // st6
  bool v21; // cc
  double v22; // st6
  NiAVObject *v23; // eax
  float v24; // edx
  int v25; // ebx
  float v26; // eax
  NiObjectNET *v27; // eax
  BSShaderProperty *v28; // eax
  NiObjectNET *v29; // eax
  BSShaderProperty *v30; // eax
  UInt16 v31; // dx
  double v32; // rt1
  int v33; // eax
  Atmosphere *v34; // eax
  NiAVObject *v35; // ebx
  _DWORD *v36; // eax
  double v37; // st6
  double v38; // st7
  float *v39; // eax
  double v40; // st7
  float *v41; // eax
  double v42; // rt0
  NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *ParentCell; // eax
  TESObjectCELL *v44; // eax
  int v45; // ebx
  void *v46; // edi
  float *v47; // eax
  TESObjectCELL *v48; // eax
  float *v49; // eax
  LowProcess *process; // edi
  int (__thiscall *v51)(int); // edx
  NiNode *v52; // ebx
  float *v53; // eax
  float v54; // ecx
  float v55; // edx
  float v56; // eax
  double v57; // st6
  double v58; // st6
  double v59; // rtt
  double v60; // rt0
  double v61; // rt1
  TESObjectCELL *v62; // eax
  LowProcess_vtbl *v63; // ebx
  TESChildCELL *v64; // edi
  int v65; // eax
  float *v66; // ebx
  _DWORD *v67; // eax
  float *v68; // edi
  float *v69; // eax
  float *v70; // eax
  float v71; // ecx
  float v72; // edx
  float v73; // eax
  PlayerCharacter *v74; // ecx
  float *v75; // ecx
  float *v76; // eax
  float *v77; // eax
  float v78; // edx
  int v79; // edi
  float v80; // eax
  TESObjectCELL *v81; // eax
  unsigned __int64 v82; // [esp-4h] [ebp-154h]
  int v83; // [esp-4h] [ebp-154h]
  int v84; // [esp+0h] [ebp-150h]
  int v85; // [esp+4h] [ebp-14Ch]
  int v86; // [esp+4h] [ebp-14Ch]
  int v87; // [esp+4h] [ebp-14Ch]
  int v88; // [esp+8h] [ebp-148h]
  const char *v89; // [esp+8h] [ebp-148h]
  float v90; // [esp+8h] [ebp-148h]
  unsigned __int64 v91; // [esp+8h] [ebp-148h]
  int v92; // [esp+Ch] [ebp-144h]
  float v93; // [esp+Ch] [ebp-144h]
  int v94; // [esp+Ch] [ebp-144h]
  int v95; // [esp+10h] [ebp-140h]
  float v96; // [esp+10h] [ebp-140h]
  int v97; // [esp+10h] [ebp-140h]
  int v98; // [esp+10h] [ebp-140h]
  float v99; // [esp+14h] [ebp-13Ch]
  int v100; // [esp+14h] [ebp-13Ch]
  const char *v101; // [esp+14h] [ebp-13Ch]
  const char *v102; // [esp+14h] [ebp-13Ch]
  float v103; // [esp+18h] [ebp-138h]
  NiNode *v104; // [esp+18h] [ebp-138h]
  int v105; // [esp+1Ch] [ebp-134h]
  UInt32 v106; // [esp+1Ch] [ebp-134h]
  const char *v107; // [esp+20h] [ebp-130h]
  UInt32 v108; // [esp+20h] [ebp-130h]
  signed int v109; // [esp+24h] [ebp-12Ch]
  float v110; // [esp+24h] [ebp-12Ch]
  float v111; // [esp+24h] [ebp-12Ch]
  int v112; // [esp+28h] [ebp-128h]
  float v113; // [esp+28h] [ebp-128h]
  int v114; // [esp+28h] [ebp-128h]
  float v115; // [esp+40h] [ebp-110h]
  float v116; // [esp+40h] [ebp-110h]
  float v117; // [esp+40h] [ebp-110h]
  float v118; // [esp+40h] [ebp-110h]
  float v119; // [esp+40h] [ebp-110h]
  float v120; // [esp+40h] [ebp-110h]
  float v121; // [esp+40h] [ebp-110h]
  float v122; // [esp+40h] [ebp-110h]
  float v123; // [esp+44h] [ebp-10Ch]
  float v124; // [esp+44h] [ebp-10Ch]
  float v125; // [esp+44h] [ebp-10Ch]
  float v126; // [esp+44h] [ebp-10Ch]
  char v127; // [esp+48h] [ebp-108h]
  float v128; // [esp+48h] [ebp-108h]
  float v129; // [esp+48h] [ebp-108h]
  float v130; // [esp+48h] [ebp-108h]
  float v131; // [esp+4Ch] [ebp-104h]
  float v132; // [esp+4Ch] [ebp-104h]
  float v133; // [esp+4Ch] [ebp-104h]
  float v134; // [esp+4Ch] [ebp-104h]
  float v135; // [esp+4Ch] [ebp-104h]
  float v136; // [esp+4Ch] [ebp-104h]
  float v137; // [esp+4Ch] [ebp-104h]
  float v138; // [esp+4Ch] [ebp-104h]
  float v139; // [esp+50h] [ebp-100h]
  float v140; // [esp+50h] [ebp-100h]
  float v141; // [esp+50h] [ebp-100h]
  float v142; // [esp+50h] [ebp-100h]
  float v143; // [esp+50h] [ebp-100h]
  float v144; // [esp+50h] [ebp-100h]
  char v145; // [esp+54h] [ebp-FCh]
  float v146; // [esp+54h] [ebp-FCh]
  float v147; // [esp+54h] [ebp-FCh]
  float v148; // [esp+58h] [ebp-F8h] BYREF
  float v149; // [esp+5Ch] [ebp-F4h]
  float v150; // [esp+60h] [ebp-F0h]
  int v151; // [esp+64h] [ebp-ECh]
  _DWORD *a1; // [esp+68h] [ebp-E8h]
  float v153; // [esp+6Ch] [ebp-E4h]
  float v154; // [esp+70h] [ebp-E0h]
  float v155; // [esp+74h] [ebp-DCh] BYREF
  float v156; // [esp+78h] [ebp-D8h]
  float v157; // [esp+7Ch] [ebp-D4h]
  float v158; // [esp+80h] [ebp-D0h]
  float v159; // [esp+84h] [ebp-CCh]
  float v160; // [esp+88h] [ebp-C8h]
  float v161; // [esp+8Ch] [ebp-C4h]
  float v162; // [esp+90h] [ebp-C0h]
  TESChildCELL *v163; // [esp+94h] [ebp-BCh]
  float v164; // [esp+98h] [ebp-B8h]
  int v165; // [esp+9Ch] [ebp-B4h] BYREF
  float v166; // [esp+A0h] [ebp-B0h]
  float v167; // [esp+A4h] [ebp-ACh]
  float v168; // [esp+A8h] [ebp-A8h] BYREF
  float v169; // [esp+ACh] [ebp-A4h] BYREF
  float v170; // [esp+B0h] [ebp-A0h]
  float v171; // [esp+B4h] [ebp-9Ch]
  float v172; // [esp+B8h] [ebp-98h]
  int v173; // [esp+BCh] [ebp-94h]
  int v174; // [esp+C0h] [ebp-90h]
  int v175; // [esp+C4h] [ebp-8Ch]
  float v176; // [esp+C8h] [ebp-88h]
  float v177; // [esp+CCh] [ebp-84h]
  float v178; // [esp+D0h] [ebp-80h]
  float v179; // [esp+D4h] [ebp-7Ch]
  float v180; // [esp+D8h] [ebp-78h]
  float v181; // [esp+DCh] [ebp-74h]
  float v182; // [esp+E0h] [ebp-70h]
  float v183; // [esp+E4h] [ebp-6Ch]
  float v184; // [esp+E8h] [ebp-68h]
  float v185; // [esp+ECh] [ebp-64h]
  float v186; // [esp+F0h] [ebp-60h]
  float v187; // [esp+F4h] [ebp-5Ch]
  float v188; // [esp+F8h] [ebp-58h]
  void *v189; // [esp+FCh] [ebp-54h]
  __m128 v190; // [esp+100h] [ebp-50h] BYREF
  __m128 v191; // [esp+110h] [ebp-40h] BYREF
  __m128 v192; // [esp+120h] [ebp-30h] BYREF
  int v193; // [esp+14Ch] [ebp-4h]
  int savedregs; // [esp+150h] [ebp+0h] BYREF

  v6 = (PlayerCharacter *)a2;
  a1 = *(_DWORD **)(this + 0x3C);
  v163 = a2;
  if ( !BaseExtraList_HasGhost((_BYTE *)(this + 0x44)) )
  {
    v8 = COERCE_FLOAT(NiObjectNET_LookupObjectByName(a1, off_B11A6C[0]));
    v9.vtbl = a2->vtbl;
    v153 = v8;
    v10 = (*((int (__thiscall **)(TESChildCELL *))v9.vtbl + 0x55))(a2);
    if ( v10 )
    {
      v11 = (NiTransform *)(v10 + 0x64);
      v12 = sub_53D4B0((NiTransform *)(v10 + 0x64), v190.m128_f32, a5);
      v13 = v12[1];
      v158 = *v12;
      v14 = v12[2];
      v159 = v13;
      v160 = v14;
      v15 = (int *)sub_53D4B0(v11, v190.m128_f32, a6);
      v16 = *((float *)v15 + 1);
      v6 = (PlayerCharacter *)v163;
      v165 = *v15;
      v17 = *((float *)v15 + 2);
      v166 = v16;
      v167 = v17;
    }
    v115 = *(float *)&v165 - v158;
    v139 = v166 - v159;
    v162 = v167 - v160;
    v158 = v115;
    v155 = v115;
    v159 = v139;
    v156 = v139;
    v160 = v162;
    v157 = v162;
    sub_43F350(&v155);
    if ( v153 == 0.0 )
      goto LABEL_40;
    if ( a3 > fCostant_100 )
      a3 = flt_A2FE7C;
    v116 = flt_B11A4C - flt_B11A44;
    *(float *)&v151 = flt_B11A44 + v116 * a3 * fConstant_Inv100;
    v117 = flt_B11A5C - flt_B11A54;
    v162 = flt_B11A54 + v117 * a4;
    if ( a4 <= (double)g_DialogueFov_ )
    {
      if ( 0.0 != *(float *)&v151 )
        goto LABEL_11;
    }
    else
    {
      *(float *)&v151 = 0.0;
    }
    if ( 0.0 == v162 )
    {
LABEL_40:
      if ( sub_5E1B30((void *)this) )
      {
        v154 = a3;
        v37 = flt_B148DC;
        if ( v37 < dbl_A2F928 )
          v37 = 1.0;
        v147 = v37;
        if ( v147 < (double)a3
          && (!byte_B333B8 && dword_B3B914 <= dword_B148E4
           || (PlayerCharacter *)this == TESDataHandler_g_PlayerRef
           || v6 == TESDataHandler_g_PlayerRef) )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x154))(this) )
          {
            if ( v6->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v6) )
            {
              v133 = sub_5E0660((void *)this) * dbl_A2FAA0;
              v38 = v133;
              v134 = v133 * *(float *)&dword_B258E8;
              v120 = v38 * *(float *)&dword_B258EC;
              v142 = v38 * *(float *)&dword_B258F0;
              v39 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 0x154))(this);
              v153 = v134 + v39[0x22];
              *(float *)&a1 = v39[0x23] + v120;
              *(float *)&v151 = v39[0x24] + v142;
              *(float *)&v173 = v153;
              v174 = (int)a1;
              v175 = v151;
              v135 = sub_5E0660(v6) * dbl_A2FAA0;
              v40 = v135;
              v136 = v135 * *(float *)&dword_B258E8;
              v121 = v40 * *(float *)&dword_B258EC;
              v128 = v40 * *(float *)&dword_B258F0;
              v41 = (float *)v6->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v6);
              v162 = v136 + v41[0x22];
              v143 = v41[0x23] + v121;
              v122 = v41[0x24] + v128;
              if ( v147 < (double)a3 )
              {
                v137 = v153 - v162;
                v129 = *(float *)&a1 - v143;
                v176 = *(float *)&v151 - v122;
                v42 = dbl_A3D0C0;
                v138 = v137 * v42;
                v130 = v129 * v42;
                v176 = v42 * v176;
                do
                {
                  v158 = Rand4(flt_A6E68C, flt_A524B0);
                  v159 = Rand4(flt_A6E68C, flt_A524B0);
                  v160 = Rand4(flt_A6E68C, flt_A524B0);
                  v164 = v138 + v158;
                  v161 = v130 + v159;
                  v123 = v176 + v160;
                  v148 = v164;
                  v155 = v164;
                  v149 = v161;
                  v150 = v123;
                  v156 = v161;
                  v157 = v123;
                  sub_43F350(&v155);
                  if ( sub_5E1BB0((void *)this) )
                  {
                    if ( *(_BYTE *)sub_5E1BB0((void *)this) )
                    {
                      v105 = sub_5E1BB0((void *)this);
                      v95 = LODWORD(v155);
                      v99 = v156;
                      v103 = v157;
                      v85 = v173;
                      v88 = v174;
                      v92 = v175;
                      ParentCell = (NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *)TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                      NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>(
                        ParentCell,
                        (char)&savedregs,
                        v85,
                        v88,
                        v92,
                        v95,
                        v99,
                        v103,
                        *(float *)&v105,
                        0.0,
                        NAN,
                        0);
                    }
                  }
                  if ( sub_5E1BF0((void *)this) )
                  {
                    if ( *(_BYTE *)sub_5E1BF0((void *)this) )
                    {
                      TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                      v109 = sub_4C9BE0((TESObjectREFR *)this);
                      v44 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                      v45 = sub_441800(v44, v109, 3u);
                      v46 = (void *)FormHeapAlloc(0x20u);
                      v189 = v46;
                      v193 = 2;
                      if ( v46 )
                      {
                        v124 = *(float *)&v165 - v153;
                        v161 = v166 - *(float *)&a1;
                        v164 = v167 - *(float *)&v151;
                        v190.m128_f32[0] = v124;
                        v190.m128_f32[1] = v161;
                        v190.m128_f32[2] = v164;
                        v47 = sub_4BF9B0(v190.m128_f32, v191.m128_f32, flt_A5977C);
                        v125 = v153 + *v47;
                        v161 = v47[1] + *(float *)&a1;
                        v164 = v47[2] + *(float *)&v151;
                        v177 = v125;
                        v178 = v161;
                        v179 = v164;
                        v106 = LODWORD(v161);
                        v107 = (const char *)LODWORD(v164);
                        v93 = v155;
                        v96 = v156;
                        v100 = LODWORD(v157);
                        v89 = (const char *)sub_5E1BF0((void *)this);
                        v48 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                        v49 = sub_5713F0(v46, (int)v48, 1.0, v45, v89, v93, v96, v100, v125, v106, v107, 1.0, 0);
                      }
                      else
                      {
                        v49 = 0;
                      }
                      v193 = 0xFFFFFFFF;
                      sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v49);
                      v6 = (PlayerCharacter *)v163;
                    }
                  }
                  v154 = v154 * dbl_A3C770;
                }
                while ( v147 < (double)v154 );
              }
              process = v6->super.super.super.process;
              v51 = *(int (__thiscall **)(int))(*(_DWORD *)this + 0x154);
              v164 = *(float *)&process;
              v168 = NAN;
              v52 = (NiNode *)v51(this);
              v154 = a3;
              if ( v52 )
              {
                v53 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 0x174))(this);
                v54 = *v53;
                v55 = v53[1];
                v56 = v53[2];
                v148 = v54;
                v57 = dbl_A46E48;
                v148 = v54 + v57;
                v149 = v55 + v57;
                v150 = v57 + v56;
                if ( v147 < (double)a3 )
                {
                  *(float *)&v173 = v148 - v153;
                  *(float *)&v174 = v149 - *(float *)&a1;
                  *(float *)&v175 = v150 - *(float *)&v151;
                  do
                  {
                    v177 = Rand4(flt_A641B0, flt_A47E6C);
                    v178 = Rand5(flt_A524B0);
                    v179 = Rand4(flt_A641B0, flt_A47E6C);
                    v58 = dbl_A3F3E8;
                    v186 = v177 * v58;
                    v187 = v178 * v58;
                    v188 = v58 * v179;
                    v183 = *(float *)&v173 + v186;
                    v184 = *(float *)&v174 + v187;
                    v185 = *(float *)&v175 + v188;
                    v59 = dbl_A2FAA0;
                    v180 = v183 * v59;
                    v181 = v184 * v59;
                    v182 = v59 * v185;
                    v158 = v180 + v153;
                    v159 = v181 + *(float *)&a1;
                    v160 = v182 + *(float *)&v151;
                    v126 = Rand5(flt_A46B10);
                    v192.m128_f32[0] = v162 - v158;
                    v192.m128_f32[1] = v143 - v159;
                    v192.m128_f32[2] = v122 - v160;
                    v60 = dbl_A3C770;
                    v148 = v192.m128_f32[0] * v60;
                    v149 = v192.m128_f32[1] * v60;
                    v150 = v60 * v192.m128_f32[2];
                    sub_43F350(&v148);
                    v61 = dbl_A46970;
                    v191.m128_f32[0] = v148 * v61;
                    v191.m128_f32[1] = v149 * v61;
                    v191.m128_f32[2] = v61 * v150;
                    v190.m128_f32[0] = v158 - v191.m128_f32[0];
                    v190.m128_f32[1] = v159 - v191.m128_f32[1];
                    v190.m128_f32[2] = v160 - v191.m128_f32[2];
                    v161 = Rand5(flt_A46B14);
                    if ( sub_5E1BB0((void *)this) )
                    {
                      if ( *(_BYTE *)sub_5E1BB0((void *)this) )
                      {
                        v112 = (unsigned __int8)(int)floor(v126);
                        v110 = v161;
                        v101 = (const char *)sub_5E1BB0((void *)this);
                        v90 = v148;
                        v94 = LODWORD(v149);
                        v97 = LODWORD(v150);
                        v82 = v190.m128_u64[0];
                        v86 = v190.m128_i32[2];
                        v62 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                        sub_4CF1A0(v62, v82, SHIDWORD(v82), v86, v90, v94, v97, v101, v52, (int *)&v168, 0, v110, v112);
                      }
                    }
                    v154 = v154 * dbl_A3C770;
                  }
                  while ( v147 < (double)v154 );
                }
              }
              if ( sub_5E1BB0((void *)this) )
              {
                if ( *(_BYTE *)sub_5E1BB0((void *)this) )
                {
                  if ( !process->Unk_4D(process) )
                  {
                    v63 = process->__vftable;
                    v64 = v163;
                    v65 = (*((int (__thiscall **)(TESChildCELL *))v163->vtbl + 0x5A))(v163);
                    v66 = (float *)((int (__thiscall *)(float, int))v63->Unk_45)(COERCE_FLOAT(LODWORD(v164)), v65);
                    if ( v147 < (double)a3 )
                    {
                      if ( v66 )
                      {
                        v113 = Rand5(flt_A46B10);
                        LOBYTE(v122) = (int)sub_4842F0(v113);
                        v144 = Rand5(flt_A46B14);
                        if ( v64 == (TESChildCELL *)TESDataHandler_g_PlayerRef )
                        {
                          v67 = (_DWORD *)sub_6600D0(TESDataHandler_g_PlayerRef, 1);
                          v68 = (float *)sub_477EC0(v67, 3);
                          v190.m128_f32[0] = *(float *)&v165 - v68[0x22];
                          v190.m128_f32[1] = v166 - v68[0x23];
                          v190.m128_f32[2] = v167 - v68[0x24];
                          v69 = sub_4BF9B0(v190.m128_f32, v191.m128_f32, fConstant_2);
                          v70 = sub_47D9B0(v66 + 0x22, v190.m128_f32, v69);
                          v71 = *v70;
                          v72 = v70[1];
                          v73 = v70[2];
                          v148 = v71;
                          v74 = TESDataHandler_g_PlayerRef;
                          v150 = v73;
                          LOBYTE(v73) = v74->isThirdPerson;
                          v149 = v72;
                          v75 = v66;
                          if ( !LOBYTE(v73) )
                          {
                            v75 = v68;
                            v68 = v66;
                          }
                          v114 = LODWORD(v122);
                          v190.m128_f32[0] = -v155;
                          v190.m128_f32[1] = -v156;
                          v190.m128_f32[2] = -v157;
                          v111 = v144;
                          v108 = (UInt32)v68;
                          v104 = (NiNode *)v75;
                          v102 = (const char *)sub_5E1BB0((void *)this);
                          v91 = v190.m128_u64[0];
                          v98 = v190.m128_i32[2];
                          v83 = LODWORD(v148);
                          v84 = LODWORD(v149);
                          v87 = LODWORD(v150);
                        }
                        else
                        {
                          v190.m128_f32[0] = *(float *)&v165 - v66[0x22];
                          v190.m128_f32[1] = v166 - v66[0x23];
                          v190.m128_f32[2] = v167 - v66[0x24];
                          v76 = sub_4BF9B0(v190.m128_f32, (float *)&v165, fConstant_2);
                          v77 = sub_47D9B0(v66 + 0x22, &v169, v76);
                          v78 = v77[1];
                          v190.m128_f32[0] = -v155;
                          v79 = *(_DWORD *)v77;
                          v80 = v77[2];
                          v190.m128_f32[1] = -v156;
                          v114 = LODWORD(v122);
                          v149 = v78;
                          v190.m128_f32[2] = -v157;
                          v111 = v144;
                          v108 = 0;
                          v104 = (NiNode *)v66;
                          v150 = v80;
                          v102 = (const char *)sub_5E1BB0((void *)this);
                          v91 = v190.m128_u64[0];
                          v98 = v190.m128_i32[2];
                          v83 = v79;
                          v84 = LODWORD(v149);
                          v87 = LODWORD(v150);
                        }
                        v81 = TESObjectREFR_GetParentCell((TESObjectREFR *)v163);
                        sub_4CF1A0(
                          v81,
                          v83,
                          v84,
                          v87,
                          *(float *)&v91,
                          SHIDWORD(v91),
                          v98,
                          v102,
                          v104,
                          (int *)&v168,
                          v108,
                          v111,
                          v114);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return;
    }
LABEL_11:
    v127 = 1;
    if ( (PlayerCharacter *)this == TESDataHandler_g_PlayerRef )
      v127 = *(_BYTE *)(this + 0x588);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 0x19C))(this) )
    {
      if ( v127 )
      {
        v145 = 0;
        CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
        if ( CharProxy )
          v145 = *((_BYTE *)CharProxy + 0x1F4) & 1;
        sub_8AB040(SLODWORD(v153), COERCE_INT(0.0), v145);
      }
    }
    v19 = 0.0;
    v20 = *(float *)&v151;
    if ( *(float *)&v151 != 0.0 )
    {
      v21 = dword_B148CC <= 0;
      v168 = v155 * v20;
      v146 = v156 * v20;
      v154 = v20 * v157;
      if ( !v21 )
      {
        if ( v6 == TESDataHandler_g_PlayerRef )
        {
          v169 = 0.0;
          v170 = 0.0;
          v191.m128_f32[0] = 0.0;
          v171 = 1.0;
          v191.m128_f32[1] = 0.0;
          v172 = 1.0;
          v191.m128_f32[2] = 1.0;
        }
        else
        {
          v169 = 1.0;
          v172 = 1.0;
          v191.m128_f32[0] = 1.0;
          v170 = 0.0;
          v171 = 0.0;
          v191.m128_f32[1] = 0.0;
          v191.m128_f32[2] = 0.0;
        }
        v191.m128_f32[3] = 1.0;
        v22 = dbl_A2FC80;
        v118 = v168 * v22;
        v140 = v146 * v22;
        v131 = v22 * v154;
        v190.m128_f32[0] = v118;
        v190.m128_f32[1] = v140;
        v190.m128_f32[2] = v131;
        v23 = sub_6FCDC0(v190.m128_f32, (int *)&v191);
        v24 = v166;
        v25 = (int)v23;
        v26 = v167;
        *(float *)(v25 + 0x54) = *(float *)&v165;
        *(float *)(v25 + 0x58) = v24;
        *(float *)(v25 + 0x5C) = v26;
        v27 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
        v193 = 0;
        if ( v27 )
          v28 = (BSShaderProperty *)sub_405990(v27);
        else
          v28 = 0;
        v28->member.super.flags = v28->member.super.flags & 0xFFC7 | 0x10;
        v193 = 0xFFFFFFFF;
        sub_405680((NiNode *)v25, v28);
        v29 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
        v193 = 1;
        if ( v29 )
          v30 = (BSShaderProperty *)NiObjectNET_Create(v29);
        else
          v30 = 0;
        v31 = v30->member.super.flags & 0xFFFC | 2;
        v193 = 0xFFFFFFFF;
        v30->member.super.flags = v31;
        sub_405680((NiNode *)v25, v30);
        sub_440E60(TES, v25, flt_B148D4);
        v19 = 0.0;
        v6 = (PlayerCharacter *)v163;
      }
      if ( v127 )
      {
        v192.m128_f32[0] = v168;
        v192.m128_f32[1] = v146;
        v192.m128_f32[2] = v154;
        v32 = hkFactor;
        v190.m128_f32[0] = *(float *)&v165 * v32;
        v190.m128_f32[1] = v166 * v32;
        v190.m128_f32[2] = v32 * v167;
        v191.m128_f32[0] = v190.m128_f32[0];
        v191.m128_f32[1] = v190.m128_f32[1];
        v191.m128_f32[2] = v190.m128_f32[2];
        v191.m128_f32[3] = flt_A37CC8;
        v33 = sub_8AFD70((float *)a1, &v191, 0);
        if ( v33 && (v34 = (Atmosphere *)sub_47FA60(*(int **)(v33 + 8))) != 0 && (v35 = sub_452A60(v34)) != 0
          || (v35 = (NiAVObject *)NiObjectNET_LookupObjectByName(a1, off_B11A64[0])) != 0 )
        {
          sub_5E14C0("Hit At %s\r\n", v35->members.super.m_pcName);
        }
        sub_8B8410((_DWORD *)LODWORD(v153), &v192, v35);
        v19 = 0.0;
        v6 = (PlayerCharacter *)v163;
      }
    }
    if ( v19 != v162 )
    {
      if ( v127 )
      {
        v155 = v155 + 1.0;
        v156 = v156 + 1.0;
        sub_43F350(&v155);
        v132 = v155 * *(float *)&v151;
        v119 = v156 * *(float *)&v151;
        v141 = *(float *)&v151 * v157;
        v190.m128_f32[0] = v132;
        v190.m128_f32[1] = v119;
        v190.m128_f32[2] = v141;
        v36 = (_DWORD *)sub_4D96F0((_DWORD *)this, a1, "Bip01 L Forearm");
        sub_8B8410((_DWORD *)LODWORD(v153), &v190, v36);
      }
    }
    goto LABEL_40;
  }
}
