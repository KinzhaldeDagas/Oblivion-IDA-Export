// bad sp value at call has been detected, the output may be wrong!
int (*__usercall sub_5821F0@<eax>(
        _BYTE *this@<ecx>,
        double st7_0@<st0>,
        double st4_0@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st4>,
        double a7@<st7>,
        double a8@<st6>))(void)
{
  InputGlobal *input; // ebx
  bool v11; // zf
  double v12; // st2
  int v13; // edx
  char v14; // al
  double Float; // st7
  Tile *v16; // ecx
  _DWORD *v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  double v21; // st7
  LONG MouseAxisMovement; // eax
  BSFogProperty *v23; // eax
  Tile *v24; // ebx
  DWORD ParentMenu; // eax
  Tile *v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // ecx
  _DWORD *v29; // ebx
  int v30; // edi
  int v31; // eax
  int *v32; // eax
  _DWORD *v33; // ecx
  int v34; // edi
  int v35; // eax
  TESObjectREFR *v36; // eax
  TESObjectREFRVtbl *vtbl; // edi
  int v38; // eax
  int v39; // eax
  int v40; // eax
  double v41; // st7
  Tile *v42; // ecx
  void (__thiscall **v43)(_DWORD, int); // edi
  int v44; // eax
  Tile *v45; // ecx
  int v46; // eax
  void (__thiscall **v47)(_DWORD); // edi
  DWORD dwData; // eax
  int v49; // eax
  Tile *v50; // ecx
  void (__thiscall **v51)(_DWORD, int); // edi
  int v52; // eax
  _DWORD *v53; // ecx
  _DWORD *v54; // eax
  void (__thiscall **v55)(_DWORD, int, int); // edi
  int v56; // eax
  TES *v57; // ecx
  double v58; // st7
  SceneGraph *v59; // edx
  float *camera; // ebx
  int v61; // eax
  PlayerCharacter *v62; // eax
  int v63; // ebx
  TESObjectREFR *v64; // edi
  int *v65; // eax
  int v66; // ecx
  int v67; // ebx
  _DWORD *Singleton; // eax
  char *Name; // eax
  float *v70; // eax
  BSExtraDataVtbl *ExtraScript; // edi
  BSExtraDataVtbl *v72; // eax
  const char *v73; // eax
  float *v74; // eax
  BSExtraDataVtbl *Owner; // edi
  BSExtraDataVtbl *v76; // eax
  const char *v77; // eax
  float *v78; // eax
  signed __int16 ExtraCount; // ax
  float *v80; // eax
  _DWORD *v81; // edi
  int v82; // eax
  int v83; // edx
  int v84; // eax
  const char *v85; // eax
  float *v86; // eax
  int v87; // eax
  const char *v88; // eax
  int v89; // eax
  int *v90; // edi
  int v91; // eax
  int v92; // edx
  int v93; // ecx
  int (__thiscall *v94)(int *); // eax
  int v95; // eax
  const char *v96; // eax
  float *v97; // eax
  int v98; // eax
  float *v99; // eax
  float *v100; // ecx
  TESFurniture *v101; // eax
  int v102; // edi
  PlayerCharacter *v103; // ecx
  PlayerCharacterVtbl *v104; // eax
  bool v105; // al
  double v106; // st7
  int v107; // eax
  const char *v108; // eax
  float *v109; // eax
  float *v110; // ecx
  const char *v111; // edi
  const char **v112; // eax
  const char *v113; // eax
  float *v114; // eax
  int v115; // eax
  const char *v116; // eax
  float *v117; // eax
  TESObjectREFR **TeleportExtraData; // edi
  BSExtraDataVtbl *v119; // eax
  const char *v120; // edi
  CHAR *v121; // eax
  float *v122; // eax
  signed int v123; // eax
  int v124; // edx
  int v125; // ecx
  char *v126; // ecx
  char *v128; // ecx
  char *v130; // ecx
  char *v132; // eax
  int v134; // edx
  int v135; // ecx
  int v136; // edx
  float *v137; // eax
  bool v138; // cc
  float *v139; // eax
  float *v140; // eax
  _DWORD *v141; // eax
  void (__thiscall **v142)(_DWORD, int); // edi
  int v143; // eax
  _DWORD *v144; // eax
  _DWORD *v145; // ecx
  void (__thiscall **v146)(_DWORD, int, int); // edi
  int v147; // eax
  _DWORD *v148; // eax
  void (__thiscall **v149)(_DWORD, int); // edi
  int v150; // eax
  OSGlobals *v151; // eax
  int j; // eax
  int v153; // edi
  int GlobalScriptStateObj; // eax
  int v155; // edx
  char v156; // bl
  int k; // eax
  signed int TopVisibleMenuID; // eax
  _DWORD *OpenMenuTile; // eax
  int v160; // eax
  int v161; // eax
  InputGlobal *v162; // edi
  _BYTE *v163; // edi
  _DWORD *v164; // eax
  int v165; // eax
  _DWORD *v166; // edi
  _DWORD *v167; // eax
  int v168; // eax
  _DWORD *v169; // edi
  _DWORD *v170; // ebx
  _DWORD *v171; // edi
  _DWORD *v172; // ecx
  int v173; // eax
  InputGlobal *v174; // ebx
  DWORD v175; // edi
  int v176; // eax
  int v177; // eax
  int v178; // eax
  int v179; // eax
  double v180; // st7
  _DWORD *sound; // ecx
  int *v182; // eax
  NiNode *v183; // eax
  int (*result)(void); // eax
  float v185; // [esp+0h] [ebp-264h]
  char *duration_4b; // [esp+Ch] [ebp-258h]
  char *duration_4c; // [esp+Ch] [ebp-258h]
  char *duration_4d; // [esp+Ch] [ebp-258h]
  char *duration_4e; // [esp+Ch] [ebp-258h]
  char *duration_4f; // [esp+Ch] [ebp-258h]
  char *duration_4; // [esp+Ch] [ebp-258h]
  char *duration_4g; // [esp+Ch] [ebp-258h]
  char *duration_4a; // [esp+Ch] [ebp-258h]
  char *duration_4h; // [esp+Ch] [ebp-258h]
  char *duration_4i; // [esp+Ch] [ebp-258h]
  char *duration_4j; // [esp+Ch] [ebp-258h]
  char *duration_4k; // [esp+Ch] [ebp-258h]
  DWORD duration_4l; // [esp+Ch] [ebp-258h]
  DWORD duration_4m; // [esp+Ch] [ebp-258h]
  float v200; // [esp+10h] [ebp-254h]
  float v201; // [esp+10h] [ebp-254h]
  float v202; // [esp+10h] [ebp-254h]
  float v203; // [esp+10h] [ebp-254h]
  float v204; // [esp+10h] [ebp-254h]
  float v205; // [esp+10h] [ebp-254h]
  float v206; // [esp+10h] [ebp-254h]
  float v207; // [esp+10h] [ebp-254h]
  float v208; // [esp+10h] [ebp-254h]
  float v209; // [esp+10h] [ebp-254h]
  float v210; // [esp+10h] [ebp-254h]
  float v211; // [esp+10h] [ebp-254h]
  float v212; // [esp+10h] [ebp-254h]
  float v213; // [esp+10h] [ebp-254h]
  float v214; // [esp+14h] [ebp-250h]
  float v215; // [esp+14h] [ebp-250h]
  float v216; // [esp+14h] [ebp-250h]
  float v217; // [esp+14h] [ebp-250h]
  float v218; // [esp+14h] [ebp-250h]
  float v219; // [esp+14h] [ebp-250h]
  float v220; // [esp+14h] [ebp-250h]
  float v221; // [esp+14h] [ebp-250h]
  float v222; // [esp+14h] [ebp-250h]
  float v223; // [esp+14h] [ebp-250h]
  float v224; // [esp+14h] [ebp-250h]
  float v225; // [esp+14h] [ebp-250h]
  float dwOfs; // [esp+14h] [ebp-250h]
  float v227; // [esp+14h] [ebp-250h]
  int v228; // [esp+14h] [ebp-250h]
  _DWORD *v229; // [esp+1Ch] [ebp-248h]
  float v230; // [esp+20h] [ebp-244h]
  float v231; // [esp+20h] [ebp-244h]
  float v232; // [esp+20h] [ebp-244h]
  float v233; // [esp+20h] [ebp-244h]
  float v234; // [esp+20h] [ebp-244h]
  float v235; // [esp+20h] [ebp-244h]
  int v236; // [esp+20h] [ebp-244h]
  float v237; // [esp+20h] [ebp-244h]
  float v238; // [esp+20h] [ebp-244h]
  float v239; // [esp+20h] [ebp-244h]
  float v240; // [esp+20h] [ebp-244h]
  float v241; // [esp+20h] [ebp-244h]
  float v242; // [esp+20h] [ebp-244h]
  float v243; // [esp+20h] [ebp-244h]
  float v244; // [esp+20h] [ebp-244h]
  int v245; // [esp+24h] [ebp-240h]
  int ObjectLODRoot; // [esp+24h] [ebp-240h]
  UInt32 refID; // [esp+24h] [ebp-240h]
  int v248; // [esp+24h] [ebp-240h]
  int v249; // [esp+24h] [ebp-240h]
  int v250; // [esp+24h] [ebp-240h]
  int v251; // [esp+24h] [ebp-240h]
  int v252; // [esp+24h] [ebp-240h]
  float v253; // [esp+24h] [ebp-240h]
  const char *v254; // [esp+24h] [ebp-240h]
  int v255; // [esp+30h] [ebp-234h]
  int v256; // [esp+38h] [ebp-22Ch]
  int a3; // [esp+3Ch] [ebp-228h]
  DIDEVICEOBJECTDATA v258; // [esp+40h] [ebp-224h] BYREF
  _DWORD *v259; // [esp+50h] [ebp-214h]
  int i; // [esp+54h] [ebp-210h]
  int v261; // [esp+58h] [ebp-20Ch]
  DIDEVICEOBJECTDATA v262; // [esp+5Ch] [ebp-208h] BYREF
  float v263; // [esp+6Ch] [ebp-1F8h]
  int v264; // [esp+70h] [ebp-1F4h]
  const char *v265; // [esp+74h] [ebp-1F0h]
  TESObjectREFR *v266; // [esp+7Ch] [ebp-1E8h]
  _DWORD v267[3]; // [esp+80h] [ebp-1E4h] BYREF
  char ArgList[4]; // [esp+8Ch] [ebp-1D8h]
  DIDEVICEOBJECTDATA a2; // [esp+90h] [ebp-1D4h] BYREF
  int v270; // [esp+A0h] [ebp-1C4h]
  int v271; // [esp+A8h] [ebp-1BCh]
  int v272; // [esp+ACh] [ebp-1B8h]
  DIDEVCAPS *v273; // [esp+B0h] [ebp-1B4h]
  int v274; // [esp+B4h] [ebp-1B0h]
  int **v275; // [esp+B8h] [ebp-1ACh]
  int v276; // [esp+BCh] [ebp-1A8h]
  float v277[2]; // [esp+CCh] [ebp-198h] BYREF
  float v278[2]; // [esp+D8h] [ebp-18Ch] BYREF
  char v279; // [esp+E3h] [ebp-181h] BYREF
  _DWORD v280[3]; // [esp+E4h] [ebp-180h] BYREF
  __int16 v281; // [esp+F0h] [ebp-174h]
  char v282; // [esp+F2h] [ebp-172h]
  unsigned int v283; // [esp+20Ch] [ebp-58h]
  int v284; // [esp+228h] [ebp-3Ch]
  int v285; // [esp+260h] [ebp-4h]
  int savedregs; // [esp+264h] [ebp+0h] BYREF

  input = OSGlobals->input;
  v11 = *(this + 8) == 1;
  v273 = (DIDEVCAPS *)input;
  v12 = sub_5A6040(a4, a5, (char)&savedregs, st7_0, !v11, 0);
  sub_5A82D0(0, (int)this, (char)&savedregs, a4, a5, st7_0);
  if ( *(this + 8) == 1 )
  {
    if ( !Menu_GetOpenMenuTile(0x3EC) )
      st7_0 = sub_5A6B00((int)input, (char)&savedregs, a4, st7_0, a5);
    if ( !Menu_GetOpenMenuTile(0x3ED) )
      sub_5A4840((char)&savedregs, a4, st7_0, a5);
    if ( *((_DWORD *)this + 0x43) )
    {
      *((_DWORD *)this + 0x43) = 0;
      Player_GoToJail_(
        (int)TESDataHandler_g_PlayerRef,
        (int)input,
        (int)&savedregs,
        0,
        a7,
        a8,
        v12,
        a6,
        st4_0,
        a4,
        a5,
        st7_0,
        (char *)1);
    }
    if ( *((_DWORD *)this + 0x44) )
    {
      *((_DWORD *)this + 0x44) = 0;
      sub_670CA0((int)TESDataHandler_g_PlayerRef, st7_0, st4_0, a4, a5, a7, a6, (char)&savedregs, COERCE_FLOAT(1));
    }
    if ( byte_B3A6D0 )
    {
      Tile_SetString(*((_DWORD **)this + 7), (_DWORD *)0xFE6, "Menus\\Misc\\cursor.dds");
      sub_58E870(*((_DWORD *)this + 7), a4, a5, st7_0);
      byte_B3A6D0 = 0;
    }
    if ( byte_B3A6D1 )
    {
      sub_5ACE20(a4, a5, (char)&savedregs, st7_0);
      byte_B3A6D1 = 0;
    }
    sub_6623A0(TESDataHandler_g_PlayerRef);
    sub_662D10(TESDataHandler_g_PlayerRef, v13);
  }
  v14 = *(this + 8);
  if ( v14 == 2 || v14 == 5 )
  {
    a2.dwSequence = 0;
    v270 = 0;
    Float = fConstant_2;
    *(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 7) + 0x24) + 0x18) &= ~1u;
    v16 = *((Tile **)this + 7);
    *(float *)&v262.dwOfs = Float;
    v285 = 0;
    Tile_SetFloat(v16, (_DWORD *)0xFA1, *(float *)&v262.dwOfs);
    sub_57E7C0((float *)this);
    if ( !*(this + 0xB9) )
    {
      v17 = *((_DWORD **)this + 0x22);
      if ( !v17
        || !sub_5893B0(v17)
        || (Float = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x22), 0xFC9), Float != fConstant_2) )
      {
        sub_57FD60((Tile **)this, a4, a5, Float);
      }
    }
    LOBYTE(v18) = InputGlobals::QueryMouseKeyState(input, 0, 1u);
    v272 = v18;
    LOBYTE(v19) = InputGlobals::QueryMouseKeyState(input, 0, 2u);
    v271 = v19;
    LOBYTE(v20) = InputGlobals::QueryMouseKeyState(input, 0, 0);
    v274 = v20;
    if ( v20 )
      v21 = *((float *)this + 0xF) + flt_B33E9C;
    else
      v21 = 0.0;
    v262.dwOfs = 3;
    *((float *)this + 0xF) = v21;
    MouseAxisMovement = InputGlobals::GetMouseAxisMovement(input, v262.dwOfs);
    v11 = *(this + 0xB9) == 0;
    *(_DWORD *)ArgList = MouseAxisMovement;
    st7_0 = (double)MouseAxisMovement;
    *((float *)this + 0xE) = st7_0;
    if ( !v11 )
    {
      v23 = sub_581390((float *)this, 0);
      v24 = v23;
      *(_DWORD *)ArgList = v23;
      a2.dwOfs = 0;
      if ( v23 )
      {
        ParentMenu = Tile_GetParentMenu(v23);
        v26 = *((Tile **)this + 0x22);
        a2.dwOfs = ParentMenu;
        if ( v26 )
        {
          Tile_SetFloat(v26, (_DWORD *)0xFDD, 0.0);
          v27 = (_DWORD *)Tile_GetParentMenu(*((_DWORD **)this + 0x22));
          v28 = *((_DWORD **)this + 0x22);
          v29 = v27;
          v30 = *v27;
          v262.dwOfs = *((_DWORD *)this + 0x26);
          st7_0 = Tile_GetFloat(v28, 0xFA8);
          v31 = Double_To_SInt32(st7_0);
          (*(void (__thiscall **)(_DWORD *, int))(v30 + 0x14))(v29, v31);
          v24 = (Tile *)v267[1];
          *((_DWORD *)this + 0x22) = 0;
        }
      }
      if ( v24 != *((Tile **)this + 0x26) )
      {
        if ( v272 )
        {
          v32 = *((int **)this + 0x29);
          if ( v32 )
          {
            if ( v32[9] == 1 )
            {
              v33 = *((_DWORD **)this + 0x28);
              v34 = *v32;
              i = *((_DWORD *)this + 0x26);
              v259 = v33;
              st7_0 = Tile_GetFloat(v33, 0xFA8);
              v35 = Double_To_SInt32(st7_0);
              (*(void (__thiscall **)(_DWORD, int, _DWORD *, int))(v34 + 0x1C))(*((_DWORD *)this + 0x29), v35, v259, i);
            }
          }
          v36 = v266;
          v11 = v266 == 0;
          *((_DWORD *)this + 0x28) = v24;
          *((_DWORD *)this + 0x29) = v36;
          if ( !v11 && LODWORD(v36->member.rot.y) == 1 )
          {
            v258.dwTimeStamp = *((_DWORD *)this + 0x26);
            vtbl = v36->vtbl;
            st7_0 = Tile_GetFloat(v24, 0xFA8);
            v38 = Double_To_SInt32(st7_0);
            ((void (__thiscall *)(_DWORD, int, Tile *))vtbl->super.Unk_06)(*((_DWORD *)this + 0x29), v38, v24);
          }
        }
      }
      if ( v267[2] )
      {
        if ( *((_DWORD *)this + 0x27) )
        {
          v39 = *((_DWORD *)this + 0x28);
          if ( !v39 || v39 == *((_DWORD *)this + 0x26) )
          {
            if ( sub_588B50(*((_DWORD **)this + 0x26), 0xFA8) )
            {
              if ( *(_DWORD *)(*((_DWORD *)this + 0x27) + 0x24) == 1 )
              {
                v263 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFE5);
                a5 = v263;
                if ( v263 != 0.0 )
                {
                  v40 = Double_To_SInt32(v263);
                  sub_57DE50(v40);
                }
                v41 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFE2);
                v42 = *((Tile **)this + 0x26);
                v263 = v41 + dbl_A2F928;
                Tile_SetFloat(v42, (_DWORD *)0xFE3, v263);
                Tile_SetFloat(*((Tile **)this + 0x26), (_DWORD *)0xFE1, 1.0);
                Tile_SetFloat(*((Tile **)this + 0x26), (_DWORD *)0xFE1, 0.0);
                v43 = (void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x27) + 0xC);
                st7_0 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFA8);
                v44 = Double_To_SInt32(st7_0);
                (*v43)(*((_DWORD *)this + 0x27), v44);
                if ( !*((_DWORD *)this + 0x26) )
                {
                  v24 = 0;
                  v262.dwSequence = 0;
                }
              }
            }
          }
        }
        *((_DWORD *)this + 0x28) = 0;
        *((_DWORD *)this + 0x29) = 0;
      }
      v45 = *((Tile **)this + 0x26);
      if ( v24 != v45 && !*(_DWORD *)ArgList )
      {
        v46 = *((_DWORD *)this + 0x27);
        if ( v46 )
        {
          if ( *(_DWORD *)(v46 + 0x24) == 1 )
          {
            Tile_SetFloat(v45, (_DWORD *)0xFDD, 0.0);
            v47 = (void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x27) + 0x14);
            st7_0 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFA8);
            v255 = Double_To_SInt32(st7_0);
            (*v47)(*((_DWORD *)this + 0x27));
          }
        }
        dwData = v262.dwData;
        if ( v262.dwData && *(_DWORD *)(v262.dwData + 0x24) == 1 )
        {
          *((_DWORD *)this + 0x26) = v24;
          *((_DWORD *)this + 0x27) = dwData;
        }
        else
        {
          *((_DWORD *)this + 0x26) = 0;
          *((_DWORD *)this + 0x27) = 0;
        }
        v49 = *((_DWORD *)this + 0x27);
        if ( v49 )
        {
          if ( *(_DWORD *)(v49 + 0x24) == 1 )
          {
            v50 = *((Tile **)this + 0x26);
            *((_DWORD *)this + 0x22) = v50;
            Tile_SetFloat(v50, (_DWORD *)0xFDD, 1.0);
            v51 = (void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x27) + 0x10);
            st7_0 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFA8);
            v52 = Double_To_SInt32(st7_0);
            (*v51)(*((_DWORD *)this + 0x27), v52);
          }
        }
        if ( !*(this + 0xB9) )
          goto LABEL_154;
        *((_DWORD *)this + 0x22) = 0;
      }
      if ( *(this + 0xB9) && v265 )
      {
        v53 = *((_DWORD **)this + 0x26);
        if ( v53 )
        {
          v54 = *((_DWORD **)this + 0x27);
          if ( v54 )
          {
            if ( v54[9] == 1 )
            {
              v245 = *((_DWORD *)this + 0x26);
              v55 = (void (__thiscall **)(_DWORD, int, int))(*v54 + 8);
              st7_0 = Tile_GetFloat(v53, 0xFA8);
              v56 = Double_To_SInt32(st7_0);
              (*v55)(*((_DWORD *)this + 0x27), v56, v245);
              goto LABEL_154;
            }
          }
        }
        if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 )
        {
          HIBYTE(v263) = 1;
          sub_959BC0(&a2.dwSequence);
          v57 = TES;
          BYTE1(v272) = 1;
          ObjectLODRoot = (int)v57->ObjectLODRoot;
          LOBYTE(v284) = 1;
          sub_441920(&a2.dwSequence, ObjectLODRoot);
          v58 = *((float *)this + 0xD);
          v59 = g_worldScenegraph;
          v270 = 0;
          camera = (float *)v59->camera;
          v229 = (_DWORD *)Double_To_SInt32(v58);
          v61 = Double_To_SInt32(*((float *)this + 0xB));
          sub_70D300(camera, *(float *)&v61, *(float *)&v229, (int)v278, COERCE_FLOAT(v277));
          if ( !sub_959D60(&a2.dwSequence, v278, v277, 0) || !*v275 )
          {
LABEL_152:
            v244 = flt_A30634;
            *((_DWORD *)this + 0x2F) = 0;
            i = iDebugTextTopBottomOffset + 0x14;
            v227 = (float)i;
            st7_0 = flt_A4D6FC;
            v213 = flt_A4D6FC;
            v140 = sub_571F90(1);
            sub_5723E0(
              (char *)v140,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              EmptyString,
              v213,
              v227,
              2,
              0xFFFFFFFF,
              v244,
              0);
LABEL_153:
            LOBYTE(v284) = 0;
            sub_959EC0(&a2.dwSequence);
            goto LABEL_154;
          }
          v62 = sub_4DC270(**v275);
          v63 = 0;
          v262.dwData = 1;
          while ( 1 )
          {
            v64 = (TESObjectREFR *)v62;
            if ( v62 )
              break;
            if ( v262.dwData >= HIWORD(v276) )
              break;
            v65 = v275[v63 + 1];
            ++v262.dwData;
            ++v63;
            if ( !v65 )
              break;
            v62 = sub_4DC270(*v65);
          }
          v66 = dword_B12DB4 - 1;
          v67 = iDebugTextTopBottomOffset + 0x3C;
          v262.dwOfs = v67;
          i = v66;
          Singleton = FontManager_GetSingleton();
          st7_0 = sub_404FB0((_DWORD *)Singleton[i]) + dbl_A30E48;
          v261 = Double_To_SInt32(st7_0);
          if ( !v64 || v64 == *((TESObjectREFR **)this + 0x2F) )
          {
LABEL_149:
            v138 = v67 < dword_B3A6F8;
            for ( i = v67; v138; v262.dwOfs = v67 )
            {
              v243 = flt_A30634;
              dwOfs = (float)(int)v262.dwOfs;
              st7_0 = flt_A4D6FC;
              v212 = flt_A4D6FC;
              v139 = sub_571F90(1);
              sub_5723E0(
                (char *)v139,
                (unsigned int)&savedregs,
                a4,
                a5,
                st7_0,
                EmptyString,
                v212,
                dwOfs,
                2,
                0xFFFFFFFF,
                v243,
                0);
              v67 += v261;
              v138 = v67 < dword_B3A6F8;
            }
            v11 = HIBYTE(v263) == 0;
            dword_B3A6F8 = i;
            if ( v11 )
              goto LABEL_153;
            goto LABEL_152;
          }
          *((_DWORD *)this + 0x2F) = v64;
          refID = v64->member.super.refID;
          Name = TESObjectREFR_GetName(v64);
          BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "\"%s\" (%08x)", Name, refID);
          v230 = flt_A30634;
          i = iDebugTextTopBottomOffset + 0x14;
          v214 = (float)i;
          st7_0 = flt_A4D6FC;
          v200 = flt_A4D6FC;
          duration_4b = (char *)v262.dwTimeStamp;
          v70 = sub_571F90(1);
          sub_5723E0(
            (char *)v70,
            (unsigned int)&savedregs,
            a4,
            a5,
            st7_0,
            duration_4b,
            v200,
            v214,
            2,
            0xFFFFFFFF,
            v230,
            0);
          if ( !*(this + 0xA8) )
          {
LABEL_148:
            HIBYTE(v263) = 0;
            goto LABEL_149;
          }
          if ( ExtraDataList_GetExtraScript((ExtraDataList *)(*((_DWORD *)this + 0x2F) + 0x44)) )
          {
            ExtraScript = ExtraDataList_GetExtraScript((ExtraDataList *)(*((_DWORD *)this + 0x2F) + 0x44));
            v72 = ExtraDataList_GetExtraScript((ExtraDataList *)(*((_DWORD *)this + 0x2F) + 0x44));
            v73 = (const char *)(*((int (__thiscall **)(BSExtraDataVtbl *, _DWORD))ExtraScript->Destructor + 0x35))(
                                  ExtraScript,
                                  v72[1].CompareTo);
            BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "Script name '%s' (%08x)", v73, v248);
            v231 = flt_A30634;
            v215 = (float)(int)v262.dwOfs;
            st7_0 = flt_A4D6FC;
            v201 = flt_A4D6FC;
            duration_4c = (char *)v262.dwTimeStamp;
            v74 = sub_571F90(1);
            sub_5723E0(
              (char *)v74,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4c,
              v201,
              v215,
              2,
              0xFFFFFFFF,
              v231,
              0);
            v67 += v261;
            v262.dwOfs = v67;
          }
          if ( TESObjectREFR_GetOwner(*((TESObjectREFR **)this + 0x2F)) )
          {
            Owner = TESObjectREFR_GetOwner(*((TESObjectREFR **)this + 0x2F));
            v76 = TESObjectREFR_GetOwner(*((TESObjectREFR **)this + 0x2F));
            v77 = (const char *)(*((int (__thiscall **)(BSExtraDataVtbl *, _DWORD))Owner->Destructor + 0x35))(
                                  Owner,
                                  v76[1].CompareTo);
            BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "Owner name '%s' (%08x)", v77, v249);
            v232 = flt_A30634;
            v216 = (float)(int)v262.dwOfs;
            st7_0 = flt_A4D6FC;
            v202 = flt_A4D6FC;
            duration_4d = (char *)v262.dwTimeStamp;
            v78 = sub_571F90(1);
            sub_5723E0(
              (char *)v78,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4d,
              v202,
              v216,
              2,
              0xFFFFFFFF,
              v232,
              0);
            v67 += v261;
            v262.dwOfs = v67;
          }
          if ( ExtraDataList_GetExtraCount((ExtraDataList *)(*((_DWORD *)this + 0x2F) + 0x44)) != 1 )
          {
            ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)(*((_DWORD *)this + 0x2F) + 0x44));
            BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "Count %d", ExtraCount);
            v233 = flt_A30634;
            v217 = (float)(int)v262.dwOfs;
            st7_0 = flt_A4D6FC;
            v203 = flt_A4D6FC;
            duration_4e = (char *)v262.dwTimeStamp;
            v80 = sub_571F90(1);
            sub_5723E0(
              (char *)v80,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4e,
              v203,
              v217,
              2,
              0xFFFFFFFF,
              v233,
              0);
            v67 += v261;
            v262.dwOfs = v67;
          }
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x2F) + 0x190))(*((_DWORD *)this + 0x2F)) )
          {
            v81 = OblivionDynamicCast(
                    *((void **)this + 0x2F),
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
            if ( (*(int (__thiscall **)(_DWORD *))(*v81 + 0x388))(v81) )
            {
              v82 = (*(int (__thiscall **)(_DWORD *))(*v81 + 0x388))(v81);
              v83 = *v81;
              i = v82;
              v84 = (*(int (__thiscall **)(_DWORD *))(v83 + 0x388))(v81);
              v85 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)i + 0xD4))(i, *(_DWORD *)(v84 + 0xC));
              BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "Rider '%s' (%08x)", v85, v250);
              v234 = flt_A30634;
              v218 = (float)(int)v262.dwOfs;
              st7_0 = flt_A4D6FC;
              v204 = flt_A4D6FC;
              duration_4f = (char *)v262.dwTimeStamp;
              v86 = sub_571F90(1);
              sub_5723E0(
                (char *)v86,
                (unsigned int)&savedregs,
                a4,
                a5,
                st7_0,
                duration_4f,
                v204,
                v218,
                2,
                0xFFFFFFFF,
                v234,
                0);
              v67 += v261;
              v262.dwOfs = v67;
            }
            if ( (*(int (__thiscall **)(_DWORD *))(*v81 + 0x380))(v81) )
            {
              i = (*(int (__thiscall **)(_DWORD *))(*v81 + 0x380))(v81);
              v87 = (*(int (__thiscall **)(_DWORD *))(*v81 + 0x380))(v81);
              v88 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)i + 0xD4))(i, *(_DWORD *)(v87 + 0xC));
              BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "Horse '%s' (%08x)", v88, v251);
              v235 = flt_A30634;
              v219 = (float)(int)v262.dwOfs;
              st7_0 = flt_A4D6FC;
              v205 = flt_A4D6FC;
              duration_4 = (char *)v262.dwTimeStamp;
            }
            else
            {
              if ( !(*(int (__thiscall **)(_DWORD *))(*v81 + 0x18C))(v81) )
                goto LABEL_96;
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v81[0x16] + 0x378))(v81[0x16]) )
              {
                v90 = (int *)v81[0x16];
                v91 = (*(int (__thiscall **)(int *))(*v90 + 0x378))(v90);
                v92 = *v90;
                v264 = v91;
                v93 = *(_DWORD *)((*(int (__thiscall **)(int *))(v92 + 0x378))(v90) + 0xC);
                v94 = *(int (__thiscall **)(int *))(*v90 + 0x37C);
                i = v93;
                v95 = v94(v90);
                v96 = (const char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v264 + 0xD4))(v264, i, v95);
                BSStringT_Static_Format(
                  (BSStringT *)&v262.dwTimeStamp,
                  "Furniture '%s' (%08x) index %d",
                  v96,
                  v236,
                  v252);
              }
              else
              {
                v89 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v81[0x16] + 0x37C))(v81[0x16]);
                BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "Furniture 'UNKNOWN' (UNKNOWN) index %d", v89);
              }
              v235 = flt_A30634;
              v219 = (float)(int)v262.dwOfs;
              st7_0 = flt_A4D6FC;
              v205 = flt_A4D6FC;
              duration_4 = (char *)v262.dwTimeStamp;
            }
            v97 = sub_571F90(1);
            sub_5723E0(
              (char *)v97,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4,
              v205,
              v219,
              2,
              0xFFFFFFFF,
              v235,
              0);
            v67 += v261;
            v262.dwOfs = v67;
          }
LABEL_96:
          if ( sub_4D74B0(*((_DWORD **)this + 0x2F)) )
          {
            v98 = Double_To_SInt32(*(float *)(*((_DWORD *)this + 0x2F) + 0x28) * dbl_A30DC8);
            BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "Orentation %d deg", v98);
            v237 = flt_A30634;
            v220 = (float)(int)v262.dwOfs;
            st7_0 = flt_A4D6FC;
            v206 = flt_A4D6FC;
            duration_4g = (char *)v262.dwTimeStamp;
            v99 = sub_571F90(1);
            sub_5723E0(
              (char *)v99,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4g,
              v206,
              v220,
              2,
              0xFFFFFFFF,
              v237,
              0);
            v67 += v261;
            v100 = *((float **)this + 0x2F);
            v262.dwOfs = v67;
            *(_WORD *)ArgList = 0;
            ArgList[2] = 0xFF;
            v262.dwData = 0;
            if ( sub_4DB9D0(v100, 0, (int)v267) )
            {
              do
              {
                v101 = (TESFurniture *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x2F) + 0x170))(*((_DWORD *)this + 0x2F));
                v102 = (unsigned __int8)ArgList[2];
                v264 = (int)v101;
                if ( sub_4AE5B0(v101, v262.dwData) )
                {
                  v103 = TESDataHandler_g_PlayerRef;
                  v104 = TESDataHandler_g_PlayerRef->vtbl;
                  i = (unsigned __int8)ArgList[2];
                  v253 = v104->super.super.super.GetScale((TESObjectREFR *)v103);
                  sub_4AEB40((int)&a2, i, v253);
                  v105 = sub_4D72C0(*((TESObjectREFR **)this + 0x2F), v262.dwData);
                  v265 = "USED";
                  if ( !v105 )
                    v265 = "UNUSED";
                  i = (int)&off_A64100;
                  if ( !sub_4AE5E0(v102) )
                    i = (int)"Sleep";
                  v254 = v265;
                  v106 = sub_4AEBE0(v102);
                  v107 = Double_To_SInt32(v106 * dbl_A30DC8);
                  BSStringT_Static_Format(
                    (BSStringT *)&v262.dwTimeStamp,
                    "%s Marker %d Delta %0.2f,%0.2f,%0.2f (%d deg) %s",
                    (const char *)i,
                    v102,
                    *(float *)&a2.dwOfs,
                    *(float *)&a2.dwData,
                    *(float *)&a2.dwTimeStamp,
                    v107,
                    v254);
                  v238 = flt_A30634;
                  v221 = (float)(int)v262.dwOfs;
                  st7_0 = flt_A4D6FC;
                  v207 = flt_A4D6FC;
                  duration_4a = (char *)v262.dwTimeStamp;
                }
                else
                {
                  v11 = !sub_4AE5E0(v102);
                  v108 = (const char *)&off_A64100;
                  if ( v11 )
                    v108 = "Sleep";
                  BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "Disabled %s Marker %d", v108, v102);
                  v238 = flt_A30634;
                  v221 = (float)(int)v262.dwOfs;
                  st7_0 = flt_A4D6FC;
                  v207 = flt_A4D6FC;
                  duration_4a = (char *)v262.dwTimeStamp;
                }
                v109 = sub_571F90(1);
                sub_5723E0(
                  (char *)v109,
                  (unsigned int)&savedregs,
                  a4,
                  a5,
                  st7_0,
                  duration_4a,
                  v207,
                  v221,
                  2,
                  0xFFFFFFFF,
                  v238,
                  0);
                v67 += v261;
                v110 = *((float **)this + 0x2F);
                v262.dwOfs = v67;
                ++v262.dwData;
              }
              while ( sub_4DB9D0(v110, v262.dwData, (int)v267) );
            }
          }
          if ( sub_4D7740(*((TESObjectREFR **)this + 0x2F)) )
          {
            i = (int)sub_4D7740(*((TESObjectREFR **)this + 0x2F));
            v111 = "Locked";
            if ( !sub_428E70((_BYTE *)i) )
              v111 = "Unlocked";
            v112 = *(const char ***)(4 * sub_42ACD0((char *)i) + 0xB03E1C);
            if ( v112 )
              v113 = *v112;
            else
              v113 = 0;
            BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "Lock '%s' %s.", v113, v111);
            v239 = flt_A30634;
            v222 = (float)(int)v262.dwOfs;
            st7_0 = flt_A4D6FC;
            v208 = flt_A4D6FC;
            duration_4h = (char *)v262.dwTimeStamp;
            v114 = sub_571F90(1);
            sub_5723E0(
              (char *)v114,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4h,
              v208,
              v222,
              2,
              0xFFFFFFFF,
              v239,
              0);
            v115 = *(_DWORD *)(i + 4);
            v67 += v261;
            v262.dwOfs = v67;
            if ( v115 )
            {
              v116 = *(const char **)(v115 + 0x28);
              if ( !v116 )
                v116 = EmptyString;
              BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, "Key '%s'.", v116);
              v240 = flt_A30634;
              v223 = (float)(int)v262.dwOfs;
              st7_0 = flt_A4D6FC;
              v209 = flt_A4D6FC;
              duration_4i = (char *)v262.dwTimeStamp;
              v117 = sub_571F90(1);
              sub_5723E0(
                (char *)v117,
                (unsigned int)&savedregs,
                a4,
                a5,
                st7_0,
                duration_4i,
                v209,
                v223,
                2,
                0xFFFFFFFF,
                v240,
                0);
              v67 += v261;
              v262.dwOfs = v67;
            }
          }
          if ( !GetTeleportExtraData(*((_BYTE **)this + 0x2F)) )
            goto LABEL_130;
          TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(*((_BYTE **)this + 0x2F));
          i = (int)sub_42B460(TeleportExtraData);
          v119 = sub_42B410((BSExtraData *)TeleportExtraData);
          v120 = "Unknown";
          v262.dwData = (DWORD)v119;
          v264 = (int)"Unknown";
          if ( i )
          {
            v121 = *(CHAR **)(i + 0x1C);
            if ( !v121 )
              v121 = EmptyString;
            v120 = v121;
          }
          else
          {
            if ( !v262.dwData )
            {
LABEL_129:
              BSStringT_Static_Format(
                (BSStringT *)&v262.dwTimeStamp,
                "Teleport Cell '%s' Door '%s'.",
                v120,
                (const char *)v264);
              v241 = flt_A30634;
              v224 = (float)(int)v262.dwOfs;
              st7_0 = flt_A4D6FC;
              v210 = flt_A4D6FC;
              duration_4j = (char *)v262.dwTimeStamp;
              v122 = sub_571F90(1);
              sub_5723E0(
                (char *)v122,
                (unsigned int)&savedregs,
                a4,
                a5,
                st7_0,
                duration_4j,
                v210,
                v224,
                2,
                0xFFFFFFFF,
                v241,
                0);
              v67 += v261;
              v262.dwOfs = v67;
LABEL_130:
              v123 = sub_4D8250(*((_BYTE **)this + 0x2F));
              if ( v123 )
              {
                v124 = dword_A6924C;
                v280[0] = dword_A69248;
                v125 = dword_A69250;
                v280[1] = v124;
                LOWORD(v124) = word_A69254;
                v280[2] = v125;
                LOBYTE(v125) = byte_A69256;
                v281 = v124;
                v282 = v125;
                if ( (v123 & 1) != 0 )
                {
                  v126 = &v279;
                  while ( *++v126 )
                    ;
                  *(_DWORD *)v126 = dword_A6923C;
                  *((_DWORD *)v126 + 1) = dword_A69240;
                  *((_DWORD *)v126 + 2) = dword_A69244;
                }
                if ( (v123 & 2) != 0 )
                {
                  v128 = &v279;
                  while ( *++v128 )
                    ;
                  *(_DWORD *)v128 = dword_A69230;
                  *((_DWORD *)v128 + 1) = dword_A69234;
                  *((_WORD *)v128 + 4) = word_A69238;
                  v128[0xA] = byte_A6923A;
                }
                if ( (v123 & 4) != 0 )
                {
                  v130 = &v279;
                  while ( *++v130 )
                    ;
                  *(_DWORD *)v130 = dword_A69224;
                  *((_DWORD *)v130 + 1) = dword_A69228;
                  *((_DWORD *)v130 + 2) = dword_A6922C;
                }
                if ( (v123 & 8) != 0 )
                {
                  v132 = &v279;
                  while ( *++v132 )
                    ;
                  v134 = dword_A69214;
                  *(_DWORD *)v132 = dword_A69210;
                  v135 = dword_A69218;
                  *((_DWORD *)v132 + 1) = v134;
                  v136 = dword_A6921C;
                  *((_DWORD *)v132 + 2) = v135;
                  LOWORD(v135) = word_A69220;
                  *((_DWORD *)v132 + 3) = v136;
                  *((_WORD *)v132 + 8) = v135;
                }
                BSStringT_Static_Format((BSStringT *)&v262.dwTimeStamp, (char *)v280);
                v242 = flt_A30634;
                v225 = (float)(int)v262.dwOfs;
                st7_0 = flt_A4D6FC;
                v211 = flt_A4D6FC;
                duration_4k = (char *)v262.dwTimeStamp;
                v137 = sub_571F90(1);
                sub_5723E0(
                  (char *)v137,
                  (unsigned int)&savedregs,
                  a4,
                  a5,
                  st7_0,
                  duration_4k,
                  v211,
                  v225,
                  2,
                  0xFFFFFFFF,
                  v242,
                  0);
                v67 += v261;
                v262.dwOfs = v67;
              }
              goto LABEL_148;
            }
            if ( sub_41FF80((ExtraDataList *)(v262.dwData + 0x44)) )
              v120 = "Persistent";
          }
          if ( v262.dwData )
          {
            if ( TESObjectREFR_GetName((TESObjectREFR *)v262.dwData) )
              v264 = (int)TESObjectREFR_GetName((TESObjectREFR *)v262.dwData);
          }
          goto LABEL_129;
        }
      }
    }
LABEL_154:
    if ( v265 )
    {
      v141 = *((_DWORD **)this + 0x27);
      if ( v141 )
      {
        v142 = (void (__thiscall **)(_DWORD, int))(*v141 + 0x20);
        st7_0 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFA8);
        v143 = Double_To_SInt32(st7_0);
        (*v142)(*((_DWORD *)this + 0x27), v143);
      }
      v144 = *((_DWORD **)this + 0x29);
      if ( v144 )
      {
        v145 = *((_DWORD **)this + 0x26);
        if ( v145 )
        {
          v228 = *((_DWORD *)this + 0x26);
          v146 = (void (__thiscall **)(_DWORD, int, int))(*v144 + 0x24);
          st7_0 = Tile_GetFloat(v145, 0xFA8);
          v147 = Double_To_SInt32(st7_0);
          (*v146)(*((_DWORD *)this + 0x29), v147, v228);
        }
      }
    }
    else
    {
      st7_0 = 0.0;
      if ( 0.0 != *((float *)this + 0xE) )
      {
        v148 = *((_DWORD **)this + 0x27);
        if ( v148 )
        {
          v149 = (void (__thiscall **)(_DWORD, int))(*v148 + 0x28);
          st7_0 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFA8);
          v150 = Double_To_SInt32(st7_0);
          (*v149)(*((_DWORD *)this + 0x27), v150);
        }
      }
    }
    v151 = OSGlobals;
    v258.dwOfs = 0;
    for ( j = OSInputGlobals::GetBufferedKeyStateChange(v151->input, &v258);
          j == 2;
          j = OSInputGlobals::GetBufferedKeyStateChange(OSGlobals->input, &v258) )
    {
      duration_4l = v258.dwOfs;
      *((_DWORD *)this + 0x48) = Seed;
      *((_DWORD *)this + 0x49) = 0;
      *((_DWORD *)this + 0x47) = 0;
      sub_57F7A0((int)this, j, duration_4l);
    }
    v153 = sub_57F7A0((int)this, j, v258.dwOfs);
    if ( !v153 )
    {
      st7_0 = 1.0;
      v153 = sub_57DC60(this, 1.0);
    }
    GlobalScriptStateObj = GetGlobalScriptStateObj__(0);
    a3 = GlobalScriptStateObj;
    if ( v153 )
    {
      if ( GlobalScriptStateObj )
      {
        while ( 1 )
        {
          if ( v258.dwOfs == 0x29 )
          {
            v156 = 0;
          }
          else
          {
            v156 = sub_586000(a3, v155, a5, st7_0, a4, st4_0, v153);
            if ( v156 )
            {
              for ( k = OSInputGlobals::GetBufferedKeyStateChange(OSGlobals->input, &v258);
                    k == 2;
                    k = OSInputGlobals::GetBufferedKeyStateChange(OSGlobals->input, &v258) )
              {
                duration_4m = v258.dwOfs;
                *((_DWORD *)this + 0x48) = Seed;
                *((_DWORD *)this + 0x49) = 0;
                *((_DWORD *)this + 0x47) = 0;
                sub_57F7A0((int)this, k, duration_4m);
              }
              v153 = sub_57F7A0((int)this, k, v258.dwOfs);
            }
          }
          if ( !v153 )
            break;
          if ( !v156 )
            goto LABEL_177;
        }
      }
      else
      {
LABEL_177:
        TopVisibleMenuID = InterfaceManager::GetTopVisibleMenuID(this);
        OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(TopVisibleMenuID);
        v160 = Tile_GetParentMenu(OpenMenuTile);
        if ( !v160 || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v160 + 0x30))(v160, v153) )
        {
          switch ( v153 )
          {
            case 0x80000001:
              v161 = 4;
              goto LABEL_185;
            case 0x80000002:
              v161 = 3;
              goto LABEL_188;
            case 0x80000003:
              v161 = 1;
              goto LABEL_191;
            case 0x80000004:
              v161 = 2;
              goto LABEL_191;
            case 0x80000008:
              v161 = *(this + 0xB9) != 0 ? 0 : 0xFFFFFFFE;
              switch ( *(this + 0xB9) != 0 ? 2 : 0 )
              {
                case 6:
LABEL_185:
                  if ( (*((_DWORD *)this + 0x46) & 4) != 0 )
                    v161 = 0xD;
                  break;
                case 5:
LABEL_188:
                  if ( (*((_DWORD *)this + 0x46) & 4) != 0 )
                    v161 = 0xE;
                  break;
                case 2:
                  goto LABEL_192;
              }
LABEL_191:
              InterfaceManager::HandleNavigationKeypress((float *)this, a4, a5, (char)&savedregs, v161);
              v162 = (InputGlobal *)v262.dwOfs;
              InputGlobals::FlushKeyboardBuffer((InputGlobal *)v262.dwOfs);
              break;
            default:
              goto LABEL_192;
          }
          goto LABEL_193;
        }
      }
    }
LABEL_192:
    v162 = (InputGlobal *)v262.dwOfs;
LABEL_193:
    if ( InputGlobals::QueryControlState(v162, 0x1A, 1) )
    {
      if ( (unsigned __int16)word_B1397A <= 0x2Bu || !*(_DWORD *)(dword_B13974 + 0xAC) )
      {
        st7_0 = 1.0;
        GameUI_QueueMessage((const char *)dword_B387A0, 0, 1u, 1.0);
      }
    }
    if ( InputGlobals::QueryControlState(v162, 0x1B, 1) )
    {
      if ( (unsigned __int16)word_B1397A <= 0x2Bu || !*(_DWORD *)(dword_B13974 + 0xAC) )
      {
        st7_0 = 1.0;
        GameUI_QueueMessage((const char *)dword_B387A8, 0, 1u, 1.0);
      }
    }
    v283 = 0xFFFFFFFF;
    FormHeapFree(v258.dwTimeStamp);
    input = (InputGlobal *)v262.dwOfs;
  }
  if ( InputGlobals::QueryControlState(input, 0x1E, 1) )
  {
    if ( GetOpenedMenuCode() != 0x414 )
    {
      v163 = (_BYTE *)GetGlobalScriptStateObj__(1);
      InputGlobals::FlushKeyboardBuffer(input);
      if ( sub_5859C0(v163, (char)&savedregs, a4, a5, st7_0) )
        sub_57D640((int)this, 3);
      else
        sub_57CFE0((int)this, a4, a5, st7_0, 3, 0);
    }
  }
  if ( !InputGlobals::QueryControlState(input, 0x1D, 1)
    || (Menu_GetB3A708(1), sub_5878B0((char)&savedregs, a4, a5, st7_0, 0x414))
    || (Menu_GetB3A708(1), sub_5878B0((char)&savedregs, a4, a5, st7_0, 0x3EF)) )
  {
    if ( !InputGlobals::QueryControlState(input, 0x1D, 1) )
      goto LABEL_228;
    Menu_GetB3A708(1);
    if ( !sub_5878B0((char)&savedregs, a4, a5, st7_0, 0x40F) )
    {
      Menu_GetB3A708(1);
      if ( !sub_5878B0((char)&savedregs, a4, a5, st7_0, 0x40E) )
        goto LABEL_228;
    }
  }
  else
  {
    Menu_GetB3A708(1);
    if ( !sub_5878B0((char)&savedregs, a4, a5, st7_0, 0x40F) )
    {
      Menu_GetB3A708(1);
      if ( !sub_5878B0((char)&savedregs, a4, a5, st7_0, 0x40E) )
      {
        Menu_GetB3A708(1);
        if ( sub_5878B0((char)&savedregs, a4, a5, st7_0, 0x3F5) )
        {
          sub_5BDCD0((char)&savedregs, a4, a5, st7_0);
        }
        else if ( byte_B143AE )
        {
          sub_57B560((char)&savedregs, a4, a5);
        }
        goto LABEL_228;
      }
    }
  }
  Menu_GetB3A708(1);
  if ( sub_5878B0((char)&savedregs, a4, a5, st7_0, 0x40F) )
  {
    v164 = (_DWORD *)Menu_GetOpenMenuTile(0x40F);
    v165 = Tile_GetParentMenu(v164);
    v166 = (_DWORD *)v165;
    if ( v165 && (*(int (__thiscall **)(int))(*(_DWORD *)v165 + 0x34))(v165) == 0x40F )
LABEL_227:
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v166 + 0xC))(v166, 1, 0);
  }
  else
  {
    Menu_GetB3A708(1);
    if ( sub_5878B0((char)&savedregs, a4, a5, st7_0, 0x40E) )
    {
      v167 = (_DWORD *)Menu_GetOpenMenuTile(0x40E);
      v168 = Tile_GetParentMenu(v167);
      v166 = (_DWORD *)v168;
      if ( v168 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v168 + 0x34))(v168) == 0x40E && sub_57D3F0(v166) )
          goto LABEL_227;
      }
    }
  }
LABEL_228:
  v169 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA);
  v170 = (_DWORD *)Menu_GetOpenMenuTile(0x3FE);
  if ( !v169 || Tile_GetFloat(v169, 0xFA1) == fConstant_1 )
  {
    if ( v170 )
      Tile_GetFloat(v170, 0xFA1);
  }
  sub_572170();
  v171 = *(_DWORD **)(*((_DWORD *)this + 0x1A) + 0x34);
  while ( v171 )
  {
    v172 = (_DWORD *)v171[2];
    v171 = (_DWORD *)*v171;
    if ( v172 )
    {
      v173 = Tile_GetParentMenu(v172);
      if ( v173 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v173 + 0x2C))(v173);
    }
  }
  v174 = (InputGlobal *)v262.dwOfs;
  v175 = 0;
  v258.dwData = 0;
  LOBYTE(v176) = InputGlobals::QueryKeyboardState((InputGlobal *)v262.dwOfs, 0x3B, 1);
  if ( v176 )
  {
    v175 = 0x3EB;
  }
  else
  {
    LOBYTE(v177) = InputGlobals::QueryKeyboardState(v174, 0x3C, 1);
    if ( v177 )
    {
      v175 = 0x3EA;
    }
    else
    {
      LOBYTE(v178) = InputGlobals::QueryKeyboardState(v174, 0x3D, 1);
      if ( v178 )
      {
        v175 = 0x3FE;
      }
      else
      {
        LOBYTE(v179) = InputGlobals::QueryKeyboardState(v174, 0x3E, 1);
        if ( !v179 )
          goto LABEL_246;
        v175 = 0x3FF;
      }
    }
  }
  v258.dwData = v175;
LABEL_246:
  v180 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x1A), 0x1771);
  v256 = Double_To_SInt32(v180);
  if ( v175 )
  {
    if ( (InterfaceManager::GetTopVisibleMenuID(this) == 1 || *(this + 8) == 1)
      && v175 != v256
      && !TESDataHandler_g_PlayerRef->unk5C0
      && !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) )
    {
      switch ( v175 )
      {
        case 0x3EBu:
          sub_5A5E80(a4, a5, (char)&savedregs, v180);
          break;
        case 0x3EAu:
          sub_5A5EF0(a5, a4, (char)&savedregs, v180);
          break;
        case 0x3FEu:
          sub_5A5F60(a4, a5, (char)&savedregs, v180);
          break;
        default:
          sub_5A5FD0(a4, a5, (char)&savedregs, v180);
          break;
      }
    }
  }
  if ( (InputGlobals::QueryControlState(v174, 0xF, 1) || v175)
    && !TESDataHandler_g_PlayerRef->unk5C0
    && !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0)
    && sub_57D240(this, 0)
    && *(this + 8) == 1
    && !*((_DWORD *)this + 0x38) )
  {
    if ( v175 )
    {
      v180 = (double)a3;
      v185 = v180;
      Tile_SetFloat(*((Tile **)this + 0x1A), (_DWORD *)0x1771, v185);
    }
    sub_663920(TESDataHandler_g_PlayerRef);
    sub_57D640((int)this, 1);
    v180 = sub_57CAC0((char)&savedregs, a5, v180, a4);
  }
  else if ( (InputGlobals::QueryControlState(v174, 0xF, 1) || v175 && v175 == v255)
         && !TESDataHandler_g_PlayerRef->unk5C0
         && sub_57D240(this, 0)
         && *(this + 8) == 2
         && (int)sub_57CFE0((int)this, a4, a5, v180, 1, 0) >= 0 )
  {
    sound = OSGlobals->sound;
    if ( sound )
    {
      v182 = PlaySound___(sound, "UIInventoryClose", 0x121, 1);
      v175 = (DWORD)v182;
      if ( v182 )
      {
        sub_6B7190(v182, 0);
        sub_6B73E0((_DWORD *)v175);
        FormHeapFree(v175);
      }
    }
    sub_57CC00((char)&savedregs, a4, a5, v180);
  }
  if ( *(this + 8) != 1 )
  {
    if ( TESDataHandler_g_PlayerRef )
    {
      v183 = InterfaceManagerPtr->unk054[3];
      if ( v183 )
      {
        if ( (v183->members.super.m_flags & 1) == 0 )
          sub_664C40((int)TESDataHandler_g_PlayerRef, (char)&savedregs, v175, a4, a5, v180);
      }
    }
  }
  result = *((int (**)(void))this + 0x2D);
  if ( result )
  {
    *((_DWORD *)this + 0x2D) = 0;
    return (int (*)(void))result();
  }
  return result;
}
