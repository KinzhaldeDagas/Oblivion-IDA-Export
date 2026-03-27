void __usercall InterfaceMgr_ShowDebugText(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double GameHour@<st0>)
{
  TESObjectREFR *v5; // eax
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  int v9; // eax
  float v10; // esi
  signed int v12; // ebx
  int v13; // ecx
  char *v15; // eax
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
  _DWORD *v103; // ecx
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
  unsigned int v202; // eax
  int v203; // esi
  unsigned __int8 v204; // al
  bool v205; // cc
  int (*GetMovementFlags)(void); // eax
  __int16 v207; // ax
  int *v208; // ecx
  __int16 v209; // ax
  __int16 v210; // ax
  int i; // esi
  int v212; // eax
  int v213; // ecx
  unsigned __int8 v214; // al
  char *v215; // ecx
  bool v217; // pf
  char *v218; // eax
  int v219; // esi
  Actor *v220; // eax
  int v221; // eax
  int v222; // eax
  int v223; // eax
  int v224; // eax
  NiObject *v225; // edi
  int v226; // eax
  NiObject *v227; // eax
  unsigned int v228; // eax
  NiObjectVtbl *vftable; // ecx
  int v231; // ecx
  char *v233; // edx
  char *v234; // eax
  const char *v235; // edi
  unsigned int m_uiRefCount_high; // ecx
  BSShaderAccumulator *inited; // eax
  const char *v238; // edi
  BSShaderAccumulator *v239; // esi
  int v240; // eax
  unsigned __int16 v241; // si
  _DWORD *ShadowSceneNode; // eax
  unsigned __int16 v243; // ax
  NiObject *v244; // edi
  int v245; // esi
  signed int v246; // ecx
  signed int v247; // eax
  int v248; // edx
  int v249; // edx
  int k; // eax
  int v251; // eax
  int v252; // ecx
  _DWORD *v253; // esi
  int v254; // edi
  int v255; // edx
  const char *v256; // eax
  int v257; // eax
  int v258; // eax
  int v259; // eax
  int v260; // esi
  _DWORD *v261; // ecx
  _DWORD *v262; // esi
  int v263; // esi
  char *v264; // eax
  _DWORD *v265; // eax
  float v266; // esi
  unsigned int v267; // eax
  unsigned int v268; // edi
  unsigned int v269; // esi
  int v270; // eax
  int v271; // esi
  TESObjectCELL **exteriorCellBufferArray; // ecx
  int v273; // eax
  int v274; // esi
  TESObjectCELL **interiorCellBufferArray; // ecx
  Actor *v276; // eax
  Actor *m; // esi
  ActorVtbl *v278; // edi
  unsigned __int8 (__thiscall *v279)(ActorVtbl *, int); // edx
  Actor *v280; // edi
  int v281; // esi
  Actor *n; // eax
  int v283; // esi
  int j; // edi
  double v285; // [esp+0h] [ebp-56Ch]
  size_t v286; // [esp+8h] [ebp-564h]
  size_t v287; // [esp+8h] [ebp-564h]
  size_t v288; // [esp+8h] [ebp-564h]
  size_t v289; // [esp+8h] [ebp-564h]
  double v290; // [esp+8h] [ebp-564h]
  double v291; // [esp+8h] [ebp-564h]
  float v292; // [esp+Ch] [ebp-560h]
  double v293; // [esp+10h] [ebp-55Ch]
  double v294; // [esp+10h] [ebp-55Ch]
  double v295; // [esp+10h] [ebp-55Ch]
  double v296; // [esp+10h] [ebp-55Ch]
  size_t v297; // [esp+10h] [ebp-55Ch]
  double v298; // [esp+10h] [ebp-55Ch]
  double v299; // [esp+10h] [ebp-55Ch]
  double v300; // [esp+10h] [ebp-55Ch]
  double v301; // [esp+10h] [ebp-55Ch]
  double v302; // [esp+10h] [ebp-55Ch]
  double v303; // [esp+10h] [ebp-55Ch]
  double v304; // [esp+10h] [ebp-55Ch]
  double v305; // [esp+10h] [ebp-55Ch]
  size_t var55C_4; // [esp+14h] [ebp-558h]
  float v307; // [esp+14h] [ebp-558h]
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
  float v608; // [esp+24h] [ebp-548h]
  int v609; // [esp+24h] [ebp-548h]
  int GameYear; // [esp+24h] [ebp-548h]
  int YCoordinate; // [esp+24h] [ebp-548h]
  int v612; // [esp+24h] [ebp-548h]
  int v613; // [esp+24h] [ebp-548h]
  int v614; // [esp+24h] [ebp-548h]
  const char *v615; // [esp+24h] [ebp-548h]
  char *v616; // [esp+24h] [ebp-548h]
  const char *v617; // [esp+24h] [ebp-548h]
  int v618; // [esp+24h] [ebp-548h]
  float v619; // [esp+24h] [ebp-548h]
  float v620; // [esp+24h] [ebp-548h]
  const char *v621; // [esp+24h] [ebp-548h]
  int v622; // [esp+24h] [ebp-548h]
  int v623; // [esp+24h] [ebp-548h]
  const char *v624; // [esp+28h] [ebp-544h]
  const char *v625; // [esp+28h] [ebp-544h]
  const char *v626; // [esp+28h] [ebp-544h]
  const char *v627; // [esp+28h] [ebp-544h]
  const char *v628; // [esp+28h] [ebp-544h]
  const char *v629; // [esp+28h] [ebp-544h]
  const char *v630; // [esp+28h] [ebp-544h]
  int v631; // [esp+5Ch] [ebp-510h] BYREF
  int v632; // [esp+60h] [ebp-50Ch] BYREF
  float v633; // [esp+64h] [ebp-508h] BYREF
  Actor *v634; // [esp+68h] [ebp-504h] BYREF
  void *v635; // [esp+6Ch] [ebp-500h] BYREF
  const char *v636; // [esp+70h] [ebp-4FCh] BYREF
  int v637; // [esp+74h] [ebp-4F8h] BYREF
  unsigned __int64 v638; // [esp+78h] [ebp-4F4h] BYREF
  float v639; // [esp+80h] [ebp-4ECh]
  BSStringT v640; // [esp+84h] [ebp-4E8h] BYREF
  int v641; // [esp+8Ch] [ebp-4E0h]
  const char *v642; // [esp+98h] [ebp-4D4h] BYREF
  char v643; // [esp+9Dh] [ebp-4CFh]
  char v644; // [esp+9Eh] [ebp-4CEh]
  char v645; // [esp+9Fh] [ebp-4CDh]
  int v646; // [esp+A0h] [ebp-4CCh]
  int v647; // [esp+A4h] [ebp-4C8h]
  int v648; // [esp+A8h] [ebp-4C4h] BYREF
  int v649; // [esp+ACh] [ebp-4C0h] BYREF
  int v650; // [esp+B0h] [ebp-4BCh] BYREF
  int v651; // [esp+B4h] [ebp-4B8h] BYREF
  const char *v652; // [esp+B8h] [ebp-4B4h]
  const char *v653; // [esp+BCh] [ebp-4B0h]
  const char *v654; // [esp+C0h] [ebp-4ACh]
  const char *v655; // [esp+C4h] [ebp-4A8h]
  const char *v656; // [esp+C8h] [ebp-4A4h]
  const char *v657; // [esp+CCh] [ebp-4A0h]
  const char *v658; // [esp+D0h] [ebp-49Ch]
  const char *v659; // [esp+D4h] [ebp-498h]
  const char *v660; // [esp+D8h] [ebp-494h]
  const char *v661; // [esp+DCh] [ebp-490h]
  const char *v662; // [esp+E0h] [ebp-48Ch]
  unsigned int v663; // [esp+E4h] [ebp-488h] BYREF
  int v664; // [esp+E8h] [ebp-484h]
  int v665; // [esp+ECh] [ebp-480h]
  int v666; // [esp+F0h] [ebp-47Ch]
  int v667; // [esp+F4h] [ebp-478h]
  int v668; // [esp+F8h] [ebp-474h]
  int v669; // [esp+FCh] [ebp-470h]
  int v670; // [esp+100h] [ebp-46Ch]
  int v671; // [esp+104h] [ebp-468h]
  int v672; // [esp+108h] [ebp-464h]
  int v673; // [esp+10Ch] [ebp-460h]
  int v674; // [esp+110h] [ebp-45Ch]
  int v675; // [esp+114h] [ebp-458h]
  int v676; // [esp+118h] [ebp-454h]
  int v677; // [esp+11Ch] [ebp-450h]
  int v678; // [esp+120h] [ebp-44Ch]
  int v679; // [esp+124h] [ebp-448h]
  int v680; // [esp+128h] [ebp-444h]
  int v681; // [esp+12Ch] [ebp-440h]
  int v682; // [esp+130h] [ebp-43Ch]
  int v684[200]; // [esp+13Ch] [ebp-430h] BYREF
  char Dest[204]; // [esp+45Ch] [ebp-110h] BYREF
  int v686; // [esp+568h] [ebp-4h]
  int savedregs; // [esp+56Ch] [ebp+0h] BYREF

  if ( !byte_B3BD9A )
  {
    if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 && srcObj )
    {
      IsConsoleOpen = 0;
    }
    else
    {
      v5 = sub_579440();
      if ( v5 )
      {
        srcObj = (TESChildCELL *)v5;
        byte_B33414 = v5 == (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      }
      else if ( IsConsoleOpen || !srcObj || srcObj == (TESChildCELL *)TESDataHandler_g_PlayerRef && !byte_B33414 )
      {
        srcObj = (TESChildCELL *)TESDataHandler_g_PlayerRef;
      }
      else
      {
        sub_57C980((char)&savedregs, a2, a3, GameHour, (TESObjectREFR *)srcObj);
      }
      IsConsoleOpen = 1;
    }
    if ( GetInterfaceSingleton0x50() )
    {
      LOBYTE(v6) = InputGlobals::QueryKeyboardState(*(InputGlobal **)(a1 + 0x20), 0x46, 1);
      if ( v6 )
      {
        v7 = (char *)sub_571F90(1);
        sub_571820(v7, a2, a3, GameHour);
        LOBYTE(v8) = InputGlobals::QueryKeyboardState(*(InputGlobal **)(a1 + 0x20), 0x2A, 0);
        if ( v8 || (LOBYTE(v9) = InputGlobals::QueryKeyboardState(*(InputGlobal **)(a1 + 0x20), 0x36, 0), v9) )
          --iDebugText;
        else
          ++iDebugText;
      }
      if ( iDebugText >= 0 )
      {
        if ( iDebugText >= 0x21 )
          iDebugText = 0;
      }
      else
      {
        iDebugText = 0x20;
      }
      v634 = (Actor *)OblivionDynamicCast(
                        srcObj,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &Actor `RTTI Type Descriptor',
                        0);
      LODWORD(v10) = dword_B12DB4 - 1;
      if ( *(_DWORD *)(*(_DWORD *)(FontManager_GetSingleton(GameHour, a3, a2) + 4 * LODWORD(v10)) + 0x38) )
        __asm { fld     dword ptr [eax] }
      else
        __asm { fldz }
      __asm
      {
        fstp    [esp+544h+var_500]
        fld     [esp+544h+var_500]
        fadd    ds:dbl_A30E48
      }
      v12 = Double_To_SInt32(GameHour);
      v632 = v12 + iDebugTextTopBottomOffset;
      v631 = v12 + iDebugTextTopBottomOffset;
      if ( dword_B33410 == dword_B33EA4 )
      {
        v13 = dword_B3340C;
      }
      else
      {
        v13 = Seed;
        dword_B33410 = dword_B33EA4;
      }
      v640.m_data = (char *)(Seed - v13);
      __asm { fild    [esp+544h+var_4E8.m_data] }
      if ( (int)(Seed - v13) < 0 )
        __asm { fadd    ds:flt_A2FC78 }
      __asm { fmul    ds:dbl_A30E40 }
      ++word_B33408;
      dword_B3340C = Seed;
      __asm
      {
        fstp    [esp+544h+var_508]
        fld     flt_B33404
        fadd    [esp+544h+var_508]
        fstp    flt_B33404
        fld1
        fcomp   flt_B33404
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x41, 0) )
      {
        LOWORD(v10) = word_B33400;
      }
      else
      {
        if ( (iDebugText == 0x18 || iDebugText == 0x19) && *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 )
        {
          v15 = (char *)sub_571F90(1);
          sub_571820(v15, a2, a3, GameHour);
        }
        __asm { fld     flt_B33404 }
        LOWORD(v10) = word_B33408;
        __asm
        {
          fst     qword ptr [esp+548h+var_4E8.m_data]
          fstp    [esp+548h+var_548]; float
        }
        word_B33400 = word_B33408;
        GameHour = FloatFloor(v608);
        __asm { fsubr   qword ptr [esp+548h+var_4E8.m_data] }
        word_B33408 = 0;
        __asm { fstp    flt_B33404 }
      }
      if ( fromiUpdateType == 0xA )
      {
        __asm
        {
          fld     flt_B2E2EC
          fld1
          fdivrp  st(1), st
        }
        v609 = Double_To_SInt32(GameHour);
        _sprintf(Dest, "FPS %d (%d)", SLOWORD(v10), v609);
      }
      else
      {
        _sprintf(Dest, "FPS %d (Type %d)", SLOWORD(v10), fromiUpdateType);
      }
      __asm { fild    [esp+554h+var_50C] }
      __asm { fstp    [esp+554h+Format+4]; float }
      LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
      __asm { fild    [esp+554h+var_508] }
      __asm { fstp    [esp+554h+Format]; float }
      InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formata, Format_4g, 3, 0xFFFFFFFF);
      v632 += v12;
      switch ( iDebugText )
      {
        case 0:
          v652 = "Sunday";
          v653 = "Monday";
          v654 = "Tuesday";
          v655 = "Wednesday";
          v656 = "Thursday";
          v657 = "Friday";
          v658 = "Saturday";
          GameDayOfWeek = TimeGlobals_GetGameDayOfWeek(&TimeGlobals);
          _sprintf(Dest, "Day of the Week %s", (&v652)[GameDayOfWeek]);
          __asm { fild    [esp+550h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatbh, Format_4be, 1, 0xFFFFFFFF);
          v631 += v12;
          GameYear = TimeGlobals_GetGameYear(&TimeGlobals);
          GameDay = TimeGlobals_GetGameDay(&TimeGlobals);
          Format_8bd = v53;
          GameMonth = TimeGlobals_GetGameMonth(&TimeGlobals);
          _sprintf(Dest, "Date %d/%d/%d", GameMonth, Format_8bd, GameYear);
          __asm { fild    [esp+558h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameDay, (int)Dest, Formatbi, Format_4bf, 1, 0xFFFFFFFF);
          v631 += v12;
          GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
          __asm
          {
            fstp    [esp+544h+var_508]
            fld     [esp+544h+var_508]
            fld     st
          }
          v55 = Double_To_SInt32(GameHour);
          v56 = v55;
          LODWORD(v633) = v55;
          __asm
          {
            fisub   [esp+544h+var_508]
            fld     ds:dbl_A2FCC8
            fmul    st(1), st
            fld     st(1)
          }
          v57 = Double_To_SInt32(GameHour);
          v58 = v57;
          LODWORD(v633) = v57;
          __asm
          {
            fild    [esp+544h+var_508]
            fsubp   st(2), st
            fmulp   st(1), st
          }
          v59 = Double_To_SInt32(GameHour);
          _sprintf(Dest, "Time %d:%02d:%02d", v56, v58, v59);
          __asm { fild    [esp+558h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatbj, Format_4bg, 1, 0xFFFFFFFF);
          __asm { fild    Seed }
          v631 += v12;
          if ( (int)Seed < 0 )
            __asm { fadd    ds:flt_A2FC78 }
          __asm
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
          v645 = Double_To_SInt32(GameHour);
          __asm
          {
            fxch    st(1)
            fstp    [esp+544h+var_508]
            fld     [esp+544h+var_508]
            fxch    st(1)
          }
          unknown_libname_14(a3, GameHour);
          __asm
          {
            fstp    [esp+544h+var_508]
            fld     [esp+544h+var_508]
          }
          __asm
          {
            fld     [esp+544h+var_500]
            fld     ds:dbl_A2FCC8
          }
          v644 = Double_To_SInt32(GameHour);
          unknown_libname_14(a3, GameHour);
          __asm
          {
            fstp    [esp+544h+var_508]
            fld     [esp+544h+var_508]
          }
          v60 = Double_To_SInt32(GameHour);
          __asm { fld     flt_B33E9C }
          __asm { fstp    qword ptr [esp+54Ch+Format+8] }
          v643 = v60;
          __asm
          {
            fld     [esp+54Ch+var_500]
            fld     st
            fxch    st(1)
          }
          v633 = COERCE_FLOAT(Double_To_SInt32(GameHour));
          __asm
          {
            fisub   [esp+54Ch+var_508]
            fmul    ds:fCostant_100
          }
          v61 = Double_To_SInt32(GameHour);
          _sprintf(Dest, "GamePlay %d:%02d:%02d.%02d (%0.2f)", v645, v644, v643, v61, Format_8be);
          __asm { fild    [esp+544h+var_510] }
          __asm
          {
            fstp    [esp+554h+Format+4]; float
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatbk, Format_4bh, 1, 0xFFFFFFFF);
          v631 += v12;
          if ( TESDataHandler_g_PlayerRef )
          {
            v62 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
            v63 = *(_DWORD *)v62;
            v64 = *((_DWORD *)v62 + 1);
            v65 = v62[2];
            v638 = __PAIR64__(v64, v63);
            currentInteriorCell = TES->currentInteriorCell;
            CurrentWorldspace = 0;
            v639 = v65;
            if ( currentInteriorCell )
              goto LABEL_476;
            __asm { fld     dword ptr [esp+544h+var_4F4+4] }
            CurrentWorldspace = TES::GetCurrentWorldspace(TES);
            __asm
            {
              fstp    [esp+554h+Format+4]; float
              fld     dword ptr [esp+554h+var_4F4]
              fstp    [esp+554h+Format]; float
            }
            currentInteriorCell = (TESObjectCELL *)sub_44A270(
                                                     (_DWORD *)TESDataHandler,
                                                     Formatbl,
                                                     Format_4bi,
                                                     (int)CurrentWorldspace,
                                                     0);
            if ( currentInteriorCell )
            {
LABEL_476:
              if ( TESObjectCELL_IsInterior(currentInteriorCell) )
              {
                v68 = TES->currentInteriorCell->vtbl->GetEditorName(TES->currentInteriorCell);
                _sprintf(Dest, "PC Cell %s", v68);
              }
              else
              {
                YCoordinate = TESObjectCELL_GetYCoordinate(currentInteriorCell);
                XCoordinate = TESObjectCELL_GetXCoordinate(currentInteriorCell);
                v70 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))currentInteriorCell->vtbl->GetEditorName)(
                                      currentInteriorCell,
                                      XCoordinate,
                                      YCoordinate);
                _sprintf(Dest, "PC Cell %s: %d %d ", v70, Format_8bf, v612);
              }
              __asm { fild    [esp+544h+var_510] }
              __asm { fstp    [esp+554h+Format+4]; float }
              __asm
              {
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              InterfaceMgr_DebugTextLine(
                (char)&savedregs,
                a2,
                a3,
                GameHour,
                (int)Dest,
                Formatbm,
                Format_4bj,
                1,
                0xFFFFFFFF);
              v631 += v12;
              v640.m_data = 0;
              v640.m_dataLen = 0;
              v640.m_bufLen = 0;
              v686 = 0;
              if ( CurrentWorldspace )
              {
                ((void (__thiscall *)(TESWorldSpace *, BSStringT *, _DWORD, _DWORD, float))CurrentWorldspace->vtbl[1].super.InitializeComponent)(
                  CurrentWorldspace,
                  &v640,
                  v638,
                  HIDWORD(v638),
                  COERCE_FLOAT(LODWORD(v639)));
              }
              else
              {
                m_data = currentInteriorCell->members.fullName.name.m_data;
                if ( !m_data )
                  m_data = EmptyString;
                BSStringT_Set(&v640, m_data, 0);
              }
              v72 = BSStringT_GetLen(&v640) == 0;
              v73 = "UNKNOWN";
              if ( !v72 )
                v73 = v640.m_data;
              _sprintf(Dest, "Map Name: %s ", v73);
              __asm { fild    [esp+550h+var_510] }
              __asm { fstp    [esp+554h+Format+4]; float }
              __asm
              {
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              InterfaceMgr_DebugTextLine(
                (char)&savedregs,
                a2,
                a3,
                GameHour,
                (int)Dest,
                Formatbn,
                Format_4bk,
                1,
                0xFFFFFFFF);
              v631 += v12;
              v686 = 0xFFFFFFFF;
              BSStringT_Clear((unsigned int *)&v640);
            }
          }
          v74 = (TESObjectREFR *)srcObj;
          if ( !srcObj )
            goto InterfaceMgr_ShowDebugText___def_407DFE;
          v75 = (float *)(*((int (__thiscall **)(TESChildCELL *))srcObj->vtbl + 0x5D))(srcObj);
          __asm { fild    [esp+544h+var_50C] }
          v76 = *v75;
          v77 = *((_DWORD *)v75 + 1);
          v78 = v75[2];
          v638 = __PAIR64__(v77, LODWORD(v76));
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
          __asm { fild    [esp+554h+var_508] }
          v639 = v78;
          __asm { fstp    [esp+554h+Format]; float }
          Name = TESObjectREFR_GetName(v74);
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Name, Formatbo, Format_4bl, 3, 0xFFFFFFFF);
          v632 += v12;
          if ( v74->vtbl->IsActor(v74) )
          {
            v74->vtbl[1].super.Unk_0E((TESForm *)v74);
            __asm { fmul    ds:dbl_A30DC8 }
            __asm { fstp    qword ptr [esp+54Ch+Format+8] }
            _sprintf(Dest, "Heading %0.2f", Format_8bg);
            __asm { fild    [esp+554h+var_50C] }
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
            __asm { fild    [esp+554h+var_508] }
            __asm { fstp    [esp+554h+Format]; float }
            InterfaceMgr_DebugTextLine(
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              (int)Dest,
              Formatbp,
              Format_4bm,
              3,
              0xFFFFFFFF);
            v632 += v12;
          }
          __asm { fld     [esp+544h+var_4EC] }
          __asm { fstp    qword ptr [esp+55Ch+Format+8] }
          __asm
          {
            fld     dword ptr [esp+55Ch+var_4F4+4]
            fstp    qword ptr [esp+55Ch+Format]
            fld     dword ptr [esp+55Ch+var_4F4]
            fstp    qword ptr [esp+55Ch+var_55C]
          }
          _sprintf(Dest, "Pos: %.0f %.0f %.0f", v298, Formatbq, Format_8bh);
          __asm { fild    [esp+564h+var_50C] }
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
          __asm { fild    [esp+554h+var_508] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatbr, Format_4bn, 3, 0xFFFFFFFF);
          v632 += v12;
          if ( v74->vtbl->GetNiNode(v74) )
          {
            v80 = v74->vtbl->GetNiNode(v74);
            v81 = (NiObject *)NiObjectNET_LookupObjectByName(v80, "Bip01");
            v82 = NiRTTI_Cast((BSStringT *)dword_B3FAB0, v81);
            if ( v82 )
            {
              m_uiRefCount = v82[0x11].members.m_uiRefCount;
              LODWORD(v638) = v82[0x11].__vftable;
              v639 = *(float *)&v82[0x12].__vftable;
              __asm
              {
                fld     [esp+55Ch+var_4EC]
                fstp    qword ptr [esp+55Ch+Format+8]
              }
              HIDWORD(v638) = m_uiRefCount;
              __asm { fld     dword ptr [esp+55Ch+var_4F4+4] }
              __asm { fstp    qword ptr [esp+55Ch+Format] }
              __asm
              {
                fld     dword ptr [esp+55Ch+var_4F4]
                fstp    qword ptr [esp+55Ch+var_55C]
              }
              _sprintf(Dest, "%s Pos: %.0f %.0f %.0f", (const char *)v82[1].__vftable, v299, Formatbs, Format_8bi);
              __asm { fild    [esp+568h+var_50C] }
              __asm { fstp    [esp+554h+Format+4]; float }
              LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
              __asm { fild    [esp+554h+var_508] }
              __asm { fstp    [esp+554h+Format]; float }
              InterfaceMgr_DebugTextLine(
                (char)&savedregs,
                a2,
                a3,
                GameHour,
                (int)Dest,
                Formatbt,
                Format_4bo,
                3,
                0xFFFFFFFF);
              v632 += v12;
            }
          }
          ChildNiAvNodeVtbl = SceneGraph_GetChildNiAvNodeVtbl(g_worldScenegraph);
          if ( ChildNiAvNodeVtbl )
          {
            Unk_02 = ChildNiAvNodeVtbl[1].super.Unk_02;
            LODWORD(v638) = ChildNiAvNodeVtbl[1].super.GetType;
            v639 = *(float *)&ChildNiAvNodeVtbl[1].super.Unk_03;
            __asm
            {
              fld     [esp+55Ch+var_4EC]
              fstp    qword ptr [esp+55Ch+Format+8]
            }
            HIDWORD(v638) = Unk_02;
            __asm { fld     dword ptr [esp+55Ch+var_4F4+4] }
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
              v300,
              Formatbu,
              Format_8bj);
            __asm { fild    [esp+568h+var_50C] }
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
            __asm { fild    [esp+554h+var_508] }
            __asm { fstp    [esp+554h+Format]; float }
            InterfaceMgr_DebugTextLine(
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              (int)Dest,
              Formatbv,
              Format_4bp,
              3,
              0xFFFFFFFF);
            v632 += v12;
          }
          if ( TESObjectREFR_GetParentCell(v74) )
          {
            ParentCell = TESObjectREFR_GetParentCell(v74);
            v87 = TESObjectREFR_GetParentCell(v74);
            v613 = TESObjectCELL_GetYCoordinate(v87);
            v88 = TESObjectREFR_GetParentCell(v74);
            v89 = TESObjectCELL_GetXCoordinate(v88);
            v90 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))ParentCell->vtbl->GetEditorName)(
                                  ParentCell,
                                  v89,
                                  v613);
            _sprintf(Dest, "Cell %s: %d %d", v90, Format_8bk, v614);
            __asm { fild    [esp+558h+var_50C] }
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
            __asm { fild    [esp+554h+var_508] }
            __asm { fstp    [esp+554h+Format]; float }
            InterfaceMgr_DebugTextLine(
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              (int)Dest,
              Formatbw,
              Format_4bq,
              3,
              0xFFFFFFFF);
            v632 += v12;
          }
          if ( !v634 )
            goto InterfaceMgr_ShowDebugText___def_407DFE;
          flags = v634->members.super.super.super.flags;
          if ( (flags & 0x800) != 0 || (flags & 0x20) != 0 )
            goto InterfaceMgr_ShowDebugText___def_407DFE;
          ProcessLevel = Actor::GetProcessLevel(v634);
          _sprintf(Dest, "Level %d", ProcessLevel);
          __asm { fild    [esp+550h+var_50C] }
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
          __asm { fild    [esp+554h+var_508] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatbx, Format_4br, 3, 0xFFFFFFFF);
          v632 += v12;
          if ( sub_5E0380(v634) )
          {
            v93 = sub_5E0380(v634);
            if ( TESForm::GetEditorNameLen((TESForm *)v93) )
            {
              v94 = sub_5E0380(v634);
              v615 = v94->__vftable->super.GetEditorName((TESForm *)v94);
              v95 = sub_5E4080(v634);
              _sprintf(Dest, "Package %s (%s)", v95, v615);
            }
            else
            {
              v96 = sub_5E4080(v634);
              _sprintf(Dest, "Package %s", v96);
            }
          }
          else
          {
            _sprintf(Dest, "Package NONE");
          }
          __asm { fild    [esp+544h+var_50C] }
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
          __asm { fild    [esp+554h+var_508] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatby, Format_4bs, 3, 0xFFFFFFFF);
          v632 += v12;
          v97 = v634->members.super.process->GetCurrentPackProcedure(v634->members.super.process);
          if ( !sub_5E0380(v634) || sub_5E0380(v634)->members.procedureArrayIndex == 0xFFFFFFFF )
          {
            _sprintf(Dest, "Procedure Current Pack %s", "None");
          }
          else
          {
            v616 = proceudreNamesArray[*((_DWORD *)*(&off_B152B0 + sub_5E0380(v634)->members.procedureArrayIndex) + v97)];
            _sprintf(Dest, "Procedure Current Pack %s", v616);
          }
          __asm { fild    [esp+550h+var_50C] }
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
          __asm { fild    [esp+554h+var_508] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatbz, Format_4bt, 3, 0xFFFFFFFF);
          v98 = (TESPackage *)sub_5E03A0(v634);
          v632 += v12;
          ExtraPackage = (TESForm *)v98;
          if ( v98 && !sub_5660A0(v98) && TESForm::GetEditorNameLen(ExtraPackage) )
            goto LABEL_132;
          if ( ExtraDataList::GetExtraPackage(&v634->members.super.super.baseExtraList) )
          {
            ExtraPackage = (TESForm *)ExtraDataList::GetExtraPackage(&v634->members.super.super.baseExtraList);
            if ( ExtraPackage->vtbl->GetEditorName(ExtraPackage) )
            {
LABEL_132:
              v100 = ExtraPackage->vtbl->GetEditorName(ExtraPackage);
              _sprintf(Dest, "Current Editor Package %s", v100);
            }
          }
          else
          {
            _sprintf(Dest, "Current Editor Package NONE");
          }
          __asm { fild    [esp+544h+var_50C] }
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
          __asm { fild    [esp+554h+var_508] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatca, Format_4bu, 3, 0xFFFFFFFF);
          v632 += v12;
          if ( !ExtraPackage || (vtbl = ExtraPackage[1].vtbl, vtbl == (TESFormVtbl *)0xFFFFFFFF) )
            _sprintf(Dest, "Procedure Editor Pack  %s", "None");
          else
            _sprintf(
              Dest,
              "Procedure Editor Pack %s",
              proceudreNamesArray[*((_DWORD *)*(&off_B152B0 + (_DWORD)vtbl)
                                  + v634->members.super.process->editorPackProcedure)]);
          __asm { fild    [esp+550h+var_50C] }
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
          __asm { fild    [esp+554h+var_508] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatcb, Format_4bv, 3, 0xFFFFFFFF);
          v632 += v12;
          v634->vtbl->GetAV_F(v634, kActorVal_Health);
          __asm { fstp    qword ptr [esp+54Ch+Format+8] }
          _sprintf(Dest, "Actor Health %.02f", Format_8bl);
          __asm { fild    [esp+554h+var_50C] }
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
          __asm { fild    [esp+554h+var_508] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatcc, Format_4bw, 3, 0xFFFFFFFF);
          v632 += v12;
          if ( sub_5E6830(v634) )
          {
            process = v634->members.super.process;
            v103 = *(_DWORD **)(sub_5E6830(v634) + 0xC);
            Unk_134 = process->Unk_134;
            v633 = *(float *)&v103;
            v617 = Unk_134(process);
            v105 = (TESObjectREFR *)sub_5E6830(v634);
            v106 = TESObjectREFR_GetName(v105);
            _sprintf(Dest, "Heading Target: %s (%08X), (%s)", v106, v633, v617);
          }
          else
          {
            v107 = v634->members.super.process->Unk_134(v634->members.super.process);
            _sprintf(Dest, "Heading Target: (none) (%s)", v107);
          }
          __asm { fild    [esp+544h+var_50C] }
          __asm { fstp    [esp+554h+Format+4]; float }
          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
          __asm { fild    [esp+554h+var_508] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatcd, Format_4bx, 3, 0xFFFFFFFF);
          v632 += v12;
          v108 = v634->members.super.process;
          if ( v108 )
          {
            if ( ((unsigned __int8 (__thiscall *)(LowProcess *))v108->GetUnk278)(v108) )
            {
              _sprintf(Dest, " Movement is stopped");
              __asm { fild    [esp+54Ch+var_50C] }
              __asm { fstp    [esp+554h+Format+4]; float }
              LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
              __asm { fild    [esp+554h+var_508] }
              __asm { fstp    [esp+554h+Format]; float }
              InterfaceMgr_DebugTextLine(
                (char)&savedregs,
                a2,
                a3,
                GameHour,
                (int)Dest,
                Formatce,
                Format_4by,
                3,
                0xFFFFFFFF);
            }
          }
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 1:
          v109 = srcObj;
          if ( !srcObj )
            goto LABEL_323;
          v110 = (*((int (__thiscall **)(TESChildCELL *))srcObj->vtbl + 0x59))(srcObj);
          v109 = srcObj;
          if ( !v110 )
            goto LABEL_323;
          __asm { fild    [esp+544h+var_510] }
          __asm
          {
            fstp    [esp+554h+Format+4]; float
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          v111 = TESObjectREFR_GetName((TESObjectREFR *)srcObj);
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)v111, Formatcf, Format_4bz, 1, 0xFFFFFFFF);
          v631 += v12;
          if ( v634 )
          {
            if ( !v634->members.super.process->GetProcessLevel(v634->members.super.process) )
            {
              Dest[0] = 0;
              v112 = v634->members.super.process->GetMovementFlags(v634->members.super.process);
              if ( (v112 & 0x100) != 0 )
              {
                v113 = (char *)&v684[0xC7] + 3;
                while ( *++v113 )
                  ;
                strcpy(v113, "Walk ");
              }
              if ( (v112 & 0x200) != 0 )
              {
                v115 = (char *)&v684[0xC7] + 3;
                while ( *++v115 )
                  ;
                strcpy(v115, "Run ");
              }
              if ( (v112 & 0x400) != 0 )
              {
                v117 = (char *)&v684[0xC7] + 3;
                while ( *++v117 )
                  ;
                strcpy(v117, "Sneak ");
              }
              if ( (v112 & 0x800) != 0 )
              {
                v119 = (char *)&v684[0xC7] + 3;
                while ( *++v119 )
                  ;
                strcpy(v119, "Swim ");
              }
              if ( (v112 & 0x1000) != 0 )
              {
                v121 = (char *)&v684[0xC7] + 3;
                while ( *++v121 )
                  ;
                strcpy(v121, "Jump ");
              }
              if ( (v112 & 0x2000) != 0 )
              {
                v123 = (char *)&v684[0xC7] + 3;
                while ( *++v123 )
                  ;
                strcpy(v123, "Fly ");
              }
              if ( (v112 & 0x4000) != 0 )
              {
                v125 = (char *)&v684[0xC7] + 3;
                while ( *++v125 )
                  ;
                strcpy(v125, "Fall ");
              }
              if ( (v112 & 0x8000) != 0 )
              {
                v127 = (char *)&v684[0xC7] + 3;
                while ( *++v127 )
                  ;
                strcpy(v127, "Slide ");
              }
              if ( (v112 & 0x10) != 0 )
              {
                v129 = (char *)&v684[0xC7] + 3;
                while ( *++v129 )
                  ;
                strcpy(v129, "TurnLeft ");
              }
              if ( (v112 & 0x20) != 0 )
              {
                v131 = (char *)&v684[0xC7] + 3;
                while ( *++v131 )
                  ;
                strcpy(v131, "TurnRight ");
              }
              if ( (v112 & 1) != 0 )
              {
                v133 = (char *)&v684[0xC7] + 3;
                while ( *++v133 )
                  ;
                strcpy(v133, "Forward ");
              }
              if ( (v112 & 2) != 0 )
              {
                v135 = (char *)&v684[0xC7] + 3;
                while ( *++v135 )
                  ;
                strcpy(v135, "Backward ");
              }
              if ( (v112 & 4) != 0 )
              {
                v137 = (char *)&v684[0xC7] + 3;
                while ( *++v137 )
                  ;
                strcpy(v137, "Left ");
              }
              if ( (v112 & 8) != 0 )
              {
                v139 = (char *)&v684[0xC7] + 3;
                while ( *++v139 )
                  ;
                strcpy(v139, "Right ");
              }
              if ( v634->vtbl->GetMountedHorse(v634) )
              {
                v141 = (char *)&v684[0xC7] + 3;
                while ( *++v141 )
                  ;
                strcpy(v141, " Horse '");
                v143 = (TESObjectREFR *)v634->vtbl->GetMountedHorse(v634);
                v144 = TESObjectREFR_GetName(v143);
                v145 = strlen(v144) + 1;
                v146 = (char *)&v684[0xC7] + 3;
                while ( *++v146 )
                  ;
                qmemcpy(v146, v144, v145);
                v148 = (char *)&v684[0xC7] + 3;
                while ( *++v148 )
                  ;
                strcpy(v148, "' ");
                v150 = v634->vtbl->GetMountedHorse(v634);
                v151 = v150->members.super.super.process->GetMovementFlags(v150->members.super.super.process);
                if ( (v151 & 0x100) != 0 )
                {
                  v152 = (char *)&v684[0xC7] + 3;
                  while ( *++v152 )
                    ;
                  strcpy(v152, "Walk ");
                }
                if ( (v151 & 0x200) != 0 )
                {
                  v154 = (char *)&v684[0xC7] + 3;
                  while ( *++v154 )
                    ;
                  strcpy(v154, "Run ");
                }
                if ( (v151 & 0x400) != 0 )
                {
                  v156 = (char *)&v684[0xC7] + 3;
                  while ( *++v156 )
                    ;
                  strcpy(v156, "Sneak ");
                }
                if ( (v151 & 0x800) != 0 )
                {
                  v158 = (char *)&v684[0xC7] + 3;
                  while ( *++v158 )
                    ;
                  strcpy(v158, "Swim ");
                }
                if ( (v151 & 0x1000) != 0 )
                {
                  v160 = (char *)&v684[0xC7] + 3;
                  while ( *++v160 )
                    ;
                  strcpy(v160, "Jump ");
                }
                if ( (v151 & 0x2000) != 0 )
                {
                  v162 = (char *)&v684[0xC7] + 3;
                  while ( *++v162 )
                    ;
                  strcpy(v162, "Fly ");
                }
                if ( (v151 & 0x4000) != 0 )
                {
                  v164 = (char *)&v684[0xC7] + 3;
                  while ( *++v164 )
                    ;
                  strcpy(v164, "Fall ");
                }
                if ( (v151 & 0x8000) != 0 )
                {
                  v166 = (char *)&v684[0xC7] + 3;
                  while ( *++v166 )
                    ;
                  strcpy(v166, "Slide ");
                }
                if ( (v151 & 0x10) != 0 )
                {
                  v168 = (char *)&v684[0xC7] + 3;
                  while ( *++v168 )
                    ;
                  strcpy(v168, "TurnLeft ");
                }
                if ( (v151 & 0x20) != 0 )
                {
                  v170 = (char *)&v684[0xC7] + 3;
                  while ( *++v170 )
                    ;
                  strcpy(v170, "TurnRight ");
                }
                if ( (v151 & 1) != 0 )
                {
                  v172 = (char *)&v684[0xC7] + 3;
                  while ( *++v172 )
                    ;
                  strcpy(v172, "Forward ");
                }
                if ( (v151 & 2) != 0 )
                {
                  v174 = (char *)&v684[0xC7] + 3;
                  while ( *++v174 )
                    ;
                  strcpy(v174, "Backward ");
                }
                if ( (v151 & 4) != 0 )
                {
                  v176 = (char *)&v684[0xC7] + 3;
                  while ( *++v176 )
                    ;
                  strcpy(v176, "Left ");
                }
                if ( (v151 & 8) != 0 )
                {
                  v178 = (char *)&v684[0xC7] + 3;
                  while ( *++v178 )
                    ;
                  strcpy(v178, "Right ");
                }
              }
              v180 = (MobileObject *)v634;
              if ( Actor_GetCurrentAction(v634) != 0xFFFFFFFF )
              {
                v181 = (char *)&v684[0xC7] + 3;
                while ( *++v181 )
                  ;
                strcpy(v181, " ACTION-> ");
                v183 = off_B14C80[Actor_GetCurrentAction(v634)];
                v184 = strlen(v183) + 1;
                v185 = (char *)&v684[0xC7] + 3;
                while ( *++v185 )
                  ;
                qmemcpy(v185, v183, v184);
                v180 = (MobileObject *)v634;
              }
              v652 = "OnGround";
              v653 = "Jumping";
              v654 = "InAir";
              v655 = "Climbing";
              v656 = "Flying";
              v657 = "Swimming";
              v658 = "Projectile";
              v659 = "UserState2";
              v660 = "UserState3";
              v661 = "UserState4";
              v662 = "UserState5";
              CharProxy = MobileObject_GetCharProxy(v180);
              if ( CharProxy )
              {
                v188 = (char *)&v684[0xC7] + 3;
                while ( *++v188 )
                  ;
                strcpy(v188, " HK_STATE-> ");
                v190 = (&v652)[sub_88D370((_DWORD *)CharProxy + 0x78)];
                v191 = strlen(v190) + 1;
                v192 = (char *)&v684[0xC7] + 3;
                while ( *++v192 )
                  ;
                qmemcpy(v192, v190, v191);
                v180 = (MobileObject *)v634;
              }
              __asm { fild    [esp+544h+var_510] }
              __asm
              {
                fstp    [esp+554h+Format+4]; float
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              if ( Dest[0] )
                InterfaceMgr_DebugTextLine(
                  (char)&savedregs,
                  a2,
                  a3,
                  GameHour,
                  (int)Dest,
                  Format,
                  Format_4e,
                  1,
                  0xFFFFFFFF);
              else
                InterfaceMgr_DebugTextLine(
                  (char)&savedregs,
                  a2,
                  a3,
                  GameHour,
                  (int)EmptyString,
                  Format,
                  Format_4e,
                  1,
                  0xFFFFFFFF);
              v631 += v12;
              v194 = v180->process;
              unk03C = v194[3].unk03C;
              if ( unk03C )
                _sprintf(Dest, "BoneLOD %d of %d", v194[3].unk040, *(_DWORD *)(unk03C + 0x40));
              else
                _sprintf(Dest, "BoneLOD NONE");
              __asm { fild    [esp+544h+var_510] }
              __asm { fstp    [esp+554h+Format+4]; float }
              __asm
              {
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              InterfaceMgr_DebugTextLine(
                (char)&savedregs,
                a2,
                a3,
                GameHour,
                (int)Dest,
                Formatcg,
                Format_4ca,
                1,
                0xFFFFFFFF);
              v631 += v12;
            }
          }
          v109 = srcObj;
          v196 = TESDataHandler_g_PlayerRef;
          v635 = (void *)1;
          if ( srcObj != (TESChildCELL *)TESDataHandler_g_PlayerRef )
            goto LABEL_297;
          if ( !TESDataHandler_g_PlayerRef->inventoryPC )
            v635 = (void *)2;
          while ( 2 )
          {
            if ( v109 == (TESChildCELL *)v196 )
            {
              if ( v196->inventoryPC )
              {
                strcpy(Dest, "Inventory PC");
                _EDI = v196->defaultAnimData;
              }
              else
              {
                v198 = &off_A3069C;
                if ( v635 != (void *)2 )
                  v198 = &off_A30698;
                _sprintf(Dest, "%s Person", (const char *)v198);
                _EDI = (ActorAnimData *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, v635 == (void *)2);
              }
              __asm { fild    [esp+544h+var_510] }
              __asm { fstp    [esp+554h+Format+4]; float }
              __asm
              {
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              InterfaceMgr_DebugTextLine(
                (char)&savedregs,
                a2,
                a3,
                GameHour,
                (int)Dest,
                Formatch,
                Format_4cb,
                1,
                0xFFFFFFFF);
              v631 += v12;
            }
            else
            {
LABEL_297:
              _EDI = (ActorAnimData *)(*((int (__thiscall **)(TESChildCELL *))v109->vtbl + 0x59))(v109);
            }
            *(float *)&v199 = 0.0;
            *(float *)&v637 = 0.0;
            do
            {
              v633 = COERCE_FLOAT(sub_4706E0(_EDI, v199));
              if ( v633 != 0.0 )
              {
                AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(_EDI, v637);
                v201 = AnimGroupFromField8Value;
                v618 = *(_DWORD *)(LODWORD(v633) + 0xC);
                Format_8bm = *(const char **)&animGroupInfos_ptr[0x24 * sub_51AA00(AnimGroupFromField8Value)];
                Format_4cc = (&off_B102C8)[sub_51A9E0(v201)];
                v202 = sub_51A9D0(v201);
                _sprintf(
                  Dest,
                  "%s -> %s/%s/%s, Count: %d",
                  off_B108EC[v637],
                  (&off_B102B8)[v202],
                  Format_4cc,
                  Format_8bm,
                  v618);
                __asm { fild    [esp+560h+var_510] }
                __asm { fstp    [esp+554h+Format+4]; float }
                __asm
                {
                  fild    iDebugTextLeftRightOffset
                  fstp    [esp+554h+Format]; float
                }
                InterfaceMgr_DebugTextLine(
                  (char)&savedregs,
                  a2,
                  a3,
                  GameHour,
                  (int)Dest,
                  Formatci,
                  Format_4cd,
                  1,
                  0xFFFFFFFF);
                v199 = v637;
                v631 += v12;
              }
              v637 = ++v199;
            }
            while ( v199 < 5 );
            v203 = 0;
            v638 = *(_QWORD *)&Vector3_InitValue_;
            v639 = dword_B3F9B0;
            if ( !v634 )
              goto LABEL_314;
            v204 = ActorAnimData_GetAnimGroupFromField8Value(_EDI, 0);
            v205 = (unsigned int)(sub_51AA00(v204) - 7) <= 3;
            GetMovementFlags = (int (*)(void))v634->members.super.process->GetMovementFlags;
            if ( v205 )
            {
              if ( (GetMovementFlags() & 0x800) != 0 )
              {
                GameHour = sub_5E3AD0((int *)v634);
                goto LABEL_313;
              }
              v207 = v634->members.super.process->GetMovementFlags(v634->members.super.process);
              v208 = (int *)v634;
              if ( (v207 & 0x2000) != 0 )
                goto LABEL_307;
              GameHour = sub_5E3750((int *)v634);
            }
            else if ( (GetMovementFlags() & 0x800) != 0 )
            {
              GameHour = sub_5E3920((int *)v634);
            }
            else
            {
              v209 = v634->members.super.process->GetMovementFlags(v634->members.super.process);
              v208 = (int *)v634;
              if ( (v209 & 0x2000) != 0 )
              {
LABEL_307:
                GameHour = sub_5E3C80(v208);
                goto LABEL_313;
              }
              GameHour = sub_5E3590(v634);
            }
LABEL_313:
            v203 = Double_To_SInt32(GameHour);
LABEL_314:
            LODWORD(v633) = (unsigned __int16)ActorAnimData_GetAnimGroupFromField8Value(_EDI, 0);
            sub_4723A0((float *)&_EDI->unk00, GameHour, (int)&v638, srcObj, 0, 0);
            __asm
            {
              fld     dword ptr [edi+0C0h]
              fstp    [esp+544h+var_4F8]
              fld     dword ptr [edi+0BCh]
              fstp    [esp+544h+var_4D4]
              fld     dword ptr [edi+94h]
              fstp    [esp+544h+var_4FC]
            }
            GameHour = sub_404C90((float *)&v638);
            __asm { fstp    qword ptr [esp+54Ch+Format+8] }
            sub_472330(_EDI, SLODWORD(v633));
            __asm { fld     [esp+550h+var_4F8] }
            __asm
            {
              fstp    qword ptr [esp+56Ch+var_55C]
              fld     [esp+56Ch+var_4D4]
              fstp    qword ptr [esp+56Ch+var_564]
              fld     [esp+56Ch+var_4FC]
              fstp    [esp+56Ch+var_56C]
            }
            _sprintf(
              Dest,
              "time %.2f move %.1f attack %.1f speed %d/%d delta %.1f",
              v285,
              v290,
              v301,
              v210,
              v203,
              Format_8bn);
            __asm { fild    [esp+574h+var_510] }
            __asm { fstp    [esp+554h+Format+4]; float }
            __asm
            {
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine(
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              (int)Dest,
              Formatcj,
              Format_4ce,
              1,
              0xFFFFFFFF);
            v631 += v12;
            for ( i = sub_474BD0(_EDI); i; i = sub_472690(_EDI, i) )
            {
              v212 = *(_DWORD *)(i + 0x14);
              __asm { fld     ds:flt_A30634 }
              v213 = *(_DWORD *)(v212 + 8);
              __asm { fstp    [esp+544h+var_4F8] }
              if ( v213 )
              {
                v214 = *(_BYTE *)(v212 + 0xC);
                if ( v214 < *(_BYTE *)(v213 + 0xD) )
                {
                  sub_404E90(v213, v214);
                  __asm { fstp    [esp+544h+var_4F8] }
                }
              }
              __asm { fld     dword ptr [edi+94h] }
              __asm { fstp    [esp+548h+var_4FC] }
              __asm
              {
                fld     [esp+548h+var_4FC]
                fstp    [esp+548h+var_548]; float
              }
              sub_49F4A0(i, v619);
              __asm { fld     ds:flt_A7DEB4 }
              __asm { fchs }
              v215 = off_B02C58[*(_DWORD *)(i + 0x44)];
              __asm { fucompp }
              __asm { fnstsw  ax }
              v217 = __SETP__(HIBYTE(_AX) & 0x44, 0);
              v218 = off_B02C74[*(_DWORD *)(i + 0x24)];
              if ( v217 )
              {
                __asm { fld     dword ptr [edi+94h] }
                v642 = *(const char **)(i + 8);
                __asm
                {
                  fstp    [esp+54Ch+var_4FC]
                  fld     [esp+54Ch+var_4F8]
                  fstp    qword ptr [esp+54Ch+Format+8]
                }
                Format_4cg = v218;
                Formatcl = v215;
                sub_470CE0(i);
                __asm { fstp    qword ptr [esp+560h+var_55C] }
                __asm
                {
                  fld     [esp+560h+var_4FC]
                  fstp    [esp+560h+var_564+4]; float
                }
                GameHour = sub_49F4A0(i, v292);
                __asm { fstp    qword ptr [esp+564h+var_564] }
                _sprintf(
                  Dest,
                  "'%s' time %.2f/%.2f state %s/%s ease %.2f",
                  v642,
                  v291,
                  v303,
                  Formatcl,
                  Format_4cg,
                  Format_8bp);
              }
              else
              {
                __asm { fld     [esp+54Ch+var_4F8] }
                v636 = *(const char **)(i + 8);
                __asm { fstp    qword ptr [esp+54Ch+Format+8] }
                Format_4cf = v218;
                Formatck = v215;
                GameHour = sub_470CE0(i);
                __asm { fstp    qword ptr [esp+55Ch+var_55C] }
                _sprintf(
                  Dest,
                  "'%s' time -INF/%.2f state %s/%s ease %.2f",
                  v636,
                  v302,
                  Formatck,
                  Format_4cf,
                  Format_8bo);
              }
              __asm { fild    [esp+544h+var_510] }
              __asm { fstp    [esp+554h+Format+4]; float }
              __asm
              {
                fild    iDebugTextLeftRightOffset
                fstp    [esp+554h+Format]; float
              }
              InterfaceMgr_DebugTextLine(
                (char)&savedregs,
                a2,
                a3,
                GameHour,
                (int)Dest,
                Formatcm,
                Format_4ch,
                1,
                0xFFFFFFFF);
              v631 += v12;
            }
            v72 = v635 == (void *)1;
            v635 = (char *)v635 + 0xFFFFFFFF;
            v109 = srcObj;
            if ( !v72 )
            {
              v196 = TESDataHandler_g_PlayerRef;
              continue;
            }
            break;
          }
LABEL_323:
          if ( !v634 )
          {
            v219 = (int)v109;
            v637 = (int)v109;
            if ( *(float *)&v109 != 0.0 )
            {
              v220 = 0;
              v634 = 0;
              while ( v220 )
              {
                if ( v220 == (Actor *)1 )
                {
                  v226 = (*(int (__thiscall **)(int))(*(_DWORD *)v219 + 0x154))(v219);
                  if ( v226 )
                    v227 = *(NiObject **)(v226 + 0xC);
                  else
                    v227 = 0;
                  *(float *)&v225 = COERCE_FLOAT(NiRTTI_Cast(&stru_B3CAC0, v227));
                  v633 = *(float *)&v225;
LABEL_336:
                  if ( *(float *)&v225 != 0.0 )
                  {
                    v72 = HIWORD(v225[8].members.m_uiRefCount) == 0;
                    *(float *)&v635 = 0.0;
                    if ( !v72 )
                    {
                      v228 = (unsigned int)v635;
                      do
                      {
                        vftable = v225[8].__vftable;
                        _ESI = *((_DWORD **)&vftable->super.Destructor + v228);
                        if ( _ESI )
                        {
                          if ( _ESI[0x11] )
                          {
                            __asm { fld     flt_B33A30 }
                            __asm { fstp    [esp+548h+var_548]; float }
                            GameHour = sub_49F4A0(*((_DWORD *)&vftable->super.Destructor + v228), v620);
                            __asm { fld     ds:flt_A7DEB4 }
                            v231 = _ESI[0x11];
                            __asm
                            {
                              fchs
                              fucompp
                              fnstsw  ax
                            }
                            if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
                            {
                              __asm { fld     dword ptr [esi+30h] }
                              v233 = off_B02C74[_ESI[9]];
                              __asm
                              {
                                fstp    [esp+544h+var_4FC]
                                fld     dword ptr [esi+2Ch]
                              }
                              v234 = off_B02C58[v231];
                              v235 = (const char *)_ESI[2];
                              __asm
                              {
                                fstp    [esp+544h+var_4D4]
                                fld     [esp+544h+var_4FC]
                              }
                              v621 = v233;
                              __asm { fsub    [esp+548h+var_4D4] }
                              Format_8bq = v234;
                              __asm
                              {
                                fstp    qword ptr [esp+558h+Format]
                                fld     flt_B33A30
                                fstp    [esp+558h+var_55C+4]; float
                              }
                              GameHour = sub_49F4A0((int)_ESI, v307);
                              __asm { fstp    qword ptr [esp+55Ch+var_55C] }
                              _sprintf(Dest, "'%s' time %.2f/%.2f state %s/%s", v235, v304, Formatco, Format_8bq, v621);
                              *(float *)&v225 = v633;
                            }
                            else
                            {
                              __asm { fld     dword ptr [esi+30h] }
                              __asm { fsub    dword ptr [esi+2Ch] }
                              __asm { fstp    qword ptr [esp+554h+Format] }
                              _sprintf(
                                Dest,
                                "'%s' time -INF/%.2f state %s/%s",
                                (const char *)_ESI[2],
                                Formatcn,
                                off_B02C58[v231],
                                off_B02C74[_ESI[9]]);
                            }
                            __asm { fild    [esp+544h+var_510] }
                            __asm { fstp    [esp+554h+Format+4]; float }
                            __asm
                            {
                              fild    iDebugTextLeftRightOffset
                              fstp    [esp+554h+Format]; float
                            }
                            InterfaceMgr_DebugTextLine(
                              (char)&savedregs,
                              a2,
                              a3,
                              GameHour,
                              (int)Dest,
                              Formatcp,
                              Format_4ci,
                              1,
                              0xFFFFFFFF);
                            v228 = (unsigned int)v635;
                            v631 += v12;
                          }
                        }
                        m_uiRefCount_high = HIWORD(v225[8].members.m_uiRefCount);
                        v635 = (void *)++v228;
                      }
                      while ( v228 < m_uiRefCount_high );
                    }
                    __asm { fild    [esp+544h+var_510] }
                    __asm
                    {
                      fstp    [esp+554h+Format+4]; float
                      fild    iDebugTextLeftRightOffset
                      fstp    [esp+554h+Format]; float
                    }
                    InterfaceMgr_DebugTextLine(
                      (char)&savedregs,
                      a2,
                      a3,
                      GameHour,
                      (int)EmptyString,
                      Formatcq,
                      Format_4cj,
                      1,
                      0xFFFFFFFF);
                    v631 += v12;
                  }
LABEL_347:
                  v219 = v637;
                  v220 = v634;
                }
                v220 = (Actor *)((char *)v220 + 1);
                v634 = v220;
                if ( (int)v220 >= 2 )
                  goto InterfaceMgr_ShowDebugText___def_407DFE;
              }
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v219 + 0x154))(v219) )
              {
                v221 = (*(int (__thiscall **)(int))(*(_DWORD *)v219 + 0x154))(v219);
                if ( sub_405790(v221, 0) )
                {
                  v222 = (*(int (__thiscall **)(int))(*(_DWORD *)v219 + 0x154))(v219);
                  if ( *(_DWORD *)(sub_405790(v222, 0) + 0xC) )
                  {
                    v223 = (*(int (__thiscall **)(int))(*(_DWORD *)v637 + 0x154))(v637);
                    v224 = sub_405790(v223, 0);
                    *(float *)&v225 = COERCE_FLOAT(NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v224 + 0xC)));
                    v633 = *(float *)&v225;
                    goto LABEL_336;
                  }
                }
              }
              goto LABEL_347;
            }
          }
InterfaceMgr_ShowDebugText___def_407DFE:
          v283 = v631;
          for ( j = v632; v631 < dword_B333FC; v631 += v12 )
          {
            __asm { fild    [esp+544h+var_510] }
            __asm
            {
              fstp    [esp+554h+Format+4]; float
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine(
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              (int)EmptyString,
              Formatex,
              Format_4eo,
              1,
              0xFFFFFFFF);
          }
          for ( dword_B333FC = v283; v632 < dword_B333F8; v632 += v12 )
          {
            __asm { fild    [esp+544h+var_50C] }
            __asm { fstp    [esp+554h+Format+4]; float }
            v640.m_data = (char *)(0x500 - iDebugTextLeftRightOffset);
            __asm
            {
              fild    [esp+554h+var_4E8.m_data]
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine(
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              (int)EmptyString,
              Formatey,
              Format_4ep,
              3,
              0xFFFFFFFF);
          }
          dword_B333F8 = j;
          break;
        case 2:
          sub_435600((int)ModelLoaderPtr, a2, a3, v12, &v631, &v632, 0);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 3:
          sub_435600((int)ModelLoaderPtr, a2, a3, v12, &v631, &v632, 1);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 4:
          if ( dword_B35B90 )
            sub_4BE5B0((_DWORD *)dword_B35B90, (char)&savedregs, a2, a3, v12, &v631, &v632);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 5:
          sub_4FC360(a2, v12, &v631, &v632);
          sub_4FAAF0();
          if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 )
            goto InterfaceMgr_ShowDebugText___def_407DFE;
          return;
        case 6:
          sub_61EB80(a3, GameHour, (TESObjectREFR *)srcObj, v12, &v631, &v632);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 7:
          sub_4AA1F0(v12, COERCE_FLOAT(&savedregs), *(float *)&a1, v10, srcObj, v12, &v631, &v632);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 8:
          Magic_ShowDebugText(a2, a3, (TESObjectREFR *)srcObj, v12, &v631, &v632);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 9:
          sub_5F8890(a1, (TESObjectREFR *)srcObj, v12, &v631, &v632);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 0xA:
          sub_666BB0((char)&savedregs, a2, a3, v12, &v631, &v632);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 0xB:
          sub_6A9110(a2, a3, GameHour, *(_DWORD *)(a1 + 0x24), v12, &v631, &v632);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 0xD:
          sub_4048B0(&v642, &v636, &v633, &v635, &v637, &v634, &v650, &v651, &v649, &v640, &v648);
          inited = InitBSShaderAccumulator();
          v238 = v642;
          v239 = inited;
          v646 = dword_B42064 + dword_B3FAB8;
          v647 = dword_B42054;
          _sprintf(Dest, "Geometry %d (%d)", v642, v636);
          __asm { fild    [esp+580h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatcr, Format_4ck, 1, 0xFFFFFFFF);
          v631 += v12;
          if ( *(float *)&v238 == 0.0 )
          {
            __asm { fldz }
          }
          else
          {
            *(float *)&v636 = v633;
            __asm { fild    [esp+544h+var_4FC] }
            if ( v633 < 0.0 )
              __asm { fadd    ds:flt_A2FC78 }
            v636 = v238;
            __asm { fild    [esp+544h+var_4FC] }
            if ( (int)v238 < 0 )
              __asm { fadd    ds:flt_A2FC78 }
            __asm { fdivp   st(1), st }
          }
          __asm
          {
            fstp    [esp+54Ch+var_4FC]
            fld     [esp+54Ch+var_4FC]
          }
          __asm { fstp    qword ptr [esp+54Ch+Format+8] }
          _sprintf(Dest, "Tri %d  : %.2f", v633, Format_8br);
          __asm { fild    [esp+558h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatcs, Format_4cl, 1, 0xFFFFFFFF);
          v631 += v12;
          if ( *(float *)&v238 == 0.0 )
          {
            __asm { fldz }
          }
          else
          {
            v636 = (const char *)v635;
            __asm { fild    [esp+544h+var_4FC] }
            if ( (int)v635 < 0 )
              __asm { fadd    ds:flt_A2FC78 }
            v636 = v238;
            __asm { fild    [esp+544h+var_4FC] }
            if ( (int)v238 < 0 )
              __asm { fadd    ds:flt_A2FC78 }
            __asm { fdivp   st(1), st }
          }
          __asm
          {
            fstp    [esp+54Ch+var_4FC]
            fld     [esp+54Ch+var_4FC]
          }
          __asm { fstp    qword ptr [esp+54Ch+Format+8] }
          _sprintf(Dest, "Pass %d  : %.2f", v635, Format_8bs);
          __asm { fild    [esp+558h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatct, Format_4cm, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "TriPasses %d", v637);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatcu, Format_4cn, 1, 0xFFFFFFFF);
          __asm { fild    [esp+558h+var_504] }
          v631 += v12;
          if ( (int)v634 < 0 )
            __asm { fadd    ds:flt_A2FC78 }
          __asm { fmul    ds:dbl_A30550 }
          __asm
          {
            fstp    [esp+54Ch+var_4FC]
            fld     [esp+54Ch+var_4FC]
            fstp    qword ptr [esp+54Ch+Format+8]
          }
          _sprintf(Dest, "QueueMem %.2f kb", Format_8bt);
          __asm { fild    [esp+554h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatcv, Format_4co, 1, 0xFFFFFFFF);
          __asm { fild    [esp+558h+var_4CC] }
          v631 += v12;
          if ( v646 < 0 )
            __asm { fadd    ds:flt_A2FC78 }
          __asm { fld     ds:dbl_A30530 }
          __asm
          {
            fmul    st(1), st
            fxch    st(1)
            fstp    [esp+558h+var_4CC]
            fild    [esp+558h+var_4C8]
          }
          if ( v647 < 0 )
            __asm { fadd    ds:flt_A2FC78 }
          __asm { fmulp   st(1), st }
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
          _sprintf(Dest, "TextureMem S %.2f + R %.2f = T %.2f Mb", v305, Formatcw, Format_8bu);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatcx, Format_4cp, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Occlusion Geom: %d , %d tri , %d wait loops", v650, v651, v649);
          __asm { fild    [esp+56Ch+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatcy, Format_4cq, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Sun Occlusion Wait Frames: %d", v648);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatcz, Format_4cr, 1, 0xFFFFFFFF);
          v631 += v12;
          if ( v239 )
          {
            _sprintf(Dest, "Sun Occlusion Pixels: %d", *((_DWORD *)v239 + 0x2F));
            __asm { fild    [esp+550h+var_510] }
            __asm { fstp    [esp+554h+Format+4]; float }
            __asm
            {
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine(
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              (int)Dest,
              Formatda,
              Format_4cs,
              1,
              0xFFFFFFFF);
            v631 += v12;
          }
          _sprintf(Dest, "Bound Volume Occlusion Wait Loops: %d", v640.m_data);
          __asm { fild    [esp+550h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdb, Format_4ct, 1, 0xFFFFFFFF);
          v631 += v12;
          if ( v239 )
          {
            if ( srcObj )
            {
              if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))srcObj->vtbl + 0x64))(srcObj) )
              {
                if ( srcObj != (TESChildCELL *)TESDataHandler_g_PlayerRef )
                {
                  v240 = sub_7AA4A0(v239, (int)srcObj[3].vtbl);
                  _sprintf(Dest, "Bound Volume Occlusion Pixels: %d", v240);
                  __asm { fild    [esp+550h+var_510] }
                  __asm { fstp    [esp+554h+Format+4]; float }
                  __asm
                  {
                    fild    iDebugTextLeftRightOffset
                    fstp    [esp+554h+Format]; float
                  }
                  InterfaceMgr_DebugTextLine(
                    (char)&savedregs,
                    a2,
                    a3,
                    GameHour,
                    (int)Dest,
                    Formatdc,
                    Format_4cu,
                    1,
                    0xFFFFFFFF);
                  v631 += v12;
                }
              }
            }
          }
          v241 = *(_WORD *)(GetShadowSceneNode(0) + 0xF0);
          ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
          v243 = sub_7C6740(ShadowSceneNode);
          _sprintf(Dest, "Active Lights: %d / %d", v243, v241);
          __asm { fild    [esp+544h+var_510] }
          __asm
          {
            fstp    [esp+554h+Format+4]; float
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdd, Format_4cv, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Grass : %i g, %i i", dword_B43348, dword_B4334C);
          __asm { fild    [esp+568h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatde, Format_4cw, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "DistantLOD : %i g, %i i", dword_B42D5C, dword_B42D60);
          __asm { fild    [esp+568h+var_510] }
          __asm { fstp    [esp+554h+Format+4] }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdf, Format_4cx, 1, 0xFFFFFFFF);
          goto LABEL_468;
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
          v640.m_data = (char *)(iDebugText - 0xE);
          _sprintf(Dest, "SOURCE TEXTURES: PAGE %d", iDebugText - 0xE + 1);
          __asm { fild    [esp+550h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdg, Format_4cy, 1, 0xFFFFFFFF);
          v631 += v12;
          if ( word_B33408 || *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 )
            goto InterfaceMgr_ShowDebugText___def_407DFE;
          GameHour = _memset(v684, 0, sizeof(v684));
          v244 = (NiObject *)dword_B3F700;
          if ( !dword_B3F700 )
            goto LABEL_412;
          do
          {
            if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3F95C, v244) )
            {
              v245 = v244[4].members.m_uiRefCount;
              if ( v245 )
              {
                if ( bShowMenuTextureUse || !sub_4053E0(v245, (int)v244) )
                {
                  v246 = 0xFFFFFFFF;
                  v247 = 0;
                  while ( v246 == 0xFFFFFFFF )
                  {
                    v248 = v684[v247];
                    if ( !v248
                      || (v249 = *(_DWORD *)(v248 + 0x24)) != 0 && *(_DWORD *)(v249 + 0x60) < *(_DWORD *)(v245 + 0x60) )
                    {
                      v246 = v247;
                    }
                    if ( ++v247 >= 0xC8 )
                    {
                      if ( v246 == 0xFFFFFFFF )
                        goto LABEL_411;
                      break;
                    }
                  }
                  for ( k = 0xC7; k > v246; --k )
                    v684[k] = v684[k - 1];
                  v684[v246] = (int)v244;
                }
              }
            }
LABEL_411:
            v244 = (NiObject *)v244[5].members.m_uiRefCount;
          }
          while ( v244 );
LABEL_412:
          v251 = 0x14 * (int)v640.m_data;
          v252 = 0x14 * (int)v640.m_data + 0x14;
          v635 = (void *)(0x14 * (int)v640.m_data);
          v648 = v252;
          if ( 0x14 * (int)v640.m_data < v252 )
          {
            do
            {
              v253 = (_DWORD *)v684[v251];
              if ( v253 )
              {
                v254 = v253[0xD];
                v255 = v253[9];
                if ( v254 )
                {
                  v256 = (const char *)v253[0xD];
                  v640.m_data = (char *)(v254 + 1);
                  v257 = (int)&v256[strlen(v256) - v254];
                  if ( v257 > 0x19 )
                    v254 = v254 + v257 - 0x19;
                }
                v258 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v253 + 0x50))(v253, *(_DWORD *)(v255 + 0x60) >> 0xA);
                v259 = (*(int (__thiscall **)(_DWORD *, int))(*v253 + 0x4C))(v253, v258);
                _sprintf(Dest, "%d: %s, %dx%d, %dkb", (char *)v635 + 1, (const char *)v254, v259, Format_8bv, v622);
                __asm { fild    [esp+560h+var_510] }
                __asm { fstp    [esp+554h+Format+4]; float }
                __asm
                {
                  fild    iDebugTextLeftRightOffset
                  fstp    [esp+554h+Format]; float
                }
                InterfaceMgr_DebugTextLine(
                  (char)&savedregs,
                  a2,
                  a3,
                  GameHour,
                  (int)Dest,
                  Formatdh,
                  Format_4cz,
                  1,
                  0xFFFFFFFF);
                v252 = v648;
                v251 = (int)v635;
                v631 += v12;
              }
              v635 = (void *)++v251;
            }
            while ( v251 < v252 );
          }
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 0x18:
          v260 = dword_B3C21C;
          if ( dword_B3C21C )
          {
            _sprintf(Dest, "PROFILER(AVE/%d FRAMES)", 0x3C);
            __asm { fild    [esp+550h+var_510] }
            __asm { fstp    [esp+554h+Format+4]; float }
            __asm
            {
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine(
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              (int)Dest,
              Formatdi,
              Format_4da,
              1,
              0xFFFFFFFF);
            v631 += v12;
            if ( !word_B33408 && *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 )
            {
              sub_6B9520((char *)v260);
              v261 = *(_DWORD **)(v260 + 4);
              if ( v261 )
                sub_6B9750(v261, a2, a3, &v631, v12, v261[9], EmptyString);
            }
            goto InterfaceMgr_ShowDebugText___def_407DFE;
          }
          _sprintf(Dest, "PROFILER NOT ENABLED");
          __asm { fild    [esp+54Ch+var_510] }
          __asm
          {
            fstp    [esp+554h+Format+4]
            fild    iDebugTextLeftRightOffset
          }
LABEL_467:
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatew, Format_4f, 1, 0xFFFFFFFF);
          goto LABEL_468;
        case 0x19:
          v262 = (_DWORD *)dword_B3C21C;
          if ( dword_B3C21C )
          {
            _sprintf(Dest, "PROFILER(MAX/%d FRAMES)", 0x12C);
            __asm { fild    [esp+550h+var_510] }
            __asm { fstp    [esp+554h+Format+4]; float }
            __asm
            {
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]; float
            }
            InterfaceMgr_DebugTextLine(
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              (int)Dest,
              Formatdk,
              Format_4dc,
              1,
              0xFFFFFFFF);
            v631 += v12;
            if ( !word_B33408 && *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 )
            {
              v263 = sub_6B9510(v262);
              v264 = (char *)FormHeapAlloc(0x28u);
              v640.m_data = v264;
              v686 = 1;
              if ( v264 )
                v265 = sub_6B9BD0(v264, "Root", 0);
              else
                v265 = 0;
              sub_405070(&v633, (int)v265);
              v623 = v263;
              v266 = v633;
              v686 = 2;
              sub_6B9D10((_DWORD *)LODWORD(v633), v623);
              NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>((_DWORD *)LODWORD(v266));
              sub_6B9E10((_DWORD *)LODWORD(v266));
              v267 = *(_DWORD *)(LODWORD(v266) + 0x24);
              if ( !v267 )
                v267 = 1;
              sub_6B9750((_DWORD *)LODWORD(v266), a2, a3, &v631, v12, v267, EmptyString);
              v686 = 0xFFFFFFFF;
              sub_7016A0((NiD3DVertexShader *)&v633);
            }
          }
          else
          {
            _sprintf(Dest, "PROFILER(MAX) NOT ENABLED");
            __asm { fild    [esp+54Ch+var_510] }
            __asm { fstp    [esp+554h+Format+4] }
            __asm
            {
              fild    iDebugTextLeftRightOffset
              fstp    [esp+554h+Format]
            }
            InterfaceMgr_DebugTextLine(
              (char)&savedregs,
              a2,
              a3,
              GameHour,
              (int)Dest,
              Formatdj,
              Format_4db,
              1,
              0xFFFFFFFF);
LABEL_468:
            v631 += v12;
          }
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 0x1A:
          _sprintf(Dest, "HEAP STATS");
          __asm { fild    [esp+54Ch+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdl, Format_4dd, 1, 0xFFFFFFFF);
          v631 += v12;
          if ( word_B33408 || *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 )
            goto InterfaceMgr_ShowDebugText___def_407DFE;
          MemoryHeap_GetStats(&FormHeap, &v663, 1);
          v268 = v663 >> 0xA;
          if ( !(v663 >> 0xA) )
            v268 = 1;
          _sprintf(Dest, "Mem heap size: %d kb", v268);
          __asm { fild    [esp+550h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdm, Format_4de, 1, 0xFFFFFFFF);
          v631 += v12;
          v269 = v664 / 0x400;
          if ( !(v664 / 0x400) )
            v269 = 1;
          _sprintf(Dest, "Mem used for blocks: %d kb, %d%%", v269, 0x64 * (v664 / 0x400) / v268);
          __asm { fild    [esp+554h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdn, Format_4df, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "High mem allocated: %d kb, %d%%", v665 / 0x400, 0x64 * (v665 / 0x400) / v268);
          __asm { fild    [esp+568h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdo, Format_4dg, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Used blocks: %d", v666);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdp, Format_4dh, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Free blocks: %d", v667);
          __asm { fild    [esp+564h+var_510] }
          __asm
          {
            fstp    [esp+554h+Format+4]; float
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdq, Format_4di, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Max free blocks: %d", v668);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdr, Format_4dj, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Blocks over heap: %d", v669);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatds, Format_4dk, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Mem over heap: %d kb", v670 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdt, Format_4dl, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "High mem over heap: %d kb", v671 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdu, Format_4dm, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Free blocks mem: %d kb, %d%%", v672 / 0x400, 0x64 * (v672 / 0x400) / v269);
          __asm { fild    [esp+568h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdv, Format_4dn, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Used block mem: %d kb, %d%%", v673 / 0x400, 0x64 * (v673 / 0x400) / v269);
          __asm { fild    [esp+568h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdw, Format_4do, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Largest free block size: %d kb", v674 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdx, Format_4dp, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Largest used block size: %d kb", v675 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdy, Format_4dq, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Class overhead: %d kb", v676 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatdz, Format_4dr, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Free list overhead: %d kb", v677 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatea, Format_4ds, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Mem debug overhead: %d kb", v678 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formateb, Format_4dt, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Mem used (System): %d kb", v679 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatec, Format_4du, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Mem total (System): %d kb", v680 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formated, Format_4dv, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "High mem used (System): %d kb", v681 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatee, Format_4dw, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Mem used by pools: %d kb", v682 / 0x400);
          __asm { fild    [esp+564h+var_510] }
          __asm
          {
            fstp    [esp+554h+Format+4]
            fild    iDebugTextLeftRightOffset
          }
          goto LABEL_467;
        case 0x1B:
          _sprintf(Dest, "MEMCONTEXT");
          __asm { fild    [esp+54Ch+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatef, Format_4dx, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "NOT ENABLED");
          __asm { fild    [esp+560h+var_510] }
          __asm { fstp    [esp+554h+Format+4] }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formateg, Format_4dy, 1, 0xFFFFFFFF);
          goto LABEL_468;
        case 0x1C:
          _sprintf(Dest, "SYSTEM MEMCONTEXT");
          __asm { fild    [esp+54Ch+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formateh, Format_4dz, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "NOT ENABLED");
          __asm { fild    [esp+560h+var_510] }
          __asm { fstp    [esp+554h+Format+4] }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatei, Format_4ea, 1, 0xFFFFFFFF);
          goto LABEL_468;
        case 0x1D:
          sub_45CC60(a2, a3, (TESObjectREFR *)srcObj, v12, &v631, &v632);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 0x1E:
          if ( dword_B3BF80 )
            sub_682A90((_DWORD *)dword_B3BF80, a2, a3, v12, &v631, &v632);
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 0x1F:
          if ( srcObj && (*((unsigned __int8 (__thiscall **)(TESChildCELL *))srcObj->vtbl + 0x64))(srcObj) )
          {
            v16 = (TESObjectREFR *)OblivionDynamicCast(
                                     srcObj,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                     &Actor `RTTI Type Descriptor',
                                     0);
            v17 = (int)v16->vtbl->GetPos(v16);
            __asm { fild    [esp+544h+var_50C] }
            v18 = *(char **)v17;
            v19 = *(_DWORD *)(v17 + 4);
            v20 = *(_DWORD *)(v17 + 8);
            v640.m_data = v18;
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
            __asm { fild    [esp+554h+var_508] }
            *(_DWORD *)&v640.m_dataLen = v19;
            v641 = v20;
            __asm { fstp    [esp+554h+Format]; float }
            v21 = TESObjectREFR_GetName(v16);
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)v21, Formatb, Format_4h, 3, 0xFFFFFFFF);
            v632 += v12;
            v22 = TESObjectREFR_GetParentCell(v16);
            v633 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace(v16));
            if ( v22 && TESObjectCELL_IsInterior(v22) )
            {
              v23 = v22->vtbl->GetEditorName((TESForm *)v22);
              HIDWORD(Format_4i) = "Actor Loc: Interior '%s'";
              LODWORD(Format_4i) = 0xC8;
              _snprintf(Dest, Format_4i, v23);
              __asm { fild    [esp+554h+var_50C] }
              __asm { fstp    [esp+554h+Format+4] }
              LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
              __asm
              {
                fild    [esp+554h+var_508]
                fstp    [esp+554h+Format]
              }
              InterfaceMgr_DebugTextLine(
                (char)&savedregs,
                a2,
                a3,
                GameHour,
                (int)Dest,
                Formatc,
                Format_4j,
                3,
                0xFFFFFFFF);
            }
            else
            {
              v24 = v633;
              if ( v633 == 0.0 )
              {
                HIDWORD(Format_8) = "Actor Loc: UNKNOWN";
                LODWORD(Format_8) = 0xC8;
                _snprintf(Dest, Format_8, v624);
                __asm { fild    [esp+550h+var_50C] }
                __asm { fstp    [esp+554h+Format+4]; float }
                LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                __asm { fild    [esp+554h+var_508] }
              }
              else
              {
                __asm
                {
                  fld     dword ptr [esp+544h+var_4E8.m_dataLen]
                  fistp   [esp+544h+var_504]
                }
                __asm
                {
                  fld     [esp+544h+var_4E8.m_data]
                  fistp   [esp+544h+var_500]
                }
                v25 = *(_DWORD *)LODWORD(v633);
                v633 = *(float *)&v635;
                v26 = (const char *)(*(int (__thiscall **)(float))(v25 + 0xD4))(COERCE_FLOAT(LODWORD(v24)));
                HIDWORD(var55C_4) = "Actor Loc: World '%s' (%i, %i)";
                LODWORD(var55C_4) = 0xC8;
                _snprintf(Dest, var55C_4, v26, (int)v635 >> 0xC, (int)v634 >> 0xC);
                __asm { fild    [esp+55Ch+var_50C] }
                __asm { fstp    [esp+554h+Format+4] }
                LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                __asm { fild    [esp+554h+var_508] }
              }
              __asm { fstp    [esp+554h+Format]; float }
              InterfaceMgr_DebugTextLine(
                (char)&savedregs,
                a2,
                a3,
                GameHour,
                (int)Dest,
                Formatd,
                Format_4,
                3,
                0xFFFFFFFF);
            }
            v632 += v12;
            v16->vtbl[1].super.Unk_0E((TESForm *)v16);
            __asm { fmul    ds:dbl_A30DC8 }
            __asm { fstp    qword ptr [esp+54Ch+Format+8]; Format }
            HIDWORD(Formate) = "Actor Heading: %0.2f";
            LODWORD(Formate) = 0xC8;
            _snprintf(Dest, Formate, (const char *)LODWORD(Format_8a), HIDWORD(Format_8a));
            __asm { fild    [esp+558h+var_50C] }
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
            __asm { fild    [esp+554h+var_508] }
            __asm { fstp    [esp+554h+Format]; float }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatf, Format_4k, 3, 0xFFFFFFFF);
            __asm { fld     [esp+558h+var_4E0] }
            v632 += v12;
            __asm { fstp    qword ptr [esp+55Ch+Format+8] }
            __asm
            {
              fld     dword ptr [esp+55Ch+var_4E8.m_dataLen]
              fstp    qword ptr [esp+55Ch+Format]
              fld     [esp+55Ch+var_4E8.m_data]
              fstp    qword ptr [esp+55Ch+var_55C]; Format
            }
            HIDWORD(v286) = "Actor Pos: ( %.0f, %.0f, %.0f )";
            LODWORD(v286) = 0xC8;
            _snprintf(Dest, v286, (const char *)LODWORD(v293), HIDWORD(v293), Formatg, Format_8b);
            __asm { fild    [esp+568h+var_50C] }
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
            __asm { fild    [esp+554h+var_508] }
            __asm { fstp    [esp+554h+Format]; float }
            InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formath, Format_4l, 3, 0xFFFFFFFF);
            v632 += 2 * v12;
            v27 = v16[1].vtbl;
            if ( v27 )
            {
              v28 = (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v27->super.super.InitializeComponent + 0x103))(v27);
              if ( v28 )
              {
                HIDWORD(Format_8c) = "------------------------";
                LODWORD(Format_8c) = 0xC8;
                _snprintf(Dest, Format_8c, v624);
                __asm { fild    [esp+550h+var_50C] }
                __asm { fstp    [esp+554h+Format+4]; float }
                LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                __asm { fild    [esp+554h+var_508] }
                __asm { fstp    [esp+554h+Format]; float }
                InterfaceMgr_DebugTextLine(
                  (char)&savedregs,
                  a2,
                  a3,
                  GameHour,
                  (int)Dest,
                  Formati,
                  Format_4m,
                  3,
                  0xFFFFFFFF);
                v632 += v12;
                if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)v28 + 0x2C))(v28) )
                {
                  HIDWORD(Format_8d) = "Overall Pathing Status: FAILED";
                  LODWORD(Format_8d) = 0xC8;
                  _snprintf(Dest, Format_8d, v625);
                  __asm { fild    [esp+550h+var_50C] }
                  __asm { fstp    [esp+554h+Format+4] }
                  LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                  __asm { fild    [esp+554h+var_508] }
                }
                else
                {
                  HIDWORD(Format_8e) = "Overall Pathing Status: Active";
                  LODWORD(Format_8e) = 0xC8;
                  _snprintf(Dest, Format_8e, v625);
                  __asm { fild    [esp+550h+var_50C] }
                  __asm { fstp    [esp+554h+Format+4]; float }
                  LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                  __asm { fild    [esp+554h+var_508] }
                }
                __asm { fstp    [esp+554h+Format]; float }
                InterfaceMgr_DebugTextLine(
                  (char)&savedregs,
                  a2,
                  a3,
                  GameHour,
                  (int)Dest,
                  Formatj,
                  Format_4a,
                  3,
                  0xFFFFFFFF);
                v632 += v12;
                if ( sub_6899E0(v28) )
                {
                  HIDWORD(Format_8z) = "PATHING SYSTEM HAS NO LOW PATH";
                  LODWORD(Format_8z) = 0xC8;
                  _snprintf(Dest, Format_8z, v626);
                  __asm { fild    [esp+550h+var_50C] }
                  __asm { fstp    [esp+554h+Format+4] }
                  LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                  __asm { fild    [esp+554h+var_508] }
                }
                else
                {
                  HIDWORD(Format_8f) = "------------------------";
                  LODWORD(Format_8f) = 0xC8;
                  _snprintf(Dest, Format_8f, v626);
                  __asm { fild    [esp+550h+var_50C] }
                  __asm { fstp    [esp+554h+Format+4]; float }
                  LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                  __asm { fild    [esp+554h+var_508] }
                  __asm { fstp    [esp+554h+Format]; float }
                  InterfaceMgr_DebugTextLine(
                    (char)&savedregs,
                    a2,
                    a3,
                    GameHour,
                    (int)Dest,
                    Formatk,
                    Format_4n,
                    3,
                    0xFFFFFFFF);
                  v632 += v12;
                  *(float *)&v635 = COERCE_FLOAT(sub_68A1F0(v28));
                  if ( *(float *)&v635 == 0.0 )
                  {
                    sub_4D8AF0(v16);
                    v635 = v29;
                  }
                  v30 = OblivionDynamicCast(
                          v635,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
                  v31 = OblivionDynamicCast(
                          v635,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESWorldSpace `RTTI Type Descriptor',
                          0);
                  if ( v30 )
                  {
                    v32 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)v30 + 0xD4))(v30);
                    HIDWORD(Format_4o) = "Final Target Loc: Interior '%s'";
                    LODWORD(Format_4o) = 0xC8;
                    _snprintf(Dest, Format_4o, v32);
                    __asm { fild    [esp+554h+var_50C] }
                    __asm { fstp    [esp+554h+Format+4] }
                    LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                    __asm
                    {
                      fild    [esp+554h+var_508]
                      fstp    [esp+554h+Format]
                    }
                    InterfaceMgr_DebugTextLine(
                      (char)&savedregs,
                      a2,
                      a3,
                      GameHour,
                      (int)Dest,
                      Formatl,
                      Format_4p,
                      3,
                      0xFFFFFFFF);
                  }
                  else
                  {
                    if ( v31 )
                    {
                      v33 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)v31 + 0xD4))(v31);
                      HIDWORD(Format_4q) = "Final Target Loc: World '%s'";
                      LODWORD(Format_4q) = 0xC8;
                      _snprintf(Dest, Format_4q, v33);
                      __asm { fild    [esp+554h+var_50C] }
                      __asm { fstp    [esp+554h+Format+4] }
                      LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                      __asm { fild    [esp+554h+var_508] }
                    }
                    else
                    {
                      HIDWORD(Format_8g) = "Final Target Loc: UNKNOWN";
                      LODWORD(Format_8g) = 0xC8;
                      _snprintf(Dest, Format_8g, v627);
                      __asm { fild    [esp+550h+var_50C] }
                      __asm { fstp    [esp+554h+Format+4]; float }
                      LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                      __asm { fild    [esp+554h+var_508] }
                    }
                    __asm { fstp    [esp+554h+Format]; float }
                    InterfaceMgr_DebugTextLine(
                      (char)&savedregs,
                      a2,
                      a3,
                      GameHour,
                      (int)Dest,
                      Formatm,
                      Format_4b,
                      3,
                      0xFFFFFFFF);
                  }
                  v632 += v12;
                  sub_68A250((float ***)v28);
                  v35 = *v34;
                  v36 = *((_DWORD *)v34 + 1);
                  v639 = v34[2];
                  __asm
                  {
                    fld     [esp+55Ch+var_4EC]
                    fstp    qword ptr [esp+55Ch+Format+8]
                  }
                  HIDWORD(v638) = v36;
                  __asm { fld     dword ptr [esp+55Ch+var_4F4+4] }
                  *(float *)&v638 = v35;
                  __asm { fstp    qword ptr [esp+55Ch+Format] }
                  __asm
                  {
                    fld     dword ptr [esp+55Ch+var_4F4]
                    fstp    qword ptr [esp+55Ch+var_55C]; Format
                  }
                  HIDWORD(v287) = "Final Target Pos: ( %.0f, %.0f, %.0f )";
                  LODWORD(v287) = 0xC8;
                  _snprintf(Dest, v287, (const char *)LODWORD(v294), HIDWORD(v294), Formatn, Format_8h);
                  __asm { fild    [esp+568h+var_50C] }
                  __asm { fstp    [esp+554h+Format+4]; float }
                  LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                  __asm { fild    [esp+554h+var_508] }
                  __asm { fstp    [esp+554h+Format]; float }
                  InterfaceMgr_DebugTextLine(
                    (char)&savedregs,
                    a2,
                    a3,
                    GameHour,
                    (int)Dest,
                    Formato,
                    Format_4r,
                    3,
                    0xFFFFFFFF);
                  v632 += v12;
                  sub_68A160(v28);
                  v38 = *v37;
                  v39 = *((_DWORD *)v37 + 1);
                  v639 = v37[2];
                  __asm
                  {
                    fld     [esp+55Ch+var_4EC]
                    fstp    qword ptr [esp+55Ch+Format+8]
                  }
                  HIDWORD(v638) = v39;
                  __asm { fld     dword ptr [esp+55Ch+var_4F4+4] }
                  *(float *)&v638 = v38;
                  __asm { fstp    qword ptr [esp+55Ch+Format] }
                  __asm
                  {
                    fld     dword ptr [esp+55Ch+var_4F4]
                    fstp    qword ptr [esp+55Ch+var_55C]; Format
                  }
                  HIDWORD(v288) = "Current Low Target Pos: ( %.0f, %.0f, %.0f )";
                  LODWORD(v288) = 0xC8;
                  _snprintf(Dest, v288, (const char *)LODWORD(v295), HIDWORD(v295), Formatp, Format_8i);
                  __asm { fild    [esp+568h+var_50C] }
                  __asm { fstp    [esp+554h+Format+4]; float }
                  LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                  __asm { fild    [esp+554h+var_508] }
                  __asm { fstp    [esp+554h+Format]; float }
                  InterfaceMgr_DebugTextLine(
                    (char)&savedregs,
                    a2,
                    a3,
                    GameHour,
                    (int)Dest,
                    Formatq,
                    Format_4s,
                    3,
                    0xFFFFFFFF);
                  v632 += v12;
                  v40 = OblivionDynamicCast(
                          v28,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&PathLow `RTTI Type Descriptor',
                          &PathMiddleHigh `RTTI Type Descriptor',
                          0);
                  if ( v40 )
                  {
                    HIDWORD(Format_8j) = "------------------------";
                    LODWORD(Format_8j) = 0xC8;
                    _snprintf(Dest, Format_8j, v627);
                    __asm { fild    [esp+550h+var_50C] }
                    __asm { fstp    [esp+554h+Format+4]; float }
                    LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                    __asm { fild    [esp+554h+var_508] }
                    __asm { fstp    [esp+554h+Format]; float }
                    InterfaceMgr_DebugTextLine(
                      (char)&savedregs,
                      a2,
                      a3,
                      GameHour,
                      (int)Dest,
                      Formatr,
                      Format_4t,
                      3,
                      0xFFFFFFFF);
                    v632 += v12;
                    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v40 + 0xC))(v40) )
                    {
                      HIDWORD(Format_8x) = "PATHING SYSTEM HAS NO HIGH PATH";
                      LODWORD(Format_8x) = 0xC8;
                      _snprintf(Dest, Format_8x, v628);
                      __asm { fild    [esp+550h+var_50C] }
                      __asm { fstp    [esp+554h+Format+4] }
                      LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                      __asm { fild    [esp+554h+var_508] }
                    }
                    else
                    {
                      sub_68B3F0((int)v40);
                      v42 = *v41;
                      v43 = *((_DWORD *)v41 + 1);
                      v639 = v41[2];
                      __asm
                      {
                        fld     [esp+55Ch+var_4EC]
                        fstp    qword ptr [esp+55Ch+Format+8]
                      }
                      HIDWORD(v638) = v43;
                      __asm { fld     dword ptr [esp+55Ch+var_4F4+4] }
                      *(float *)&v638 = v42;
                      __asm { fstp    qword ptr [esp+55Ch+Format] }
                      __asm
                      {
                        fld     dword ptr [esp+55Ch+var_4F4]
                        fstp    qword ptr [esp+55Ch+var_55C]; Format
                      }
                      HIDWORD(v289) = "Current High Target Pos: ( %.0f, %.0f, %.0f )";
                      LODWORD(v289) = 0xC8;
                      _snprintf(Dest, v289, (const char *)LODWORD(v296), HIDWORD(v296), Formats, Format_8k);
                      __asm { fild    [esp+568h+var_50C] }
                      __asm { fstp    [esp+554h+Format+4]; float }
                      LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                      __asm { fild    [esp+554h+var_508] }
                      __asm { fstp    [esp+554h+Format]; float }
                      InterfaceMgr_DebugTextLine(
                        (char)&savedregs,
                        a2,
                        a3,
                        GameHour,
                        (int)Dest,
                        Formatt,
                        Format_4u,
                        3,
                        0xFFFFFFFF);
                      v632 += v12;
                      v44 = (Actor *)OblivionDynamicCast(
                                       v28,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&PathLow `RTTI Type Descriptor',
                                       &PathHigh `RTTI Type Descriptor',
                                       0);
                      if ( v44 )
                      {
                        HIDWORD(Format_8l) = "------------------------";
                        LODWORD(Format_8l) = 0xC8;
                        _snprintf(Dest, Format_8l, v628);
                        __asm { fild    [esp+550h+var_50C] }
                        __asm { fstp    [esp+554h+Format+4]; float }
                        LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                        __asm { fild    [esp+554h+var_508] }
                        __asm { fstp    [esp+554h+Format]; float }
                        InterfaceMgr_DebugTextLine(
                          (char)&savedregs,
                          a2,
                          a3,
                          GameHour,
                          (int)Dest,
                          Formatu,
                          Format_4v,
                          3,
                          0xFFFFFFFF);
                        v632 += v12;
                        if ( ((unsigned __int8 (__thiscall *)(Actor *))v44->vtbl->super.super.super.super.CompareTo)(v44) )
                          goto InterfaceMgr_ShowDebugText___def_407DFE;
                        GameHour = sub_4A9720(v44);
                        __asm { fstp    [esp+544h+var_508] }
                        _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B3A498);
                        __asm { fld     dword ptr [eax] }
                        __asm { fstp    qword ptr [esp+554h+Format+8] }
                        __asm
                        {
                          fld     [esp+554h+var_508]
                          fstp    qword ptr [esp+554h+Format]; Format
                        }
                        HIDWORD(v297) = "Failure Time: %.2f / %.2f";
                        LODWORD(v297) = 0xC8;
                        _snprintf(Dest, v297, (const char *)LODWORD(Formatv), HIDWORD(Formatv), Format_8m);
                        __asm { fild    [esp+560h+var_50C] }
                        __asm { fstp    [esp+554h+Format+4]; float }
                        LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                        __asm { fild    [esp+554h+var_508] }
                        __asm { fstp    [esp+554h+Format]; float }
                        InterfaceMgr_DebugTextLine(
                          (char)&savedregs,
                          a2,
                          a3,
                          GameHour,
                          (int)Dest,
                          Formatw,
                          Format_4w,
                          3,
                          0xFFFFFFFF);
                        v632 += v12;
                        if ( (int)sub_629420((HighProcess *)v44) >= 3 )
                        {
                          HIDWORD(Format_8n) = "Failure State: FAILED";
                          LODWORD(Format_8n) = 0xC8;
                          _snprintf(Dest, Format_8n, v629);
                        }
                        else
                        {
                          v46 = sub_629420((HighProcess *)v44);
                          HIDWORD(Format_4x) = "Failure State: %s";
                          LODWORD(Format_4x) = 0xC8;
                          _snprintf(Dest, Format_4x, (&off_B15808)[v46]);
                        }
                        __asm { fild    [esp+544h+var_50C] }
                        __asm { fstp    [esp+554h+Format+4]; float }
                        LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                        __asm { fild    [esp+554h+var_508] }
                        __asm { fstp    [esp+554h+Format]; float }
                        InterfaceMgr_DebugTextLine(
                          (char)&savedregs,
                          a2,
                          a3,
                          GameHour,
                          (int)Dest,
                          Formatx,
                          Format_4y,
                          3,
                          0xFFFFFFFF);
                        v632 += v12;
                        if ( sub_683A60(v44) )
                        {
                          HIDWORD(Format_8o) = "High Pathing Status: Turning";
                          LODWORD(Format_8o) = 0xC8;
                          _snprintf(Dest, Format_8o, v629);
                          __asm { fild    [esp+550h+var_50C] }
                          __asm { fstp    [esp+554h+Format+4] }
                          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                          __asm { fild    [esp+554h+var_508] }
                        }
                        else if ( sub_684780(v44) )
                        {
                          HIDWORD(Format_8p) = "High Pathing Status: Avoiding";
                          LODWORD(Format_8p) = 0xC8;
                          _snprintf(Dest, Format_8p, v629);
                          __asm { fild    [esp+550h+var_50C] }
                          __asm { fstp    [esp+554h+Format+4] }
                          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                          __asm { fild    [esp+554h+var_508] }
                        }
                        else
                        {
                          HIDWORD(Format_8q) = "High Pathing Status: Pathing";
                          LODWORD(Format_8q) = 0xC8;
                          _snprintf(Dest, Format_8q, v629);
                          __asm { fild    [esp+550h+var_50C] }
                          __asm { fstp    [esp+554h+Format+4]; float }
                          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                          __asm { fild    [esp+554h+var_508] }
                        }
                        __asm { fstp    [esp+554h+Format]; float }
                        InterfaceMgr_DebugTextLine(
                          (char)&savedregs,
                          a2,
                          a3,
                          GameHour,
                          (int)Dest,
                          Formaty,
                          Format_4c,
                          3,
                          0xFFFFFFFF);
                        v632 += v12;
                        Unk030 = (char *)HighProcess::GetUnk030((HighProcess *)v44);
                        if ( Unk030 )
                        {
                          HIDWORD(Format_8r) = "------------------------";
                          LODWORD(Format_8r) = 0xC8;
                          _snprintf(Dest, Format_8r, v630);
                          __asm { fild    [esp+550h+var_50C] }
                          __asm { fstp    [esp+554h+Format+4]; float }
                          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                          __asm { fild    [esp+554h+var_508] }
                          __asm { fstp    [esp+554h+Format]; float }
                          InterfaceMgr_DebugTextLine(
                            (char)&savedregs,
                            a2,
                            a3,
                            GameHour,
                            (int)Dest,
                            Formatz,
                            Format_4z,
                            3,
                            0xFFFFFFFF);
                          v632 += v12;
                          v48 = sub_680CB0(Unk030);
                          HIDWORD(Format_4ba) = "Avoidance Status: %s";
                          LODWORD(Format_4ba) = 0xC8;
                          _snprintf(Dest, Format_4ba, (&off_B15728)[v48]);
                          __asm { fild    [esp+554h+var_50C] }
                          __asm { fstp    [esp+554h+Format+4]; float }
                          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                          __asm { fild    [esp+554h+var_508] }
                          __asm { fstp    [esp+554h+Format]; float }
                          InterfaceMgr_DebugTextLine(
                            (char)&savedregs,
                            a2,
                            a3,
                            GameHour,
                            (int)Dest,
                            Formatba,
                            Format_4bb,
                            3,
                            0xFFFFFFFF);
                          v632 += v12;
                          v49 = sub_680CC0((float *)Unk030);
                          __asm
                          {
                            fstp    [esp+544h+var_508]
                            fld     [esp+544h+var_508]
                          }
                          __asm { fstp    qword ptr [esp+54Ch+Format+8]; Format }
                          HIDWORD(Formatbb) = "Avoidance Wait Time: %.2f";
                          LODWORD(Formatbb) = 0xC8;
                          _snprintf(Dest, Formatbb, (const char *)LODWORD(Format_8s), HIDWORD(Format_8s));
                          __asm { fild    [esp+558h+var_50C] }
                          __asm { fstp    [esp+554h+Format+4]; float }
                          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                          __asm { fild    [esp+554h+var_508] }
                          __asm { fstp    [esp+554h+Format]; float }
                          InterfaceMgr_DebugTextLine(
                            (char)&savedregs,
                            a2,
                            a3,
                            v49,
                            (int)Dest,
                            Formatbc,
                            Format_4bc,
                            3,
                            0xFFFFFFFF);
                          v632 += v12;
                          v50 = sub_4A9720((Actor *)Unk030);
                          __asm
                          {
                            fstp    [esp+544h+var_508]
                            fld     [esp+544h+var_508]
                          }
                          __asm { fstp    qword ptr [esp+54Ch+Format+8]; Format }
                          HIDWORD(Formatbd) = "Avoidance Angling Time: %.2f";
                          LODWORD(Formatbd) = 0xC8;
                          _snprintf(Dest, Formatbd, (const char *)LODWORD(Format_8t), HIDWORD(Format_8t));
                          __asm { fild    [esp+558h+var_50C] }
                          __asm { fstp    [esp+554h+Format+4]; float }
                          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                          __asm { fild    [esp+554h+var_508] }
                          __asm { fstp    [esp+554h+Format]; float }
                          InterfaceMgr_DebugTextLine(
                            (char)&savedregs,
                            a2,
                            a3,
                            v50,
                            (int)Dest,
                            Formatbe,
                            Format_4bd,
                            3,
                            0xFFFFFFFF);
                          v632 += v12;
                          GameHour = sub_680CF0((float *)Unk030);
                          __asm
                          {
                            fstp    [esp+544h+var_508]
                            fld     [esp+544h+var_508]
                          }
                          __asm { fstp    qword ptr [esp+54Ch+Format+8]; Format }
                          HIDWORD(Formatbf) = "Avoidance Avoid Time: %.2f";
                          LODWORD(Formatbf) = 0xC8;
                          _snprintf(Dest, Formatbf, (const char *)LODWORD(Format_8u), HIDWORD(Format_8u));
                          __asm { fild    [esp+558h+var_50C] }
                          __asm { fstp    [esp+554h+Format+4] }
                          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                          __asm { fild    [esp+554h+var_508] }
                        }
                        else
                        {
                          HIDWORD(Format_8v) = "NO AVOIDANCE";
                          LODWORD(Format_8v) = 0xC8;
                          _snprintf(Dest, Format_8v, v630);
                          __asm { fild    [esp+550h+var_50C] }
                          __asm { fstp    [esp+554h+Format+4] }
                          LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                          __asm { fild    [esp+554h+var_508] }
                        }
                      }
                      else
                      {
                        HIDWORD(Format_8w) = "MIDDLE HIGH PATH SYSTEM ONLY";
                        LODWORD(Format_8w) = 0xC8;
                        _snprintf(Dest, Format_8w, v628);
                        __asm { fild    [esp+550h+var_50C] }
                        __asm { fstp    [esp+554h+Format+4] }
                        LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                        __asm { fild    [esp+554h+var_508] }
                      }
                    }
                  }
                  else
                  {
                    HIDWORD(Format_8y) = "LOW PATH SYSTEM ONLY";
                    LODWORD(Format_8y) = 0xC8;
                    _snprintf(Dest, Format_8y, v627);
                    __asm { fild    [esp+550h+var_50C] }
                    __asm { fstp    [esp+554h+Format+4] }
                    LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                    __asm { fild    [esp+554h+var_508] }
                  }
                }
              }
              else
              {
                HIDWORD(Format_8ba) = "NO PATHING SYSTEM";
                LODWORD(Format_8ba) = 0xC8;
                _snprintf(Dest, Format_8ba, v624);
                __asm { fild    [esp+550h+var_50C] }
                __asm { fstp    [esp+554h+Format+4] }
                LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
                __asm { fild    [esp+554h+var_508] }
              }
            }
            else
            {
              HIDWORD(Format_8bb) = "NO BASE PROCESS";
              LODWORD(Format_8bb) = 0xC8;
              _snprintf(Dest, Format_8bb, v624);
              __asm { fild    [esp+550h+var_50C] }
              __asm { fstp    [esp+554h+Format+4] }
              LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
              __asm { fild    [esp+554h+var_508] }
            }
          }
          else
          {
            HIDWORD(Format_8bc) = "NO PATHING DATA FOR REF";
            LODWORD(Format_8bc) = 0xC8;
            _snprintf(Dest, Format_8bc, v624);
            __asm { fild    [esp+550h+var_50C] }
            __asm { fstp    [esp+554h+Format+4]; float }
            LODWORD(v633) = 0x500 - iDebugTextLeftRightOffset;
            __asm { fild    [esp+554h+var_508] }
          }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatbg, Format_4d, 3, 0xFFFFFFFF);
          v632 += v12;
          goto InterfaceMgr_ShowDebugText___def_407DFE;
        case 0x20:
          _sprintf(Dest, "MEM INFO");
          __asm { fild    [esp+54Ch+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatej, Format_4eb, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Game not compiled with MEM_DEBUG.");
          __asm { fild    [esp+560h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatek, Format_4ec, 1, 0xFFFFFFFF);
          v631 = 0xA * v12;
          v270 = sub_43FD20();
          v271 = 0;
          if ( v270 )
          {
            exteriorCellBufferArray = TES->exteriorCellBufferArray;
            do
            {
              if ( *exteriorCellBufferArray )
                ++v271;
              ++exteriorCellBufferArray;
              --v270;
            }
            while ( v270 );
          }
          _sprintf(Dest, "Exterior Cell Buffer");
          __asm { fild    [esp+54Ch+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatel, Format_4ed, 1, 0xFFFFFFFF);
          _sprintf(Dest, "%i", v271);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          v640.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2);
          __asm { fild    [esp+554h+var_4E8.m_data] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatem, Format_4ee, 1, 0xFFFFFFFF);
          v631 += v12;
          v273 = sub_43FD30();
          v274 = 0;
          if ( v273 )
          {
            interiorCellBufferArray = TES->interiorCellBufferArray;
            do
            {
              if ( *interiorCellBufferArray )
                ++v274;
              ++interiorCellBufferArray;
              --v273;
            }
            while ( v273 );
          }
          _sprintf(Dest, "Interior Cell Buffer");
          __asm { fild    [esp+54Ch+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formaten, Format_4ef, 1, 0xFFFFFFFF);
          _sprintf(Dest, "%i", v274);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          v640.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2);
          __asm { fild    [esp+554h+var_4E8.m_data] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formateo, Format_4eg, 1, 0xFFFFFFFF);
          v631 += 2 * v12;
          *(float *)&v635 = 0.0;
          *(float *)&v637 = 0.0;
          v634 = 0;
          v276 = sub_673A50(&ActorProcessManager_ptr, 0);
          for ( m = sub_7616D0((ActorList *)v276); m; m = *(Actor **)&m->members.super.super.super.type )
          {
            v278 = m->vtbl;
            if ( m->vtbl )
            {
              if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v278->super.super.super.super.InitializeComponent
                    + 0x64))(m->vtbl) )
              {
                v279 = *((unsigned __int8 (__thiscall **)(ActorVtbl *, int))v278->super.super.super.super.InitializeComponent
                       + 0xCD);
                v635 = (char *)v635 + 1;
                if ( v279(v278, 1) )
                  ++v637;
              }
              else
              {
                v634 = (Actor *)((char *)v634 + 1);
              }
            }
          }
          _sprintf(Dest, "High Actors");
          __asm { fild    [esp+54Ch+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatep, Format_4eh, 1, 0xFFFFFFFF);
          _sprintf(Dest, "%i", v635);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          v640.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2);
          __asm { fild    [esp+554h+var_4E8.m_data] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formateq, Format_4ei, 1, 0xFFFFFFFF);
          v631 += v12;
          v280 = sub_673A50(&ActorProcessManager_ptr, 1);
          _sprintf(Dest, "Middle High Actors");
          __asm { fild    [esp+54Ch+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formater, Format_4ej, 1, 0xFFFFFFFF);
          v281 = 0;
          for ( n = sub_7616D0((ActorList *)v280); n; n = *(Actor **)&n->members.super.super.super.type )
          {
            if ( n->vtbl )
              ++v281;
          }
          _sprintf(Dest, "%i", v281);
          __asm { fild    [esp+550h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          v640.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2);
          __asm { fild    [esp+554h+var_4E8.m_data] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formates, Format_4ek, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Combat Actors");
          __asm { fild    [esp+560h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatet, Format_4el, 1, 0xFFFFFFFF);
          _sprintf(Dest, "%i", v637);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          v640.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2);
          __asm { fild    [esp+554h+var_4E8.m_data] }
          __asm { fstp    [esp+554h+Format]; float }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formateu, Format_4em, 1, 0xFFFFFFFF);
          v631 += v12;
          _sprintf(Dest, "Non-Actor Mobile Objects");
          __asm { fild    [esp+560h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          __asm
          {
            fild    iDebugTextLeftRightOffset
            fstp    [esp+554h+Format]; float
          }
          InterfaceMgr_DebugTextLine((char)&savedregs, a2, a3, GameHour, (int)Dest, Formatev, Format_4en, 1, 0xFFFFFFFF);
          _sprintf(Dest, "%i", v634);
          __asm { fild    [esp+564h+var_510] }
          __asm { fstp    [esp+554h+Format+4]; float }
          v640.m_data = (char *)(iDebugTextLeftRightOffset + 0x1C2);
          __asm { fild    [esp+554h+var_4E8.m_data] }
          goto LABEL_467;
        default:
          goto InterfaceMgr_ShowDebugText___def_407DFE;
      }
    }
  }
}
