// [Controller decode 2026-07-09] Non-player QueryControlState consumer: QuickSave 26, QuickLoad 27, Journal 15, Escape 29, Grave/console 30.
// bad sp value at call has been detected, the output may be wrong!
int (*__usercall InterfaceManager_ProcessGlobalHotkeys@<eax>(
        _BYTE *this@<ecx>,
        double st7_0@<st0>,
        double st4_0@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st4>,
        double a7@<st7>,
        double a8@<st6>,
        double a9@<st5>))(void)
{
  InputGlobal *input; // ebx
  bool v11; // zf
  int v12; // edx
  char v13; // al
  double v14; // st7
  Tile *v15; // ecx
  Tile *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  double v20; // st7
  LONG MouseAxisMovement; // eax
  BSFogProperty *v22; // eax
  Tile *v23; // ebx
  DWORD ParentMenu; // eax
  Tile *v25; // ecx
  _DWORD *v26; // eax
  _DWORD *v27; // ecx
  _DWORD *v28; // ebx
  int v29; // edi
  int v30; // eax
  int *v31; // eax
  _DWORD *v32; // ecx
  int v33; // edi
  int v34; // eax
  TESObjectREFR *v35; // eax
  TESObjectREFRVtbl *vtbl; // edi
  int v37; // eax
  int v38; // eax
  int v39; // eax
  double v40; // st7
  Tile *v41; // ecx
  void (__thiscall **v42)(_DWORD, int); // edi
  int v43; // eax
  Tile *v44; // ecx
  int v45; // eax
  void (__thiscall **v46)(_DWORD); // edi
  DWORD dwData; // eax
  int v48; // eax
  Tile *v49; // ecx
  void (__thiscall **v50)(_DWORD, int); // edi
  int v51; // eax
  _DWORD *v52; // ecx
  _DWORD *v53; // eax
  void (__thiscall **v54)(_DWORD, int, int); // edi
  int v55; // eax
  TES *v56; // ecx
  double v57; // st7
  void *v58; // edx
  float *v59; // ebx
  int v60; // eax
  PlayerCharacter *v61; // eax
  int v62; // ebx
  TESObjectREFR *v63; // edi
  int *v64; // eax
  int v65; // ecx
  int v66; // ebx
  _DWORD *Singleton; // eax
  char *Name; // eax
  float *v69; // eax
  BSExtraDataVtbl *ExtraScript; // edi
  BSExtraDataVtbl *v71; // eax
  const char *v72; // eax
  float *v73; // eax
  BSExtraDataVtbl *Owner; // edi
  BSExtraDataVtbl *v75; // eax
  const char *v76; // eax
  float *v77; // eax
  signed __int16 ExtraCount; // ax
  float *v79; // eax
  _DWORD *v80; // edi
  int v81; // eax
  int v82; // edx
  int v83; // eax
  const char *v84; // eax
  float *v85; // eax
  int v86; // eax
  const char *v87; // eax
  int v88; // eax
  int *v89; // edi
  int v90; // eax
  int v91; // edx
  int v92; // ecx
  int (__thiscall *v93)(int *); // eax
  int v94; // eax
  const char *v95; // eax
  float *v96; // eax
  int v97; // eax
  float *v98; // eax
  float *v99; // ecx
  TESFurniture *v100; // eax
  int v101; // edi
  PlayerCharacter *v102; // ecx
  PlayerCharacterVtbl *v103; // eax
  bool v104; // al
  double v105; // st7
  int v106; // eax
  const char *v107; // eax
  float *v108; // eax
  float *v109; // ecx
  const char *v110; // edi
  const char **v111; // eax
  const char *v112; // eax
  float *v113; // eax
  int v114; // eax
  const char *v115; // eax
  float *v116; // eax
  TeleportData *TeleportData; // edi
  TESObjectREFR *LinkedDoor; // eax
  const char *v119; // edi
  CHAR *v120; // eax
  float *v121; // eax
  signed int v122; // eax
  int v123; // edx
  int v124; // ecx
  char *v125; // ecx
  char *v127; // ecx
  char *v129; // ecx
  char *v131; // eax
  int v133; // edx
  int v134; // ecx
  int v135; // edx
  float *v136; // eax
  bool v137; // cc
  float *v138; // eax
  float *v139; // eax
  _DWORD *v140; // eax
  void (__thiscall **v141)(_DWORD, int); // edi
  int v142; // eax
  _DWORD *v143; // eax
  _DWORD *v144; // ecx
  void (__thiscall **v145)(_DWORD, int, int); // edi
  int v146; // eax
  _DWORD *v147; // eax
  void (__thiscall **v148)(_DWORD, int); // edi
  int v149; // eax
  OSGlobals *v150; // eax
  int j; // eax
  int v152; // edi
  int GlobalScriptStateObj; // eax
  char v154; // bl
  int k; // eax
  signed int TopVisibleMenuID; // eax
  _DWORD *OpenMenuTile; // eax
  int v158; // eax
  int v159; // eax
  InputGlobal *v160; // edi
  int *v161; // edi
  _DWORD *v162; // eax
  int v163; // eax
  _DWORD *v164; // edi
  _DWORD *v165; // eax
  int v166; // eax
  _DWORD *v167; // edi
  _DWORD *v168; // ebx
  _DWORD *v169; // edi
  _DWORD *v170; // ecx
  int v171; // eax
  InputGlobal *v172; // ebx
  DWORD v173; // edi
  int v174; // eax
  int v175; // eax
  int v176; // eax
  int v177; // eax
  double v178; // st7
  int *sound; // ecx
  int *v180; // eax
  int *v181; // edi
  NiNode *v182; // eax
  int (*result)(void); // eax
  float v184; // [esp+0h] [ebp-264h]
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
  float v199; // [esp+10h] [ebp-254h]
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
  float v213; // [esp+14h] [ebp-250h]
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
  float dwOfs; // [esp+14h] [ebp-250h]
  float v226; // [esp+14h] [ebp-250h]
  int v227; // [esp+14h] [ebp-250h]
  _DWORD *v228; // [esp+1Ch] [ebp-248h]
  float v229; // [esp+20h] [ebp-244h]
  float v230; // [esp+20h] [ebp-244h]
  float v231; // [esp+20h] [ebp-244h]
  float v232; // [esp+20h] [ebp-244h]
  float v233; // [esp+20h] [ebp-244h]
  float v234; // [esp+20h] [ebp-244h]
  int v235; // [esp+20h] [ebp-244h]
  float v236; // [esp+20h] [ebp-244h]
  float v237; // [esp+20h] [ebp-244h]
  float v238; // [esp+20h] [ebp-244h]
  float v239; // [esp+20h] [ebp-244h]
  float v240; // [esp+20h] [ebp-244h]
  float v241; // [esp+20h] [ebp-244h]
  float v242; // [esp+20h] [ebp-244h]
  float v243; // [esp+20h] [ebp-244h]
  int v244; // [esp+24h] [ebp-240h]
  int ObjectLODRoot; // [esp+24h] [ebp-240h]
  UInt32 refID; // [esp+24h] [ebp-240h]
  int v247; // [esp+24h] [ebp-240h]
  int v248; // [esp+24h] [ebp-240h]
  int v249; // [esp+24h] [ebp-240h]
  int v250; // [esp+24h] [ebp-240h]
  int v251; // [esp+24h] [ebp-240h]
  float v252; // [esp+24h] [ebp-240h]
  const char *v253; // [esp+24h] [ebp-240h]
  int v254; // [esp+30h] [ebp-234h]
  int value_4; // [esp+38h] [ebp-22Ch]
  int a3; // [esp+3Ch] [ebp-228h]
  DIDEVICEOBJECTDATA v257; // [esp+40h] [ebp-224h] BYREF
  _DWORD *v258; // [esp+50h] [ebp-214h]
  int i; // [esp+54h] [ebp-210h]
  int v260; // [esp+58h] [ebp-20Ch]
  DIDEVICEOBJECTDATA v261; // [esp+5Ch] [ebp-208h] BYREF
  float Float; // [esp+6Ch] [ebp-1F8h]
  int v263; // [esp+70h] [ebp-1F4h]
  const char *v264; // [esp+74h] [ebp-1F0h]
  TESObjectREFR *v265; // [esp+7Ch] [ebp-1E8h]
  _DWORD v266[3]; // [esp+80h] [ebp-1E4h] BYREF
  char ArgList[4]; // [esp+8Ch] [ebp-1D8h]
  DIDEVICEOBJECTDATA a2; // [esp+90h] [ebp-1D4h] BYREF
  int v269; // [esp+A0h] [ebp-1C4h]
  int v270; // [esp+A8h] [ebp-1BCh]
  int v271; // [esp+ACh] [ebp-1B8h]
  DIDEVCAPS *v272; // [esp+B0h] [ebp-1B4h]
  int v273; // [esp+B4h] [ebp-1B0h]
  int **v274; // [esp+B8h] [ebp-1ACh]
  int v275; // [esp+BCh] [ebp-1A8h]
  float v276[2]; // [esp+CCh] [ebp-198h] BYREF
  float v277[2]; // [esp+D8h] [ebp-18Ch] BYREF
  char v278; // [esp+E3h] [ebp-181h] BYREF
  _DWORD v279[3]; // [esp+E4h] [ebp-180h] BYREF
  __int16 v280; // [esp+F0h] [ebp-174h]
  char v281; // [esp+F2h] [ebp-172h]
  unsigned int v282; // [esp+20Ch] [ebp-58h]
  int v283; // [esp+228h] [ebp-3Ch]
  int v284; // [esp+260h] [ebp-4h]
  int savedregs; // [esp+264h] [ebp+0h] BYREF

  input = MEMORY[0xB33398]->input; /*0x582235*/
  v11 = *(this + 8) == 1; /*0x58223c*/
  v272 = (DIDEVCAPS *)input; /*0x582244*/
  sub_5A6040(a4, a5, !v11, 0); /*0x582249*/
  sub_5A82D0(st7_0); /*0x582251*/
  if ( *(this + 8) == 1 ) /*0x58225a*/
  {
    if ( !Menu_GetOpenMenuTile(0x3EC) ) /*0x582265*/
      st7_0 = HUDMainMenu_Create(a4, st7_0, a5); /*0x582271*/
    if ( !Menu_GetOpenMenuTile(0x3ED) ) /*0x58227b*/
      sub_5A4840(st7_0, a5); /*0x582287*/
    if ( *((_DWORD *)this + 0x43) ) /*0x58228c*/
    {
      *((_DWORD *)this + 0x43) = 0; /*0x582294*/
      Player_GoToJail_((int)reference, (int)input, (int)&savedregs, 0, a7, a8, a9, a6, st4_0, a4, a5, st7_0, (char *)1); /*0x5822a2*/
    }
    if ( *((_DWORD *)this + 0x44) ) /*0x5822a7*/
    {
      *((_DWORD *)this + 0x44) = 0; /*0x5822af*/
      sub_670CA0((int *)reference, st7_0, st4_0, a4, a5, a7, a6, (char)&savedregs, a8, a9, COERCE_FLOAT(1)); /*0x5822bd*/
    }
    if ( unk_B3A6D0 ) /*0x5822c2*/
    {
      Tile_SetString(*((_DWORD **)this + 7), (_DWORD *)0xFE6, "Menus\\Misc\\cursor.dds"); /*0x5822d8*/
      sub_58E870(*((_DWORD *)this + 7), a4, a5, st7_0); /*0x5822e0*/
      unk_B3A6D0 = 0; /*0x5822e5*/
    }
    if ( unk_B3A6D1 ) /*0x5822ec*/
    {
      LevelUpMenu_Open(a4, a5, st7_0); /*0x5822f5*/
      unk_B3A6D1 = 0; /*0x5822fa*/
    }
    sub_6623A0(reference); /*0x582307*/
    sub_662D10(reference, v12); /*0x582312*/
  }
  v13 = *(this + 8); /*0x582317*/
  if ( v13 == 2 || v13 == 5 )
  {
    a2.dwSequence = 0; /*0x582326*/
    v269 = 0; /*0x58232a*/
    v14 = fConstant_2; /*0x582334*/
    *(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 7) + 0x24) + 0x18) &= ~1u; /*0x582340*/
    v15 = *((Tile **)this + 7); /*0x582346*/
    *(float *)&v261.dwOfs = v14; /*0x58234a*/
    v284 = 0; /*0x582352*/
    Tile_SetFloat(v15, 0xFA1u, *(float *)&v261.dwOfs); /*0x582359*/
    sub_57E7C0((float *)this); /*0x582360*/
    if ( !*(this + 0xB9) ) /*0x582365*/
    {
      v16 = *((Tile **)this + 0x22); /*0x58236e*/
      if ( !v16 || !Tile::IsVisible(v16) || Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x22), 0xFC9) != fConstant_2 ) /*0x58239c*/
        InterfaceManager::GetDefaultFocus((InterfaceManager *)this); /*0x5823a0*/
    }
    LOBYTE(v17) = InputGlobals::QueryMouseKeyState(input, 0, 1u); /*0x5823aa*/
    v271 = v17; /*0x5823b4*/
    LOBYTE(v18) = InputGlobals::QueryMouseKeyState(input, 0, 2u); /*0x5823b8*/
    v270 = v18; /*0x5823c1*/
    LOBYTE(v19) = InputGlobals::QueryMouseKeyState(input, 0, 0); /*0x5823c5*/
    v273 = v19; /*0x5823cc*/
    if ( v19 ) /*0x5823d0*/
      v20 = *((float *)this + 0xF) + *(float *)&MEMORY[0xB33E90][0xC]; /*0x5823d5*/
    else
      v20 = 0.0; /*0x5823dd*/
    v261.dwOfs = 3; /*0x5823df*/
    *((float *)this + 0xF) = v20; /*0x5823e1*/
    MouseAxisMovement = InputGlobals::GetMouseAxisMovement(input, v261.dwOfs); /*0x5823e6*/
    v11 = *(this + 0xB9) == 0; /*0x5823eb*/
    *(_DWORD *)ArgList = MouseAxisMovement; /*0x5823f2*/
    st7_0 = (double)MouseAxisMovement; /*0x5823f6*/
    *((float *)this + 0xE) = st7_0; /*0x5823fa*/
    if ( !v11 ) /*0x5823fd*/
    {
      v22 = sub_581390((float *)this, 0); /*0x582406*/
      v23 = v22; /*0x58240b*/
      *(_DWORD *)ArgList = v22; /*0x58240f*/
      a2.dwOfs = 0; /*0x582413*/
      if ( v22 ) /*0x582417*/
      {
        ParentMenu = Tile_GetParentMenu(v22); /*0x58241b*/
        v25 = *((Tile **)this + 0x22); /*0x582420*/
        a2.dwOfs = ParentMenu; /*0x582428*/
        if ( v25 ) /*0x58242c*/
        {
          Tile_SetFloat(v25, 0xFDDu, 0.0); /*0x582439*/
          v26 = (_DWORD *)Tile_GetParentMenu(*((_DWORD **)this + 0x22)); /*0x582444*/
          v27 = *((_DWORD **)this + 0x22); /*0x582449*/
          v28 = v26; /*0x58244f*/
          v29 = *v26; /*0x582457*/
          v261.dwOfs = *((_DWORD *)this + 0x26); /*0x582459*/
          st7_0 = Tile_GetFloat(v27, 0xFA8); /*0x582462*/
          v30 = Double_To_SInt32(st7_0); /*0x582467*/
          (*(void (__thiscall **)(_DWORD *, int))(v29 + 0x14))(v28, v30); /*0x582471*/
          v23 = (Tile *)v266[1]; /*0x582473*/
          *((_DWORD *)this + 0x22) = 0; /*0x582477*/
        }
      }
      if ( v23 != *((Tile **)this + 0x26) ) /*0x58248b*/
      {
        if ( v271 ) /*0x582495*/
        {
          v31 = *((int **)this + 0x29); /*0x58249b*/
          if ( v31 ) /*0x5824a3*/
          {
            if ( v31[9] == 1 ) /*0x5824a9*/
            {
              v32 = *((_DWORD **)this + 0x28); /*0x5824ab*/
              v33 = *v31; /*0x5824b1*/
              i = *((_DWORD *)this + 0x26); /*0x5824b3*/
              v258 = v32; /*0x5824b4*/
              st7_0 = Tile_GetFloat(v32, 0xFA8); /*0x5824bd*/
              v34 = Double_To_SInt32(st7_0); /*0x5824c2*/
              (*(void (__thiscall **)(_DWORD, int, _DWORD *, int))(v33 + 0x1C))(*((_DWORD *)this + 0x29), v34, v258, i); /*0x5824d0*/
            }
          }
          v35 = v265; /*0x5824d4*/
          v11 = v265 == 0; /*0x5824d8*/
          *((_DWORD *)this + 0x28) = v23; /*0x5824da*/
          *((_DWORD *)this + 0x29) = v35; /*0x5824e0*/
          if ( !v11 && LODWORD(v35->member.rot.y) == 1 ) /*0x5824ec*/
          {
            v257.dwTimeStamp = *((_DWORD *)this + 0x26); /*0x5824f4*/
            vtbl = v35->vtbl; /*0x5824f7*/
            st7_0 = Tile_GetFloat(v23, 0xFA8); /*0x582504*/
            v37 = Double_To_SInt32(st7_0); /*0x582509*/
            ((void (__thiscall *)(_DWORD, int, Tile *))vtbl->super.Unk_06)(*((_DWORD *)this + 0x29), v37, v23); /*0x582517*/
          }
        }
      }
      if ( v266[2] ) /*0x58251f*/
      {
        if ( *((_DWORD *)this + 0x27) ) /*0x582525*/
        {
          v38 = *((_DWORD *)this + 0x28); /*0x582531*/
          if ( !v38 || v38 == *((_DWORD *)this + 0x26) ) /*0x582541*/
          {
            if ( sub_588B50(*((_DWORD **)this + 0x26), 0xFA8) ) /*0x582552*/
            {
              if ( *(_DWORD *)(*((_DWORD *)this + 0x27) + 0x24) == 1 ) /*0x582569*/
              {
                Float = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFE5); /*0x58257f*/
                a5 = Float; /*0x582585*/
                if ( Float != 0.0 ) /*0x582592*/
                {
                  v39 = Double_To_SInt32(Float); /*0x582594*/
                  sub_57DE50(v39); /*0x58259a*/
                }
                v40 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFE2); /*0x5825b1*/
                v41 = *((Tile **)this + 0x26); /*0x5825bd*/
                Float = v40 + dbl_A2F928; /*0x5825c3*/
                Tile_SetFloat(v41, 0xFE3u, Float); /*0x5825d3*/
                Tile_SetFloat(*((Tile **)this + 0x26), 0xFE1u, 1.0); /*0x5825e9*/
                Tile_SetFloat(*((Tile **)this + 0x26), 0xFE1u, 0.0); /*0x5825ff*/
                v42 = (void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x27) + 0xC); /*0x582618*/
                st7_0 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFA8); /*0x58261b*/
                v43 = Double_To_SInt32(st7_0); /*0x582620*/
                (*v42)(*((_DWORD *)this + 0x27), v43); /*0x58262e*/
                if ( !*((_DWORD *)this + 0x26) ) /*0x582630*/
                {
                  v23 = 0; /*0x582639*/
                  v261.dwSequence = 0; /*0x58263b*/
                }
              }
            }
          }
        }
        *((_DWORD *)this + 0x28) = 0; /*0x582641*/
        *((_DWORD *)this + 0x29) = 0; /*0x582647*/
      }
      v44 = *((Tile **)this + 0x26); /*0x58264f*/
      if ( v23 != v44 && !*(_DWORD *)ArgList ) /*0x582661*/
      {
        v45 = *((_DWORD *)this + 0x27); /*0x582667*/
        if ( v45 ) /*0x58266f*/
        {
          if ( *(_DWORD *)(v45 + 0x24) == 1 ) /*0x582675*/
          {
            Tile_SetFloat(v44, 0xFDDu, 0.0); /*0x582682*/
            v46 = (void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x27) + 0x14); /*0x58269b*/
            st7_0 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFA8); /*0x58269e*/
            v254 = Double_To_SInt32(st7_0); /*0x5826b0*/
            (*v46)(*((_DWORD *)this + 0x27)); /*0x5826b1*/
          }
        }
        dwData = v261.dwData; /*0x5826b5*/
        if ( v261.dwData && *(_DWORD *)(v261.dwData + 0x24) == 1 ) /*0x5826c1*/
        {
          *((_DWORD *)this + 0x26) = v23; /*0x5826c3*/
          *((_DWORD *)this + 0x27) = dwData; /*0x5826c9*/
        }
        else
        {
          *((_DWORD *)this + 0x26) = 0; /*0x5826d1*/
          *((_DWORD *)this + 0x27) = 0; /*0x5826d7*/
        }
        v48 = *((_DWORD *)this + 0x27); /*0x5826dd*/
        if ( v48 ) /*0x5826e5*/
        {
          if ( *(_DWORD *)(v48 + 0x24) == 1 ) /*0x5826eb*/
          {
            v49 = *((Tile **)this + 0x26); /*0x5826ed*/
            *((_DWORD *)this + 0x22) = v49; /*0x5826fe*/
            Tile_SetFloat(v49, 0xFDDu, 1.0); /*0x582704*/
            v50 = (void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x27) + 0x10); /*0x58271d*/
            st7_0 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFA8); /*0x582720*/
            v51 = Double_To_SInt32(st7_0); /*0x582725*/
            (*v50)(*((_DWORD *)this + 0x27), v51); /*0x582733*/
          }
        }
        if ( !*(this + 0xB9) ) /*0x58273e*/
          goto LABEL_154; /*0x58273e*/
        *((_DWORD *)this + 0x22) = 0; /*0x582744*/
      }
      if ( *(this + 0xB9) && v264 ) /*0x58275b*/
      {
        v52 = *((_DWORD **)this + 0x26); /*0x582761*/
        if ( v52 ) /*0x582769*/
        {
          v53 = *((_DWORD **)this + 0x27); /*0x58276b*/
          if ( v53 ) /*0x582773*/
          {
            if ( v53[9] == 1 ) /*0x582779*/
            {
              v244 = *((_DWORD *)this + 0x26); /*0x58277d*/
              v54 = (void (__thiscall **)(_DWORD, int, int))(*v53 + 8); /*0x582783*/
              st7_0 = Tile_GetFloat(v52, 0xFA8); /*0x582786*/
              v55 = Double_To_SInt32(st7_0); /*0x58278b*/
              (*v54)(*((_DWORD *)this + 0x27), v55, v244); /*0x582799*/
              goto LABEL_154; /*0x58279b*/
            }
          }
        }
        if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 ) /*0x5827ae*/
        {
          HIBYTE(Float) = 1; /*0x5827b8*/
          NiPickContext_ctor(&a2.dwSequence); /*0x5827bd*/
          v56 = MEMORY[0xB333A0]; /*0x5827c2*/
          BYTE1(v271) = 1; /*0x5827c8*/
          ObjectLODRoot = (int)v56->ObjectLODRoot; /*0x5827d3*/
          LOBYTE(v283) = 1; /*0x5827d8*/
          sub_441920(&a2.dwSequence, ObjectLODRoot); /*0x5827e0*/
          v57 = *((float *)this + 0xD); /*0x5827e5*/
          v58 = g_WorldSceneReceiverRoot; /*0x5827e8*/
          v269 = 0; /*0x5827fd*/
          v59 = *((float **)v58 + 0x37); /*0x582801*/
          v228 = (_DWORD *)Double_To_SInt32(v57); /*0x582810*/
          v60 = Double_To_SInt32(*((float *)this + 0xB)); /*0x582811*/
          sub_70D300(v59, v60, (int)v228, v277, COERCE_FLOAT(v276)); /*0x582819*/
          if ( !NiPick_ExecuteAndSort(&a2.dwSequence, v277, v276, 0) || !*v274 ) /*0x58284a*/
          {
LABEL_152:
            v243 = kTerrainLODQuadRayDirectionZ; /*0x583399*/
            *((_DWORD *)this + 0x2F) = 0; /*0x5833a5*/
            i = iDebugTextTopBottomOffset + 0x14; /*0x5833b9*/
            v226 = (float)i; /*0x5833c6*/
            st7_0 = flt_A4D6FC; /*0x5833ca*/
            v212 = flt_A4D6FC; /*0x5833d0*/
            v139 = sub_571F90(1); /*0x5833da*/
            sub_5723E0( /*0x5833e4*/
              (char *)v139,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              EmptyString,
              v212,
              v226,
              2,
              0xFFFFFFFF,
              v243,
              0);
LABEL_153:
            LOBYTE(v283) = 0; /*0x5833e9*/
            NiPickContext_dtor(&a2.dwSequence); /*0x5833f5*/
            goto LABEL_154; /*0x5833f5*/
          }
          v61 = sub_4DC270(**v274); /*0x582857*/
          v62 = 0; /*0x58285f*/
          v261.dwData = 1; /*0x582861*/
          while ( 1 ) /*0x582869*/
          {
            v63 = (TESObjectREFR *)v61; /*0x582869*/
            if ( v61 ) /*0x58286d*/
              break; /*0x58286d*/
            if ( v261.dwData >= HIWORD(v275) ) /*0x58287b*/
              break; /*0x58287b*/
            v64 = v274[v62 + 1]; /*0x582884*/
            ++v261.dwData; /*0x582888*/
            ++v62; /*0x58288d*/
            if ( !v64 ) /*0x582892*/
              break; /*0x582892*/
            v61 = sub_4DC270(*v64); /*0x582897*/
          }
          v65 = dword_B12DB4 - 1; /*0x5828ad*/
          v66 = iDebugTextTopBottomOffset + 0x3C; /*0x5828b0*/
          v261.dwOfs = v66; /*0x5828b3*/
          i = v65; /*0x5828b7*/
          Singleton = FontManager_GetSingleton(); /*0x5828bb*/
          st7_0 = sub_404FB0((_DWORD *)Singleton[i]) + dbl_A30E48; /*0x5828cc*/
          v260 = Double_To_SInt32(st7_0); /*0x5828d9*/
          if ( !v63 || v63 == *((TESObjectREFR **)this + 0x2F) ) /*0x5828e9*/
          {
LABEL_149:
            v137 = v66 < unk_B3A6F8; /*0x58332a*/
            for ( i = v66; v137; v261.dwOfs = v66 ) /*0x583334*/
            {
              v242 = kTerrainLODQuadRayDirectionZ; /*0x583349*/
              dwOfs = (float)(int)v261.dwOfs; /*0x583357*/
              st7_0 = flt_A4D6FC; /*0x58335b*/
              v211 = flt_A4D6FC; /*0x583361*/
              v138 = sub_571F90(1); /*0x58336b*/
              sub_5723E0( /*0x583375*/
                (char *)v138,
                (unsigned int)&savedregs,
                a4,
                a5,
                st7_0,
                EmptyString,
                v211,
                dwOfs,
                2,
                0xFFFFFFFF,
                v242,
                0);
              v66 += v260; /*0x58337a*/
              v137 = v66 < unk_B3A6F8; /*0x58337c*/
            }
            v11 = HIBYTE(Float) == 0; /*0x583388*/
            unk_B3A6F8 = i; /*0x583391*/
            if ( v11 ) /*0x583397*/
              goto LABEL_153; /*0x583397*/
            goto LABEL_152; /*0x583397*/
          }
          *((_DWORD *)this + 0x2F) = v63; /*0x5828ef*/
          refID = v63->member.super.refID; /*0x5828f8*/
          Name = TESObjectREFR_GetName(v63); /*0x5828fb*/
          BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "\"%s\" (%08x)", Name, refID); /*0x58290b*/
          v229 = kTerrainLODQuadRayDirectionZ; /*0x582926*/
          i = iDebugTextTopBottomOffset + 0x14; /*0x58292e*/
          v213 = (float)i; /*0x58293b*/
          st7_0 = flt_A4D6FC; /*0x58293f*/
          v199 = flt_A4D6FC; /*0x582945*/
          duration_4b = (char *)v261.dwTimeStamp; /*0x582948*/
          v69 = sub_571F90(1); /*0x58294b*/
          sub_5723E0( /*0x582955*/
            (char *)v69,
            (unsigned int)&savedregs,
            a4,
            a5,
            st7_0,
            duration_4b,
            v199,
            v213,
            2,
            0xFFFFFFFF,
            v229,
            0);
          if ( !*(this + 0xA8) ) /*0x582961*/
          {
LABEL_148:
            HIBYTE(Float) = 0; /*0x583325*/
            goto LABEL_149; /*0x583325*/
          }
          if ( ExtraDataList_GetExtraScript((ExtraDataList *)(*((_DWORD *)this + 0x2F) + 0x44)) ) /*0x582970*/
          {
            ExtraScript = ExtraDataList_GetExtraScript((ExtraDataList *)(*((_DWORD *)this + 0x2F) + 0x44)); /*0x582994*/
            v71 = ExtraDataList_GetExtraScript((ExtraDataList *)(*((_DWORD *)this + 0x2F) + 0x44)); /*0x582996*/
            v72 = (const char *)(*((int (__thiscall **)(BSExtraDataVtbl *, _DWORD))ExtraScript->Destructor + 0x35))( /*0x5829a9*/
                                  ExtraScript,
                                  v71[1].CompareTo);
            BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "Script name '%s' (%08x)", v72, v247); /*0x5829b6*/
            v230 = kTerrainLODQuadRayDirectionZ; /*0x5829cb*/
            v214 = (float)(int)v261.dwOfs; /*0x5829d9*/
            st7_0 = flt_A4D6FC; /*0x5829dd*/
            v200 = flt_A4D6FC; /*0x5829e3*/
            duration_4c = (char *)v261.dwTimeStamp; /*0x5829e6*/
            v73 = sub_571F90(1); /*0x5829e9*/
            sub_5723E0( /*0x5829f3*/
              (char *)v73,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4c,
              v200,
              v214,
              2,
              0xFFFFFFFF,
              v230,
              0);
            v66 += v260; /*0x5829f8*/
            v261.dwOfs = v66; /*0x5829fc*/
          }
          if ( TESObjectREFR_GetOwner(*((TESObjectREFR **)this + 0x2F)) ) /*0x582a06*/
          {
            Owner = TESObjectREFR_GetOwner(*((TESObjectREFR **)this + 0x2F)); /*0x582a20*/
            v75 = TESObjectREFR_GetOwner(*((TESObjectREFR **)this + 0x2F)); /*0x582a22*/
            v76 = (const char *)(*((int (__thiscall **)(BSExtraDataVtbl *, _DWORD))Owner->Destructor + 0x35))( /*0x582a35*/
                                  Owner,
                                  v75[1].CompareTo);
            BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "Owner name '%s' (%08x)", v76, v248); /*0x582a42*/
            v231 = kTerrainLODQuadRayDirectionZ; /*0x582a57*/
            v215 = (float)(int)v261.dwOfs; /*0x582a65*/
            st7_0 = flt_A4D6FC; /*0x582a69*/
            v201 = flt_A4D6FC; /*0x582a6f*/
            duration_4d = (char *)v261.dwTimeStamp; /*0x582a72*/
            v77 = sub_571F90(1); /*0x582a75*/
            sub_5723E0( /*0x582a7f*/
              (char *)v77,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4d,
              v201,
              v215,
              2,
              0xFFFFFFFF,
              v231,
              0);
            v66 += v260; /*0x582a84*/
            v261.dwOfs = v66; /*0x582a88*/
          }
          if ( ExtraDataList_GetExtraCount((ExtraDataList *)(*((_DWORD *)this + 0x2F) + 0x44)) != 1 ) /*0x582a9e*/
          {
            ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)(*((_DWORD *)this + 0x2F) + 0x44)); /*0x582aa9*/
            BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "Count %d", ExtraCount); /*0x582abc*/
            v232 = kTerrainLODQuadRayDirectionZ; /*0x582ad1*/
            v216 = (float)(int)v261.dwOfs; /*0x582adf*/
            st7_0 = flt_A4D6FC; /*0x582ae3*/
            v202 = flt_A4D6FC; /*0x582ae9*/
            duration_4e = (char *)v261.dwTimeStamp; /*0x582aec*/
            v79 = sub_571F90(1); /*0x582aef*/
            sub_5723E0( /*0x582af9*/
              (char *)v79,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4e,
              v202,
              v216,
              2,
              0xFFFFFFFF,
              v232,
              0);
            v66 += v260; /*0x582afe*/
            v261.dwOfs = v66; /*0x582b02*/
          }
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x2F) + 0x190))(*((_DWORD *)this + 0x2F)) ) /*0x582b14*/
          {
            v80 = OblivionDynamicCast( /*0x582b38*/
                    *((void **)this + 0x2F),
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
            if ( (*(int (__thiscall **)(_DWORD *))(*v80 + 0x388))(v80) ) /*0x582b47*/
            {
              v81 = (*(int (__thiscall **)(_DWORD *))(*v80 + 0x388))(v80); /*0x582b5b*/
              v82 = *v80; /*0x582b5d*/
              i = v81; /*0x582b5f*/
              v83 = (*(int (__thiscall **)(_DWORD *))(v82 + 0x388))(v80); /*0x582b6b*/
              v84 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)i + 0xD4))(i, *(_DWORD *)(v83 + 0xC)); /*0x582b7d*/
              BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "Rider '%s' (%08x)", v84, v249); /*0x582b8a*/
              v233 = kTerrainLODQuadRayDirectionZ; /*0x582b9f*/
              v217 = (float)(int)v261.dwOfs; /*0x582bad*/
              st7_0 = flt_A4D6FC; /*0x582bb1*/
              v203 = flt_A4D6FC; /*0x582bb7*/
              duration_4f = (char *)v261.dwTimeStamp; /*0x582bba*/
              v85 = sub_571F90(1); /*0x582bbd*/
              sub_5723E0( /*0x582bc7*/
                (char *)v85,
                (unsigned int)&savedregs,
                a4,
                a5,
                st7_0,
                duration_4f,
                v203,
                v217,
                2,
                0xFFFFFFFF,
                v233,
                0);
              v66 += v260; /*0x582bcc*/
              v261.dwOfs = v66; /*0x582bd0*/
            }
            if ( (*(int (__thiscall **)(_DWORD *))(*v80 + 0x380))(v80) ) /*0x582bde*/
            {
              i = (*(int (__thiscall **)(_DWORD *))(*v80 + 0x380))(v80); /*0x582bf0*/
              v86 = (*(int (__thiscall **)(_DWORD *))(*v80 + 0x380))(v80); /*0x582bfe*/
              v87 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)i + 0xD4))(i, *(_DWORD *)(v86 + 0xC)); /*0x582c10*/
              BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "Horse '%s' (%08x)", v87, v250); /*0x582c1d*/
              v234 = kTerrainLODQuadRayDirectionZ; /*0x582c32*/
              v218 = (float)(int)v261.dwOfs; /*0x582c40*/
              st7_0 = flt_A4D6FC; /*0x582c44*/
              v204 = flt_A4D6FC; /*0x582c4a*/
              duration_4 = (char *)v261.dwTimeStamp; /*0x582c4d*/
            }
            else
            {
              if ( !(*(int (__thiscall **)(_DWORD *))(*v80 + 0x18C))(v80) ) /*0x582c5f*/
                goto LABEL_96; /*0x582c5f*/
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v80[0x16] + 0x378))(v80[0x16]) ) /*0x582c70*/
              {
                v89 = (int *)v80[0x16]; /*0x582c98*/
                v90 = (*(int (__thiscall **)(int *))(*v89 + 0x378))(v89); /*0x582ca5*/
                v91 = *v89; /*0x582ca7*/
                v263 = v90; /*0x582ca9*/
                v92 = *(_DWORD *)((*(int (__thiscall **)(int *))(v91 + 0x378))(v89) + 0xC); /*0x582cb7*/
                v93 = *(int (__thiscall **)(int *))(*v89 + 0x37C); /*0x582cbc*/
                i = v92; /*0x582cc2*/
                v94 = v93(v89); /*0x582cc8*/
                v95 = (const char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v263 + 0xD4))(v263, i, v94); /*0x582cdc*/
                BSStringT_Static_Format( /*0x582ce9*/
                  (BSStringT *)&v261.dwTimeStamp,
                  "Furniture '%s' (%08x) index %d",
                  v95,
                  v235,
                  v251);
              }
              else
              {
                v88 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v80[0x16] + 0x37C))(v80[0x16]); /*0x582c81*/
                BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "Furniture 'UNKNOWN' (UNKNOWN) index %d", v88); /*0x582c8e*/
              }
              v234 = kTerrainLODQuadRayDirectionZ; /*0x582cfe*/
              v218 = (float)(int)v261.dwOfs; /*0x582d0c*/
              st7_0 = flt_A4D6FC; /*0x582d10*/
              v204 = flt_A4D6FC; /*0x582d16*/
              duration_4 = (char *)v261.dwTimeStamp; /*0x582d19*/
            }
            v96 = sub_571F90(1); /*0x582d1c*/
            sub_5723E0( /*0x582d26*/
              (char *)v96,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4,
              v204,
              v218,
              2,
              0xFFFFFFFF,
              v234,
              0);
            v66 += v260; /*0x582d2b*/
            v261.dwOfs = v66; /*0x582d2f*/
          }
LABEL_96:
          if ( sub_4D74B0(*((_DWORD **)this + 0x2F)) ) /*0x582d39*/
          {
            v97 = Double_To_SInt32(*(float *)(*((_DWORD *)this + 0x2F) + 0x28) * dbl_A30DC8); /*0x582d55*/
            BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "Orentation %d deg", v97); /*0x582d65*/
            v236 = kTerrainLODQuadRayDirectionZ; /*0x582d7b*/
            v219 = (float)(int)v261.dwOfs; /*0x582d89*/
            st7_0 = flt_A4D6FC; /*0x582d8d*/
            v205 = flt_A4D6FC; /*0x582d93*/
            duration_4g = (char *)v261.dwTimeStamp; /*0x582d96*/
            v98 = sub_571F90(1); /*0x582d99*/
            sub_5723E0( /*0x582da3*/
              (char *)v98,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4g,
              v205,
              v219,
              2,
              0xFFFFFFFF,
              v236,
              0);
            v66 += v260; /*0x582da8*/
            v99 = *((float **)this + 0x2F); /*0x582dac*/
            v261.dwOfs = v66; /*0x582db8*/
            *(_WORD *)ArgList = 0; /*0x582dbc*/
            ArgList[2] = 0xFF; /*0x582dc1*/
            v261.dwData = 0; /*0x582dc6*/
            if ( sub_4DB9D0(v99, 0, (int)v266) ) /*0x582dca*/
            {
              do /*0x582f80*/
              {
                v100 = (TESFurniture *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x2F) + 0x170))(*((_DWORD *)this + 0x2F)); /*0x582dee*/
                v101 = (unsigned __int8)ArgList[2]; /*0x582df4*/
                v263 = (int)v100; /*0x582dfc*/
                if ( sub_4AE5B0(v100, v261.dwData) ) /*0x582e00*/
                {
                  v102 = reference; /*0x582e12*/
                  v103 = reference->vtbl; /*0x582e18*/
                  i = (unsigned __int8)ArgList[2]; /*0x582e1a*/
                  v252 = v103->super.super.super.GetScale((TESObjectREFR *)v102); /*0x582e2f*/
                  sub_4AEB40((int)&a2, i, v252); /*0x582e38*/
                  v104 = sub_4D72C0(*((TESObjectREFR **)this + 0x2F), v261.dwData); /*0x582e48*/
                  v264 = "USED"; /*0x582e4f*/
                  if ( !v104 ) /*0x582e57*/
                    v264 = "UNUSED"; /*0x582e59*/
                  i = (int)&off_A64100; /*0x582e6c*/
                  if ( !sub_4AE5E0(v101) ) /*0x582e62*/
                    i = (int)"Sleep"; /*0x582e76*/
                  v253 = v264; /*0x582e86*/
                  v105 = sub_4AEBE0(v101); /*0x582e88*/
                  v106 = Double_To_SInt32(v105 * dbl_A30DC8); /*0x582e93*/
                  BSStringT_Static_Format( /*0x582ec9*/
                    (BSStringT *)&v261.dwTimeStamp,
                    "%s Marker %d Delta %0.2f,%0.2f,%0.2f (%d deg) %s",
                    (const char *)i,
                    v101,
                    *(float *)&a2.dwOfs,
                    *(float *)&a2.dwData,
                    *(float *)&a2.dwTimeStamp,
                    v106,
                    v253);
                  v237 = kTerrainLODQuadRayDirectionZ; /*0x582ede*/
                  v220 = (float)(int)v261.dwOfs; /*0x582eec*/
                  st7_0 = flt_A4D6FC; /*0x582ef0*/
                  v206 = flt_A4D6FC; /*0x582ef6*/
                  duration_4a = (char *)v261.dwTimeStamp; /*0x582ef9*/
                }
                else
                {
                  v11 = !sub_4AE5E0(v101); /*0x582f05*/
                  v107 = (const char *)&off_A64100; /*0x582f07*/
                  if ( v11 ) /*0x582f0c*/
                    v107 = "Sleep"; /*0x582f0e*/
                  BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "Disabled %s Marker %d", v107, v101); /*0x582f1f*/
                  v237 = kTerrainLODQuadRayDirectionZ; /*0x582f34*/
                  v220 = (float)(int)v261.dwOfs; /*0x582f42*/
                  st7_0 = flt_A4D6FC; /*0x582f46*/
                  v206 = flt_A4D6FC; /*0x582f4c*/
                  duration_4a = (char *)v261.dwTimeStamp; /*0x582f4f*/
                }
                v108 = sub_571F90(1); /*0x582f52*/
                sub_5723E0( /*0x582f5c*/
                  (char *)v108,
                  (unsigned int)&savedregs,
                  a4,
                  a5,
                  st7_0,
                  duration_4a,
                  v206,
                  v220,
                  2,
                  0xFFFFFFFF,
                  v237,
                  0);
                v66 += v260; /*0x582f65*/
                v109 = *((float **)this + 0x2F); /*0x582f71*/
                v261.dwOfs = v66; /*0x582f78*/
                ++v261.dwData; /*0x582f7c*/
              }
              while ( sub_4DB9D0(v109, v261.dwData, (int)v266) ); /*0x582f80*/
            }
          }
          if ( TESObjectREFR_GetEffectiveDoorLock(*((TESObjectREFR **)this + 0x2F)) ) /*0x582f93*/
          {
            i = (int)TESObjectREFR_GetEffectiveDoorLock(*((TESObjectREFR **)this + 0x2F)); /*0x582fad*/
            v110 = "Locked"; /*0x582fb8*/
            if ( !ExtraLockData_IsLocked((ExtraLockData *)i) ) /*0x582fb1*/
              v110 = "Unlocked"; /*0x582fbf*/
            v111 = *(const char ***)(4 * ExtraLockData_GetLockLevelCategory((char *)i) + 0xB03E1C);// Verified lock-status UI path: retrieves the effective ExtraLockData, checks ExtraLockData_IsLocked, calls ExtraLockData_GetLockLevelCategory, indexes LockLevelNames, and formats `Lock '<category>' Locked/Unlocked.` This independently confirms enum order 0=VeryEasy, 1=Easy, 2=Average, 3=Hard, 4=VeryHard, 5=Impossible. /*0x582fcd*/
            if ( v111 ) /*0x582fd6*/
              v112 = *v111; /*0x582fd8*/
            else
              v112 = 0; /*0x582fdc*/
            BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "Lock '%s' %s.", v112, v110); /*0x582fea*/
            v238 = kTerrainLODQuadRayDirectionZ; /*0x582fff*/
            v221 = (float)(int)v261.dwOfs; /*0x58300d*/
            st7_0 = flt_A4D6FC; /*0x583011*/
            v207 = flt_A4D6FC; /*0x583017*/
            duration_4h = (char *)v261.dwTimeStamp; /*0x58301a*/
            v113 = sub_571F90(1); /*0x58301d*/
            sub_5723E0( /*0x583027*/
              (char *)v113,
              (unsigned int)&savedregs,
              a4,
              a5,
              st7_0,
              duration_4h,
              v207,
              v221,
              2,
              0xFFFFFFFF,
              v238,
              0);
            v114 = *(_DWORD *)(i + 4); /*0x583034*/
            v66 += v260; /*0x583037*/
            v261.dwOfs = v66; /*0x58303b*/
            if ( v114 ) /*0x58303f*/
            {
              v115 = *(const char **)(v114 + 0x28); /*0x583041*/
              if ( !v115 ) /*0x583046*/
                v115 = EmptyString; /*0x583048*/
              BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, "Key '%s'.", v115); /*0x583058*/
              v239 = kTerrainLODQuadRayDirectionZ; /*0x58306d*/
              v222 = (float)(int)v261.dwOfs; /*0x58307b*/
              st7_0 = flt_A4D6FC; /*0x58307f*/
              v208 = flt_A4D6FC; /*0x583085*/
              duration_4i = (char *)v261.dwTimeStamp; /*0x583088*/
              v116 = sub_571F90(1); /*0x58308b*/
              sub_5723E0( /*0x583095*/
                (char *)v116,
                (unsigned int)&savedregs,
                a4,
                a5,
                st7_0,
                duration_4i,
                v208,
                v222,
                2,
                0xFFFFFFFF,
                v239,
                0);
              v66 += v260; /*0x58309a*/
              v261.dwOfs = v66; /*0x58309c*/
            }
          }
          if ( !TESObjectREFR_GetTeleportData(*((TESObjectREFR **)this + 0x2F)) ) /*0x5830ad*/
            goto LABEL_130; /*0x5830ad*/
          TeleportData = TESObjectREFR_GetTeleportData(*((TESObjectREFR **)this + 0x2F)); /*0x5830be*/
          i = (int)sub_42B460(&TeleportData->linkedDoor); /*0x5830c9*/
          LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x5830cd*/
          v119 = "Unknown"; /*0x5830d7*/
          v261.dwData = (DWORD)LinkedDoor; /*0x5830dc*/
          v263 = (int)"Unknown"; /*0x5830e0*/
          if ( i ) /*0x5830e4*/
          {
            v120 = *(CHAR **)(i + 0x1C); /*0x5830ea*/
            if ( !v120 ) /*0x5830ef*/
              v120 = EmptyString; /*0x5830f1*/
            v119 = v120; /*0x5830f6*/
          }
          else
          {
            if ( !v261.dwData ) /*0x5830ff*/
            {
LABEL_129:
              BSStringT_Static_Format( /*0x583137*/
                (BSStringT *)&v261.dwTimeStamp,
                "Teleport Cell '%s' Door '%s'.",
                v119,
                (const char *)v263);
              v240 = kTerrainLODQuadRayDirectionZ; /*0x58315c*/
              v223 = (float)(int)v261.dwOfs; /*0x58316a*/
              st7_0 = flt_A4D6FC; /*0x58316e*/
              v209 = flt_A4D6FC; /*0x583174*/
              duration_4j = (char *)v261.dwTimeStamp; /*0x583177*/
              v121 = sub_571F90(1); /*0x58317a*/
              sub_5723E0( /*0x583184*/
                (char *)v121,
                (unsigned int)&savedregs,
                a4,
                a5,
                st7_0,
                duration_4j,
                v209,
                v223,
                2,
                0xFFFFFFFF,
                v240,
                0);
              v66 += v260; /*0x583189*/
              v261.dwOfs = v66; /*0x58318d*/
LABEL_130:
              v122 = sub_4D8250(*((_BYTE **)this + 0x2F)); /*0x583191*/
              if ( v122 ) /*0x58319e*/
              {
                v123 = dword_A6924C; /*0x5831ac*/
                v279[0] = dword_A69248; /*0x5831b2*/
                v124 = dword_A69250; /*0x5831b9*/
                v279[1] = v123; /*0x5831bf*/
                LOWORD(v123) = word_A69254; /*0x5831c6*/
                v279[2] = v124; /*0x5831cd*/
                LOBYTE(v124) = byte_A69256; /*0x5831d4*/
                v280 = v123; /*0x5831da*/
                v281 = v124; /*0x5831e2*/
                if ( (v122 & 1) != 0 ) /*0x5831e9*/
                {
                  v125 = &v278; /*0x5831f2*/
                  while ( *++v125 ) /*0x5831fd*/
                    ; /*0x5831f5*/
                  *(_DWORD *)v125 = dword_A6923C; /*0x583205*/
                  *((_DWORD *)v125 + 1) = dword_A69240; /*0x58320d*/
                  *((_DWORD *)v125 + 2) = dword_A69244; /*0x583216*/
                }
                if ( (v122 & 2) != 0 ) /*0x58321b*/
                {
                  v127 = &v278; /*0x583224*/
                  while ( *++v127 ) /*0x58322f*/
                    ; /*0x583227*/
                  *(_DWORD *)v127 = dword_A69230; /*0x583237*/
                  *((_DWORD *)v127 + 1) = dword_A69234; /*0x58323f*/
                  *((_WORD *)v127 + 4) = word_A69238; /*0x583249*/
                  v127[0xA] = byte_A6923A; /*0x583253*/
                }
                if ( (v122 & 4) != 0 ) /*0x583258*/
                {
                  v129 = &v278; /*0x583261*/
                  while ( *++v129 ) /*0x58326c*/
                    ; /*0x583264*/
                  *(_DWORD *)v129 = dword_A69224; /*0x583274*/
                  *((_DWORD *)v129 + 1) = dword_A69228; /*0x58327c*/
                  *((_DWORD *)v129 + 2) = dword_A6922C; /*0x583285*/
                }
                if ( (v122 & 8) != 0 ) /*0x58328a*/
                {
                  v131 = &v278; /*0x583293*/
                  while ( *++v131 ) /*0x58329e*/
                    ; /*0x583296*/
                  v133 = dword_A69214; /*0x5832a6*/
                  *(_DWORD *)v131 = dword_A69210; /*0x5832ac*/
                  v134 = dword_A69218; /*0x5832ae*/
                  *((_DWORD *)v131 + 1) = v133; /*0x5832b4*/
                  v135 = dword_A6921C; /*0x5832b7*/
                  *((_DWORD *)v131 + 2) = v134; /*0x5832bd*/
                  LOWORD(v134) = word_A69220; /*0x5832c0*/
                  *((_DWORD *)v131 + 3) = v135; /*0x5832c7*/
                  *((_WORD *)v131 + 8) = v134; /*0x5832ca*/
                }
                BSStringT_Static_Format((BSStringT *)&v261.dwTimeStamp, (char *)v279); /*0x5832db*/
                v241 = kTerrainLODQuadRayDirectionZ; /*0x5832f0*/
                v224 = (float)(int)v261.dwOfs; /*0x5832fe*/
                st7_0 = flt_A4D6FC; /*0x583302*/
                v210 = flt_A4D6FC; /*0x583308*/
                duration_4k = (char *)v261.dwTimeStamp; /*0x58330b*/
                v136 = sub_571F90(1); /*0x58330e*/
                sub_5723E0( /*0x583318*/
                  (char *)v136,
                  (unsigned int)&savedregs,
                  a4,
                  a5,
                  st7_0,
                  duration_4k,
                  v210,
                  v224,
                  2,
                  0xFFFFFFFF,
                  v241,
                  0);
                v66 += v260; /*0x58331d*/
                v261.dwOfs = v66; /*0x583321*/
              }
              goto LABEL_148; /*0x583321*/
            }
            if ( ExtraDataList_GetPersistentCell((ExtraDataList *)(v261.dwData + 0x44)) ) /*0x583108*/
              v119 = "Persistent"; /*0x583111*/
          }
          if ( v261.dwData ) /*0x58311b*/
          {
            if ( TESObjectREFR_GetName((TESObjectREFR *)v261.dwData) ) /*0x583121*/
              v263 = (int)TESObjectREFR_GetName((TESObjectREFR *)v261.dwData); /*0x583133*/
          }
          goto LABEL_129; /*0x583133*/
        }
      }
    }
LABEL_154:
    if ( v264 ) /*0x583400*/
    {
      v140 = *((_DWORD **)this + 0x27); /*0x583402*/
      if ( v140 ) /*0x58340a*/
      {
        v141 = (void (__thiscall **)(_DWORD, int))(*v140 + 0x20); /*0x58341a*/
        st7_0 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFA8); /*0x58341d*/
        v142 = Double_To_SInt32(st7_0); /*0x583422*/
        (*v141)(*((_DWORD *)this + 0x27), v142); /*0x583430*/
      }
      v143 = *((_DWORD **)this + 0x29); /*0x583434*/
      if ( v143 ) /*0x58343c*/
      {
        v144 = *((_DWORD **)this + 0x26); /*0x58343e*/
        if ( v144 ) /*0x583446*/
        {
          v227 = *((_DWORD *)this + 0x26); /*0x58344a*/
          v145 = (void (__thiscall **)(_DWORD, int, int))(*v143 + 0x24); /*0x583450*/
          st7_0 = Tile_GetFloat(v144, 0xFA8); /*0x583453*/
          v146 = Double_To_SInt32(st7_0); /*0x583458*/
          (*v145)(*((_DWORD *)this + 0x29), v146, v227); /*0x583466*/
        }
      }
    }
    else
    {
      st7_0 = 0.0; /*0x58346a*/
      if ( 0.0 != *((float *)this + 0xE) ) /*0x583474*/
      {
        v147 = *((_DWORD **)this + 0x27); /*0x583476*/
        if ( v147 ) /*0x58347e*/
        {
          v148 = (void (__thiscall **)(_DWORD, int))(*v147 + 0x28); /*0x58348e*/
          st7_0 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x26), 0xFA8); /*0x583491*/
          v149 = Double_To_SInt32(st7_0); /*0x583496*/
          (*v148)(*((_DWORD *)this + 0x27), v149); /*0x5834a4*/
        }
      }
    }
    v150 = MEMORY[0xB33398]; /*0x5834a8*/
    v257.dwOfs = 0; /*0x5834b1*/
    for ( j = OSInputGlobals::GetBufferedKeyStateChange(v150->input, &v257); /*0x5834c1*/
          j == 2;
          j = OSInputGlobals::GetBufferedKeyStateChange(MEMORY[0xB33398]->input, &v257) )
    {
      duration_4l = v257.dwOfs; /*0x5834cd*/
      *((_DWORD *)this + 0x48) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5834ce*/
      *((_DWORD *)this + 0x49) = 0; /*0x5834d7*/
      *((_DWORD *)this + 0x47) = 0; /*0x5834dd*/
      sub_57F7A0((int)this, j, duration_4l); /*0x5834e3*/
    }
    v152 = sub_57F7A0((int)this, j, v257.dwOfs); /*0x58350c*/
    if ( !v152 ) /*0x583510*/
    {
      st7_0 = 1.0; /*0x583512*/
      v152 = sub_57DC60(this, 1.0); /*0x58351f*/
    }
    GlobalScriptStateObj = GetGlobalScriptStateObj__(0); /*0x583523*/
    a3 = GlobalScriptStateObj; /*0x58352d*/
    if ( v152 )
    {
      if ( GlobalScriptStateObj )
      {
        while ( 1 ) /*0x583545*/
        {
          if ( v257.dwOfs == 0x29 ) /*0x583545*/
          {
            v154 = 0; /*0x583547*/
          }
          else
          {
            v154 = sub_586000(a3, a5, st7_0, a4, st4_0, v152); /*0x583555*/
            if ( v154 ) /*0x583559*/
            {
              for ( k = OSInputGlobals::GetBufferedKeyStateChange(MEMORY[0xB33398]->input, &v257); /*0x583571*/
                    k == 2;
                    k = OSInputGlobals::GetBufferedKeyStateChange(MEMORY[0xB33398]->input, &v257) )
              {
                duration_4m = v257.dwOfs; /*0x58357f*/
                *((_DWORD *)this + 0x48) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x583580*/
                *((_DWORD *)this + 0x49) = 0; /*0x583589*/
                *((_DWORD *)this + 0x47) = 0; /*0x58358f*/
                sub_57F7A0((int)this, k, duration_4m); /*0x583595*/
              }
              v152 = sub_57F7A0((int)this, k, v257.dwOfs); /*0x5835be*/
            }
          }
          if ( !v152 ) /*0x5835c2*/
            break; /*0x5835c2*/
          if ( !v154 ) /*0x5835ca*/
            goto LABEL_177; /*0x5835ca*/
        }
      }
      else
      {
LABEL_177:
        TopVisibleMenuID = InterfaceManager::GetTopVisibleMenuID(this); /*0x5835d0*/
        OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(TopVisibleMenuID); /*0x5835d8*/
        v158 = Tile_GetParentMenu(OpenMenuTile); /*0x5835e2*/
        if ( !v158 || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v158 + 0x30))(v158, v152) )
        {
          switch ( v152 )
          {
            case 0x80000001:
              v159 = 4; /*0x583621*/
              goto LABEL_185; /*0x583626*/
            case 0x80000002:
              v159 = 3; /*0x583628*/
              goto LABEL_188; /*0x58362d*/
            case 0x80000003:
              v159 = 1; /*0x583613*/
              goto LABEL_191; /*0x583618*/
            case 0x80000004:
              v159 = 2; /*0x58361a*/
              goto LABEL_191; /*0x58361f*/
            case 0x80000008:
              v159 = *(this + 0xB9) != 0 ? 0 : 0xFFFFFFFE;
              switch ( *(this + 0xB9) != 0 ? 2 : 0 )
              {
                case 6:
LABEL_185:
                  if ( (*((_DWORD *)this + 0x46) & 4) != 0 ) /*0x583650*/
                    v159 = 0xD; /*0x583652*/
                  break;
                case 5:
LABEL_188:
                  if ( (*((_DWORD *)this + 0x46) & 4) != 0 ) /*0x58366a*/
                    v159 = 0xE; /*0x58366c*/
                  break;
                case 2:
                  goto LABEL_192; /*0x583675*/
              }
LABEL_191:
              InterfaceManager::HandleNavigationKeypress((float *)this, a4, a5, v159); /*0x583677*/
              v160 = (InputGlobal *)v261.dwOfs; /*0x58367f*/
              InputGlobals::FlushKeyboardBuffer((InputGlobal *)v261.dwOfs); /*0x583685*/
              break; /*0x58368a*/
            default:
              goto LABEL_192;
          }
          goto LABEL_193; /*0x58368a*/
        }
      }
    }
LABEL_192:
    v160 = (InputGlobal *)v261.dwOfs; /*0x58368c*/
LABEL_193:
    if ( InputGlobals::QueryControlState(v160, 0x1A, 1) ) /*0x583696*/
    {
      if ( (unsigned __int16)word_B1397A <= 0x2Bu || !*(_DWORD *)(dword_B13974 + 0xAC) ) /*0x5836b2*/
      {
        st7_0 = 1.0; /*0x5836bb*/
        GameUI_QueueMessage(stru_B387A0.value, 0, 1u, 1.0); /*0x5836cc*/
      }
    }
    if ( InputGlobals::QueryControlState(v160, 0x1B, 1) ) /*0x5836da*/
    {
      if ( (unsigned __int16)word_B1397A <= 0x2Bu || !*(_DWORD *)(dword_B13974 + 0xAC) ) /*0x5836f2*/
      {
        st7_0 = 1.0; /*0x5836fb*/
        GameUI_QueueMessage(stru_B387A8.value, 0, 1u, 1.0); /*0x58370b*/
      }
    }
    v282 = 0xFFFFFFFF; /*0x583718*/
    FormHeapFree(v257.dwTimeStamp); /*0x583723*/
    input = (InputGlobal *)v261.dwOfs; /*0x583728*/
  }
  if ( InputGlobals::QueryControlState(input, 0x1E, 1) ) /*0x583735*/
  {
    if ( GetOpenedMenuCode() != 0x414 ) /*0x583748*/
    {
      v161 = (int *)GetGlobalScriptStateObj__(1); /*0x583756*/
      InputGlobals::FlushKeyboardBuffer(input); /*0x583758*/
      if ( sub_5859C0(v161, (char)&savedregs, a4, a5, st7_0) ) /*0x58375f*/
        sub_57D640((int)this, 3); /*0x58376c*/
      else
        sub_57CFE0((int)this, a4, a5, st7_0, 3, 0); /*0x583777*/
    }
  }
  if ( !InputGlobals::QueryControlState(input, 0x1D, 1) /*0x5837be*/
    || (Menu_GetB3A708(1), sub_5878B0(0x414))
    || (Menu_GetB3A708(1), sub_5878B0(0x3EF)) )
  {
    if ( !InputGlobals::QueryControlState(input, 0x1D, 1) ) /*0x583844*/
      goto LABEL_228; /*0x583844*/
    Menu_GetB3A708(1); /*0x583858*/
    if ( !sub_5878B0(0x40F) ) /*0x583862*/
    {
      Menu_GetB3A708(1); /*0x583872*/
      if ( !sub_5878B0(0x40E) ) /*0x58387c*/
        goto LABEL_228; /*0x583883*/
    }
  }
  else
  {
    Menu_GetB3A708(1); /*0x5837ce*/
    if ( !sub_5878B0(0x40F) ) /*0x5837d8*/
    {
      Menu_GetB3A708(1); /*0x5837ec*/
      if ( !sub_5878B0(0x40E) ) /*0x5837f6*/
      {
        Menu_GetB3A708(1); /*0x58380a*/
        if ( sub_5878B0(0x3F5) ) /*0x583814*/
        {
          sub_5BDCD0((char)&savedregs, a4, a5, st7_0, a7, a8, a9, a6, st4_0); /*0x58381d*/
        }
        else if ( byte_B143AE ) /*0x583827*/
        {
          sub_57B560((char)&savedregs, a4, a5); /*0x583834*/
        }
        goto LABEL_228; /*0x583822*/
      }
    }
  }
  Menu_GetB3A708(1); /*0x583890*/
  if ( sub_5878B0(0x40F) ) /*0x58389a*/
  {
    v162 = (_DWORD *)Menu_GetOpenMenuTile(0x40F); /*0x5838a8*/
    v163 = Tile_GetParentMenu(v162); /*0x5838b2*/
    v164 = (_DWORD *)v163; /*0x5838b7*/
    if ( v163 && (*(int (__thiscall **)(int))(*(_DWORD *)v163 + 0x34))(v163) == 0x40F ) /*0x5838cb*/
LABEL_227:
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v164 + 0xC))(v164, 1, 0); /*0x58391e*/
  }
  else
  {
    Menu_GetB3A708(1); /*0x5838d6*/
    if ( sub_5878B0(0x40E) ) /*0x5838e0*/
    {
      v165 = (_DWORD *)Menu_GetOpenMenuTile(0x40E); /*0x5838ee*/
      v166 = Tile_GetParentMenu(v165); /*0x5838f8*/
      v164 = (_DWORD *)v166; /*0x5838fd*/
      if ( v166 ) /*0x583901*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v166 + 0x34))(v166) == 0x40E && sub_57D3F0(v164) ) /*0x583915*/
          goto LABEL_227; /*0x58391c*/
      }
    }
  }
LABEL_228:
  v167 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x58392b*/
  v168 = (_DWORD *)Menu_GetOpenMenuTile(0x3FE); /*0x583946*/
  if ( !v167 || Tile_GetFloat(v167, 0xFA1) == fConstant_1 ) /*0x583961*/
  {
    if ( v168 ) /*0x583965*/
      Tile_GetFloat(v168, 0xFA1); /*0x58396e*/
  }
  sub_572170(); /*0x583975*/
  v169 = *(_DWORD **)(*((_DWORD *)this + 0x1A) + 0x34); /*0x58397d*/
  while ( v169 ) /*0x583982*/
  {
    v170 = (_DWORD *)v169[2]; /*0x583984*/
    v169 = (_DWORD *)*v169; /*0x58398c*/
    if ( v170 ) /*0x58398e*/
    {
      v171 = Tile_GetParentMenu(v170); /*0x583990*/
      if ( v171 ) /*0x583997*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v171 + 0x2C))(v171); /*0x5839a0*/
    }
  }
  v172 = (InputGlobal *)v261.dwOfs; /*0x5839a6*/
  v173 = 0; /*0x5839ac*/
  v257.dwData = 0; /*0x5839b2*/
  LOBYTE(v174) = InputGlobals::QueryKeyboardState((InputGlobal *)v261.dwOfs, 0x3B, 1); /*0x5839b6*/
  if ( v174 ) /*0x5839bd*/
  {
    v173 = 0x3EB; /*0x5839bf*/
  }
  else
  {
    LOBYTE(v175) = InputGlobals::QueryKeyboardState(v172, 0x3C, 1); /*0x5839cc*/
    if ( v175 ) /*0x5839d3*/
    {
      v173 = 0x3EA; /*0x5839d5*/
    }
    else
    {
      LOBYTE(v176) = InputGlobals::QueryKeyboardState(v172, 0x3D, 1); /*0x5839e2*/
      if ( v176 ) /*0x5839e9*/
      {
        v173 = 0x3FE; /*0x5839eb*/
      }
      else
      {
        LOBYTE(v177) = InputGlobals::QueryKeyboardState(v172, 0x3E, 1); /*0x5839f8*/
        if ( !v177 ) /*0x5839ff*/
          goto LABEL_246; /*0x5839ff*/
        v173 = 0x3FF; /*0x583a01*/
      }
    }
  }
  v257.dwData = v173; /*0x583a06*/
LABEL_246:
  v178 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x1A), 0x1771); /*0x583a0a*/
  value_4 = Double_To_SInt32(v178); /*0x583a1e*/
  if ( v173 ) /*0x583a22*/
  {
    if ( (InterfaceManager::GetTopVisibleMenuID(this) == 1 || *(this + 8) == 1) /*0x583a55*/
      && v173 != value_4
      && !reference->unk5C0
      && !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) )
    {
      switch ( v173 ) /*0x583a61*/
      {
        case 0x3EBu: /*0x583a61*/
          sub_5A5E80(a4, a5, (char)&savedregs, v178); /*0x583a63*/
          break;
        case 0x3EAu: /*0x583a61*/
          sub_5A5EF0(a5, a4, (char)&savedregs, v178); /*0x583a72*/
          break;
        case 0x3FEu: /*0x583a61*/
          sub_5A5F60(a4, a5, (char)&savedregs, v178); /*0x583a81*/
          break;
        default:
          sub_5A5FD0(a4, a5, (char)&savedregs, v178); /*0x583a90*/
          break;
      }
    }
  }
  if ( (InputGlobals::QueryControlState(v172, 0xF, 1) || v173) /*0x583ada*/
    && !reference->unk5C0
    && !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0)
    && sub_57D240(this, 0)
    && *(this + 8) == 1
    && !*((_DWORD *)this + 0x38) )
  {
    if ( v173 ) /*0x583ae5*/
    {
      v178 = (double)a3; /*0x583ae7*/
      v184 = v178; /*0x583aef*/
      Tile_SetFloat(*((Tile **)this + 0x1A), 0x1771u, v184); /*0x583af7*/
    }
    Actor_CleanupTransferredArrowProjectilesForEquippedAmmo((Actor *)reference); /*0x583b02*/
    sub_57D640((int)this, 1); /*0x583b0b*/
    sub_57CAC0((char)&savedregs, a5, v178, a4); /*0x583b10*/
  }
  else if ( (InputGlobals::QueryControlState(v172, 0xF, 1) || v173 && v173 == v254) /*0x583b66*/
         && !reference->unk5C0
         && sub_57D240(this, 0)
         && *(this + 8) == 2
         && (int)sub_57CFE0((int)this, a4, a5, v178, 1, 0) >= 0 )
  {
    sound = (int *)MEMORY[0xB33398]->sound; /*0x583b6e*/
    if ( sound ) /*0x583b73*/
    {
      v180 = PlaySound___(sound, "UIInventoryClose", 0x121, 1); /*0x583b81*/
      v181 = v180; /*0x583b86*/
      if ( v180 ) /*0x583b8a*/
      {
        sub_6B7190(v180, 0); /*0x583b90*/
        sub_6B73E0(v181); /*0x583b97*/
        FormHeapFree((unsigned int)v181); /*0x583b9d*/
      }
    }
    sub_57CC00((char)&savedregs, a4, a5, v178); /*0x583ba5*/
  }
  if ( *(this + 8) != 1 ) /*0x583bae*/
  {
    if ( reference ) /*0x583bb0*/
    {
      v182 = MEMORY[0xB3A6E0]->unk054[3]; /*0x583bbf*/
      if ( v182 ) /*0x583bc4*/
      {
        if ( (v182->members.super.m_flags & 1) == 0 ) /*0x583bca*/
          Actor_UpdateAnimationAndFirstPerson(reference); /*0x583bcc*/
      }
    }
  }
  result = *((int (**)(void))this + 0x2D); /*0x583bd1*/
  if ( result ) /*0x583bd9*/
  {
    *((_DWORD *)this + 0x2D) = 0; /*0x583bdb*/
    return (int (*)(void))result(); /*0x583be5*/
  }
  return result; /*0x583be7*/
}
