void __usercall InterfaceMgr_ShowDebugText(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double GameHour@<st0>)
{
  TESObjectREFR *v5; // eax
  int v6; // eax
  float *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
  signed int v12; // ebx
  int v13; // ecx
  float *v15; // eax
  TESObjectREFR *v16; // esi
  int v17; // eax
  char *v18; // ecx
  int v19; // edx
  int v20; // eax
  char *v21; // eax
  TESObjectCELL *v22; // edi
  const char *v23; // eax
  float v24; // ecx
  int v25; // eax
  const char *v26; // eax
  TESObjectREFRVtbl *v27; // ecx
  char *v28; // edi
  void *v29; // eax
  void *v30; // esi
  void *v31; // eax
  const char *v32; // eax
  const char *v33; // eax
  float *v34; // eax
  float v35; // ecx
  int v36; // edx
  float *v37; // eax
  float v38; // ecx
  int v39; // edx
  void *v40; // esi
  float *v41; // eax
  float v42; // ecx
  int v43; // edx
  Actor *v44; // esi
  UInt32 v46; // eax
  char *Unk030; // esi
  int v48; // eax
  double v49; // st7
  double v50; // st7
  unsigned int GameDayOfWeek; // eax
  double GameDay; // st7
  char v53; // al
  signed int GameMonth; // eax
  char v55; // al
  int v56; // esi
  char v57; // al
  int v58; // edi
  char v59; // al
  char v60; // al
  int v61; // eax
  float *v62; // eax
  unsigned int v63; // ecx
  unsigned int v64; // edx
  float v65; // eax
  TESObjectCELL *currentInteriorCell; // edi
  TESWorldSpace *CurrentWorldspace; // esi
  const char *v68; // eax
  int XCoordinate; // eax
  const char *v70; // eax
  const char *m_data; // edi
  bool v72; // zf
  char *v73; // eax
  TESObjectREFR *v74; // esi
  float *v75; // eax
  float v76; // ecx
  unsigned int v77; // edx
  float v78; // eax
  char *Name; // eax
  NiNode *v80; // eax
  NiObject *v81; // eax
  NiObject *v82; // eax
  UInt32 m_uiRefCount; // edx
  NiAVObjectVtbl *ChildNiAvNodeVtbl; // eax
  NiObject *(__thiscall *Unk_02)(NiObject *); // edx
  TESObjectCELL *ParentCell; // edi
  TESObjectCELL *v87; // eax
  TESObjectCELL *v88; // eax
  int v89; // eax
  const char *v90; // eax
  TESForm::FormFlags flags; // eax
  int ProcessLevel; // eax
  TESPackage *v93; // eax
  TESPackage *v94; // eax
  char *v95; // eax
  char *v96; // eax
  eProcedure v97; // esi
  TESPackage *v98; // eax
  TESForm *ExtraPackage; // esi
  const char *v100; // eax
  TESFormVtbl *vtbl; // esi
  LowProcess *process; // esi
  unsigned int *v103; // ecx
  const char *(__thiscall *Unk_134)(BaseProcess *__hidden); // eax
  TESObjectREFR *v105; // eax
  char *v106; // eax
  const char *v107; // eax
  LowProcess *v108; // edi
  TESChildCELL *v109; // ecx
  int v110; // eax
  char *v111; // eax
  __int16 v112; // dx
  char *v113; // eax
  char *v115; // eax
  char *v117; // eax
  char *v119; // eax
  char *v121; // eax
  char *v123; // eax
  char *v125; // eax
  char *v127; // eax
  char *v129; // eax
  char *v131; // eax
  char *v133; // eax
  char *v135; // eax
  char *v137; // eax
  char *v139; // eax
  char *v141; // eax
  TESObjectREFR *v143; // eax
  char *v144; // esi
  unsigned int v145; // eax
  char *v146; // edi
  char *v148; // eax
  Creature *v150; // eax
  __int16 v151; // dx
  char *v152; // eax
  char *v154; // eax
  char *v156; // eax
  char *v158; // eax
  char *v160; // eax
  char *v162; // eax
  char *v164; // eax
  char *v166; // eax
  char *v168; // eax
  char *v170; // eax
  char *v172; // eax
  char *v174; // eax
  char *v176; // eax
  char *v178; // eax
  MobileObject *v180; // esi
  char *v181; // eax
  const char *v183; // esi
  unsigned int v184; // eax
  char *v185; // edi
  bhkCharacterProxy *CharProxy; // edi
  char *v188; // ecx
  const char *v190; // esi
  unsigned int v191; // eax
  char *v192; // edi
  LowProcess *v194; // eax
  UInt32 unk03C; // ecx
  PlayerCharacter *v196; // eax
  void **v198; // eax
  int v199; // esi
  unsigned __int16 AnimGroupFromField8Value; // ax
  unsigned int v201; // esi
  int MovementPrefix; // eax
  int v203; // esi
  unsigned __int8 v204; // al
  bool v205; // cc
  int (*GetMovementFlags)(void); // eax
  double v207; // st7
  __int16 v208; // ax
  TESObjectREFR *v209; // ecx
  __int16 v210; // ax
  __int16 v211; // ax
  int i; // esi
  int v213; // eax
  int v214; // ecx
  unsigned __int8 v215; // al
  char *v216; // ecx
  bool v218; // pf
  char *v219; // eax
  int v220; // esi
  Actor *v221; // eax
  int v222; // eax
  int v223; // eax
  int v224; // eax
  int v225; // eax
  NiObject *v226; // edi
  int v227; // eax
  NiObject *v228; // eax
  unsigned int v229; // eax
  NiObjectVtbl *vftable; // ecx
  int v232; // ecx
  char *v234; // edx
  char *v235; // eax
  const char *v236; // edi
  unsigned int m_uiRefCount_high; // ecx
  BSShaderAccumulator *inited; // eax
  const char *v239; // edi
  BSShaderAccumulator *v240; // esi
  int v241; // eax
  unsigned __int16 v242; // si
  _DWORD *ShadowSceneNode; // eax
  unsigned __int16 v244; // ax
  NiObject *v245; // edi
  int v246; // esi
  signed int v247; // ecx
  signed int v248; // eax
  int v249; // edx
  int v250; // edx
  int k; // eax
  int v252; // eax
  int v253; // ecx
  _DWORD *v254; // esi
  int v255; // edi
  int v256; // edx
  const char *v257; // eax
  int v258; // eax
  int v259; // eax
  int v260; // eax
  float v261; // esi
  _DWORD *v262; // ecx
  float v263; // esi
  int v264; // esi
  char *v265; // eax
  BSStringT *v266; // eax
  unsigned int *v267; // esi
  unsigned int v268; // eax
  unsigned int v269; // edi
  unsigned int v270; // esi
  int v271; // eax
  int v272; // esi
  TESObjectCELL **exteriorCellBufferArray; // ecx
  int v274; // eax
  int v275; // esi
  TESObjectCELL **interiorCellBufferArray; // ecx
  Actor *ListHead; // eax
  Actor *m; // esi
  ActorVtbl *v279; // edi
  unsigned __int8 (__thiscall *v280)(ActorVtbl *, int); // edx
  Actor *v281; // edi
  int v282; // esi
  Actor *n; // eax
  int v284; // esi
  signed int *j; // edi
  double v286; // [esp+0h] [ebp-56Ch]
  size_t v287; // [esp+8h] [ebp-564h]
  size_t v288; // [esp+8h] [ebp-564h]
  size_t v289; // [esp+8h] [ebp-564h]
  size_t v290; // [esp+8h] [ebp-564h]
  double v291; // [esp+8h] [ebp-564h]
  double v292; // [esp+8h] [ebp-564h]
  float v293; // [esp+Ch] [ebp-560h]
  double v294; // [esp+10h] [ebp-55Ch]
  double v295; // [esp+10h] [ebp-55Ch]
  double v296; // [esp+10h] [ebp-55Ch]
  double v297; // [esp+10h] [ebp-55Ch]
  size_t v298; // [esp+10h] [ebp-55Ch]
  double v299; // [esp+10h] [ebp-55Ch]
  double v300; // [esp+10h] [ebp-55Ch]
  double v301; // [esp+10h] [ebp-55Ch]
  double v302; // [esp+10h] [ebp-55Ch]
  double v303; // [esp+10h] [ebp-55Ch]
  double v304; // [esp+10h] [ebp-55Ch]
  double v305; // [esp+10h] [ebp-55Ch]
  double v306; // [esp+10h] [ebp-55Ch]
  size_t var55C_4; // [esp+14h] [ebp-558h]
  float v308; // [esp+14h] [ebp-558h]
  float Formata; // [esp+18h] [ebp-554h]
  float Formatb; // [esp+18h] [ebp-554h]
  float Formatc; // [esp+18h] [ebp-554h]
  float Formatd; // [esp+18h] [ebp-554h]
  size_t Formate; // [esp+18h] [ebp-554h]
  float Formatf; // [esp+18h] [ebp-554h]
  double Formatg; // [esp+18h] [ebp-554h]
  float Formath; // [esp+18h] [ebp-554h]
  float Formati; // [esp+18h] [ebp-554h]
  float Formatj; // [esp+18h] [ebp-554h]
  float Formatk; // [esp+18h] [ebp-554h]
  float Formatl; // [esp+18h] [ebp-554h]
  float Formatm; // [esp+18h] [ebp-554h]
  double Formatn; // [esp+18h] [ebp-554h]
  float Formato; // [esp+18h] [ebp-554h]
  double Formatp; // [esp+18h] [ebp-554h]
  float Formatq; // [esp+18h] [ebp-554h]
  float Formatr; // [esp+18h] [ebp-554h]
  double Formats; // [esp+18h] [ebp-554h]
  float Formatt; // [esp+18h] [ebp-554h]
  float Formatu; // [esp+18h] [ebp-554h]
  double Formatv; // [esp+18h] [ebp-554h]
  float Formatw; // [esp+18h] [ebp-554h]
  float Formatx; // [esp+18h] [ebp-554h]
  float Formaty; // [esp+18h] [ebp-554h]
  float Formatz; // [esp+18h] [ebp-554h]
  float Formatba; // [esp+18h] [ebp-554h]
  size_t Formatbb; // [esp+18h] [ebp-554h]
  float Formatbc; // [esp+18h] [ebp-554h]
  size_t Formatbd; // [esp+18h] [ebp-554h]
  float Formatbe; // [esp+18h] [ebp-554h]
  size_t Formatbf; // [esp+18h] [ebp-554h]
  float Formatbg; // [esp+18h] [ebp-554h]
  float Formatbh; // [esp+18h] [ebp-554h]
  float Formatbi; // [esp+18h] [ebp-554h]
  float Formatbj; // [esp+18h] [ebp-554h]
  float Formatbk; // [esp+18h] [ebp-554h]
  float Formatbl; // [esp+18h] [ebp-554h]
  float Formatbm; // [esp+18h] [ebp-554h]
  float Formatbn; // [esp+18h] [ebp-554h]
  float Formatbo; // [esp+18h] [ebp-554h]
  float Formatbp; // [esp+18h] [ebp-554h]
  double Formatbq; // [esp+18h] [ebp-554h]
  float Formatbr; // [esp+18h] [ebp-554h]
  double Formatbs; // [esp+18h] [ebp-554h]
  float Formatbt; // [esp+18h] [ebp-554h]
  double Formatbu; // [esp+18h] [ebp-554h]
  float Formatbv; // [esp+18h] [ebp-554h]
  float Formatbw; // [esp+18h] [ebp-554h]
  float Formatbx; // [esp+18h] [ebp-554h]
  float Formatby; // [esp+18h] [ebp-554h]
  float Formatbz; // [esp+18h] [ebp-554h]
  float Formatca; // [esp+18h] [ebp-554h]
  float Formatcb; // [esp+18h] [ebp-554h]
  float Formatcc; // [esp+18h] [ebp-554h]
  float Formatcd; // [esp+18h] [ebp-554h]
  float Formatce; // [esp+18h] [ebp-554h]
  float Formatcf; // [esp+18h] [ebp-554h]
  float Format; // [esp+18h] [ebp-554h]
  float Formatcg; // [esp+18h] [ebp-554h]
  float Formatch; // [esp+18h] [ebp-554h]
  float Formatci; // [esp+18h] [ebp-554h]
  float Formatcj; // [esp+18h] [ebp-554h]
  const char *Formatck; // [esp+18h] [ebp-554h]
  const char *Formatcl; // [esp+18h] [ebp-554h]
  float Formatcm; // [esp+18h] [ebp-554h]
  double Formatcn; // [esp+18h] [ebp-554h]
  double Formatco; // [esp+18h] [ebp-554h]
  float Formatcp; // [esp+18h] [ebp-554h]
  float Formatcq; // [esp+18h] [ebp-554h]
  float Formatcr; // [esp+18h] [ebp-554h]
  float Formatcs; // [esp+18h] [ebp-554h]
  float Formatct; // [esp+18h] [ebp-554h]
  float Formatcu; // [esp+18h] [ebp-554h]
  float Formatcv; // [esp+18h] [ebp-554h]
  double Formatcw; // [esp+18h] [ebp-554h]
  float Formatcx; // [esp+18h] [ebp-554h]
  float Formatcy; // [esp+18h] [ebp-554h]
  float Formatcz; // [esp+18h] [ebp-554h]
  float Formatda; // [esp+18h] [ebp-554h]
  float Formatdb; // [esp+18h] [ebp-554h]
  float Formatdc; // [esp+18h] [ebp-554h]
  float Formatdd; // [esp+18h] [ebp-554h]
  float Formatde; // [esp+18h] [ebp-554h]
  float Formatdf; // [esp+18h] [ebp-554h]
  float Formatdg; // [esp+18h] [ebp-554h]
  float Formatdh; // [esp+18h] [ebp-554h]
  float Formatdi; // [esp+18h] [ebp-554h]
  float Formatdj; // [esp+18h] [ebp-554h]
  float Formatdk; // [esp+18h] [ebp-554h]
  float Formatdl; // [esp+18h] [ebp-554h]
  float Formatdm; // [esp+18h] [ebp-554h]
  float Formatdn; // [esp+18h] [ebp-554h]
  float Formatdo; // [esp+18h] [ebp-554h]
  float Formatdp; // [esp+18h] [ebp-554h]
  float Formatdq; // [esp+18h] [ebp-554h]
  float Formatdr; // [esp+18h] [ebp-554h]
  float Formatds; // [esp+18h] [ebp-554h]
  float Formatdt; // [esp+18h] [ebp-554h]
  float Formatdu; // [esp+18h] [ebp-554h]
  float Formatdv; // [esp+18h] [ebp-554h]
  float Formatdw; // [esp+18h] [ebp-554h]
  float Formatdx; // [esp+18h] [ebp-554h]
  float Formatdy; // [esp+18h] [ebp-554h]
  float Formatdz; // [esp+18h] [ebp-554h]
  float Formatea; // [esp+18h] [ebp-554h]
  float Formateb; // [esp+18h] [ebp-554h]
  float Formatec; // [esp+18h] [ebp-554h]
  float Formated; // [esp+18h] [ebp-554h]
  float Formatee; // [esp+18h] [ebp-554h]
  float Formatef; // [esp+18h] [ebp-554h]
  float Formateg; // [esp+18h] [ebp-554h]
  float Formateh; // [esp+18h] [ebp-554h]
  float Formatei; // [esp+18h] [ebp-554h]
  float Formatej; // [esp+18h] [ebp-554h]
  float Formatek; // [esp+18h] [ebp-554h]
  float Formatel; // [esp+18h] [ebp-554h]
  float Formatem; // [esp+18h] [ebp-554h]
  float Formaten; // [esp+18h] [ebp-554h]
  float Formateo; // [esp+18h] [ebp-554h]
  float Formatep; // [esp+18h] [ebp-554h]
  float Formateq; // [esp+18h] [ebp-554h]
  float Formater; // [esp+18h] [ebp-554h]
  float Formates; // [esp+18h] [ebp-554h]
  float Formatet; // [esp+18h] [ebp-554h]
  float Formateu; // [esp+18h] [ebp-554h]
  float Formatev; // [esp+18h] [ebp-554h]
  float Formatew; // [esp+18h] [ebp-554h]
  float Formatex; // [esp+18h] [ebp-554h]
  float Formatey; // [esp+18h] [ebp-554h]
  float Format_4g; // [esp+1Ch] [ebp-550h]
  float Format_4h; // [esp+1Ch] [ebp-550h]
  size_t Format_4i; // [esp+1Ch] [ebp-550h]
  float Format_4j; // [esp+1Ch] [ebp-550h]
  float Format_4; // [esp+1Ch] [ebp-550h]
  float Format_4k; // [esp+1Ch] [ebp-550h]
  float Format_4l; // [esp+1Ch] [ebp-550h]
  float Format_4m; // [esp+1Ch] [ebp-550h]
  float Format_4a; // [esp+1Ch] [ebp-550h]
  float Format_4n; // [esp+1Ch] [ebp-550h]
  size_t Format_4o; // [esp+1Ch] [ebp-550h]
  float Format_4p; // [esp+1Ch] [ebp-550h]
  size_t Format_4q; // [esp+1Ch] [ebp-550h]
  float Format_4b; // [esp+1Ch] [ebp-550h]
  float Format_4r; // [esp+1Ch] [ebp-550h]
  float Format_4s; // [esp+1Ch] [ebp-550h]
  float Format_4t; // [esp+1Ch] [ebp-550h]
  float Format_4u; // [esp+1Ch] [ebp-550h]
  float Format_4v; // [esp+1Ch] [ebp-550h]
  float Format_4w; // [esp+1Ch] [ebp-550h]
  size_t Format_4x; // [esp+1Ch] [ebp-550h]
  float Format_4y; // [esp+1Ch] [ebp-550h]
  float Format_4c; // [esp+1Ch] [ebp-550h]
  float Format_4z; // [esp+1Ch] [ebp-550h]
  size_t Format_4ba; // [esp+1Ch] [ebp-550h]
  float Format_4bb; // [esp+1Ch] [ebp-550h]
  float Format_4bc; // [esp+1Ch] [ebp-550h]
  float Format_4bd; // [esp+1Ch] [ebp-550h]
  float Format_4d; // [esp+1Ch] [ebp-550h]
  float Format_4be; // [esp+1Ch] [ebp-550h]
  float Format_4bf; // [esp+1Ch] [ebp-550h]
  float Format_4bg; // [esp+1Ch] [ebp-550h]
  float Format_4bh; // [esp+1Ch] [ebp-550h]
  float Format_4bi; // [esp+1Ch] [ebp-550h]
  float Format_4bj; // [esp+1Ch] [ebp-550h]
  float Format_4bk; // [esp+1Ch] [ebp-550h]
  float Format_4bl; // [esp+1Ch] [ebp-550h]
  float Format_4bm; // [esp+1Ch] [ebp-550h]
  float Format_4bn; // [esp+1Ch] [ebp-550h]
  float Format_4bo; // [esp+1Ch] [ebp-550h]
  float Format_4bp; // [esp+1Ch] [ebp-550h]
  float Format_4bq; // [esp+1Ch] [ebp-550h]
  float Format_4br; // [esp+1Ch] [ebp-550h]
  float Format_4bs; // [esp+1Ch] [ebp-550h]
  float Format_4bt; // [esp+1Ch] [ebp-550h]
  float Format_4bu; // [esp+1Ch] [ebp-550h]
  float Format_4bv; // [esp+1Ch] [ebp-550h]
  float Format_4bw; // [esp+1Ch] [ebp-550h]
  float Format_4bx; // [esp+1Ch] [ebp-550h]
  float Format_4by; // [esp+1Ch] [ebp-550h]
  float Format_4bz; // [esp+1Ch] [ebp-550h]
  float Format_4e; // [esp+1Ch] [ebp-550h]
  float Format_4ca; // [esp+1Ch] [ebp-550h]
  float Format_4cb; // [esp+1Ch] [ebp-550h]
  const char *Format_4cc; // [esp+1Ch] [ebp-550h]
  float Format_4cd; // [esp+1Ch] [ebp-550h]
  float Format_4ce; // [esp+1Ch] [ebp-550h]
  const char *Format_4cf; // [esp+1Ch] [ebp-550h]
  const char *Format_4cg; // [esp+1Ch] [ebp-550h]
  float Format_4ch; // [esp+1Ch] [ebp-550h]
  float Format_4ci; // [esp+1Ch] [ebp-550h]
  float Format_4cj; // [esp+1Ch] [ebp-550h]
  float Format_4ck; // [esp+1Ch] [ebp-550h]
  float Format_4cl; // [esp+1Ch] [ebp-550h]
  float Format_4cm; // [esp+1Ch] [ebp-550h]
  float Format_4cn; // [esp+1Ch] [ebp-550h]
  float Format_4co; // [esp+1Ch] [ebp-550h]
  float Format_4cp; // [esp+1Ch] [ebp-550h]
  float Format_4cq; // [esp+1Ch] [ebp-550h]
  float Format_4cr; // [esp+1Ch] [ebp-550h]
  float Format_4cs; // [esp+1Ch] [ebp-550h]
  float Format_4ct; // [esp+1Ch] [ebp-550h]
  float Format_4cu; // [esp+1Ch] [ebp-550h]
  float Format_4cv; // [esp+1Ch] [ebp-550h]
  float Format_4cw; // [esp+1Ch] [ebp-550h]
  float Format_4cx; // [esp+1Ch] [ebp-550h]
  float Format_4cy; // [esp+1Ch] [ebp-550h]
  float Format_4cz; // [esp+1Ch] [ebp-550h]
  float Format_4f; // [esp+1Ch] [ebp-550h]
  float Format_4da; // [esp+1Ch] [ebp-550h]
  float Format_4db; // [esp+1Ch] [ebp-550h]
  float Format_4dc; // [esp+1Ch] [ebp-550h]
  float Format_4dd; // [esp+1Ch] [ebp-550h]
  float Format_4de; // [esp+1Ch] [ebp-550h]
  float Format_4df; // [esp+1Ch] [ebp-550h]
  float Format_4dg; // [esp+1Ch] [ebp-550h]
  float Format_4dh; // [esp+1Ch] [ebp-550h]
  float Format_4di; // [esp+1Ch] [ebp-550h]
  float Format_4dj; // [esp+1Ch] [ebp-550h]
  float Format_4dk; // [esp+1Ch] [ebp-550h]
  float Format_4dl; // [esp+1Ch] [ebp-550h]
  float Format_4dm; // [esp+1Ch] [ebp-550h]
  float Format_4dn; // [esp+1Ch] [ebp-550h]
  float Format_4do; // [esp+1Ch] [ebp-550h]
  float Format_4dp; // [esp+1Ch] [ebp-550h]
  float Format_4dq; // [esp+1Ch] [ebp-550h]
  float Format_4dr; // [esp+1Ch] [ebp-550h]
  float Format_4ds; // [esp+1Ch] [ebp-550h]
  float Format_4dt; // [esp+1Ch] [ebp-550h]
  float Format_4du; // [esp+1Ch] [ebp-550h]
  float Format_4dv; // [esp+1Ch] [ebp-550h]
  float Format_4dw; // [esp+1Ch] [ebp-550h]
  float Format_4dx; // [esp+1Ch] [ebp-550h]
  float Format_4dy; // [esp+1Ch] [ebp-550h]
  float Format_4dz; // [esp+1Ch] [ebp-550h]
  float Format_4ea; // [esp+1Ch] [ebp-550h]
  float Format_4eb; // [esp+1Ch] [ebp-550h]
  float Format_4ec; // [esp+1Ch] [ebp-550h]
  float Format_4ed; // [esp+1Ch] [ebp-550h]
  float Format_4ee; // [esp+1Ch] [ebp-550h]
  float Format_4ef; // [esp+1Ch] [ebp-550h]
  float Format_4eg; // [esp+1Ch] [ebp-550h]
  float Format_4eh; // [esp+1Ch] [ebp-550h]
  float Format_4ei; // [esp+1Ch] [ebp-550h]
  float Format_4ej; // [esp+1Ch] [ebp-550h]
  float Format_4ek; // [esp+1Ch] [ebp-550h]
  float Format_4el; // [esp+1Ch] [ebp-550h]
  float Format_4em; // [esp+1Ch] [ebp-550h]
  float Format_4en; // [esp+1Ch] [ebp-550h]
  float Format_4eo; // [esp+1Ch] [ebp-550h]
  float Format_4ep; // [esp+1Ch] [ebp-550h]
  size_t Format_8; // [esp+20h] [ebp-54Ch]
  double Format_8a; // [esp+20h] [ebp-54Ch]
  double Format_8b; // [esp+20h] [ebp-54Ch]
  size_t Format_8c; // [esp+20h] [ebp-54Ch]
  size_t Format_8d; // [esp+20h] [ebp-54Ch]
  size_t Format_8e; // [esp+20h] [ebp-54Ch]
  size_t Format_8f; // [esp+20h] [ebp-54Ch]
  size_t Format_8g; // [esp+20h] [ebp-54Ch]
  double Format_8h; // [esp+20h] [ebp-54Ch]
  double Format_8i; // [esp+20h] [ebp-54Ch]
  size_t Format_8j; // [esp+20h] [ebp-54Ch]
  double Format_8k; // [esp+20h] [ebp-54Ch]
  size_t Format_8l; // [esp+20h] [ebp-54Ch]
  double Format_8m; // [esp+20h] [ebp-54Ch]
  size_t Format_8n; // [esp+20h] [ebp-54Ch]
  size_t Format_8o; // [esp+20h] [ebp-54Ch]
  size_t Format_8p; // [esp+20h] [ebp-54Ch]
  size_t Format_8q; // [esp+20h] [ebp-54Ch]
  size_t Format_8r; // [esp+20h] [ebp-54Ch]
  double Format_8s; // [esp+20h] [ebp-54Ch]
  double Format_8t; // [esp+20h] [ebp-54Ch]
  double Format_8u; // [esp+20h] [ebp-54Ch]
  size_t Format_8v; // [esp+20h] [ebp-54Ch]
  size_t Format_8w; // [esp+20h] [ebp-54Ch]
  size_t Format_8x; // [esp+20h] [ebp-54Ch]
  size_t Format_8y; // [esp+20h] [ebp-54Ch]
  size_t Format_8z; // [esp+20h] [ebp-54Ch]
  size_t Format_8ba; // [esp+20h] [ebp-54Ch]
  size_t Format_8bb; // [esp+20h] [ebp-54Ch]
  size_t Format_8bc; // [esp+20h] [ebp-54Ch]
  int Format_8bd; // [esp+20h] [ebp-54Ch]
  double Format_8be; // [esp+20h] [ebp-54Ch]
  int Format_8bf; // [esp+20h] [ebp-54Ch]
  double Format_8bg; // [esp+20h] [ebp-54Ch]
  double Format_8bh; // [esp+20h] [ebp-54Ch]
  double Format_8bi; // [esp+20h] [ebp-54Ch]
  double Format_8bj; // [esp+20h] [ebp-54Ch]
  int Format_8bk; // [esp+20h] [ebp-54Ch]
  double Format_8bl; // [esp+20h] [ebp-54Ch]
  const char *Format_8bm; // [esp+20h] [ebp-54Ch]
  double Format_8bn; // [esp+20h] [ebp-54Ch]
  double Format_8bo; // [esp+20h] [ebp-54Ch]
  double Format_8bp; // [esp+20h] [ebp-54Ch]
  const char *Format_8bq; // [esp+20h] [ebp-54Ch]
  double Format_8br; // [esp+20h] [ebp-54Ch]
  double Format_8bs; // [esp+20h] [ebp-54Ch]
  double Format_8bt; // [esp+20h] [ebp-54Ch]
  double Format_8bu; // [esp+20h] [ebp-54Ch]
  int Format_8bv; // [esp+20h] [ebp-54Ch]
  float v609; // [esp+24h] [ebp-548h]
  int v610; // [esp+24h] [ebp-548h]
  int GameYear; // [esp+24h] [ebp-548h]
  int YCoordinate; // [esp+24h] [ebp-548h]
  int v613; // [esp+24h] [ebp-548h]
  int v614; // [esp+24h] [ebp-548h]
  int v615; // [esp+24h] [ebp-548h]
  const char *v616; // [esp+24h] [ebp-548h]
  char *v617; // [esp+24h] [ebp-548h]
  const char *v618; // [esp+24h] [ebp-548h]
  unsigned int v619; // [esp+24h] [ebp-548h]
  float v620; // [esp+24h] [ebp-548h]
  float v621; // [esp+24h] [ebp-548h]
  const char *v622; // [esp+24h] [ebp-548h]
  int v623; // [esp+24h] [ebp-548h]
  int v624; // [esp+24h] [ebp-548h]
  const char *v625; // [esp+28h] [ebp-544h]
  const char *v626; // [esp+28h] [ebp-544h]
  const char *v627; // [esp+28h] [ebp-544h]
  const char *v628; // [esp+28h] [ebp-544h]
  const char *v629; // [esp+28h] [ebp-544h]
  const char *v630; // [esp+28h] [ebp-544h]
  const char *v631; // [esp+28h] [ebp-544h]
  int v632; // [esp+5Ch] [ebp-510h] BYREF
  signed int *v633; // [esp+60h] [ebp-50Ch] BYREF
  float v634; // [esp+64h] [ebp-508h] BYREF
  Actor *v635; // [esp+68h] [ebp-504h] BYREF
  void *v636; // [esp+6Ch] [ebp-500h] BYREF
  const char *v637; // [esp+70h] [ebp-4FCh] BYREF
  int v638; // [esp+74h] [ebp-4F8h] BYREF
  unsigned __int64 v639; // [esp+78h] [ebp-4F4h] BYREF
  float v640; // [esp+80h] [ebp-4ECh]
  BSStringT v641; // [esp+84h] [ebp-4E8h] BYREF
  int v642; // [esp+8Ch] [ebp-4E0h]
  const char *v643; // [esp+98h] [ebp-4D4h] BYREF
  char v644; // [esp+9Dh] [ebp-4CFh]
  char v645; // [esp+9Eh] [ebp-4CEh]
  char v646; // [esp+9Fh] [ebp-4CDh]
  int v647; // [esp+A0h] [ebp-4CCh]
  float v648; // [esp+A4h] [ebp-4C8h]
  int v649; // [esp+A8h] [ebp-4C4h] BYREF
  int v650; // [esp+ACh] [ebp-4C0h] BYREF
  int v651; // [esp+B0h] [ebp-4BCh] BYREF
  int v652; // [esp+B4h] [ebp-4B8h] BYREF
  const char *v653; // [esp+B8h] [ebp-4B4h]
  const char *v654; // [esp+BCh] [ebp-4B0h]
  const char *v655; // [esp+C0h] [ebp-4ACh]
  const char *v656; // [esp+C4h] [ebp-4A8h]
  const char *v657; // [esp+C8h] [ebp-4A4h]
  const char *v658; // [esp+CCh] [ebp-4A0h]
  const char *v659; // [esp+D0h] [ebp-49Ch]
  const char *v660; // [esp+D4h] [ebp-498h]
  const char *v661; // [esp+D8h] [ebp-494h]
  const char *v662; // [esp+DCh] [ebp-490h]
  const char *v663; // [esp+E0h] [ebp-48Ch]
  unsigned int v664; // [esp+E4h] [ebp-488h] BYREF
  int v665; // [esp+E8h] [ebp-484h]
  int v666; // [esp+ECh] [ebp-480h]
  int v667; // [esp+F0h] [ebp-47Ch]
  int v668; // [esp+F4h] [ebp-478h]
  int v669; // [esp+F8h] [ebp-474h]
  int v670; // [esp+FCh] [ebp-470h]
  int v671; // [esp+100h] [ebp-46Ch]
  int v672; // [esp+104h] [ebp-468h]
  int v673; // [esp+108h] [ebp-464h]
  int v674; // [esp+10Ch] [ebp-460h]
  int v675; // [esp+110h] [ebp-45Ch]
  int v676; // [esp+114h] [ebp-458h]
  int v677; // [esp+118h] [ebp-454h]
  int v678; // [esp+11Ch] [ebp-450h]
  int v679; // [esp+120h] [ebp-44Ch]
  int v680; // [esp+124h] [ebp-448h]
  int v681; // [esp+128h] [ebp-444h]
  int v682; // [esp+12Ch] [ebp-440h]
  int v683; // [esp+130h] [ebp-43Ch]
  int v685[200]; // [esp+13Ch] [ebp-430h] BYREF
  char Dest[204]; // [esp+45Ch] [ebp-110h] BYREF
  int v687; // [esp+568h] [ebp-4h]
  int savedregs; // [esp+56Ch] [ebp+0h] BYREF

  if ( !BYTE2(qword_B3BB2C[0x9B]) )
  {
    if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 && MEMORY[0xB333B4] ) /*0x407b4a*/
    {
      MEMORY[0xB33415] = 0; /*0x407b4c*/
    }
    else
    {
      v5 = sub_579440(); /*0x407b55*/
      if ( v5 ) /*0x407b5c*/
      {
        MEMORY[0xB333B4] = (TESChildCELL *)v5; /*0x407b64*/
        unk_B33414 = v5 == (TESObjectREFR *)reference; /*0x407b6c*/
      }
      else if ( MEMORY[0xB33415] || !MEMORY[0xB333B4] || MEMORY[0xB333B4] == (TESChildCELL *)reference && !unk_B33414 ) /*0x407b97*/
      {
        MEMORY[0xB333B4] = (TESChildCELL *)reference; /*0x407ba4*/
      }
      else
      {
        sub_57C980((char)&savedregs, a2, a3, (TESObjectREFR *)MEMORY[0xB333B4]); /*0x407b9a*/
      }
      MEMORY[0xB33415] = 1; /*0x407baa*/
    }
    if ( GetInterfaceSingleton0x50() )
    {
      LOBYTE(v6) = InputGlobals::QueryKeyboardState(*(InputGlobal **)(a1 + 0x20), 0x46, 1); /*0x407bc4*/
      if ( v6 ) /*0x407bcb*/
      {
        v7 = sub_571F90(1); /*0x407bce*/
        sub_571820((char *)v7, a2, a3, GameHour); /*0x407bd8*/
        LOBYTE(v8) = InputGlobals::QueryKeyboardState(*(InputGlobal **)(a1 + 0x20), 0x2A, 0); /*0x407be4*/
        if ( v8 || (LOBYTE(v9) = InputGlobals::QueryKeyboardState(*(InputGlobal **)(a1 + 0x20), 0x36, 0), v9) ) /*0x407bfa*/
          --iDebugText; /*0x407c04*/
        else
          ++iDebugText; /*0x407bfc*/
      }
      if ( iDebugText >= 0 ) /*0x407c11*/
      {
        if ( iDebugText >= 0x21 ) /*0x407c22*/
          iDebugText = 0; /*0x407c24*/
      }
      else
      {
        iDebugText = 0x20; /*0x407c13*/
      }
      v635 = (Actor *)OblivionDynamicCast( /*0x407c51*/
                        MEMORY[0xB333B4],
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &Actor `RTTI Type Descriptor',
                        0);
      v10 = dword_B12DB4 - 1; /*0x407c55*/
      if ( *(_DWORD *)(FontManager_GetSingleton()[v10] + 0x38) ) /*0x407c60*/
        __asm { fld     dword ptr [eax] } /*0x407c67*/
      else
        __asm { fldz } /*0x407c6b*/
      __asm /*0x407c6d*/
      {
        fstp    [esp+544h+var_500]
        fld     [esp+544h+var_500]
        fadd    ds:dbl_A30E48
      }
      v12 = Double_To_SInt32(GameHour); /*0x407c86*/
      v633 = (signed int *)(v12 + iDebugTextTopBottomOffset); /*0x407c95*/
      v632 = v12 + iDebugTextTopBottomOffset; /*0x407c99*/
      if ( unk_B33410 == *(_DWORD *)&MEMORY[0xB33E90][0x14] ) /*0x407ca2*/
      {
        v13 = unk_B3340C; /*0x407cae*/
      }
      else
      {
        v13 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x407ca4*/
        unk_B33410 = *(_DWORD *)&MEMORY[0xB33E90][0x14]; /*0x407ca6*/
      }
      v641.m_data = (char *)(*(_DWORD *)&MEMORY[0xB33E90][0x10] - v13); /*0x407cba*/
      __asm { fild    [esp+544h+var_4E8.m_data] } /*0x407cbe*/
      if ( *(_DWORD *)&MEMORY[0xB33E90][0x10] - v13 < 0 ) /*0x407cc2*/
        __asm { fadd    ds:flt_A2FC78 } /*0x407cc4*/
      __asm { fmul    ds:dbl_A30E40 } /*0x407cca*/
      ++unk_B33408; /*0x407cd0*/
      unk_B3340C = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x407cd8*/
      __asm /*0x407cdd*/
      {
        fstp    [esp+544h+triangleCount]
        fld     dword ptr unk_B33404
        fadd    [esp+544h+triangleCount]
        fstp    dword ptr unk_B33404
        fld1
        fcomp   dword ptr unk_B33404
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x41, 0) ) /*0x407cfe*/
      {
        LOWORD(v10) = unk_B33400; /*0x407d69*/
      }
      else
      {
        if ( (iDebugText == 0x18 || iDebugText == 0x19) && *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 ) /*0x407d1d*/
        {
          v15 = sub_571F90(1); /*0x407d21*/
          sub_571820((char *)v15, a2, a3, GameHour); /*0x407d2b*/
        }
        __asm { fld     dword ptr unk_B33404 } /*0x407d30*/
        LOWORD(v10) = unk_B33408; /*0x407d36*/
        __asm /*0x407d3e*/
        {
          fst     qword ptr [esp+548h+var_4E8.m_data]
          fstp    [esp+548h+var_548]; float
        }
        unk_B33400 = unk_B33408; /*0x407d45*/
        GameHour = FloatFloor(v609); /*0x407d4c*/
        __asm { fsubr   qword ptr [esp+548h+var_4E8.m_data] } /*0x407d51*/
        unk_B33408 = 0; /*0x407d58*/
        __asm { fstp    dword ptr unk_B33404 } /*0x407d61*/
      }
      if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x186C1]) == 0xA ) /*0x407d78*/
      {
        __asm /*0x407d8e*/
        {
          fld     flt_B2E2EC
          fld1
          fdivrp  st(1), st
        }
        v610 = Double_To_SInt32(GameHour); /*0x407d9d*/
        _sprintf(Dest, "FPS %d (%d)", (__int16)v10, v610); /*0x407daf*/
      }
      else
      {
        _sprintf(Dest, "FPS %d (Type %d)", (__int16)v10, OB_ShaderConstantStorage_010201A0[0x186C1]); /*0x407d8c*/
      }
      __asm { fild    [esp+554h+var_50C] } /*0x407db4*/
      __asm { fstp    [esp+554h+Format+4]; float }
      LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x407dd1*/
      __asm { fild    [esp+554h+triangleCount] } /*0x407dd5*/
      __asm { fstp    [esp+554h+Format]; float }
      InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formata, Format_4g, 3, 0xFFFFFFFF); /*0x407de4*/
      v633 = (signed int *)((char *)v633 + v12); /*0x407dee*/
      switch ( iDebugText )
      {
        case 0:
          v653 = "Sunday"; /*0x408be1*/
          v654 = "Monday"; /*0x408bec*/
          v655 = "Tuesday"; /*0x408bf7*/
          v656 = "Wednesday"; /*0x408c02*/
          v657 = "Thursday"; /*0x408c0d*/
          v658 = "Friday"; /*0x408c18*/
          v659 = "Saturday"; /*0x408c23*/
          GameDayOfWeek = TimeGlobals_GetGameDayOfWeek(&MEMORY[0xB332E0]); /*0x408c2e*/
          _sprintf(Dest, "Day of the Week %s", (&v653)[GameDayOfWeek]); /*0x408c48*/
          __asm { fild    [esp+550h+var_510] } /*0x408c4d*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbh, Format_4be, 1, 0xFFFFFFFF); /*0x408c70*/
          v632 += v12; /*0x408c75*/
          GameYear = TimeGlobals_GetGameYear(&MEMORY[0xB332E0]); /*0x408c86*/
          GameDay = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x408c8c*/
          Format_8bd = v53; /*0x408c94*/
          GameMonth = TimeGlobals_GetGameMonth(&MEMORY[0xB332E0]); /*0x408c9a*/
          _sprintf(Dest, "Date %d/%d/%d", GameMonth, Format_8bd, GameYear); /*0x408cad*/
          __asm { fild    [esp+558h+var_510] } /*0x408cb2*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameDay, Dest, Formatbi, Format_4bf, 1, 0xFFFFFFFF); /*0x408cd5*/
          v632 += v12; /*0x408cda*/
          GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x408ce6*/
          __asm /*0x408ceb*/
          {
            fstp    [esp+544h+triangleCount]
            fld     [esp+544h+triangleCount]
            fld     st
          }
          v55 = Double_To_SInt32(GameHour); /*0x408cf5*/
          v56 = v55; /*0x408cfa*/
          LODWORD(v634) = v55; /*0x408cfd*/
          __asm /*0x408d01*/
          {
            fisub   [esp+544h+triangleCount]
            fld     ds:dbl_A2FCC8
            fmul    st(1), st
            fld     st(1)
          }
          v57 = Double_To_SInt32(GameHour); /*0x408d0f*/
          v58 = v57; /*0x408d14*/
          LODWORD(v634) = v57; /*0x408d17*/
          __asm /*0x408d1b*/
          {
            fild    [esp+544h+triangleCount]
            fsubp   st(2), st
            fmulp   st(1), st
          }
          v59 = Double_To_SInt32(GameHour); /*0x408d23*/
          _sprintf(Dest, "Time %d:%02d:%02d", v56, v58, v59); /*0x408d3b*/
          __asm { fild    [esp+558h+var_510] } /*0x408d40*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbj, Format_4bg, 1, 0xFFFFFFFF); /*0x408d63*/
          __asm { fild    dword ptr ds:0B33EA0h } /*0x408d68*/
          v632 += v12; /*0x408d74*/
          if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x408d7d*/
            __asm { fadd    ds:flt_A2FC78 } /*0x408d7f*/
          __asm /*0x408d85*/
          {
            fdiv    ds:dbl_A2FC70
            fstp    [esp+544h+var_500]
            fld     [esp+544h+var_500]
            fld     ds:dbl_A2F938
            fdivr   st, st(1)
          }
          __asm
          {
            fld     ds:dbl_A2FCC8
            fdiv    st(1), st
          }
          v646 = Double_To_SInt32(GameHour); /*0x408da8*/
          __asm /*0x408dac*/
          {
            fxch    st(1)
            fstp    [esp+544h+triangleCount]
            fld     [esp+544h+triangleCount]
            fxch    st(1)
          }
          unknown_libname_14(a3, GameHour); /*0x408db8*/
          __asm /*0x408dbd*/
          {
            fstp    [esp+544h+triangleCount]
            fld     [esp+544h+triangleCount]
          }
          __asm
          {
            fld     [esp+544h+var_500]
            fld     ds:dbl_A2FCC8
          }
          v645 = Double_To_SInt32(GameHour); /*0x408dd4*/
          unknown_libname_14(a3, GameHour); /*0x408dd8*/
          __asm /*0x408ddd*/
          {
            fstp    [esp+544h+triangleCount]
            fld     [esp+544h+triangleCount]
          }
          v60 = Double_To_SInt32(GameHour); /*0x408de5*/
          __asm { fld     dword ptr ds:0B33E9Ch } /*0x408dea*/
          __asm { fstp    qword ptr [esp+54Ch+Format+8] }
          v644 = v60; /*0x408df6*/
          __asm /*0x408dfa*/
          {
            fld     [esp+54Ch+var_500]
            fld     st
            fxch    st(1)
          }
          v634 = COERCE_FLOAT(Double_To_SInt32(GameHour)); /*0x408e07*/
          __asm /*0x408e0b*/
          {
            fisub   [esp+54Ch+triangleCount]
            fmul    ds:fCostant_100
          }
          v61 = Double_To_SInt32(GameHour); /*0x408e15*/
          _sprintf(Dest, "GamePlay %d:%02d:%02d.%02d (%0.2f)", v646, v645, v644, v61, Format_8be); /*0x408e3d*/
          __asm { fild    [esp+544h+var_510] } /*0x408e45*/
          __asm
          {
            fstp    [esp+554h+Format+4]; float
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbk, Format_4bh, 1, 0xFFFFFFFF); /*0x408e65*/
          v632 += v12; /*0x408e70*/
          if ( reference )
          {
            v62 = reference->vtbl->super.super.super.GetPos(reference); /*0x408e87*/
            v63 = *(_DWORD *)v62; /*0x408e89*/
            v64 = *((_DWORD *)v62 + 1); /*0x408e8b*/
            v65 = v62[2]; /*0x408e8e*/
            v639 = __PAIR64__(v64, v63); /*0x408e91*/
            currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x408e9b*/
            CurrentWorldspace = 0; /*0x408e9e*/
            v640 = v65; /*0x408ea6*/
            if ( currentInteriorCell ) /*0x408eaa*/
              goto LABEL_476; /*0x408eaa*/
            __asm { fld     dword ptr [esp+544h+var_4F4+4] } /*0x408eb1*/
            CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x408ebc*/
            __asm /*0x408ec2*/
            {
              fstp    [esp+554h+Format+4]; float
              fld     dword ptr [esp+554h+var_4F4]
              fstp    [esp+554h+Format]; float
            }
            currentInteriorCell = (TESObjectCELL *)sub_44A270( /*0x408ed2*/
                                                     (TESWorldSpace **)g_TESDataHandler,
                                                     Formatbl,
                                                     Format_4bi,
                                                     CurrentWorldspace,
                                                     0);
            if ( currentInteriorCell )
            {
LABEL_476:
              if ( TESObjectCELL_IsInterior(currentInteriorCell) )
              {
                v68 = MEMORY[0xB333A0]->currentInteriorCell->vtbl->GetEditorName(MEMORY[0xB333A0]->currentInteriorCell); /*0x408ef8*/
                _sprintf(Dest, "PC Cell %s", v68); /*0x408f08*/
              }
              else
              {
                YCoordinate = TESObjectCELL_GetYCoordinate(currentInteriorCell); /*0x408f19*/
                XCoordinate = TESObjectCELL_GetXCoordinate(currentInteriorCell); /*0x408f1c*/
                v70 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))currentInteriorCell->vtbl->GetEditorName)( /*0x408f2c*/
                                      currentInteriorCell,
                                      XCoordinate,
                                      YCoordinate);
                _sprintf(Dest, "PC Cell %s: %d %d ", v70, Format_8bf, v613);
              }
              __asm { fild    [esp+544h+var_510] } /*0x408f44*/
              __asm { fstp    [esp+554h+Format+4]; float }
              __asm
              {
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbm, Format_4bj, 1, 0xFFFFFFFF); /*0x408f64*/
              v632 += v12; /*0x408f69*/
              v641.m_data = 0; /*0x408f72*/
              v641.m_dataLen = 0; /*0x408f76*/
              v641.m_bufLen = 0; /*0x408f7b*/
              v687 = 0; /*0x408f82*/
              if ( CurrentWorldspace ) /*0x408f89*/
              {
                ((void (__thiscall *)(TESWorldSpace *, BSStringT *, _DWORD, _DWORD, float))CurrentWorldspace->vtbl[1].super.InitializeComponent)( /*0x408fb3*/
                  CurrentWorldspace,
                  &v641,
                  v639,
                  HIDWORD(v639),
                  COERCE_FLOAT(LODWORD(v640)));
              }
              else
              {
                m_data = currentInteriorCell->members.fullName.name.m_data; /*0x408fb7*/
                if ( !m_data ) /*0x408fbc*/
                  m_data = EmptyString; /*0x408fbe*/
                BSStringT_Set(&v641, m_data, 0); /*0x408fca*/
              }
              v72 = BSStringT_GetLen(&v641) == 0; /*0x408fd8*/
              v73 = "UNKNOWN"; /*0x408fda*/
              if ( !v72 ) /*0x408fdf*/
                v73 = v641.m_data; /*0x408fe1*/
              _sprintf(Dest, "Map Name: %s ", v73);
              __asm { fild    [esp+550h+var_510] } /*0x408ff8*/
              __asm { fstp    [esp+554h+Format+4]; float }
              __asm
              {
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbn, Format_4bk, 1, 0xFFFFFFFF); /*0x40901b*/
              v632 += v12; /*0x409020*/
              v687 = 0xFFFFFFFF; /*0x40902b*/
              BSStringT_Clear((unsigned int *)&v641); /*0x409036*/
            }
          }
          v74 = (TESObjectREFR *)MEMORY[0xB333B4]; /*0x40903b*/
          if ( !MEMORY[0xB333B4] ) /*0x409043*/
            goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x409043*/
          v75 = (float *)(*((int (__thiscall **)(TESChildCELL *))MEMORY[0xB333B4]->vtbl + 0x5D))(MEMORY[0xB333B4]); /*0x409053*/
          __asm { fild    [esp+544h+var_50C] } /*0x409055*/
          v76 = *v75; /*0x409059*/
          v77 = *((_DWORD *)v75 + 1); /*0x40905b*/
          v78 = v75[2]; /*0x40905e*/
          v639 = __PAIR64__(v77, LODWORD(v76)); /*0x409061*/
          __asm { fstp    [esp+554h+Format+4]; float } /*0x409077*/
          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x40907b*/
          __asm { fild    [esp+554h+triangleCount] } /*0x40907f*/
          v640 = v78; /*0x409089*/
          __asm { fstp    [esp+554h+Format]; float } /*0x40908d*/
          Name = TESObjectREFR_GetName(v74); /*0x409090*/
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Name, Formatbo, Format_4bl, 3, 0xFFFFFFFF); /*0x409096*/
          v633 = (signed int *)((char *)v633 + v12); /*0x40909b*/
          if ( v74->vtbl->IsActor(v74) ) /*0x4090ac*/
          {
            v74->vtbl[1].super.Unk_0E((TESForm *)v74); /*0x4090bc*/
            __asm { fmul    ds:dbl_A30DC8 } /*0x4090be*/
            __asm { fstp    qword ptr [esp+54Ch+Format+8] }
            _sprintf(Dest, "Heading %0.2f", Format_8bg); /*0x4090d7*/
            __asm { fild    [esp+554h+var_50C] } /*0x4090dc*/
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4090f9*/
            __asm { fild    [esp+554h+triangleCount] } /*0x4090fd*/
            __asm { fstp    [esp+554h+Format]; float }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbp, Format_4bm, 3, 0xFFFFFFFF); /*0x40910c*/
            v633 = (signed int *)((char *)v633 + v12); /*0x409114*/
          }
          __asm { fld     [esp+544h+var_4EC] } /*0x409118*/
          __asm { fstp    qword ptr [esp+55Ch+Format+8] }
          __asm
          {
            fld     dword ptr [esp+55Ch+var_4F4+4]
            fstp    qword ptr [esp+55Ch+Format]
            fld     dword ptr [esp+55Ch+var_4F4]
            fstp    qword ptr [esp+55Ch+var_55C]
          }
          _sprintf(Dest, "Pos: %.0f %.0f %.0f", v299, Formatbq, Format_8bh);
          __asm { fild    [esp+564h+var_50C] } /*0x409144*/
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x409161*/
          __asm { fild    [esp+554h+triangleCount] } /*0x409165*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbr, Format_4bn, 3, 0xFFFFFFFF); /*0x409174*/
          v633 = (signed int *)((char *)v633 + v12); /*0x409179*/
          if ( v74->vtbl->GetNiNode(v74) )
          {
            v80 = v74->vtbl->GetNiNode(v74); /*0x4091a3*/
            v81 = (NiObject *)NiObjectNET_LookupObjectByName(v80, "Bip01"); /*0x4091a6*/
            v82 = NiRTTI_Cast((BSStringT *)&MEMORY[0xB3F9B0][0x40], v81); /*0x4091b1*/
            if ( v82 )
            {
              m_uiRefCount = v82[0x11].members.m_uiRefCount; /*0x4091c7*/
              LODWORD(v639) = v82[0x11].__vftable; /*0x4091cd*/
              v640 = *(float *)&v82[0x12].__vftable; /*0x4091da*/
              __asm /*0x4091de*/
              {
                fld     [esp+55Ch+var_4EC]
                fstp    qword ptr [esp+55Ch+Format+8]
              }
              HIDWORD(v639) = m_uiRefCount; /*0x4091e6*/
              __asm { fld     dword ptr [esp+55Ch+var_4F4+4] } /*0x4091ea*/
              __asm { fstp    qword ptr [esp+55Ch+Format] }
              __asm
              {
                fld     dword ptr [esp+55Ch+var_4F4]
                fstp    qword ptr [esp+55Ch+var_55C]
              }
              _sprintf(Dest, "%s Pos: %.0f %.0f %.0f", (const char *)v82[1].__vftable, v300, Formatbs, Format_8bi);
              __asm { fild    [esp+568h+var_50C] } /*0x40920f*/
              __asm { fstp    [esp+554h+Format+4]; float }
              LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x40922c*/
              __asm { fild    [esp+554h+triangleCount] } /*0x409230*/
              __asm { fstp    [esp+554h+Format]; float }
              InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbt, Format_4bo, 3, 0xFFFFFFFF); /*0x40923f*/
              v633 = (signed int *)((char *)v633 + v12); /*0x409247*/
            }
          }
          ChildNiAvNodeVtbl = SceneGraph_GetChildNiAvNodeVtbl(g_WorldSceneReceiverRoot); /*0x409251*/
          if ( ChildNiAvNodeVtbl )
          {
            Unk_02 = ChildNiAvNodeVtbl[1].super.Unk_02; /*0x409264*/
            LODWORD(v639) = ChildNiAvNodeVtbl[1].super.GetType; /*0x40926a*/
            v640 = *(float *)&ChildNiAvNodeVtbl[1].super.Unk_03; /*0x409277*/
            __asm /*0x40927b*/
            {
              fld     [esp+55Ch+var_4EC]
              fstp    qword ptr [esp+55Ch+Format+8]
            }
            HIDWORD(v639) = Unk_02; /*0x409283*/
            __asm { fld     dword ptr [esp+55Ch+var_4F4+4] } /*0x409287*/
            __asm { fstp    qword ptr [esp+55Ch+Format] }
            __asm
            {
              fld     dword ptr [esp+55Ch+var_4F4]
              fstp    qword ptr [esp+55Ch+var_55C]
            }
            _sprintf(
              Dest,
              "%s: %.0f %.0f %.0f",
              (const char *)ChildNiAvNodeVtbl->super.Unk_02,
              v301,
              Formatbu,
              Format_8bj);
            __asm { fild    [esp+568h+var_50C] } /*0x4092ac*/
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4092c9*/
            __asm { fild    [esp+554h+triangleCount] } /*0x4092cd*/
            __asm { fstp    [esp+554h+Format]; float }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbv, Format_4bp, 3, 0xFFFFFFFF); /*0x4092dc*/
            v633 = (signed int *)((char *)v633 + v12); /*0x4092e4*/
          }
          if ( Shared_GetDwordAtOffset40(v74) )
          {
            ParentCell = Shared_GetDwordAtOffset40(v74); /*0x409300*/
            v87 = Shared_GetDwordAtOffset40(v74); /*0x409302*/
            v614 = TESObjectCELL_GetYCoordinate(v87); /*0x40930e*/
            v88 = Shared_GetDwordAtOffset40(v74); /*0x409311*/
            v89 = TESObjectCELL_GetXCoordinate(v88); /*0x409318*/
            v90 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))ParentCell->vtbl->GetEditorName)( /*0x409328*/
                                  ParentCell,
                                  v89,
                                  v614);
            _sprintf(Dest, "Cell %s: %d %d", v90, Format_8bk, v615);
            __asm { fild    [esp+558h+var_50C] } /*0x40933d*/
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x40935a*/
            __asm { fild    [esp+554h+triangleCount] } /*0x40935e*/
            __asm { fstp    [esp+554h+Format]; float }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbw, Format_4bq, 3, 0xFFFFFFFF); /*0x40936d*/
            v633 = (signed int *)((char *)v633 + v12); /*0x409375*/
          }
          if ( !v635 ) /*0x40937f*/
            goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40937f*/
          flags = v635->members.super.super.super.flags; /*0x409385*/
          if ( (flags & 0x800) != 0 || (flags & 0x20) != 0 ) /*0x40939b*/
            goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40939b*/
          ProcessLevel = Actor::GetProcessLevel(v635); /*0x4093a3*/
          _sprintf(Dest, "Level %d", ProcessLevel); /*0x4093b6*/
          __asm { fild    [esp+550h+var_50C] } /*0x4093bb*/
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4093d8*/
          __asm { fild    [esp+554h+triangleCount] } /*0x4093dc*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbx, Format_4br, 3, 0xFFFFFFFF); /*0x4093eb*/
          v633 = (signed int *)((char *)v633 + v12); /*0x4093f0*/
          if ( Actor::GetCurrentPackage(v635) ) /*0x4093f9*/
          {
            v93 = Actor::GetCurrentPackage(v635); /*0x409404*/
            if ( TESForm::GetEditorNameLen((TESForm *)v93) ) /*0x40940b*/
            {
              v94 = Actor::GetCurrentPackage(v635); /*0x409416*/
              v616 = v94->__vftable->super.GetEditorName((TESForm *)v94); /*0x409427*/
              v95 = Actor::GetCurrentPackageTypeName(v635); /*0x40942a*/
              _sprintf(Dest, "Package %s (%s)", v95, v616); /*0x40943d*/
            }
            else
            {
              v96 = Actor::GetCurrentPackageTypeName(v635); /*0x409447*/
              _sprintf(Dest, "Package %s", v96); /*0x40945a*/
            }
          }
          else
          {
            _sprintf(Dest, "Package NONE"); /*0x409471*/
          }
          __asm { fild    [esp+544h+var_50C] } /*0x409479*/
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x409493*/
          __asm { fild    [esp+554h+triangleCount] } /*0x409497*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatby, Format_4bs, 3, 0xFFFFFFFF); /*0x4094a6*/
          v633 = (signed int *)((char *)v633 + v12); /*0x4094ab*/
          v97 = v635->members.super.process->GetCurrentPackProcedure(v635->members.super.process); /*0x4094c1*/
          if ( !Actor::GetCurrentPackage(v635) /*0x4094d7*/
            || Actor::GetCurrentPackage(v635)->members.procedureArrayIndex == 0xFFFFFFFF )
          {
            _sprintf(Dest, "Procedure Current Pack %s", "None"); /*0x409516*/
          }
          else
          {
            v617 = proceudreNamesArray[*((_DWORD *)*(&off_B152B0 /*0x4094f4*/
                                                   + Actor::GetCurrentPackage(v635)->members.procedureArrayIndex)
                                       + v97)];
            _sprintf(Dest, "Procedure Current Pack %s", v617); /*0x409502*/
          }
          __asm { fild    [esp+550h+var_50C] } /*0x40951b*/
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x409538*/
          __asm { fild    [esp+554h+triangleCount] } /*0x40953c*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbz, Format_4bt, 3, 0xFFFFFFFF); /*0x40954b*/
          v98 = (TESPackage *)sub_5E03A0(v635); /*0x409555*/
          v633 = (signed int *)((char *)v633 + v12); /*0x40955a*/
          ExtraPackage = (TESForm *)v98; /*0x40955e*/
          if ( v98 && !TESPackage_IsRuntimePackage(v98) && TESForm::GetEditorNameLen(ExtraPackage) ) /*0x409571*/
            goto LABEL_132; /*0x409578*/
          if ( ExtraDataList::GetExtraPackage(&v635->members.super.super.baseExtraList) ) /*0x40957d*/
          {
            ExtraPackage = (TESForm *)ExtraDataList::GetExtraPackage(&v635->members.super.super.baseExtraList); /*0x40958e*/
            if ( ExtraPackage->vtbl->GetEditorName(ExtraPackage) ) /*0x40959a*/
            {
LABEL_132:
              v100 = ExtraPackage->vtbl->GetEditorName(ExtraPackage); /*0x4095a0*/
              _sprintf(Dest, "Current Editor Package %s", v100); /*0x4095ba*/
            }
          }
          else
          {
            _sprintf(Dest, "Current Editor Package NONE"); /*0x4095d1*/
          }
          __asm { fild    [esp+544h+var_50C] } /*0x4095d9*/
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4095f3*/
          __asm { fild    [esp+554h+triangleCount] } /*0x4095f7*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatca, Format_4bu, 3, 0xFFFFFFFF); /*0x409606*/
          v633 = (signed int *)((char *)v633 + v12); /*0x40960b*/
          if ( !ExtraPackage || (vtbl = ExtraPackage[1].vtbl, vtbl == (TESFormVtbl *)0xFFFFFFFF) ) /*0x40961c*/
            _sprintf(Dest, "Procedure Editor Pack  %s", "None"); /*0x409657*/
          else
            _sprintf( /*0x409643*/
              Dest,
              "Procedure Editor Pack %s",
              proceudreNamesArray[*((_DWORD *)*(&off_B152B0 + (_DWORD)vtbl)
                                  + v635->members.super.process->editorPackProcedure)]);
          __asm { fild    [esp+550h+var_50C] } /*0x40965c*/
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x409679*/
          __asm { fild    [esp+554h+triangleCount] } /*0x40967d*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcb, Format_4bv, 3, 0xFFFFFFFF); /*0x40968c*/
          v633 = (signed int *)((char *)v633 + v12); /*0x409691*/
          v635->vtbl->GetAV_F(v635, kActorVal_Health); /*0x4096a4*/
          __asm { fstp    qword ptr [esp+54Ch+Format+8] } /*0x4096a9*/
          _sprintf(Dest, "Actor Health %.02f", Format_8bl); /*0x4096b9*/
          __asm { fild    [esp+554h+var_50C] } /*0x4096be*/
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4096db*/
          __asm { fild    [esp+554h+triangleCount] } /*0x4096df*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcc, Format_4bw, 3, 0xFFFFFFFF); /*0x4096ee*/
          v633 = (signed int *)((char *)v633 + v12); /*0x4096f3*/
          if ( sub_5E6830(v635) )
          {
            process = v635->members.super.process; /*0x409705*/
            v103 = *(unsigned int **)(sub_5E6830(v635) + 0xC); /*0x40970f*/
            Unk_134 = process->Unk_134; /*0x409714*/
            v634 = *(float *)&v103; /*0x40971a*/
            v618 = Unk_134(process); /*0x409726*/
            v105 = (TESObjectREFR *)sub_5E6830(v635); /*0x40972a*/
            v106 = TESObjectREFR_GetName(v105); /*0x409731*/
            _sprintf(Dest, "Heading Target: %s (%08X), (%s)", v106, v634, v618);
          }
          else
          {
            v107 = v635->members.super.process->Unk_134(v635->members.super.process); /*0x409759*/
            _sprintf(Dest, "Heading Target: (none) (%s)", v107);
          }
          __asm { fild    [esp+544h+var_50C] } /*0x409771*/
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x40978b*/
          __asm { fild    [esp+554h+triangleCount] } /*0x40978f*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcd, Format_4bx, 3, 0xFFFFFFFF); /*0x40979e*/
          v633 = (signed int *)((char *)v633 + v12); /*0x4097a3*/
          v108 = v635->members.super.process; /*0x4097a7*/
          if ( v108 ) /*0x4097af*/
          {
            if ( ((unsigned __int8 (__thiscall *)(LowProcess *))v108->GetUnk278)(v108) ) /*0x4097bf*/
            {
              _sprintf(Dest, " Movement is stopped"); /*0x4097d6*/
              __asm { fild    [esp+54Ch+var_50C] } /*0x4097db*/
              __asm { fstp    [esp+554h+Format+4]; float }
              LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4097f8*/
              __asm { fild    [esp+554h+triangleCount] } /*0x4097fc*/
              __asm { fstp    [esp+554h+Format]; float }
              InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatce, Format_4by, 3, 0xFFFFFFFF); /*0x40980b*/
            }
          }
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x409813*/
        case 1:
          v109 = MEMORY[0xB333B4]; /*0x409818*/
          if ( !MEMORY[0xB333B4] ) /*0x409820*/
            goto LABEL_323; /*0x409820*/
          v110 = (*((int (__thiscall **)(TESChildCELL *))MEMORY[0xB333B4]->vtbl + 0x59))(MEMORY[0xB333B4]); /*0x40982e*/
          v109 = MEMORY[0xB333B4]; /*0x409832*/
          if ( !v110 ) /*0x409838*/
            goto LABEL_323; /*0x409838*/
          __asm { fild    [esp+544h+var_510] } /*0x40983e*/
          __asm
          {
            fstp    [esp+554h+Format+4]; float
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          v111 = TESObjectREFR_GetName((TESObjectREFR *)MEMORY[0xB333B4]); /*0x409856*/
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, v111, Formatcf, Format_4bz, 1, 0xFFFFFFFF); /*0x40985c*/
          v632 += v12; /*0x409865*/
          if ( v635 ) /*0x40986e*/
          {
            if ( !v635->members.super.process->GetProcessLevel(v635->members.super.process) ) /*0x40987c*/
            {
              Dest[0] = 0; /*0x409886*/
              v112 = v635->members.super.process->GetMovementFlags(v635->members.super.process); /*0x40989a*/
              if ( (v112 & 0x100) != 0 ) /*0x4098a3*/
              {
                v113 = (char *)&v685[0xC7] + 3; /*0x4098ac*/
                while ( *++v113 ) /*0x4098b8*/
                  ; /*0x4098b0*/
                strcpy(v113, "Walk "); /*0x4098c0*/
              }
              if ( (v112 & 0x200) != 0 ) /*0x4098d3*/
              {
                v115 = (char *)&v685[0xC7] + 3; /*0x4098dc*/
                while ( *++v115 ) /*0x4098e8*/
                  ; /*0x4098e0*/
                strcpy(v115, "Run "); /*0x4098f0*/
              }
              if ( (v112 & 0x400) != 0 ) /*0x409901*/
              {
                v117 = (char *)&v685[0xC7] + 3; /*0x40990a*/
                while ( *++v117 ) /*0x409918*/
                  ; /*0x409910*/
                strcpy(v117, "Sneak "); /*0x409920*/
              }
              if ( (v112 & 0x800) != 0 ) /*0x40993c*/
              {
                v119 = (char *)&v685[0xC7] + 3; /*0x409945*/
                while ( *++v119 ) /*0x409950*/
                  ; /*0x409948*/
                strcpy(v119, "Swim "); /*0x409958*/
              }
              if ( (v112 & 0x1000) != 0 ) /*0x40996b*/
              {
                v121 = (char *)&v685[0xC7] + 3; /*0x409974*/
                while ( *++v121 ) /*0x40997f*/
                  ; /*0x409977*/
                strcpy(v121, "Jump "); /*0x409987*/
              }
              if ( (v112 & 0x2000) != 0 ) /*0x40999a*/
              {
                v123 = (char *)&v685[0xC7] + 3; /*0x4099a3*/
                while ( *++v123 ) /*0x4099ae*/
                  ; /*0x4099a6*/
                strcpy(v123, "Fly "); /*0x4099b6*/
              }
              if ( (v112 & 0x4000) != 0 ) /*0x4099c7*/
              {
                v125 = (char *)&v685[0xC7] + 3; /*0x4099d0*/
                while ( *++v125 ) /*0x4099db*/
                  ; /*0x4099d3*/
                strcpy(v125, "Fall "); /*0x4099e3*/
              }
              if ( (v112 & 0x8000) != 0 ) /*0x4099f6*/
              {
                v127 = (char *)&v685[0xC7] + 3; /*0x4099ff*/
                while ( *++v127 ) /*0x409a0a*/
                  ; /*0x409a02*/
                strcpy(v127, "Slide "); /*0x409a12*/
              }
              if ( (v112 & 0x10) != 0 ) /*0x409a2b*/
              {
                v129 = (char *)&v685[0xC7] + 3; /*0x409a34*/
                while ( *++v129 ) /*0x409a3f*/
                  ; /*0x409a37*/
                strcpy(v129, "TurnLeft "); /*0x409a47*/
              }
              if ( (v112 & 0x20) != 0 ) /*0x409a60*/
              {
                v131 = (char *)&v685[0xC7] + 3; /*0x409a69*/
                while ( *++v131 ) /*0x409a78*/
                  ; /*0x409a70*/
                strcpy(v131, "TurnRight "); /*0x409a80*/
              }
              if ( (v112 & 1) != 0 ) /*0x409aa2*/
              {
                v133 = (char *)&v685[0xC7] + 3; /*0x409aab*/
                while ( *++v133 ) /*0x409ab8*/
                  ; /*0x409ab0*/
                strcpy(v133, "Forward "); /*0x409ac0*/
              }
              if ( (v112 & 2) != 0 ) /*0x409ad7*/
              {
                v135 = (char *)&v685[0xC7] + 3; /*0x409ae0*/
                while ( *++v135 ) /*0x409aeb*/
                  ; /*0x409ae3*/
                strcpy(v135, "Backward "); /*0x409af3*/
              }
              if ( (v112 & 4) != 0 ) /*0x409b0c*/
              {
                v137 = (char *)&v685[0xC7] + 3; /*0x409b15*/
                while ( *++v137 ) /*0x409b20*/
                  ; /*0x409b18*/
                strcpy(v137, "Left "); /*0x409b28*/
              }
              if ( (v112 & 8) != 0 ) /*0x409b38*/
              {
                v139 = (char *)&v685[0xC7] + 3; /*0x409b41*/
                while ( *++v139 ) /*0x409b4c*/
                  ; /*0x409b44*/
                strcpy(v139, "Right "); /*0x409b5b*/
              }
              if ( v635->vtbl->GetMountedHorse(v635) ) /*0x409b74*/
              {
                v141 = (char *)&v685[0xC7] + 3; /*0x409b85*/
                while ( *++v141 ) /*0x409b90*/
                  ; /*0x409b88*/
                strcpy(v141, " Horse '"); /*0x409b9e*/
                v143 = (TESObjectREFR *)v635->vtbl->GetMountedHorse(v635); /*0x409bb8*/
                v144 = TESObjectREFR_GetName(v143); /*0x409bc1*/
                v145 = strlen(v144) + 1; /*0x409bd3*/
                v146 = (char *)&v685[0xC7] + 3; /*0x409bd5*/
                while ( *++v146 ) /*0x409be0*/
                  ; /*0x409bd8*/
                qmemcpy(v146, v144, v145); /*0x409be7*/
                v148 = (char *)&v685[0xC7] + 3; /*0x409bf7*/
                while ( *++v148 ) /*0x409c08*/
                  ; /*0x409c00*/
                strcpy(v148, "' "); /*0x409c17*/
                v150 = v635->vtbl->GetMountedHorse(v635); /*0x409c29*/
                v151 = v150->members.super.super.process->GetMovementFlags(v150->members.super.super.process); /*0x409c38*/
                if ( (v151 & 0x100) != 0 ) /*0x409c41*/
                {
                  v152 = (char *)&v685[0xC7] + 3; /*0x409c4a*/
                  while ( *++v152 ) /*0x409c58*/
                    ; /*0x409c50*/
                  strcpy(v152, "Walk "); /*0x409c60*/
                }
                if ( (v151 & 0x200) != 0 ) /*0x409c73*/
                {
                  v154 = (char *)&v685[0xC7] + 3; /*0x409c7c*/
                  while ( *++v154 ) /*0x409c88*/
                    ; /*0x409c80*/
                  strcpy(v154, "Run "); /*0x409c90*/
                }
                if ( (v151 & 0x400) != 0 ) /*0x409ca1*/
                {
                  v156 = (char *)&v685[0xC7] + 3; /*0x409caa*/
                  while ( *++v156 ) /*0x409cb8*/
                    ; /*0x409cb0*/
                  strcpy(v156, "Sneak "); /*0x409cc0*/
                }
                if ( (v151 & 0x800) != 0 ) /*0x409cdc*/
                {
                  v158 = (char *)&v685[0xC7] + 3; /*0x409ce5*/
                  while ( *++v158 ) /*0x409cf0*/
                    ; /*0x409ce8*/
                  strcpy(v158, "Swim "); /*0x409cf8*/
                }
                if ( (v151 & 0x1000) != 0 ) /*0x409d0b*/
                {
                  v160 = (char *)&v685[0xC7] + 3; /*0x409d14*/
                  while ( *++v160 ) /*0x409d1f*/
                    ; /*0x409d17*/
                  strcpy(v160, "Jump "); /*0x409d27*/
                }
                if ( (v151 & 0x2000) != 0 ) /*0x409d3a*/
                {
                  v162 = (char *)&v685[0xC7] + 3; /*0x409d43*/
                  while ( *++v162 ) /*0x409d4e*/
                    ; /*0x409d46*/
                  strcpy(v162, "Fly "); /*0x409d56*/
                }
                if ( (v151 & 0x4000) != 0 ) /*0x409d67*/
                {
                  v164 = (char *)&v685[0xC7] + 3; /*0x409d70*/
                  while ( *++v164 ) /*0x409d7b*/
                    ; /*0x409d73*/
                  strcpy(v164, "Fall "); /*0x409d83*/
                }
                if ( (v151 & 0x8000) != 0 ) /*0x409d96*/
                {
                  v166 = (char *)&v685[0xC7] + 3; /*0x409d9f*/
                  while ( *++v166 ) /*0x409daa*/
                    ; /*0x409da2*/
                  strcpy(v166, "Slide "); /*0x409db2*/
                }
                if ( (v151 & 0x10) != 0 ) /*0x409dcb*/
                {
                  v168 = (char *)&v685[0xC7] + 3; /*0x409dd4*/
                  while ( *++v168 ) /*0x409ddf*/
                    ; /*0x409dd7*/
                  strcpy(v168, "TurnLeft "); /*0x409de7*/
                }
                if ( (v151 & 0x20) != 0 ) /*0x409e00*/
                {
                  v170 = (char *)&v685[0xC7] + 3; /*0x409e09*/
                  while ( *++v170 ) /*0x409e18*/
                    ; /*0x409e10*/
                  strcpy(v170, "TurnRight "); /*0x409e20*/
                }
                if ( (v151 & 1) != 0 ) /*0x409e42*/
                {
                  v172 = (char *)&v685[0xC7] + 3; /*0x409e4b*/
                  while ( *++v172 ) /*0x409e58*/
                    ; /*0x409e50*/
                  strcpy(v172, "Forward "); /*0x409e60*/
                }
                if ( (v151 & 2) != 0 ) /*0x409e77*/
                {
                  v174 = (char *)&v685[0xC7] + 3; /*0x409e80*/
                  while ( *++v174 ) /*0x409e8b*/
                    ; /*0x409e83*/
                  strcpy(v174, "Backward "); /*0x409e93*/
                }
                if ( (v151 & 4) != 0 ) /*0x409eac*/
                {
                  v176 = (char *)&v685[0xC7] + 3; /*0x409eb5*/
                  while ( *++v176 ) /*0x409ec0*/
                    ; /*0x409eb8*/
                  strcpy(v176, "Left "); /*0x409ec8*/
                }
                if ( (v151 & 8) != 0 ) /*0x409ed8*/
                {
                  v178 = (char *)&v685[0xC7] + 3; /*0x409ee1*/
                  while ( *++v178 ) /*0x409eec*/
                    ; /*0x409ee4*/
                  strcpy(v178, "Right "); /*0x409efb*/
                }
              }
              v180 = (MobileObject *)v635; /*0x409f0a*/
              if ( Actor_GetCurrentAction(v635) != 0xFFFFFFFF ) /*0x409f18*/
              {
                v181 = (char *)&v685[0xC7] + 3; /*0x409f21*/
                while ( *++v181 ) /*0x409f2c*/
                  ; /*0x409f24*/
                strcpy(v181, " ACTION-> "); /*0x409f3a*/
                v183 = ActorCurrentActionNameTable[Actor_GetCurrentAction(v635)]; /*0x409f61*/
                v184 = strlen(v183) + 1; /*0x409f73*/
                v185 = (char *)&v685[0xC7] + 3; /*0x409f75*/
                while ( *++v185 ) /*0x409f80*/
                  ; /*0x409f78*/
                qmemcpy(v185, v183, v184); /*0x409f87*/
                v180 = (MobileObject *)v635; /*0x409f90*/
              }
              v653 = "OnGround"; /*0x409f96*/
              v654 = "Jumping"; /*0x409fa1*/
              v655 = "InAir"; /*0x409fac*/
              v656 = "Climbing"; /*0x409fb7*/
              v657 = "Flying"; /*0x409fc2*/
              v658 = "Swimming"; /*0x409fcd*/
              v659 = "Projectile"; /*0x409fd8*/
              v660 = "UserState2"; /*0x409fe3*/
              v661 = "UserState3"; /*0x409fee*/
              v662 = "UserState4"; /*0x409ff9*/
              v663 = "UserState5"; /*0x40a004*/
              CharProxy = MobileObject_GetCharProxy(v180); /*0x40a014*/
              if ( CharProxy ) /*0x40a018*/
              {
                v188 = (char *)&v685[0xC7] + 3; /*0x40a021*/
                while ( *++v188 ) /*0x40a02c*/
                  ; /*0x40a024*/
                strcpy(v188, " HK_STATE-> "); /*0x40a039*/
                v190 = (&v653)[hkCharacterContext_GetStateId((_DWORD *)CharProxy + 0x78)]; /*0x40a061*/
                v191 = strlen(v190) + 1; /*0x40a073*/
                v192 = (char *)&v685[0xC7] + 3; /*0x40a075*/
                while ( *++v192 ) /*0x40a080*/
                  ; /*0x40a078*/
                qmemcpy(v192, v190, v191); /*0x40a087*/
                v180 = (MobileObject *)v635; /*0x40a090*/
              }
              __asm { fild    [esp+544h+var_510] } /*0x40a094*/
              __asm
              {
                fstp    [esp+554h+Format+4]; float
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              if ( Dest[0] ) /*0x40a0b4*/
                InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Format, Format_4e, 1, 0xFFFFFFFF); /*0x40a0be*/
              else
                InterfaceMgr_DebugTextLine( /*0x40a0c5*/
                  (char)&savedregs,
                  a2,
                  a3,
                  GameHour,
                  EmptyString,
                  Format,
                  Format_4e,
                  1,
                  0xFFFFFFFF);
              v632 += v12; /*0x40a0ca*/
              v194 = v180->process; /*0x40a0ce*/
              unk03C = v194[3].unk03C; /*0x40a0d1*/
              if ( unk03C ) /*0x40a0dc*/
                _sprintf(Dest, "BoneLOD %d of %d", v194[3].unk040, *(_DWORD *)(unk03C + 0x40)); /*0x40a0f6*/
              else
                _sprintf(Dest, "BoneLOD NONE"); /*0x40a10d*/
              __asm { fild    [esp+544h+var_510] } /*0x40a115*/
              __asm { fstp    [esp+554h+Format+4]; float }
              __asm
              {
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcg, Format_4ca, 1, 0xFFFFFFFF); /*0x40a135*/
              v632 += v12; /*0x40a13d*/
            }
          }
          v109 = MEMORY[0xB333B4]; /*0x40a141*/
          v196 = reference; /*0x40a147*/
          v636 = (void *)1; /*0x40a14e*/
          if ( MEMORY[0xB333B4] != (TESChildCELL *)reference ) /*0x40a156*/
            goto LABEL_297; /*0x40a156*/
          if ( !reference->inventoryPC ) /*0x40a15c*/
            v636 = (void *)2; /*0x40a165*/
          while ( 2 )
          {
            if ( v109 == (TESChildCELL *)v196 ) /*0x40a177*/
            {
              if ( v196->inventoryPC ) /*0x40a17d*/
              {
                strcpy(Dest, "Inventory PC"); /*0x40a192*/
                _EDI = v196->defaultAnimData; /*0x40a1ba*/
              }
              else
              {
                v198 = &off_A3069C; /*0x40a1c9*/
                if ( v636 != (void *)2 ) /*0x40a1ce*/
                  v198 = &off_A30698; /*0x40a1d0*/
                _sprintf(Dest, "%s Person", (const char *)v198); /*0x40a1e3*/
                _EDI = (ActorAnimData *)PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, v636 == (void *)2); /*0x40a1fd*/
              }
              __asm { fild    [esp+544h+var_510] } /*0x40a1ff*/
              __asm { fstp    [esp+554h+Format+4]; float }
              __asm
              {
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatch, Format_4cb, 1, 0xFFFFFFFF); /*0x40a21f*/
              v632 += v12; /*0x40a227*/
            }
            else
            {
LABEL_297:
              _EDI = (ActorAnimData *)(*((int (__thiscall **)(TESChildCELL *))v109->vtbl + 0x59))(v109); /*0x40a22d*/
            }
            *(float *)&v199 = 0.0; /*0x40a239*/
            *(float *)&v638 = 0.0; /*0x40a23b*/
            do
            {
              v634 = COERCE_FLOAT(ActorAnimData_GetNormalizedSequenceSlot(_EDI, v199)); /*0x40a24a*/
              if ( v634 != 0.0 )
              {
                AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(_EDI, v638); /*0x40a25b*/
                v201 = AnimGroupFromField8Value; /*0x40a264*/
                v619 = *(_DWORD *)(LODWORD(v634) + 0xC); /*0x40a26a*/
                Format_8bm = *(const char **)&animGroupInfos_ptr[0x24 * AnimKey_GetGroupID(AnimGroupFromField8Value)];// Debug display callsite hit in animation search set; peripheral UI text output, not an animation-state owner. /*0x40a27e*/
                Format_4cc = (&off_B102C8)[AnimKey_GetWeaponPrefix(v201)]; /*0x40a28f*/
                MovementPrefix = AnimKey_GetMovementPrefix(v201); /*0x40a291*/
                _sprintf(
                  Dest,
                  "%s -> %s/%s/%s, Count: %d",
                  off_B108EC[v638],
                  (&off_B102B8)[MovementPrefix],
                  Format_4cc,
                  Format_8bm,
                  v619);
                __asm { fild    [esp+560h+var_510] } /*0x40a2bf*/
                __asm { fstp    [esp+554h+Format+4]; float }
                __asm
                {
                  fild    iDebugTextLeftRightOffset
                  fstp    [esp+554h+Format]; float
                }
                InterfaceMgr_DebugTextLine( /*0x40a2e2*/
                  (char)&savedregs,
                  a2,
                  a3,
                  GameHour,
                  Dest,
                  Formatci,
                  Format_4cd,
                  1,
                  0xFFFFFFFF);
                v199 = v638; /*0x40a2e7*/
                v632 += v12; /*0x40a2ee*/
              }
              v638 = ++v199; /*0x40a2f8*/
            }
            while ( v199 < 5 );
            v203 = 0; /*0x40a313*/
            v639 = *(_QWORD *)&g_zeroNiPoint3; /*0x40a319*/
            v640 = MEMORY[0xB3F9B0][0]; /*0x40a321*/
            if ( !v635 ) /*0x40a325*/
              goto LABEL_314; /*0x40a325*/
            v204 = ActorAnimData_GetAnimGroupFromField8Value(_EDI, 0); /*0x40a32e*/
            v205 = (unsigned int)(AnimKey_GetGroupID(v204) - 7) <= 3; /*0x40a348*/
            GetMovementFlags = (int (*)(void))v635->members.super.process->GetMovementFlags; /*0x40a34b*/
            if ( v205 ) /*0x40a351*/
            {
              if ( (GetMovementFlags() & 0x800) != 0 ) /*0x40a359*/
              {
                v207 = sub_5E3AD0((TESObjectREFR *)v635); /*0x40a35d*/
                goto LABEL_313; /*0x40a362*/
              }
              v208 = v635->members.super.process->GetMovementFlags(v635->members.super.process); /*0x40a36f*/
              v209 = (TESObjectREFR *)v635; /*0x40a375*/
              if ( (v208 & 0x2000) != 0 ) /*0x40a379*/
                goto LABEL_307; /*0x40a379*/
              v207 = Actor_CalcFastTravelSpeed((TESObjectREFR *)v635); /*0x40a382*/
            }
            else if ( (GetMovementFlags() & 0x800) != 0 ) /*0x40a38f*/
            {
              v207 = sub_5E3920((TESObjectREFR *)v635); /*0x40a395*/
            }
            else
            {
              v210 = v635->members.super.process->GetMovementFlags(v635->members.super.process); /*0x40a3a7*/
              v209 = (TESObjectREFR *)v635; /*0x40a3ad*/
              if ( (v210 & 0x2000) != 0 ) /*0x40a3b1*/
              {
LABEL_307:
                v207 = sub_5E3C80(v209); /*0x40a37b*/
                goto LABEL_313; /*0x40a380*/
              }
              v207 = sub_5E3590(v635); /*0x40a3ba*/
            }
LABEL_313:
            v203 = Double_To_SInt32(v207); /*0x40a3bf*/
LABEL_314:
            LODWORD(v634) = (unsigned __int16)ActorAnimData_GetAnimGroupFromField8Value(_EDI, 0); /*0x40a3c6*/
            ActorAnimData_GetMovementVector((float *)&_EDI->unk00, a3, (float *)&v639, (Actor *)MEMORY[0xB333B4], 0, 0); /*0x40a3e8*/
            __asm /*0x40a3f1*/
            {
              fld     dword ptr [edi+0C0h]
              fstp    [esp+544h+slot]
              fld     dword ptr [edi+0BCh]
              fstp    [esp+544h+var_4D4]
              fld     dword ptr [edi+94h]
              fstp    [esp+544h+secondaryGeometryCount]
            }
            GameHour = NiPoint3_Length((float *)&v639); /*0x40a40f*/
            __asm { fstp    qword ptr [esp+54Ch+Format+8] } /*0x40a41b*/
            sub_472330(_EDI, SLODWORD(v634)); /*0x40a422*/
            __asm { fld     [esp+550h+slot] } /*0x40a427*/
            __asm
            {
              fstp    qword ptr [esp+56Ch+var_55C]
              fld     [esp+56Ch+var_4D4]
              fstp    qword ptr [esp+56Ch+var_564]
              fld     [esp+56Ch+secondaryGeometryCount]
              fstp    [esp+56Ch+var_56C]
            }
            _sprintf( /*0x40a455*/
              Dest,
              "time %.2f move %.1f attack %.1f speed %d/%d delta %.1f",
              v286,
              v291,
              v302,
              v211,
              v203,
              Format_8bn);
            __asm { fild    [esp+574h+var_510] } /*0x40a45a*/
            __asm { fstp    [esp+554h+Format+4]; float }
            __asm
            {
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcj, Format_4ce, 1, 0xFFFFFFFF); /*0x40a47d*/
            v632 += v12; /*0x40a482*/
            for ( i = ActorAnimData_FindFirstActiveAnimGroupSequence(_EDI); /*0x40a494*/
                  i;
                  i = ActorAnimData_FindNextActiveAnimGroupSequence(_EDI, i) )
            {
              v213 = *(_DWORD *)(i + 0x14); /*0x40a4a0*/
              __asm { fld     ds:kTerrainLODQuadRayDirectionZ } /*0x40a4a3*/
              v214 = *(_DWORD *)(v213 + 8); /*0x40a4a9*/
              __asm { fstp    [esp+544h+slot] } /*0x40a4ac*/
              if ( v214 ) /*0x40a4b2*/
              {
                v215 = *(_BYTE *)(v213 + 0xC); /*0x40a4b4*/
                if ( v215 < *(_BYTE *)(v214 + 0xD) ) /*0x40a4bb*/
                {
                  sub_404E90(v214, v215); /*0x40a4be*/
                  __asm { fstp    [esp+544h+slot] } /*0x40a4c3*/
                }
              }
              __asm { fld     dword ptr [edi+94h] } /*0x40a4c7*/
              __asm { fstp    [esp+548h+secondaryGeometryCount] }
              __asm
              {
                fld     [esp+548h+secondaryGeometryCount]
                fstp    [esp+548h+var_548]; float
              }
              BSAnimGroupSequence_SampleUpdate(i, v620); /*0x40a4db*/
              __asm { fld     ds:flt_A7DEB4 } /*0x40a4e0*/
              __asm { fchs }
              v216 = off_B02C58[*(_DWORD *)(i + 0x44)]; /*0x40a4ee*/
              __asm { fucompp } /*0x40a4f5*/
              __asm { fnstsw  ax }
              v218 = __SETP__(HIBYTE(_AX) & 0x44, 0); /*0x40a4fc*/
              v219 = off_B02C74[*(_DWORD *)(i + 0x24)]; /*0x40a502*/
              if ( v218 ) /*0x40a509*/
              {
                __asm { fld     dword ptr [edi+94h] } /*0x40a53e*/
                v643 = *(const char **)(i + 8); /*0x40a544*/
                __asm /*0x40a548*/
                {
                  fstp    [esp+54Ch+secondaryGeometryCount]
                  fld     [esp+54Ch+slot]
                  fstp    qword ptr [esp+54Ch+Format+8]
                }
                Format_4cg = v219; /*0x40a553*/
                Formatcl = v216; /*0x40a554*/
                BSAnimGroupSequence_GetDuration(i); /*0x40a556*/
                __asm { fstp    qword ptr [esp+560h+var_55C] } /*0x40a55e*/
                __asm
                {
                  fld     [esp+560h+secondaryGeometryCount]
                  fstp    [esp+560h+var_564+4]; float
                }
                GameHour = BSAnimGroupSequence_SampleUpdate(i, v293); /*0x40a56b*/
                __asm { fstp    qword ptr [esp+564h+var_564] } /*0x40a57a*/
                _sprintf( /*0x40a58b*/
                  Dest,
                  "'%s' time %.2f/%.2f state %s/%s ease %.2f",
                  v643,
                  v292,
                  v304,
                  Formatcl,
                  Format_4cg,
                  Format_8bp);
              }
              else
              {
                __asm { fld     [esp+54Ch+slot] } /*0x40a50b*/
                v637 = *(const char **)(i + 8); /*0x40a50f*/
                __asm { fstp    qword ptr [esp+54Ch+Format+8] } /*0x40a513*/
                Format_4cf = v219; /*0x40a516*/
                Formatck = v216; /*0x40a517*/
                GameHour = BSAnimGroupSequence_GetDuration(i); /*0x40a519*/
                __asm { fstp    qword ptr [esp+55Ch+var_55C] } /*0x40a523*/
                _sprintf( /*0x40a534*/
                  Dest,
                  "'%s' time -INF/%.2f state %s/%s ease %.2f",
                  v637,
                  v303,
                  Formatck,
                  Format_4cf,
                  Format_8bo);
              }
              __asm { fild    [esp+544h+var_510] } /*0x40a593*/
              __asm { fstp    [esp+554h+Format+4]; float }
              __asm
              {
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcm, Format_4ch, 1, 0xFFFFFFFF); /*0x40a5b3*/
              v632 += v12; /*0x40a5b8*/
            }
            v72 = v636 == (void *)1; /*0x40a5d1*/
            v636 = (char *)v636 + 0xFFFFFFFF; /*0x40a5d1*/
            v109 = MEMORY[0xB333B4]; /*0x40a5d6*/
            if ( !v72 ) /*0x40a5dc*/
            {
              v196 = reference; /*0x40a170*/
              continue; /*0x40a170*/
            }
            break;
          }
LABEL_323:
          if ( !v635 ) /*0x40a5e7*/
          {
            v220 = (int)v109; /*0x40a5ed*/
            v638 = (int)v109; /*0x40a5f1*/
            if ( *(float *)&v109 != 0.0 ) /*0x40a5f5*/
            {
              v221 = 0; /*0x40a5fb*/
              v635 = 0; /*0x40a5fd*/
              while ( v221 ) /*0x40a603*/
              {
                if ( v221 == (Actor *)1 ) /*0x40a685*/
                {
                  v227 = (*(int (__thiscall **)(int))(*(_DWORD *)v220 + 0x154))(v220); /*0x40a695*/
                  if ( v227 ) /*0x40a699*/
                    v228 = *(NiObject **)(v227 + 0xC); /*0x40a69b*/
                  else
                    v228 = 0; /*0x40a6a0*/
                  *(float *)&v226 = COERCE_FLOAT(NiRTTI_Cast(&stru_B3CAC0, v228)); /*0x40a6ad*/
                  v634 = *(float *)&v226; /*0x40a6af*/
LABEL_336:
                  if ( *(float *)&v226 != 0.0 ) /*0x40a6b8*/
                  {
                    v72 = HIWORD(v226[8].members.m_uiRefCount) == 0; /*0x40a6be*/
                    *(float *)&v636 = 0.0; /*0x40a6c3*/
                    if ( !v72 ) /*0x40a6cb*/
                    {
                      v229 = (unsigned int)v636; /*0x40a6d1*/
                      do /*0x40a7ec*/
                      {
                        vftable = v226[8].__vftable; /*0x40a6d5*/
                        _ESI = *((_DWORD **)&vftable->super.Destructor + v229); /*0x40a6d8*/
                        if ( _ESI ) /*0x40a6dd*/
                        {
                          if ( _ESI[0x11] ) /*0x40a6e3*/
                          {
                            __asm { fld     dword ptr source } /*0x40a6ed*/
                            __asm { fstp    [esp+548h+var_548]; float }
                            GameHour = BSAnimGroupSequence_SampleUpdate( /*0x40a6f9*/
                                         *((_DWORD *)&vftable->super.Destructor + v229),
                                         v621);
                            __asm { fld     ds:flt_A7DEB4 } /*0x40a6fe*/
                            v232 = _ESI[0x11]; /*0x40a704*/
                            __asm /*0x40a707*/
                            {
                              fchs
                              fucompp
                              fnstsw  ax
                            }
                            if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x40a710*/
                            {
                              __asm { fld     dword ptr [esi+30h] } /*0x40a74c*/
                              v234 = off_B02C74[_ESI[9]]; /*0x40a752*/
                              __asm /*0x40a759*/
                              {
                                fstp    [esp+544h+secondaryGeometryCount]
                                fld     dword ptr [esi+2Ch]
                              }
                              v235 = off_B02C58[v232]; /*0x40a760*/
                              v236 = (const char *)_ESI[2]; /*0x40a767*/
                              __asm /*0x40a76a*/
                              {
                                fstp    [esp+544h+var_4D4]
                                fld     [esp+544h+secondaryGeometryCount]
                              }
                              v622 = v234; /*0x40a772*/
                              __asm { fsub    [esp+548h+var_4D4] } /*0x40a773*/
                              Format_8bq = v235; /*0x40a777*/
                              __asm /*0x40a77d*/
                              {
                                fstp    qword ptr [esp+558h+Format]
                                fld     dword ptr source
                                fstp    [esp+558h+var_55C+4]; float
                              }
                              GameHour = BSAnimGroupSequence_SampleUpdate((int)_ESI, v308); /*0x40a78a*/
                              __asm { fstp    qword ptr [esp+55Ch+var_55C] } /*0x40a792*/
                              _sprintf(Dest, "'%s' time %.2f/%.2f state %s/%s", v236, v305, Formatco, Format_8bq, v622); /*0x40a7a3*/
                              *(float *)&v226 = v634; /*0x40a7a8*/
                            }
                            else
                            {
                              __asm { fld     dword ptr [esi+30h] } /*0x40a715*/
                              __asm { fsub    dword ptr [esi+2Ch] }
                              __asm { fstp    qword ptr [esp+554h+Format] }
                              _sprintf( /*0x40a742*/
                                Dest,
                                "'%s' time -INF/%.2f state %s/%s",
                                (const char *)_ESI[2],
                                Formatcn,
                                off_B02C58[v232],
                                off_B02C74[_ESI[9]]);
                            }
                            __asm { fild    [esp+544h+var_510] } /*0x40a7af*/
                            __asm { fstp    [esp+554h+Format+4]; float }
                            __asm
                            {
                              fild    iDebugTextLeftRightOffset
                              fstp    [esp+554h+Format]; float
                            }
                            InterfaceMgr_DebugTextLine( /*0x40a7cf*/
                              (char)&savedregs,
                              a2,
                              a3,
                              GameHour,
                              Dest,
                              Formatcp,
                              Format_4ci,
                              1,
                              0xFFFFFFFF);
                            v229 = (unsigned int)v636; /*0x40a7d4*/
                            v632 += v12; /*0x40a7db*/
                          }
                        }
                        m_uiRefCount_high = HIWORD(v226[8].members.m_uiRefCount); /*0x40a7df*/
                        v636 = (void *)++v229; /*0x40a7e8*/
                      }
                      while ( v229 < m_uiRefCount_high ); /*0x40a7ec*/
                    }
                    __asm { fild    [esp+544h+var_510] } /*0x40a7f2*/
                    __asm
                    {
                      fstp    [esp+554h+Format+4]; float
                      fild    iDebugTextLeftRightOffset
                      fstp    [esp+554h+Format]; float
                    }
                    InterfaceMgr_DebugTextLine( /*0x40a80f*/
                      (char)&savedregs,
                      a2,
                      a3,
                      GameHour,
                      EmptyString,
                      Formatcq,
                      Format_4cj,
                      1,
                      0xFFFFFFFF);
                    v632 += v12; /*0x40a817*/
                  }
LABEL_347:
                  v220 = v638; /*0x40a81b*/
                  v221 = v635; /*0x40a81f*/
                }
                v221 = (Actor *)((char *)v221 + 1); /*0x40a823*/
                v635 = v221; /*0x40a829*/
                if ( (int)v221 >= 2 ) /*0x40a82d*/
                  goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a82d*/
              }
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v220 + 0x154))(v220) ) /*0x40a60f*/
              {
                v222 = (*(int (__thiscall **)(int))(*(_DWORD *)v220 + 0x154))(v220); /*0x40a625*/
                if ( NiNode_GetChildAtIndex(v222, 0) ) /*0x40a629*/
                {
                  v223 = (*(int (__thiscall **)(int))(*(_DWORD *)v220 + 0x154))(v220); /*0x40a642*/
                  if ( *(_DWORD *)(NiNode_GetChildAtIndex(v223, 0) + 0xC) ) /*0x40a64b*/
                  {
                    v224 = (*(int (__thiscall **)(int))(*(_DWORD *)v638 + 0x154))(v638); /*0x40a663*/
                    v225 = NiNode_GetChildAtIndex(v224, 0); /*0x40a667*/
                    *(float *)&v226 = COERCE_FLOAT(NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v225 + 0xC))); /*0x40a67a*/
                    v634 = *(float *)&v226; /*0x40a67c*/
                    goto LABEL_336; /*0x40a680*/
                  }
                }
              }
              goto LABEL_347; /*0x40a64f*/
            }
          }
InterfaceMgr_ShowDebugText___def_407DFE:
          v284 = v632; /*0x40c01f*/
          for ( j = v633; v632 < unk_B333FC; v632 += v12 ) /*0x40c02d*/
          {
            __asm { fild    [esp+544h+var_510] } /*0x40c030*/
            __asm
            {
              fstp    [esp+554h+Format+4]; float
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine( /*0x40c04d*/
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              EmptyString,
              Formatex,
              Format_4eo,
              1,
              0xFFFFFFFF);
          }
          for ( unk_B333FC = v284; (int)v633 < unk_B333F8; v633 = (signed int *)((char *)v633 + v12) ) /*0x40c077*/
          {
            __asm { fild    [esp+544h+var_50C] } /*0x40c080*/
            __asm { fstp    [esp+554h+Format+4]; float }
            v641.m_data = (char *)(0x500 - iDebugTextLeftRightOffset); /*0x40c09a*/
            __asm /*0x40c09e*/
            {
              fild    [esp+554h+var_4E8.m_data]
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine( /*0x40c0aa*/
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              EmptyString,
              Formatey,
              Format_4ep,
              3,
              0xFFFFFFFF);
          }
          unk_B333F8 = (int)j; /*0x40c0c4*/
          break; /*0x40c0c4*/
        case 2:
          sub_435600((int)MEMORY[0xB33A1C], a2, a3, GameHour, v12, &v632, (int *)&v633, 0); /*0x40a891*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a896*/
        case 3:
          sub_435600((int)MEMORY[0xB33A1C], a2, a3, GameHour, v12, &v632, (int *)&v633, 1); /*0x40a8ae*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a8b3*/
        case 4:
          if ( unk_B35B90 ) /*0x40a863*/
            sub_4BE5B0((_DWORD *)unk_B35B90, (char)&savedregs, a2, a3, GameHour, v12, &v632, &v633); /*0x40a874*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a879*/
        case 5:
          sub_4FC360(GameHour, v12, &v632, (int *)&v633); /*0x40a8c3*/
          sub_4FAAF0(); /*0x40a8c8*/
          if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 ) /*0x40a8db*/
            goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a8db*/
          return; /*0x40a8db*/
        case 6:
          sub_61EB80(a3, GameHour, (TESObjectREFR *)MEMORY[0xB333B4], v12, &v632, (signed int *)&v633); /*0x40a8f7*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a8ff*/
        case 7:
          sub_4AA1F0( /*0x40a96a*/
            v12,
            COERCE_FLOAT(&savedregs),
            *(float *)&a1,
            *(float *)&v10,
            MEMORY[0xB333B4],
            v12,
            &v632,
            (int *)&v633);
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a972*/
        case 8:
          Magic_ShowDebugText(a3, GameHour, (TESObjectREFR *)MEMORY[0xB333B4], v12, &v632, (int *)&v633); /*0x40a915*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a91d*/
        case 9:
          sub_5F8890(a1, v12, v10, (TESObjectREFR *)MEMORY[0xB333B4], v12, &v632, &v633); /*0x40a933*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a93b*/
        case 0xA:
          DebugOverlay_DrawPlayerSkillProgression((char)&savedregs, a3, GameHour, v12, &v632, (signed int *)&v633); /*0x40a94b*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a953*/
        case 0xB:
          sub_6A9110(a2, a3, GameHour, *(_DWORD *)(a1 + 0x24), v12, &v632, &v633); /*0x40a986*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a98e*/
        case 0xD:
          Renderer_CopyStatisticsCounters(&v643, &v637, &v634, &v636, &v638, &v635, &v651, &v652, &v650, &v641, &v649); /*0x40a9f8*/
          inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x40a9fd*/
          v239 = v643; /*0x40aa08*/
          v240 = inited; /*0x40aa15*/
          v647 = LODWORD(MEMORY[0xB3F9B0][0x9AD]) + LODWORD(MEMORY[0xB3F9B0][0x42]); /*0x40aa24*/
          v648 = MEMORY[0xB3F9B0][0x9A9]; /*0x40aa38*/
          _sprintf(Dest, "Geometry %d (%d)", v643, v637); /*0x40aa3f*/
          __asm { fild    [esp+580h+var_510] } /*0x40aa44*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcr, Format_4ck, 1, 0xFFFFFFFF); /*0x40aa67*/
          v632 += v12; /*0x40aa6c*/
          if ( *(float *)&v239 == 0.0 ) /*0x40aa79*/
          {
            __asm { fldz } /*0x40aaa7*/
          }
          else
          {
            *(float *)&v637 = v634; /*0x40aa7f*/
            __asm { fild    [esp+544h+secondaryGeometryCount] } /*0x40aa83*/
            if ( v634 < 0.0 ) /*0x40aa87*/
              __asm { fadd    ds:flt_A2FC78 } /*0x40aa89*/
            v637 = v239; /*0x40aa93*/
            __asm { fild    [esp+544h+secondaryGeometryCount] } /*0x40aa97*/
            if ( (int)v239 < 0 ) /*0x40aa9b*/
              __asm { fadd    ds:flt_A2FC78 } /*0x40aa9d*/
            __asm { fdivp   st(1), st } /*0x40aaa3*/
          }
          __asm /*0x40aaac*/
          {
            fstp    [esp+54Ch+secondaryGeometryCount]
            fld     [esp+54Ch+secondaryGeometryCount]
          }
          __asm { fstp    qword ptr [esp+54Ch+Format+8] }
          _sprintf(Dest, "Tri %d  : %.2f", v634, Format_8br);
          __asm { fild    [esp+558h+var_510] } /*0x40aaca*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcs, Format_4cl, 1, 0xFFFFFFFF); /*0x40aaed*/
          v632 += v12; /*0x40aaf2*/
          if ( *(float *)&v239 == 0.0 ) /*0x40aaff*/
          {
            __asm { fldz } /*0x40ab2b*/
          }
          else
          {
            v637 = (const char *)v636; /*0x40ab05*/
            __asm { fild    [esp+544h+secondaryGeometryCount] } /*0x40ab09*/
            if ( (int)v636 < 0 ) /*0x40ab0d*/
              __asm { fadd    ds:flt_A2FC78 } /*0x40ab0f*/
            v637 = v239; /*0x40ab17*/
            __asm { fild    [esp+544h+secondaryGeometryCount] } /*0x40ab1b*/
            if ( (int)v239 < 0 ) /*0x40ab1f*/
              __asm { fadd    ds:flt_A2FC78 } /*0x40ab21*/
            __asm { fdivp   st(1), st } /*0x40ab27*/
          }
          __asm /*0x40ab30*/
          {
            fstp    [esp+54Ch+secondaryGeometryCount]
            fld     [esp+54Ch+secondaryGeometryCount]
          }
          __asm { fstp    qword ptr [esp+54Ch+Format+8] }
          _sprintf(Dest, "Pass %d  : %.2f", v636, Format_8bs);
          __asm { fild    [esp+558h+var_510] } /*0x40ab4e*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatct, Format_4cm, 1, 0xFFFFFFFF); /*0x40ab71*/
          v632 += v12; /*0x40ab7a*/
          _sprintf(Dest, "TriPasses %d", v638); /*0x40ab8c*/
          __asm { fild    [esp+564h+var_510] } /*0x40ab91*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcu, Format_4cn, 1, 0xFFFFFFFF); /*0x40abb4*/
          __asm { fild    [esp+558h+var_504] } /*0x40abb9*/
          v632 += v12; /*0x40abc1*/
          if ( (int)v635 < 0 ) /*0x40abc7*/
            __asm { fadd    ds:flt_A2FC78 } /*0x40abc9*/
          __asm { fmul    ds:dbl_A30550 } /*0x40abcf*/
          __asm
          {
            fstp    [esp+54Ch+secondaryGeometryCount]
            fld     [esp+54Ch+secondaryGeometryCount]
            fstp    qword ptr [esp+54Ch+Format+8]
          }
          _sprintf(Dest, "QueueMem %.2f kb", Format_8bt); /*0x40abf0*/
          __asm { fild    [esp+554h+var_510] } /*0x40abf5*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcv, Format_4co, 1, 0xFFFFFFFF); /*0x40ac18*/
          __asm { fild    [esp+558h+var_4CC] } /*0x40ac1d*/
          v632 += v12; /*0x40ac2b*/
          if ( v647 < 0 ) /*0x40ac31*/
            __asm { fadd    ds:flt_A2FC78 } /*0x40ac33*/
          __asm { fld     ds:dbl_A30530 } /*0x40ac39*/
          __asm
          {
            fmul    st(1), st
            fxch    st(1)
            fstp    [esp+558h+var_4CC]
            fild    [esp+558h+var_4C8]
          }
          if ( v648 < 0.0 ) /*0x40ac5a*/
            __asm { fadd    ds:flt_A2FC78 } /*0x40ac5c*/
          __asm { fmulp   st(1), st } /*0x40ac62*/
          __asm
          {
            fstp    [esp+55Ch+var_4C8]
            fld     [esp+55Ch+var_4CC]
            fld     st
            fld     [esp+55Ch+var_4C8]
            fld     st
            faddp   st(2), st
            fxch    st(1)
            fstp    qword ptr [esp+55Ch+Format+8]
            fxch    st(1)
            fstp    qword ptr [esp+55Ch+Format]
            fstp    qword ptr [esp+55Ch+var_55C]
          }
          _sprintf(Dest, "TextureMem S %.2f + R %.2f = T %.2f Mb", v306, Formatcw, Format_8bu); /*0x40ac9c*/
          __asm { fild    [esp+564h+var_510] } /*0x40aca1*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcx, Format_4cp, 1, 0xFFFFFFFF); /*0x40acc4*/
          v632 += v12; /*0x40acde*/
          _sprintf(Dest, "Occlusion Geom: %d , %d tri , %d wait loops", v651, v652, v650);
          __asm { fild    [esp+56Ch+var_510] } /*0x40acf7*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcy, Format_4cq, 1, 0xFFFFFFFF); /*0x40ad1a*/
          v632 += v12; /*0x40ad26*/
          _sprintf(Dest, "Sun Occlusion Wait Frames: %d", v649);
          __asm { fild    [esp+564h+var_510] } /*0x40ad3d*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatcz, Format_4cr, 1, 0xFFFFFFFF); /*0x40ad60*/
          v632 += v12; /*0x40ad65*/
          if ( v240 )
          {
            _sprintf(Dest, "Sun Occlusion Pixels: %d", *((_DWORD *)v240 + 0x2F));
            __asm { fild    [esp+550h+var_510] } /*0x40ad89*/
            __asm { fstp    [esp+554h+Format+4]; float }
            __asm
            {
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatda, Format_4cs, 1, 0xFFFFFFFF); /*0x40adac*/
            v632 += v12; /*0x40adb4*/
          }
          _sprintf(Dest, "Bound Volume Occlusion Wait Loops: %d", v641.m_data);
          __asm { fild    [esp+550h+var_510] } /*0x40adcf*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdb, Format_4ct, 1, 0xFFFFFFFF); /*0x40adf2*/
          v632 += v12; /*0x40adf7*/
          if ( v240 )
          {
            if ( MEMORY[0xB333B4] )
            {
              if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))MEMORY[0xB333B4]->vtbl + 0x64))(MEMORY[0xB333B4]) )
              {
                if ( MEMORY[0xB333B4] != (TESChildCELL *)reference )
                {
                  v241 = sub_7AA4A0(v240, (int)MEMORY[0xB333B4][3].vtbl); /*0x40ae2d*/
                  _sprintf(Dest, "Bound Volume Occlusion Pixels: %d", v241);
                  __asm { fild    [esp+550h+var_510] } /*0x40ae45*/
                  __asm { fstp    [esp+554h+Format+4]; float }
                  __asm
                  {
                    fild    iDebugTextLeftRightOffset
                    fstp    [esp+554h+Format]; float
                  }
                  InterfaceMgr_DebugTextLine( /*0x40ae68*/
                    (char)&savedregs,
                    a2,
                    a3,
                    GameHour,
                    Dest,
                    Formatdc,
                    Format_4cu,
                    1,
                    0xFFFFFFFF);
                  v632 += v12; /*0x40ae70*/
                }
              }
            }
          }
          v242 = *(_WORD *)(GetShadowSceneNode(0) + 0xF0); /*0x40ae7b*/
          ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x40ae84*/
          v244 = sub_7C6740(ShadowSceneNode); /*0x40ae8e*/
          _sprintf(Dest, "Active Lights: %d / %d", v244, v242);
          __asm { fild    [esp+544h+var_510] } /*0x40aeb3*/
          __asm
          {
            fstp    [esp+554h+Format+4]; float
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdd, Format_4cv, 1, 0xFFFFFFFF); /*0x40aed3*/
          v632 += v12; /*0x40aee3*/
          _sprintf(Dest, "Grass : %i g, %i i", unk_B43348, unk_B4334C);
          __asm { fild    [esp+568h+var_510] } /*0x40aefb*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatde, Format_4cw, 1, 0xFFFFFFFF); /*0x40af1e*/
          v632 += v12; /*0x40af2e*/
          _sprintf(Dest, "DistantLOD : %i g, %i i", unk_B42D5C, unk_B42D60);
          __asm { fild    [esp+568h+var_510] } /*0x40af46*/
          __asm { fstp    [esp+554h+Format+4] }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdf, Format_4cx, 1, 0xFFFFFFFF); /*0x40af69*/
          goto LABEL_468; /*0x40af69*/
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
          v641.m_data = (char *)(iDebugText - 0xE); /*0x40af71*/
          _sprintf(Dest, "SOURCE TEXTURES: PAGE %d", iDebugText - 0xE + 1);
          __asm { fild    [esp+550h+var_510] } /*0x40af8b*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdg, Format_4cy, 1, 0xFFFFFFFF); /*0x40afae*/
          v632 += v12; /*0x40afb3*/
          if ( unk_B33408 || *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 ) /*0x40afd6*/
            goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40afd6*/
          _memset((int)v685, 0, sizeof(v685)); /*0x40afeb*/
          v245 = (NiObject *)unk_B3F700; /*0x40aff0*/
          if ( !unk_B3F700 ) /*0x40affb*/
            goto LABEL_412; /*0x40affb*/
          do /*0x40b0a1*/
          {
            if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)stru_B3F95C, v245) ) /*0x40b007*/
            {
              v246 = v245[4].members.m_uiRefCount; /*0x40b017*/
              if ( v246 ) /*0x40b01c*/
              {
                if ( bShowMenuTextureUse || !sub_4053E0(v246, (int)v245) ) /*0x40b028*/
                {
                  v247 = 0xFFFFFFFF; /*0x40b034*/
                  v248 = 0; /*0x40b037*/
                  while ( v247 == 0xFFFFFFFF ) /*0x40b043*/
                  {
                    v249 = v685[v248]; /*0x40b045*/
                    if ( !v249 /*0x40b05d*/
                      || (v250 = *(_DWORD *)(v249 + 0x24)) != 0 && *(_DWORD *)(v250 + 0x60) < *(_DWORD *)(v246 + 0x60) )
                    {
                      v247 = v248; /*0x40b05f*/
                    }
                    if ( ++v248 >= 0xC8 ) /*0x40b069*/
                    {
                      if ( v247 == 0xFFFFFFFF ) /*0x40b06e*/
                        goto LABEL_411; /*0x40b06e*/
                      break; /*0x40b06e*/
                    }
                  }
                  for ( k = 0xC7; k > v247; --k ) /*0x40b077*/
                    v685[k] = v685[k - 1]; /*0x40b087*/
                  v685[v247] = (int)v245; /*0x40b095*/
                }
              }
            }
LABEL_411:
            v245 = (NiObject *)v245[5].members.m_uiRefCount; /*0x40b09c*/
          }
          while ( v245 ); /*0x40b0a1*/
LABEL_412:
          v252 = 0x14 * (int)v641.m_data; /*0x40b0a7*/
          v253 = 0x14 * (int)v641.m_data + 0x14; /*0x40b0b2*/
          v636 = (void *)(0x14 * (int)v641.m_data); /*0x40b0b7*/
          v649 = v253; /*0x40b0bb*/
          if ( 0x14 * (int)v641.m_data < v253 )
          {
            do
            {
              v254 = (_DWORD *)v685[v252]; /*0x40b0d0*/
              if ( v254 )
              {
                v255 = v254[0xD]; /*0x40b0df*/
                v256 = v254[9]; /*0x40b0e4*/
                if ( v255 ) /*0x40b0e7*/
                {
                  v257 = (const char *)v254[0xD]; /*0x40b0e9*/
                  v641.m_data = (char *)(v255 + 1); /*0x40b0ee*/
                  v258 = (int)&v257[strlen(v257) - v255]; /*0x40b0fb*/
                  if ( v258 > 0x19 ) /*0x40b102*/
                    v255 = v255 + v258 - 0x19; /*0x40b104*/
                }
                v259 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v254 + 0x50))(v254, *(_DWORD *)(v256 + 0x60) >> 0xA); /*0x40b116*/
                v260 = (*(int (__thiscall **)(_DWORD *, int))(*v254 + 0x4C))(v254, v259); /*0x40b120*/
                _sprintf(Dest, "%d: %s, %dx%d, %dkb", (char *)v636 + 1, (const char *)v255, v260, Format_8bv, v623);
                __asm { fild    [esp+560h+var_510] } /*0x40b13e*/
                __asm { fstp    [esp+554h+Format+4]; float }
                __asm
                {
                  fild    iDebugTextLeftRightOffset
                  fstp    [esp+554h+Format]; float
                }
                InterfaceMgr_DebugTextLine( /*0x40b161*/
                  (char)&savedregs,
                  a2,
                  a3,
                  GameHour,
                  Dest,
                  Formatdh,
                  Format_4cz,
                  1,
                  0xFFFFFFFF);
                v253 = v649; /*0x40b166*/
                v252 = (int)v636; /*0x40b16d*/
                v632 += v12; /*0x40b174*/
              }
              v636 = (void *)++v252; /*0x40b17d*/
            }
            while ( v252 < v253 );
          }
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40b181*/
        case 0x18:
          v261 = qword_B3BB2C[0x1BC]; /*0x40b18c*/
          if ( LODWORD(qword_B3BB2C[0x1BC]) ) /*0x40b194*/
          {
            _sprintf(Dest, "PROFILER(AVE/%d FRAMES)", 0x3C); /*0x40b1d4*/
            __asm { fild    [esp+550h+var_510] } /*0x40b1d9*/
            __asm { fstp    [esp+554h+Format+4]; float }
            __asm
            {
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdi, Format_4da, 1, 0xFFFFFFFF); /*0x40b1fc*/
            v632 += v12; /*0x40b201*/
            if ( !unk_B33408 && *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 ) /*0x40b224*/
            {
              sub_6B9520((Ni2DBuffer **)LODWORD(v261)); /*0x40b22c*/
              v262 = *(_DWORD **)(LODWORD(v261) + 4); /*0x40b231*/
              if ( v262 ) /*0x40b236*/
                sub_6B9750(v262, a2, a3, GameHour, &v632, v12, v262[9], EmptyString); /*0x40b24b*/
            }
            goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40b250*/
          }
          _sprintf(Dest, "PROFILER NOT ENABLED"); /*0x40b1a3*/
          __asm { fild    [esp+54Ch+var_510] } /*0x40b1a8*/
          __asm
          {
            fstp    [esp+554h+Format+4]
            fild    iDebugTextLeftRightOffset
          }
LABEL_467:
          __asm { fstp    [esp+554h+Format]; float } /*0x40c008*/
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatew, Format_4f, 1, 0xFFFFFFFF); /*0x40c013*/
          goto LABEL_468; /*0x40c013*/
        case 0x19:
          v263 = qword_B3BB2C[0x1BC]; /*0x40b255*/
          if ( LODWORD(qword_B3BB2C[0x1BC]) ) /*0x40b25d*/
          {
            _sprintf(Dest, "PROFILER(MAX/%d FRAMES)", 0x12C); /*0x40b2ab*/
            __asm { fild    [esp+550h+var_510] } /*0x40b2b0*/
            __asm { fstp    [esp+554h+Format+4]; float }
            __asm
            {
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdk, Format_4dc, 1, 0xFFFFFFFF); /*0x40b2d3*/
            v632 += v12; /*0x40b2d8*/
            if ( !unk_B33408 && *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 ) /*0x40b2fb*/
            {
              v264 = sub_6B9510((_DWORD *)LODWORD(v263)); /*0x40b30a*/
              v265 = (char *)FormHeapAlloc(0x28u); /*0x40b30c*/
              v641.m_data = v265; /*0x40b314*/
              v687 = 1; /*0x40b31a*/
              if ( v265 ) /*0x40b325*/
                v266 = sub_6B9BD0((BSStringT *)v265, "Root", 0); /*0x40b330*/
              else
                v266 = 0; /*0x40b337*/
              sub_405070(&v634, (int)v266); /*0x40b33e*/
              v624 = v264; /*0x40b343*/
              v267 = (unsigned int *)LODWORD(v634); /*0x40b344*/
              v687 = 2; /*0x40b34a*/
              sub_6B9D10((unsigned int *)LODWORD(v634), v624); /*0x40b355*/
              NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>((NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>> *)v267); /*0x40b35c*/
              sub_6B9E10(v267); /*0x40b363*/
              v268 = v267[9]; /*0x40b368*/
              if ( !v268 ) /*0x40b36d*/
                v268 = 1; /*0x40b36f*/
              sub_6B9750(v267, a2, a3, GameHour, &v632, v12, v268, EmptyString); /*0x40b382*/
              v687 = 0xFFFFFFFF; /*0x40b38b*/
              NiPointerSlot_Release((NiD3DVertexShader *)&v634); /*0x40b396*/
            }
          }
          else
          {
            _sprintf(Dest, "PROFILER(MAX) NOT ENABLED"); /*0x40b26c*/
            __asm { fild    [esp+54Ch+var_510] } /*0x40b271*/
            __asm { fstp    [esp+554h+Format+4] }
            __asm
            {
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]
            }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdj, Format_4db, 1, 0xFFFFFFFF); /*0x40b294*/
LABEL_468:
            v632 += v12; /*0x40c018*/
          }
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40c01b*/
        case 0x1A:
          _sprintf(Dest, "HEAP STATS"); /*0x40b3ad*/
          __asm { fild    [esp+54Ch+var_510] } /*0x40b3b2*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdl, Format_4dd, 1, 0xFFFFFFFF); /*0x40b3d5*/
          v632 += v12; /*0x40b3da*/
          if ( unk_B33408 || *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 ) /*0x40b3fd*/
            goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40b3fd*/
          MemoryHeap_GetStats(&FormHeap, &v664, 1); /*0x40b412*/
          v269 = v664 >> 0xA; /*0x40b41e*/
          if ( !(v664 >> 0xA) ) /*0x40b41e*/
            v269 = 1; /*0x40b423*/
          _sprintf(Dest, "Mem heap size: %d kb", v269);
          __asm { fild    [esp+550h+var_510] } /*0x40b43b*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdm, Format_4de, 1, 0xFFFFFFFF); /*0x40b45e*/
          v632 += v12; /*0x40b46a*/
          v270 = v665 / 0x400; /*0x40b47d*/
          if ( !(v665 / 0x400) ) /*0x40b47a*/
            v270 = 1; /*0x40b481*/
          _sprintf(Dest, "Mem used for blocks: %d kb, %d%%", v270, 0x64 * (v665 / 0x400) / v269);
          __asm { fild    [esp+554h+var_510] } /*0x40b4a1*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdn, Format_4df, 1, 0xFFFFFFFF); /*0x40b4c4*/
          v632 += v12; /*0x40b4e7*/
          _sprintf(Dest, "High mem allocated: %d kb, %d%%", v666 / 0x400, 0x64 * (v666 / 0x400) / v269);
          __asm { fild    [esp+568h+var_510] } /*0x40b4ff*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdo, Format_4dg, 1, 0xFFFFFFFF); /*0x40b522*/
          v632 += v12; /*0x40b52e*/
          _sprintf(Dest, "Used blocks: %d", v667);
          __asm { fild    [esp+564h+var_510] } /*0x40b545*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdp, Format_4dh, 1, 0xFFFFFFFF); /*0x40b568*/
          v632 += v12; /*0x40b574*/
          _sprintf(Dest, "Free blocks: %d", v668);
          __asm { fild    [esp+564h+var_510] } /*0x40b58b*/
          __asm
          {
            fstp    [esp+554h+Format+4]; float
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdq, Format_4di, 1, 0xFFFFFFFF); /*0x40b5ae*/
          v632 += v12; /*0x40b5ba*/
          _sprintf(Dest, "Max free blocks: %d", v669);
          __asm { fild    [esp+564h+var_510] } /*0x40b5d1*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdr, Format_4dj, 1, 0xFFFFFFFF); /*0x40b5f4*/
          v632 += v12; /*0x40b600*/
          _sprintf(Dest, "Blocks over heap: %d", v670);
          __asm { fild    [esp+564h+var_510] } /*0x40b617*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatds, Format_4dk, 1, 0xFFFFFFFF); /*0x40b63a*/
          v632 += v12; /*0x40b646*/
          _sprintf(Dest, "Mem over heap: %d kb", v671 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40b669*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdt, Format_4dl, 1, 0xFFFFFFFF); /*0x40b68c*/
          v632 += v12; /*0x40b698*/
          _sprintf(Dest, "High mem over heap: %d kb", v672 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40b6bb*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdu, Format_4dm, 1, 0xFFFFFFFF); /*0x40b6de*/
          v632 += v12; /*0x40b701*/
          _sprintf(Dest, "Free blocks mem: %d kb, %d%%", v673 / 0x400, 0x64 * (v673 / 0x400) / v270);
          __asm { fild    [esp+568h+var_510] } /*0x40b719*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdv, Format_4dn, 1, 0xFFFFFFFF); /*0x40b73c*/
          v632 += v12; /*0x40b75f*/
          _sprintf(Dest, "Used block mem: %d kb, %d%%", v674 / 0x400, 0x64 * (v674 / 0x400) / v270);
          __asm { fild    [esp+568h+var_510] } /*0x40b777*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdw, Format_4do, 1, 0xFFFFFFFF); /*0x40b79a*/
          v632 += v12; /*0x40b7a6*/
          _sprintf(Dest, "Largest free block size: %d kb", v675 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40b7c9*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdx, Format_4dp, 1, 0xFFFFFFFF); /*0x40b7ec*/
          v632 += v12; /*0x40b7f1*/
          _sprintf(Dest, "Largest used block size: %d kb", v676 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40b81b*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdy, Format_4dq, 1, 0xFFFFFFFF); /*0x40b83e*/
          v632 += v12; /*0x40b84a*/
          _sprintf(Dest, "Class overhead: %d kb", v677 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40b86d*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatdz, Format_4dr, 1, 0xFFFFFFFF); /*0x40b890*/
          v632 += v12; /*0x40b89c*/
          _sprintf(Dest, "Free list overhead: %d kb", v678 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40b8bf*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatea, Format_4ds, 1, 0xFFFFFFFF); /*0x40b8e2*/
          v632 += v12; /*0x40b8ee*/
          _sprintf(Dest, "Mem debug overhead: %d kb", v679 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40b911*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formateb, Format_4dt, 1, 0xFFFFFFFF); /*0x40b934*/
          v632 += v12; /*0x40b940*/
          _sprintf(Dest, "Mem used (System): %d kb", v680 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40b963*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatec, Format_4du, 1, 0xFFFFFFFF); /*0x40b986*/
          v632 += v12; /*0x40b992*/
          _sprintf(Dest, "Mem total (System): %d kb", v681 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40b9b5*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formated, Format_4dv, 1, 0xFFFFFFFF); /*0x40b9d8*/
          v632 += v12; /*0x40b9e4*/
          _sprintf(Dest, "High mem used (System): %d kb", v682 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40ba07*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatee, Format_4dw, 1, 0xFFFFFFFF); /*0x40ba2a*/
          v632 += v12; /*0x40ba36*/
          _sprintf(Dest, "Mem used by pools: %d kb", v683 / 0x400);
          __asm { fild    [esp+564h+var_510] } /*0x40ba59*/
          __asm
          {
            fstp    [esp+554h+Format+4]
            fild    iDebugTextLeftRightOffset
          }
          goto LABEL_467; /*0x40ba71*/
        case 0x1B:
          _sprintf(Dest, "MEMCONTEXT"); /*0x40ba83*/
          __asm { fild    [esp+54Ch+var_510] } /*0x40ba88*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatef, Format_4dx, 1, 0xFFFFFFFF); /*0x40baab*/
          v632 += v12; /*0x40bab0*/
          _sprintf(Dest, "NOT ENABLED"); /*0x40bac1*/
          __asm { fild    [esp+560h+var_510] } /*0x40bac6*/
          __asm { fstp    [esp+554h+Format+4] }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formateg, Format_4dy, 1, 0xFFFFFFFF); /*0x40bae9*/
          goto LABEL_468; /*0x40bae9*/
        case 0x1C:
          _sprintf(Dest, "SYSTEM MEMCONTEXT"); /*0x40bafb*/
          __asm { fild    [esp+54Ch+var_510] } /*0x40bb00*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formateh, Format_4dz, 1, 0xFFFFFFFF); /*0x40bb23*/
          v632 += v12; /*0x40bb28*/
          _sprintf(Dest, "NOT ENABLED"); /*0x40bb39*/
          __asm { fild    [esp+560h+var_510] } /*0x40bb3e*/
          __asm { fstp    [esp+554h+Format+4] }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatei, Format_4ea, 1, 0xFFFFFFFF); /*0x40bb61*/
          goto LABEL_468; /*0x40bb61*/
        case 0x1D:
          sub_45CC60(a3, GameHour, (TESObjectREFR *)MEMORY[0xB333B4], v12, &v632, (int *)&v633); /*0x40a9a5*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a9ad*/
        case 0x1E:
          if ( LODWORD(qword_B3BB2C[0x115]) ) /*0x40a840*/
            sub_682A90((NiTMap_TESCELL *)LODWORD(qword_B3BB2C[0x115]), a2, a3, v12, &v632, (int *)&v633); /*0x40a851*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40a856*/
        case 0x1F:
          if ( MEMORY[0xB333B4]
            && (*((unsigned __int8 (__thiscall **)(TESChildCELL *))MEMORY[0xB333B4]->vtbl + 0x64))(MEMORY[0xB333B4]) )
          {
            v16 = (TESObjectREFR *)OblivionDynamicCast( /*0x407e3e*/
                                     MEMORY[0xB333B4],
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                     &Actor `RTTI Type Descriptor',
                                     0);
            v17 = (int)v16->vtbl->GetPos(v16); /*0x407e4d*/
            __asm { fild    [esp+544h+var_50C] } /*0x407e4f*/
            v18 = *(char **)v17; /*0x407e53*/
            v19 = *(_DWORD *)(v17 + 4); /*0x407e55*/
            v20 = *(_DWORD *)(v17 + 8); /*0x407e58*/
            v641.m_data = v18; /*0x407e5b*/
            __asm { fstp    [esp+554h+Format+4]; float } /*0x407e71*/
            LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x407e75*/
            __asm { fild    [esp+554h+triangleCount] } /*0x407e79*/
            *(_DWORD *)&v641.m_dataLen = v19; /*0x407e7f*/
            v642 = v20; /*0x407e83*/
            __asm { fstp    [esp+554h+Format]; float } /*0x407e87*/
            v21 = TESObjectREFR_GetName(v16); /*0x407e8a*/
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, v21, Formatb, Format_4h, 3, 0xFFFFFFFF); /*0x407e90*/
            v633 = (signed int *)((char *)v633 + v12); /*0x407e95*/
            v22 = Shared_GetDwordAtOffset40(v16); /*0x407ea5*/
            v634 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace(v16)); /*0x407eae*/
            if ( v22 && TESObjectCELL_IsInterior(v22) )
            {
              v23 = v22->vtbl->GetEditorName((TESForm *)v22); /*0x407ec9*/
              HIDWORD(Format_4i) = "Actor Loc: Interior '%s'";
              LODWORD(Format_4i) = 0xC8; /*0x407ed8*/
              _snprintf(Dest, Format_4i, v23); /*0x407ede*/
              __asm { fild    [esp+554h+var_50C] } /*0x407ee3*/
              __asm { fstp    [esp+554h+Format+4] }
              LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x407f07*/
              __asm /*0x407f0b*/
              {
                fild    [esp+554h+triangleCount]
                fstp    [esp+554h+Format]
              }
              InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatc, Format_4j, 3, 0xFFFFFFFF); /*0x407f13*/
            }
            else
            {
              v24 = v634; /*0x407f18*/
              if ( v634 == 0.0 )
              {
                HIDWORD(Format_8) = "Actor Loc: UNKNOWN";
                LODWORD(Format_8) = 0xC8; /*0x407f9d*/
                _snprintf(Dest, Format_8, v625); /*0x407fa3*/
                __asm { fild    [esp+550h+var_50C] } /*0x407fa8*/
                __asm { fstp    [esp+554h+Format+4]; float }
                LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x407fc5*/
                __asm { fild    [esp+554h+triangleCount] } /*0x407fc9*/
              }
              else
              {
                __asm /*0x407f20*/
                {
                  fld     dword ptr [esp+544h+var_4E8.m_dataLen]
                  fistp   [esp+544h+var_504]
                }
                __asm
                {
                  fld     [esp+544h+var_4E8.m_data]
                  fistp   [esp+544h+var_500]
                }
                v25 = *(_DWORD *)LODWORD(v634); /*0x407f38*/
                v634 = *(float *)&v636; /*0x407f3a*/
                v26 = (const char *)(*(int (__thiscall **)(float))(v25 + 0xD4))(COERCE_FLOAT(LODWORD(v24))); /*0x407f44*/
                HIDWORD(var55C_4) = "Actor Loc: World '%s' (%i, %i)";
                LODWORD(var55C_4) = 0xC8; /*0x407f5f*/
                _snprintf(Dest, var55C_4, v26, (int)v636 >> 0xC, (int)v635 >> 0xC); /*0x407f65*/
                __asm { fild    [esp+55Ch+var_50C] } /*0x407f6a*/
                __asm { fstp    [esp+554h+Format+4] }
                LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x407f87*/
                __asm { fild    [esp+554h+triangleCount] } /*0x407f8b*/
              }
              __asm { fstp    [esp+554h+Format]; float } /*0x407fd4*/
              InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatd, Format_4, 3, 0xFFFFFFFF); /*0x407fd8*/
            }
            v633 = (signed int *)((char *)v633 + v12); /*0x407fdd*/
            v16->vtbl[1].super.Unk_0E((TESForm *)v16); /*0x407fee*/
            __asm { fmul    ds:dbl_A30DC8 } /*0x407ff0*/
            __asm { fstp    qword ptr [esp+54Ch+Format+8]; Format }
            HIDWORD(Formate) = "Actor Heading: %0.2f";
            LODWORD(Formate) = 0xC8; /*0x408008*/
            _snprintf(Dest, Formate, (const char *)LODWORD(Format_8a), HIDWORD(Format_8a)); /*0x40800e*/
            __asm { fild    [esp+558h+var_50C] } /*0x408013*/
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408030*/
            __asm { fild    [esp+554h+triangleCount] } /*0x408034*/
            __asm { fstp    [esp+554h+Format]; float }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatf, Format_4k, 3, 0xFFFFFFFF); /*0x408043*/
            __asm { fld     [esp+558h+var_4E0] } /*0x408048*/
            v633 = (signed int *)((char *)v633 + v12); /*0x40804c*/
            __asm { fstp    qword ptr [esp+55Ch+Format+8] } /*0x408051*/
            __asm
            {
              fld     dword ptr [esp+55Ch+var_4E8.m_dataLen]
              fstp    qword ptr [esp+55Ch+Format]
              fld     [esp+55Ch+var_4E8.m_data]
              fstp    qword ptr [esp+55Ch+var_55C]; Format
            }
            HIDWORD(v287) = "Actor Pos: ( %.0f, %.0f, %.0f )";
            LODWORD(v287) = 0xC8; /*0x408070*/
            _snprintf(Dest, v287, (const char *)LODWORD(v294), HIDWORD(v294), Formatg, Format_8b); /*0x408076*/
            __asm { fild    [esp+568h+var_50C] } /*0x40807b*/
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408098*/
            __asm { fild    [esp+554h+triangleCount] } /*0x40809c*/
            __asm { fstp    [esp+554h+Format]; float }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formath, Format_4l, 3, 0xFFFFFFFF); /*0x4080ab*/
            v633 = (signed int *)((char *)v633 + 2 * v12); /*0x4080b7*/
            v27 = v16[1].vtbl; /*0x4080bb*/
            if ( v27 )
            {
              v28 = (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v27->super.super.InitializeComponent + 0x103))(v27); /*0x4080d3*/
              if ( v28 )
              {
                HIDWORD(Format_8c) = "------------------------"; /*0x4080e4*/
                LODWORD(Format_8c) = 0xC8; /*0x4080e9*/
                _snprintf(Dest, Format_8c, v625); /*0x4080ef*/
                __asm { fild    [esp+550h+var_50C] } /*0x4080f4*/
                __asm { fstp    [esp+554h+Format+4]; float }
                LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408111*/
                __asm { fild    [esp+554h+triangleCount] } /*0x408115*/
                __asm { fstp    [esp+554h+Format]; float }
                InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formati, Format_4m, 3, 0xFFFFFFFF); /*0x408124*/
                v633 = (signed int *)((char *)v633 + v12); /*0x408129*/
                if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)v28 + 0x2C))(v28) )
                {
                  HIDWORD(Format_8d) = "Overall Pathing Status: FAILED";
                  LODWORD(Format_8d) = 0xC8; /*0x408149*/
                  _snprintf(Dest, Format_8d, v626); /*0x40814f*/
                  __asm { fild    [esp+550h+var_50C] } /*0x408154*/
                  __asm { fstp    [esp+554h+Format+4] }
                  LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408171*/
                  __asm { fild    [esp+554h+triangleCount] } /*0x408175*/
                }
                else
                {
                  HIDWORD(Format_8e) = "Overall Pathing Status: Active";
                  LODWORD(Format_8e) = 0xC8; /*0x408180*/
                  _snprintf(Dest, Format_8e, v626); /*0x408186*/
                  __asm { fild    [esp+550h+var_50C] } /*0x40818b*/
                  __asm { fstp    [esp+554h+Format+4]; float }
                  LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4081a8*/
                  __asm { fild    [esp+554h+triangleCount] } /*0x4081ac*/
                }
                __asm { fstp    [esp+554h+Format]; float } /*0x4081b7*/
                InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatj, Format_4a, 3, 0xFFFFFFFF); /*0x4081bb*/
                v633 = (signed int *)((char *)v633 + v12); /*0x4081c0*/
                if ( sub_6899E0(v28) )
                {
                  HIDWORD(Format_8z) = "PATHING SYSTEM HAS NO LOW PATH"; /*0x408ad5*/
                  LODWORD(Format_8z) = 0xC8; /*0x408ada*/
                  _snprintf(Dest, Format_8z, v627); /*0x408ae0*/
                  __asm { fild    [esp+550h+var_50C] } /*0x408ae5*/
                  __asm { fstp    [esp+554h+Format+4] }
                  LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408b02*/
                  __asm { fild    [esp+554h+triangleCount] } /*0x408b06*/
                }
                else
                {
                  HIDWORD(Format_8f) = "------------------------"; /*0x4081dd*/
                  LODWORD(Format_8f) = 0xC8; /*0x4081e2*/
                  _snprintf(Dest, Format_8f, v627); /*0x4081e8*/
                  __asm { fild    [esp+550h+var_50C] } /*0x4081ed*/
                  __asm { fstp    [esp+554h+Format+4]; float }
                  LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x40820a*/
                  __asm { fild    [esp+554h+triangleCount] } /*0x40820e*/
                  __asm { fstp    [esp+554h+Format]; float }
                  InterfaceMgr_DebugTextLine( /*0x40821d*/
                    (char)&savedregs,
                    a2,
                    a3,
                    GameHour,
                    Dest,
                    Formatk,
                    Format_4n,
                    3,
                    0xFFFFFFFF);
                  v633 = (signed int *)((char *)v633 + v12); /*0x408222*/
                  *(float *)&v636 = COERCE_FLOAT(sub_68A1F0(v28)); /*0x408232*/
                  if ( *(float *)&v636 == 0.0 ) /*0x408236*/
                  {
                    TESObjectREFR_GetSpatialContainerAtPosition((TESObjectCELL **)v16); /*0x40823a*/
                    v636 = v29; /*0x40823f*/
                  }
                  v30 = OblivionDynamicCast( /*0x40826e*/
                          v636,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
                  v31 = OblivionDynamicCast( /*0x408270*/
                          v636,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESWorldSpace `RTTI Type Descriptor',
                          0);
                  if ( v30 )
                  {
                    v32 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)v30 + 0xD4))(v30); /*0x408286*/
                    HIDWORD(Format_4o) = "Final Target Loc: Interior '%s'";
                    LODWORD(Format_4o) = 0xC8; /*0x408295*/
                    _snprintf(Dest, Format_4o, v32); /*0x40829b*/
                    __asm { fild    [esp+554h+var_50C] } /*0x4082a0*/
                    __asm { fstp    [esp+554h+Format+4] }
                    LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4082c4*/
                    __asm /*0x4082c8*/
                    {
                      fild    [esp+554h+triangleCount]
                      fstp    [esp+554h+Format]
                    }
                    InterfaceMgr_DebugTextLine( /*0x4082d0*/
                      (char)&savedregs,
                      a2,
                      a3,
                      GameHour,
                      Dest,
                      Formatl,
                      Format_4p,
                      3,
                      0xFFFFFFFF);
                  }
                  else
                  {
                    if ( v31 )
                    {
                      v33 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)v31 + 0xD4))(v31); /*0x4082e3*/
                      HIDWORD(Format_4q) = "Final Target Loc: World '%s'";
                      LODWORD(Format_4q) = 0xC8; /*0x4082f2*/
                      _snprintf(Dest, Format_4q, v33); /*0x4082f8*/
                      __asm { fild    [esp+554h+var_50C] } /*0x4082fd*/
                      __asm { fstp    [esp+554h+Format+4] }
                      LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x40831a*/
                      __asm { fild    [esp+554h+triangleCount] } /*0x40831e*/
                    }
                    else
                    {
                      HIDWORD(Format_8g) = "Final Target Loc: UNKNOWN";
                      LODWORD(Format_8g) = 0xC8; /*0x408330*/
                      _snprintf(Dest, Format_8g, v628); /*0x408336*/
                      __asm { fild    [esp+550h+var_50C] } /*0x40833b*/
                      __asm { fstp    [esp+554h+Format+4]; float }
                      LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408358*/
                      __asm { fild    [esp+554h+triangleCount] } /*0x40835c*/
                    }
                    __asm { fstp    [esp+554h+Format]; float } /*0x408367*/
                    InterfaceMgr_DebugTextLine( /*0x40836b*/
                      (char)&savedregs,
                      a2,
                      a3,
                      GameHour,
                      Dest,
                      Formatm,
                      Format_4b,
                      3,
                      0xFFFFFFFF);
                  }
                  v633 = (signed int *)((char *)v633 + v12); /*0x408370*/
                  sub_68A250((float ***)v28); /*0x408379*/
                  v35 = *v34; /*0x40837e*/
                  v36 = *((_DWORD *)v34 + 1); /*0x408380*/
                  v640 = v34[2]; /*0x408389*/
                  __asm /*0x40838d*/
                  {
                    fld     [esp+55Ch+var_4EC]
                    fstp    qword ptr [esp+55Ch+Format+8]
                  }
                  HIDWORD(v639) = v36; /*0x408395*/
                  __asm { fld     dword ptr [esp+55Ch+var_4F4+4] } /*0x408399*/
                  *(float *)&v639 = v35; /*0x40839d*/
                  __asm { fstp    qword ptr [esp+55Ch+Format] } /*0x4083a1*/
                  __asm
                  {
                    fld     dword ptr [esp+55Ch+var_4F4]
                    fstp    qword ptr [esp+55Ch+var_55C]; Format
                  }
                  HIDWORD(v288) = "Final Target Pos: ( %.0f, %.0f, %.0f )";
                  LODWORD(v288) = 0xC8; /*0x4083b8*/
                  _snprintf(Dest, v288, (const char *)LODWORD(v295), HIDWORD(v295), Formatn, Format_8h); /*0x4083be*/
                  __asm { fild    [esp+568h+var_50C] } /*0x4083c3*/
                  __asm { fstp    [esp+554h+Format+4]; float }
                  LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4083e0*/
                  __asm { fild    [esp+554h+triangleCount] } /*0x4083e4*/
                  __asm { fstp    [esp+554h+Format]; float }
                  InterfaceMgr_DebugTextLine( /*0x4083f3*/
                    (char)&savedregs,
                    a2,
                    a3,
                    GameHour,
                    Dest,
                    Formato,
                    Format_4r,
                    3,
                    0xFFFFFFFF);
                  v633 = (signed int *)((char *)v633 + v12); /*0x4083f8*/
                  sub_68A160((float ***)v28); /*0x408401*/
                  v38 = *v37; /*0x408406*/
                  v39 = *((_DWORD *)v37 + 1); /*0x408408*/
                  v640 = v37[2]; /*0x408411*/
                  __asm /*0x408415*/
                  {
                    fld     [esp+55Ch+var_4EC]
                    fstp    qword ptr [esp+55Ch+Format+8]
                  }
                  HIDWORD(v639) = v39; /*0x40841d*/
                  __asm { fld     dword ptr [esp+55Ch+var_4F4+4] } /*0x408421*/
                  *(float *)&v639 = v38; /*0x408425*/
                  __asm { fstp    qword ptr [esp+55Ch+Format] } /*0x408429*/
                  __asm
                  {
                    fld     dword ptr [esp+55Ch+var_4F4]
                    fstp    qword ptr [esp+55Ch+var_55C]; Format
                  }
                  HIDWORD(v289) = "Current Low Target Pos: ( %.0f, %.0f, %.0f )";
                  LODWORD(v289) = 0xC8; /*0x408440*/
                  _snprintf(Dest, v289, (const char *)LODWORD(v296), HIDWORD(v296), Formatp, Format_8i); /*0x408446*/
                  __asm { fild    [esp+568h+var_50C] } /*0x40844b*/
                  __asm { fstp    [esp+554h+Format+4]; float }
                  LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408468*/
                  __asm { fild    [esp+554h+triangleCount] } /*0x40846c*/
                  __asm { fstp    [esp+554h+Format]; float }
                  InterfaceMgr_DebugTextLine( /*0x40847b*/
                    (char)&savedregs,
                    a2,
                    a3,
                    GameHour,
                    Dest,
                    Formatq,
                    Format_4s,
                    3,
                    0xFFFFFFFF);
                  v633 = (signed int *)((char *)v633 + v12); /*0x408480*/
                  v40 = OblivionDynamicCast( /*0x40849b*/
                          v28,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&PathLow `RTTI Type Descriptor',
                          &PathMiddleHigh `RTTI Type Descriptor',
                          0);
                  if ( v40 )
                  {
                    HIDWORD(Format_8j) = "------------------------"; /*0x4084ac*/
                    LODWORD(Format_8j) = 0xC8; /*0x4084b1*/
                    _snprintf(Dest, Format_8j, v628); /*0x4084b7*/
                    __asm { fild    [esp+550h+var_50C] } /*0x4084bc*/
                    __asm { fstp    [esp+554h+Format+4]; float }
                    LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4084d9*/
                    __asm { fild    [esp+554h+triangleCount] } /*0x4084dd*/
                    __asm { fstp    [esp+554h+Format]; float }
                    InterfaceMgr_DebugTextLine( /*0x4084ec*/
                      (char)&savedregs,
                      a2,
                      a3,
                      GameHour,
                      Dest,
                      Formatr,
                      Format_4t,
                      3,
                      0xFFFFFFFF);
                    v633 = (signed int *)((char *)v633 + v12); /*0x4084f1*/
                    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v40 + 0xC))(v40) )
                    {
                      HIDWORD(Format_8x) = "PATHING SYSTEM HAS NO HIGH PATH"; /*0x408a5a*/
                      LODWORD(Format_8x) = 0xC8; /*0x408a66*/
                      _snprintf(Dest, Format_8x, v629); /*0x408a6c*/
                      __asm { fild    [esp+550h+var_50C] } /*0x408a71*/
                      __asm { fstp    [esp+554h+Format+4] }
                      LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408a8e*/
                      __asm { fild    [esp+554h+triangleCount] } /*0x408a92*/
                    }
                    else
                    {
                      sub_68B3F0((int)v40); /*0x40850b*/
                      v42 = *v41; /*0x408510*/
                      v43 = *((_DWORD *)v41 + 1); /*0x408512*/
                      v640 = v41[2]; /*0x40851b*/
                      __asm /*0x40851f*/
                      {
                        fld     [esp+55Ch+var_4EC]
                        fstp    qword ptr [esp+55Ch+Format+8]
                      }
                      HIDWORD(v639) = v43; /*0x408527*/
                      __asm { fld     dword ptr [esp+55Ch+var_4F4+4] } /*0x40852b*/
                      *(float *)&v639 = v42; /*0x40852f*/
                      __asm { fstp    qword ptr [esp+55Ch+Format] } /*0x408533*/
                      __asm
                      {
                        fld     dword ptr [esp+55Ch+var_4F4]
                        fstp    qword ptr [esp+55Ch+var_55C]; Format
                      }
                      HIDWORD(v290) = "Current High Target Pos: ( %.0f, %.0f, %.0f )";
                      LODWORD(v290) = 0xC8; /*0x40854a*/
                      _snprintf(Dest, v290, (const char *)LODWORD(v297), HIDWORD(v297), Formats, Format_8k); /*0x408550*/
                      __asm { fild    [esp+568h+var_50C] } /*0x408555*/
                      __asm { fstp    [esp+554h+Format+4]; float }
                      LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408572*/
                      __asm { fild    [esp+554h+triangleCount] } /*0x408576*/
                      __asm { fstp    [esp+554h+Format]; float }
                      InterfaceMgr_DebugTextLine( /*0x408585*/
                        (char)&savedregs,
                        a2,
                        a3,
                        GameHour,
                        Dest,
                        Formatt,
                        Format_4u,
                        3,
                        0xFFFFFFFF);
                      v633 = (signed int *)((char *)v633 + v12); /*0x40858a*/
                      v44 = (Actor *)OblivionDynamicCast( /*0x4085a2*/
                                       v28,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&PathLow `RTTI Type Descriptor',
                                       &PathHigh `RTTI Type Descriptor',
                                       0);
                      if ( v44 )
                      {
                        HIDWORD(Format_8l) = "------------------------"; /*0x4085b6*/
                        LODWORD(Format_8l) = 0xC8; /*0x4085bb*/
                        _snprintf(Dest, Format_8l, v629); /*0x4085c1*/
                        __asm { fild    [esp+550h+var_50C] } /*0x4085c6*/
                        __asm { fstp    [esp+554h+Format+4]; float }
                        LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4085e3*/
                        __asm { fild    [esp+554h+triangleCount] } /*0x4085e7*/
                        __asm { fstp    [esp+554h+Format]; float }
                        InterfaceMgr_DebugTextLine( /*0x4085f6*/
                          (char)&savedregs,
                          a2,
                          a3,
                          GameHour,
                          Dest,
                          Formatu,
                          Format_4v,
                          3,
                          0xFFFFFFFF);
                        v633 = (signed int *)((char *)v633 + v12); /*0x4085fb*/
                        if ( ((unsigned __int8 (__thiscall *)(Actor *))v44->vtbl->super.super.super.super.CompareTo)(v44) ) /*0x408609*/
                          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x40860d*/
                        GameHour = Actor_GetAimPitch(v44); /*0x408615*/
                        __asm { fstp    [esp+544h+triangleCount] } /*0x40861a*/
                        _EAX = GameSetting_GetSafeFloatPointer((int *)unk_B3A498); /*0x408623*/
                        __asm { fld     dword ptr [eax] } /*0x408628*/
                        __asm { fstp    qword ptr [esp+554h+Format+8] }
                        __asm
                        {
                          fld     [esp+554h+triangleCount]
                          fstp    qword ptr [esp+554h+Format]; Format
                        }
                        HIDWORD(v298) = "Failure Time: %.2f / %.2f";
                        LODWORD(v298) = 0xC8; /*0x408644*/
                        _snprintf(Dest, v298, (const char *)LODWORD(Formatv), HIDWORD(Formatv), Format_8m); /*0x40864a*/
                        __asm { fild    [esp+560h+var_50C] } /*0x40864f*/
                        __asm { fstp    [esp+554h+Format+4]; float }
                        LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x40866c*/
                        __asm { fild    [esp+554h+triangleCount] } /*0x408670*/
                        __asm { fstp    [esp+554h+Format]; float }
                        InterfaceMgr_DebugTextLine( /*0x40867f*/
                          (char)&savedregs,
                          a2,
                          a3,
                          GameHour,
                          Dest,
                          Formatw,
                          Format_4w,
                          3,
                          0xFFFFFFFF);
                        v633 = (signed int *)((char *)v633 + v12); /*0x408684*/
                        if ( (int)sub_629420((HighProcess *)v44) >= 3 )
                        {
                          HIDWORD(Format_8n) = "Failure State: FAILED";
                          LODWORD(Format_8n) = 0xC8; /*0x4086ce*/
                          _snprintf(Dest, Format_8n, v630); /*0x4086d4*/
                        }
                        else
                        {
                          v46 = sub_629420((HighProcess *)v44); /*0x408699*/
                          HIDWORD(Format_4x) = "Failure State: %s";
                          LODWORD(Format_4x) = 0xC8; /*0x4086b2*/
                          _snprintf(Dest, Format_4x, (&off_B15808)[v46]); /*0x4086b8*/
                        }
                        __asm { fild    [esp+544h+var_50C] } /*0x4086dc*/
                        __asm { fstp    [esp+554h+Format+4]; float }
                        LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4086f6*/
                        __asm { fild    [esp+554h+triangleCount] } /*0x4086fa*/
                        __asm { fstp    [esp+554h+Format]; float }
                        InterfaceMgr_DebugTextLine( /*0x408709*/
                          (char)&savedregs,
                          a2,
                          a3,
                          GameHour,
                          Dest,
                          Formatx,
                          Format_4y,
                          3,
                          0xFFFFFFFF);
                        v633 = (signed int *)((char *)v633 + v12); /*0x40870e*/
                        if ( sub_683A60(v44) )
                        {
                          HIDWORD(Format_8o) = "High Pathing Status: Turning";
                          LODWORD(Format_8o) = 0xC8; /*0x40872c*/
                          _snprintf(Dest, Format_8o, v630); /*0x408732*/
                          __asm { fild    [esp+550h+var_50C] } /*0x408737*/
                          __asm { fstp    [esp+554h+Format+4] }
                          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408754*/
                          __asm { fild    [esp+554h+triangleCount] } /*0x408758*/
                        }
                        else if ( sub_684780((char **)v44) )
                        {
                          HIDWORD(Format_8p) = "High Pathing Status: Avoiding";
                          LODWORD(Format_8p) = 0xC8; /*0x408775*/
                          _snprintf(Dest, Format_8p, v630); /*0x40877b*/
                          __asm { fild    [esp+550h+var_50C] } /*0x408780*/
                          __asm { fstp    [esp+554h+Format+4] }
                          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x40879d*/
                          __asm { fild    [esp+554h+triangleCount] } /*0x4087a1*/
                        }
                        else
                        {
                          HIDWORD(Format_8q) = "High Pathing Status: Pathing";
                          LODWORD(Format_8q) = 0xC8; /*0x4087ac*/
                          _snprintf(Dest, Format_8q, v630); /*0x4087b2*/
                          __asm { fild    [esp+550h+var_50C] } /*0x4087b7*/
                          __asm { fstp    [esp+554h+Format+4]; float }
                          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4087d4*/
                          __asm { fild    [esp+554h+triangleCount] } /*0x4087d8*/
                        }
                        __asm { fstp    [esp+554h+Format]; float } /*0x4087e3*/
                        InterfaceMgr_DebugTextLine( /*0x4087e7*/
                          (char)&savedregs,
                          a2,
                          a3,
                          GameHour,
                          Dest,
                          Formaty,
                          Format_4c,
                          3,
                          0xFFFFFFFF);
                        v633 = (signed int *)((char *)v633 + v12); /*0x4087ec*/
                        Unk030 = (char *)HighProcess::GetUnk030((HighProcess *)v44); /*0x4087fa*/
                        if ( Unk030 )
                        {
                          HIDWORD(Format_8r) = "------------------------"; /*0x408804*/
                          LODWORD(Format_8r) = 0xC8; /*0x408810*/
                          _snprintf(Dest, Format_8r, v631); /*0x408816*/
                          __asm { fild    [esp+550h+var_50C] } /*0x40881b*/
                          __asm { fstp    [esp+554h+Format+4]; float }
                          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408838*/
                          __asm { fild    [esp+554h+triangleCount] } /*0x40883c*/
                          __asm { fstp    [esp+554h+Format]; float }
                          InterfaceMgr_DebugTextLine( /*0x40884b*/
                            (char)&savedregs,
                            a2,
                            a3,
                            GameHour,
                            Dest,
                            Formatz,
                            Format_4z,
                            3,
                            0xFFFFFFFF);
                          v633 = (signed int *)((char *)v633 + v12); /*0x408850*/
                          v48 = sub_680CB0(Unk030); /*0x408859*/
                          HIDWORD(Format_4ba) = "Avoidance Status: %s";
                          LODWORD(Format_4ba) = 0xC8; /*0x408872*/
                          _snprintf(Dest, Format_4ba, (&off_B15728)[v48]); /*0x408878*/
                          __asm { fild    [esp+554h+var_50C] } /*0x40887d*/
                          __asm { fstp    [esp+554h+Format+4]; float }
                          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x40889a*/
                          __asm { fild    [esp+554h+triangleCount] } /*0x40889e*/
                          __asm { fstp    [esp+554h+Format]; float }
                          InterfaceMgr_DebugTextLine( /*0x4088ad*/
                            (char)&savedregs,
                            a2,
                            a3,
                            GameHour,
                            Dest,
                            Formatba,
                            Format_4bb,
                            3,
                            0xFFFFFFFF);
                          v633 = (signed int *)((char *)v633 + v12); /*0x4088b2*/
                          v49 = sub_680CC0((float *)Unk030); /*0x4088bb*/
                          __asm /*0x4088c0*/
                          {
                            fstp    [esp+544h+triangleCount]
                            fld     [esp+544h+triangleCount]
                          }
                          __asm { fstp    qword ptr [esp+54Ch+Format+8]; Format }
                          HIDWORD(Formatbb) = "Avoidance Wait Time: %.2f";
                          LODWORD(Formatbb) = 0xC8; /*0x4088da*/
                          _snprintf(Dest, Formatbb, (const char *)LODWORD(Format_8s), HIDWORD(Format_8s)); /*0x4088e0*/
                          __asm { fild    [esp+558h+var_50C] } /*0x4088e5*/
                          __asm { fstp    [esp+554h+Format+4]; float }
                          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408902*/
                          __asm { fild    [esp+554h+triangleCount] } /*0x408906*/
                          __asm { fstp    [esp+554h+Format]; float }
                          InterfaceMgr_DebugTextLine( /*0x408915*/
                            (char)&savedregs,
                            a2,
                            a3,
                            v49,
                            Dest,
                            Formatbc,
                            Format_4bc,
                            3,
                            0xFFFFFFFF);
                          v633 = (signed int *)((char *)v633 + v12); /*0x40891a*/
                          v50 = Actor_GetAimPitch((Actor *)Unk030); /*0x408923*/
                          __asm /*0x408928*/
                          {
                            fstp    [esp+544h+triangleCount]
                            fld     [esp+544h+triangleCount]
                          }
                          __asm { fstp    qword ptr [esp+54Ch+Format+8]; Format }
                          HIDWORD(Formatbd) = "Avoidance Angling Time: %.2f";
                          LODWORD(Formatbd) = 0xC8; /*0x40893b*/
                          _snprintf(Dest, Formatbd, (const char *)LODWORD(Format_8t), HIDWORD(Format_8t)); /*0x408948*/
                          __asm { fild    [esp+558h+var_50C] } /*0x40894d*/
                          __asm { fstp    [esp+554h+Format+4]; float }
                          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x40896a*/
                          __asm { fild    [esp+554h+triangleCount] } /*0x40896e*/
                          __asm { fstp    [esp+554h+Format]; float }
                          InterfaceMgr_DebugTextLine( /*0x40897d*/
                            (char)&savedregs,
                            a2,
                            a3,
                            v50,
                            Dest,
                            Formatbe,
                            Format_4bd,
                            3,
                            0xFFFFFFFF);
                          v633 = (signed int *)((char *)v633 + v12); /*0x408982*/
                          GameHour = sub_680CF0((float *)Unk030); /*0x40898b*/
                          __asm /*0x408990*/
                          {
                            fstp    [esp+544h+triangleCount]
                            fld     [esp+544h+triangleCount]
                          }
                          __asm { fstp    qword ptr [esp+54Ch+Format+8]; Format }
                          HIDWORD(Formatbf) = "Avoidance Avoid Time: %.2f";
                          LODWORD(Formatbf) = 0xC8; /*0x4089aa*/
                          _snprintf(Dest, Formatbf, (const char *)LODWORD(Format_8u), HIDWORD(Format_8u)); /*0x4089b0*/
                          __asm { fild    [esp+558h+var_50C] } /*0x4089b5*/
                          __asm { fstp    [esp+554h+Format+4] }
                          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x4089d2*/
                          __asm { fild    [esp+554h+triangleCount] } /*0x4089d6*/
                        }
                        else
                        {
                          HIDWORD(Format_8v) = "NO AVOIDANCE"; /*0x4089df*/
                          LODWORD(Format_8v) = 0xC8; /*0x4089eb*/
                          _snprintf(Dest, Format_8v, v631); /*0x4089f1*/
                          __asm { fild    [esp+550h+var_50C] } /*0x4089f6*/
                          __asm { fstp    [esp+554h+Format+4] }
                          LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408a13*/
                          __asm { fild    [esp+554h+triangleCount] } /*0x408a17*/
                        }
                      }
                      else
                      {
                        HIDWORD(Format_8w) = "MIDDLE HIGH PATH SYSTEM ONLY"; /*0x408a20*/
                        LODWORD(Format_8w) = 0xC8; /*0x408a25*/
                        _snprintf(Dest, Format_8w, v629); /*0x408a2b*/
                        __asm { fild    [esp+550h+var_50C] } /*0x408a30*/
                        __asm { fstp    [esp+554h+Format+4] }
                        LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408a4d*/
                        __asm { fild    [esp+554h+triangleCount] } /*0x408a51*/
                      }
                    }
                  }
                  else
                  {
                    HIDWORD(Format_8y) = "LOW PATH SYSTEM ONLY"; /*0x408a9b*/
                    LODWORD(Format_8y) = 0xC8; /*0x408aa0*/
                    _snprintf(Dest, Format_8y, v628); /*0x408aa6*/
                    __asm { fild    [esp+550h+var_50C] } /*0x408aab*/
                    __asm { fstp    [esp+554h+Format+4] }
                    LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408ac8*/
                    __asm { fild    [esp+554h+triangleCount] } /*0x408acc*/
                  }
                }
              }
              else
              {
                HIDWORD(Format_8ba) = "NO PATHING SYSTEM"; /*0x408b0f*/
                LODWORD(Format_8ba) = 0xC8; /*0x408b14*/
                _snprintf(Dest, Format_8ba, v625); /*0x408b1a*/
                __asm { fild    [esp+550h+var_50C] } /*0x408b1f*/
                __asm { fstp    [esp+554h+Format+4] }
                LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408b3c*/
                __asm { fild    [esp+554h+triangleCount] } /*0x408b40*/
              }
            }
            else
            {
              HIDWORD(Format_8bb) = "NO BASE PROCESS"; /*0x408b46*/
              LODWORD(Format_8bb) = 0xC8; /*0x408b52*/
              _snprintf(Dest, Format_8bb, v625); /*0x408b58*/
              __asm { fild    [esp+550h+var_50C] } /*0x408b5d*/
              __asm { fstp    [esp+554h+Format+4] }
              LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408b7a*/
              __asm { fild    [esp+554h+triangleCount] } /*0x408b7e*/
            }
          }
          else
          {
            HIDWORD(Format_8bc) = "NO PATHING DATA FOR REF"; /*0x408b84*/
            LODWORD(Format_8bc) = 0xC8; /*0x408b90*/
            _snprintf(Dest, Format_8bc, v625); /*0x408b96*/
            __asm { fild    [esp+550h+var_50C] } /*0x408b9b*/
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v634) = 0x500 - iDebugTextLeftRightOffset; /*0x408bb8*/
            __asm { fild    [esp+554h+triangleCount] } /*0x408bbc*/
          }
          __asm { fstp    [esp+554h+Format]; float } /*0x408bc7*/
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatbg, Format_4d, 3, 0xFFFFFFFF); /*0x408bcb*/
          v633 = (signed int *)((char *)v633 + v12); /*0x408bd3*/
          goto InterfaceMgr_ShowDebugText___def_407DFE; /*0x408bd7*/
        case 0x20:
          _sprintf(Dest, "MEM INFO"); /*0x40bb73*/
          __asm { fild    [esp+54Ch+var_510] } /*0x40bb78*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatej, Format_4eb, 1, 0xFFFFFFFF); /*0x40bb9b*/
          v632 += v12; /*0x40bba0*/
          _sprintf(Dest, "Game not compiled with MEM_DEBUG."); /*0x40bbb1*/
          __asm { fild    [esp+560h+var_510] } /*0x40bbb6*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatek, Format_4ec, 1, 0xFFFFFFFF); /*0x40bbd9*/
          v632 = 0xA * v12; /*0x40bbec*/
          v271 = sub_43FD20(); /*0x40bbf0*/
          v272 = 0; /*0x40bbf7*/
          if ( v271 ) /*0x40bbfb*/
          {
            exteriorCellBufferArray = MEMORY[0xB333A0]->exteriorCellBufferArray; /*0x40bc03*/
            do /*0x40bc13*/
            {
              if ( *exteriorCellBufferArray ) /*0x40bc06*/
                ++v272; /*0x40bc0a*/
              ++exteriorCellBufferArray; /*0x40bc0d*/
              --v271; /*0x40bc10*/
            }
            while ( v271 ); /*0x40bc13*/
          }
          _sprintf(Dest, "Exterior Cell Buffer"); /*0x40bc22*/
          __asm { fild    [esp+54Ch+var_510] } /*0x40bc27*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatel, Format_4ed, 1, 0xFFFFFFFF); /*0x40bc4a*/
          _sprintf(Dest, "%i", v272); /*0x40bc5d*/
          __asm { fild    [esp+564h+var_510] } /*0x40bc62*/
          __asm { fstp    [esp+554h+Format+4]; float }
          v641.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2); /*0x40bc80*/
          __asm { fild    [esp+554h+var_4E8.m_data] } /*0x40bc84*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatem, Format_4ee, 1, 0xFFFFFFFF); /*0x40bc93*/
          v632 += v12; /*0x40bc9e*/
          v274 = sub_43FD30(); /*0x40bca5*/
          v275 = 0; /*0x40bcaa*/
          if ( v274 ) /*0x40bcae*/
          {
            interiorCellBufferArray = MEMORY[0xB333A0]->interiorCellBufferArray; /*0x40bcb6*/
            do /*0x40bccd*/
            {
              if ( *interiorCellBufferArray ) /*0x40bcc0*/
                ++v275; /*0x40bcc4*/
              ++interiorCellBufferArray; /*0x40bcc7*/
              --v274; /*0x40bcca*/
            }
            while ( v274 ); /*0x40bccd*/
          }
          _sprintf(Dest, "Interior Cell Buffer"); /*0x40bcdc*/
          __asm { fild    [esp+54Ch+var_510] } /*0x40bce1*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formaten, Format_4ef, 1, 0xFFFFFFFF); /*0x40bd04*/
          _sprintf(Dest, "%i", v275); /*0x40bd17*/
          __asm { fild    [esp+564h+var_510] } /*0x40bd1c*/
          __asm { fstp    [esp+554h+Format+4]; float }
          v641.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2); /*0x40bd3a*/
          __asm { fild    [esp+554h+var_4E8.m_data] } /*0x40bd3e*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formateo, Format_4eg, 1, 0xFFFFFFFF); /*0x40bd4d*/
          v632 += 2 * v12; /*0x40bd62*/
          *(float *)&v636 = 0.0; /*0x40bd66*/
          *(float *)&v638 = 0.0; /*0x40bd6a*/
          v635 = 0; /*0x40bd6e*/
          ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x40bd72*/
          for ( m = ActorList_ReturnHead((ActorList *)ListHead); m; m = *(Actor **)&m->members.super.super.super.type ) /*0x40bd82*/
          {
            v279 = m->vtbl; /*0x40bd84*/
            if ( m->vtbl ) /*0x40bd84*/
            {
              if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v279->super.super.super.super.InitializeComponent /*0x40bd94*/
                    + 0x64))(m->vtbl) )
              {
                v280 = *((unsigned __int8 (__thiscall **)(ActorVtbl *, int))v279->super.super.super.super.InitializeComponent /*0x40bda3*/
                       + 0xCD);
                v636 = (char *)v636 + 1; /*0x40bda9*/
                if ( v280(v279, 1) ) /*0x40bdb2*/
                  ++v638; /*0x40bdb8*/
              }
              else
              {
                v635 = (Actor *)((char *)v635 + 1); /*0x40bd9a*/
              }
            }
          }
          _sprintf(Dest, "High Actors"); /*0x40bdd1*/
          __asm { fild    [esp+54Ch+var_510] } /*0x40bdd6*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatep, Format_4eh, 1, 0xFFFFFFFF); /*0x40bdf9*/
          _sprintf(Dest, "%i", v636); /*0x40be10*/
          __asm { fild    [esp+564h+var_510] } /*0x40be15*/
          __asm { fstp    [esp+554h+Format+4]; float }
          v641.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2); /*0x40be33*/
          __asm { fild    [esp+554h+var_4E8.m_data] } /*0x40be37*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formateq, Format_4ei, 1, 0xFFFFFFFF); /*0x40be46*/
          v632 += v12; /*0x40be4b*/
          v281 = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 1); /*0x40be5e*/
          _sprintf(Dest, "Middle High Actors"); /*0x40be6d*/
          __asm { fild    [esp+54Ch+var_510] } /*0x40be72*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formater, Format_4ej, 1, 0xFFFFFFFF); /*0x40be95*/
          v282 = 0; /*0x40be9f*/
          for ( n = ActorList_ReturnHead((ActorList *)v281); n; n = *(Actor **)&n->members.super.super.super.type ) /*0x40bea8*/
          {
            if ( n->vtbl ) /*0x40beb0*/
              ++v282; /*0x40beb5*/
          }
          _sprintf(Dest, "%i", v282); /*0x40becd*/
          __asm { fild    [esp+550h+var_510] } /*0x40bed2*/
          __asm { fstp    [esp+554h+Format+4]; float }
          v641.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2); /*0x40beee*/
          __asm { fild    [esp+554h+var_4E8.m_data] } /*0x40bef2*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formates, Format_4ek, 1, 0xFFFFFFFF); /*0x40bf01*/
          v632 += v12; /*0x40bf06*/
          _sprintf(Dest, "Combat Actors"); /*0x40bf17*/
          __asm { fild    [esp+560h+var_510] } /*0x40bf1c*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatet, Format_4el, 1, 0xFFFFFFFF); /*0x40bf3f*/
          _sprintf(Dest, "%i", v638); /*0x40bf56*/
          __asm { fild    [esp+564h+var_510] } /*0x40bf5b*/
          __asm { fstp    [esp+554h+Format+4]; float }
          v641.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2); /*0x40bf77*/
          __asm { fild    [esp+554h+var_4E8.m_data] } /*0x40bf7b*/
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formateu, Format_4em, 1, 0xFFFFFFFF); /*0x40bf8a*/
          v632 += v12; /*0x40bf8f*/
          _sprintf(Dest, "Non-Actor Mobile Objects"); /*0x40bfa0*/
          __asm { fild    [esp+560h+var_510] } /*0x40bfa5*/
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, Dest, Formatev, Format_4en, 1, 0xFFFFFFFF); /*0x40bfc8*/
          _sprintf(Dest, "%i", v635); /*0x40bfdf*/
          __asm { fild    [esp+564h+var_510] } /*0x40bfe4*/
          __asm { fstp    [esp+554h+Format+4]; float }
          v641.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2); /*0x40c000*/
          __asm { fild    [esp+554h+var_4E8.m_data] } /*0x40c004*/
          goto LABEL_467; /*0x40c004*/
        default:
          goto InterfaceMgr_ShowDebugText___def_407DFE;
      }
    }
  }
}
