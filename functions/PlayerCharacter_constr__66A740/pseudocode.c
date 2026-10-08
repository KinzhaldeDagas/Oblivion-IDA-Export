int *__thiscall PlayerCharacter_constr(int *this)
{
  int v4; // eax
  int *v5; // eax
  int v6; // ecx
  int i; // eax
  LONG (__stdcall *v8)(volatile LONG *); // ebp
  int v9; // edi
  int v10; // edi
  HighProcess *v11; // eax
  HighProcess *v12; // edi
  int ProcessLevel; // eax
  void (__thiscall ***v14)(_DWORD, int); // ecx
  int v15; // eax
  _DWORD *v16; // eax
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v18; // edi
  _DWORD *v19; // ecx
  _DWORD *v20; // ecx
  int v21; // eax
  int v22; // eax
  FreeEntry *v23; // eax
  unsigned __int8 v24; // cl
  float *v25; // eax
  int v26; // edi
  int v27; // edi
  float x; // ecx
  float y; // edx
  float z; // eax
  _DWORD *v31; // eax
  double v32; // st7
  int v33; // edi
  int v34; // eax
  int v35; // edx
  bool v36; // zf
  void (__stdcall *v37)(int); // eax
  void (__stdcall *v38)(int); // eax
  double v39; // st7
  int v40; // edi
  unsigned int a2; // [esp+20h] [ebp-30h]
  int v43; // [esp+28h] [ebp-28h]
  float v44; // [esp+3Ch] [ebp-14h]

  Character_constr((TESObjectREFR *)this); /*0x66a76d*/
  *this = (int)&PlayerCharacter::`vftable'{for `PlayerCharacter'};// PlayerCharacter constructor installs the primary PlayerCharacter vtable at this+0. The primary vtable starts at 0xA73A0C; the Player_OnInput/update slot used for next-frame scheduling is entry 0xA73C34 -> 0x671620. /*0x66a774*/
  this[6] = (int)&PlayerCharacter::`vftable'{for `TESChildCell'}; /*0x66a77a*/
  this[0x17] = (int)&PlayerCharacter::`vftable'{for `MagicCaster'}; /*0x66a781*/
  this[0x1A] = (int)&PlayerCharacter::`vftable'{for `MagicTarget'}; /*0x66a788*/
  this[0x15D] = 0; /*0x66a793*/
  this[0x174] = 0; /*0x66a799*/
  this[0x176] = 0; /*0x66a79f*/
  this[0x179] = 0; /*0x66a7a5*/
  this[0x17A] = 0; /*0x66a7ab*/
  this[0x17B] = 0; /*0x66a7b1*/
  this[0x17C] = 0; /*0x66a7b7*/
  this[0x17E] = 0; /*0x66a7bd*/
  this[0x17F] = 0; /*0x66a7c3*/
  this[0x1BB] = 0; /*0x66a7c9*/
  this[0x1BC] = 0; /*0x66a7cf*/
  this[0x1C1] = 0; /*0x66a7d5*/
  this[0x1C2] = 0; /*0x66a7db*/
  this[0x1CF] = 0; /*0x66a7e1*/
  this[0x1D0] = 0; /*0x66a7e7*/
  this[0x1E0] = 0; /*0x66a7ed*/
  this[0x1E1] = 0; /*0x66a7f3*/
  this[0x1E3] = 0x25; /*0x66a800*/
  this[0x1E2] = (int)&NiTMapBase<DFALL<unsigned char>,unsigned int,unsigned char>::`vftable'; /*0x66a815*/
  this[0x1E5] = 0; /*0x66a81f*/
  v4 = FormHeapAlloc(0x94u); /*0x66a82a*/
  a2 = 4 * this[0x1E3]; /*0x66a839*/
  this[0x1E4] = v4; /*0x66a83c*/
  _memset(v4, 0, a2); /*0x66a842*/
  this[0x1E2] = (int)&NiTMap<unsigned int,unsigned char>::`vftable'; /*0x66a84a*/
  this[0x1E6] = 0; /*0x66a854*/
  this[0x1E7] = 0; /*0x66a85a*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x66a868*/
  *(float *)&unk_B3BB24.vtbl = unk_B36B70; /*0x66a873*/
  v5 = this + 0xC9; /*0x66a879*/
  v6 = 0x48; /*0x66a881*/
  do /*0x66a89b*/
  {
    *((float *)v5++ + 0xFFFFFFB8) = 0.0; /*0x66a886*/
    --v6; /*0x66a88f*/
    *((float *)v5 + 0xFFFFFFFF) = 0.0; /*0x66a892*/
    *((float *)v5 + 0x4A) = 0.0; /*0x66a895*/
  }
  while ( v6 ); /*0x66a89b*/
  *((float *)this + 0x113) = 0.0; /*0x66a89d*/
  *((float *)this + 0x111) = 0.0; /*0x66a8a5*/
  this[0x164] = 0; /*0x66a8ab*/
  *((float *)this + 0x112) = 0.0; /*0x66a8b1*/
  this[0x47] = 0; /*0x66a8b7*/
  *((float *)this + 0x167) = 0.0; /*0x66a8bd*/
  this[0x48] = 0; /*0x66a8c3*/
  *((float *)this + 0x168) = 0.0; /*0x66a8c9*/
  this[0x4A] = 0; /*0x66a8cf*/
  *((float *)this + 0x169) = 0.0; /*0x66a8d5*/
  *((_BYTE *)this + 0x10C) = 0; /*0x66a8db*/
  this[0x185] = 0; /*0x66a8e1*/
  this[0x192] = 0; /*0x66a8e7*/
  *((_BYTE *)this + 0x12C) = 0; /*0x66a8ed*/
  *((_BYTE *)this + 0x5A9) = 1; /*0x66a8f3*/
  *((_BYTE *)this + 0x6E5) = 0; /*0x66a8fa*/
  this[0x78] = 0; /*0x66a900*/
  this[0x193] = 0x48; /*0x66a906*/
  this[0x194] = 0; /*0x66a910*/
  this[0x16C] = FormHeapAlloc(0x54u); /*0x66a920*/
  for ( i = 0; i < 0x54; i += 4 ) /*0x66a926*/
    *(float *)(i + this[0x16C]) = 0.0; /*0x66a92e*/
  v8 = InterlockedDecrement; /*0x66a939*/
  this[0x1BD] = 0; /*0x66a941*/
  this[0x1BE] = 0; /*0x66a947*/
  this[0x195] = 0; /*0x66a94d*/
  *((_BYTE *)this + 0x114) = 0; /*0x66a953*/
  v9 = this[0x1E6]; /*0x66a959*/
  if ( v9 ) /*0x66a961*/
  {
    if ( !v8((volatile LONG *)(v9 + 4)) ) /*0x66a967*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x66a979*/
    this[0x1E6] = 0; /*0x66a97b*/
  }
  v10 = this[0x1E7]; /*0x66a981*/
  if ( v10 ) /*0x66a989*/
  {
    if ( !v8((volatile LONG *)(v10 + 4)) ) /*0x66a98f*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x66a9a1*/
    this[0x1E7] = 0; /*0x66a9a3*/
  }
  *((_BYTE *)this + 0x115) = 1; /*0x66a9ae*/
  v11 = (HighProcess *)FormHeapAlloc(0x2ECu); /*0x66a9b5*/
  if ( v11 ) /*0x66a9c8*/
    v12 = HighProcess::HighProcess(v11); /*0x66a9d1*/
  else
    v12 = 0; /*0x66a9d5*/
  v12->Copy(v12, (BaseProcess *)this[0x16]); /*0x66a9e7*/
  ProcessLevel = Actor::GetProcessLevel((Actor *)this); /*0x66a9eb*/
  sub_674550((int)this, ProcessLevel); /*0x66a9f7*/
  v14 = (void (__thiscall ***)(_DWORD, int))this[0x16]; /*0x66a9fc*/
  if ( v14 ) /*0x66aa01*/
    (**v14)(v14, 1); /*0x66aa09*/
  this[0x16] = (int)v12; /*0x66aa0d*/
  v15 = Actor::GetProcessLevel((Actor *)this); /*0x66aa10*/
  sub_674550((int)this, v15); /*0x66aa1c*/
  this[0x7A] = 0; /*0x66aa23*/
  this[0x7B] = 0; /*0x66aa29*/
  v16 = (_DWORD *)FormHeapAlloc(8u); /*0x66aa2f*/
  if ( v16 ) /*0x66aa39*/
  {
    *v16 = 0; /*0x66aa3b*/
    v16[1] = 0; /*0x66aa3d*/
  }
  else
  {
    v16 = 0; /*0x66aa42*/
  }
  this[0x79] = (int)v16; /*0x66aa46*/
  MobileObject_EnsureActorCharacterController(this); /*0x66aa4c*/
  CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x66aa53*/
  v18 = CharProxy; /*0x66aa58*/
  if ( CharProxy ) /*0x66aa5c*/
  {
    *((_DWORD *)CharProxy + 0xEC) = 0x3E8; /*0x66aa66*/
    sub_65A310((Actor *)this, 1); /*0x66aa70*/
    v19 = *((_DWORD **)v18 + 0xD9); /*0x66aa75*/
    if ( v19 ) /*0x66aa7d*/
      sub_89F4D0(v19, 9); /*0x66aa81*/
    v20 = *((_DWORD **)v18 + 0xDA); /*0x66aa86*/
    if ( v20 ) /*0x66aa8e*/
      sub_89F4D0(v20, 9); /*0x66aa92*/
    v21 = FormHeapAlloc(8u); /*0x66aa9f*/
    if ( v21 ) /*0x66aab2*/
      v22 = PlayerCameraCollisionPhantomPair_Init(v21, flt_A58E1C, 9); /*0x66aac2*/
    else
      v22 = 0; /*0x66aac9*/
    this[0x7C] = v22; /*0x66aadc*/
    v23 = j_MemoryHeap_Alloc(&FormHeap, (char)v8, 0x1000001C0uLL, v43); /*0x66aae2*/
    v24 = 0x10 - ((unsigned __int8)v23 & 0xF); /*0x66aaee*/
    v25 = (float *)((char *)v23 + v24); /*0x66aaf3*/
    *((_BYTE *)v25 + 0xFFFFFFFF) = v24; /*0x66aaf5*/
    this[0x7D] = (int)sub_5358F0(v25, fConstant_2, 9); /*0x66ab19*/
  }
  else
  {
    this[0x7C] = 0; /*0x66ab21*/
    this[0x7D] = 0; /*0x66ab27*/
  }
  *((_BYTE *)this + 0x588) = 0; /*0x66ab2d*/
  *((_BYTE *)this + 0x589) = 0; /*0x66ab33*/
  *((_BYTE *)this + 0x58A) = 0; /*0x66ab39*/
  *((_BYTE *)this + 0x58B) = 0; /*0x66ab3f*/
  *((_BYTE *)this + 0x58C) = 0; /*0x66ab45*/
  v44 = g_DefaulFOV; /*0x66ab51*/
  *((float *)this + 0x166) = v44; /*0x66ab56*/
  SetCameraFOV_0((SceneGraph *)g_WorldSceneReceiverRoot, *((float *)this + 0x166), 0.0); /*0x66ab6c*/
  UpdateParticleShaderFOVData(v44); /*0x66ab79*/
  this[0x172] = 0; /*0x66ab7e*/
  this[0x173] = 0; /*0x66ab84*/
  v26 = this[0x174]; /*0x66ab8a*/
  if ( v26 ) /*0x66ab95*/
  {
    if ( !v8((volatile LONG *)(v26 + 4)) ) /*0x66ab9b*/
      (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x66abad*/
    this[0x174] = 0; /*0x66abaf*/
  }
  *((float *)this + 0x175) = flt_A73980; /*0x66abbb*/
  v27 = this[0x176]; /*0x66abc1*/
  if ( v27 ) /*0x66abc9*/
  {
    if ( !v8((volatile LONG *)(v27 + 4)) ) /*0x66abcf*/
      (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x66abe1*/
    this[0x176] = 0; /*0x66abe3*/
  }
  this[0x177] = 0; /*0x66abe9*/
  *((_BYTE *)this + 0x124) = 0; /*0x66abef*/
  x = g_zeroNiPoint3.x; /*0x66abfb*/
  unk_B3BACC = *(float *)&unk_B3BB24.vtbl; /*0x66ac01*/
  y = g_zeroNiPoint3.y; /*0x66ac07*/
  z = g_zeroNiPoint3.z; /*0x66ac0f*/
  qword_B3BB2C[3] = x; /*0x66ac14*/
  qword_B3BB2C[4] = y; /*0x66ac1a*/
  qword_B3BB2C[5] = z; /*0x66ac20*/
  byte_B14E4D = 1; /*0x66ac25*/
  *((float *)this + 0x1C0) = 0.0; /*0x66ac2c*/
  this[0x1BF] = 0; /*0x66ac34*/
  Player_ClearAllSkillProgress((PlayerCharacter *)this); /*0x66ac3a*/
  this[0x16D] = 0; /*0x66ac41*/
  Player_ConsumeOldestAttributeBonusBucket((PlayerCharacter *)this); /*0x66ac47*/
  *((_WORD *)this + 0x2DC) = 0; /*0x66ac4c*/
  *((_BYTE *)this + 0x5BA) = 0; /*0x66ac55*/
  Player_ClearSkillAdvanceCounts((PlayerCharacter *)this); /*0x66ac5b*/
  *((float *)this + 0x187) = 0.0; /*0x66ac62*/
  this[0x61] = 0; /*0x66ac68*/
  *((_BYTE *)this + 0x1DC) = 0; /*0x66ac6e*/
  *((_BYTE *)this + 0x600) = 0; /*0x66ac74*/
  *((_BYTE *)this + 0x5C0) = 0; /*0x66ac7a*/
  this[0x46] = 0; /*0x66ac80*/
  this[0x182] = 0; /*0x66ac86*/
  this[0x183] = 0; /*0x66ac8c*/
  *((_BYTE *)this + 0x610) = 0; /*0x66ac92*/
  *((_BYTE *)this + 0x611) = 0; /*0x66ac98*/
  *((_BYTE *)this + 0x620) = 0; /*0x66ac9e*/
  this[0x189] = 0; /*0x66aca4*/
  this[0x18A] = 0; /*0x66acaa*/
  this[0x18B] = LODWORD(g_zeroNiPoint3.x); /*0x66acb6*/
  this[0x18C] = LODWORD(g_zeroNiPoint3.y); /*0x66acc2*/
  this[0x18D] = LODWORD(g_zeroNiPoint3.z); /*0x66accf*/
  this[0x18E] = 0; /*0x66acd5*/
  this[0x18F] = 0; /*0x66acdb*/
  this[0x17D] = 0; /*0x66ace1*/
  v31 = (_DWORD *)FormHeapAlloc(8u); /*0x66ace7*/
  if ( v31 ) /*0x66acf1*/
  {
    *v31 = 0; /*0x66acf3*/
    v31[1] = 0; /*0x66acf5*/
  }
  else
  {
    v31 = 0; /*0x66acfa*/
  }
  v32 = 0.0; /*0x66acfc*/
  this[0x7E] = (int)v31; /*0x66acfe*/
  *((float *)this + 0x190) = 0.0; /*0x66ad04*/
  this[0x7F] = 0; /*0x66ad0a*/
  *(float *)&unk_B3BAFC.vtbl = 0.0; /*0x66ad10*/
  this[0x191] = 0; /*0x66ad16*/
  this[0x16F] = 0; /*0x66ad1c*/
  this[0x171] = 0; /*0x66ad22*/
  *((_BYTE *)this + 0x594) = 0; /*0x66ad28*/
  this[0x1B8] = 0; /*0x66ad2e*/
  *((_BYTE *)this + 0x6E4) = 0; /*0x66ad34*/
  *((_BYTE *)this + 0x6E6) = 0; /*0x66ad3a*/
  this[0x1BA] = 0; /*0x66ad40*/
  v33 = this[0x15D]; /*0x66ad46*/
  if ( v33 ) /*0x66ad4e*/
  {
    if ( !v8((volatile LONG *)(v33 + 4)) ) /*0x66ad56*/
      (**(void (__thiscall ***)(int, int))v33)(v33, 1); /*0x66ad68*/
    v32 = 0.0; /*0x66ad6a*/
    this[0x15D] = 0; /*0x66ad6c*/
  }
  *((float *)this + 0x160) = v32; /*0x66ad72*/
  this[0x15E] = 0; /*0x66ad78*/
  *((float *)this + 0x161) = v32; /*0x66ad7e*/
  this[0x15F] = 0; /*0x66ad84*/
  this[0x1C3] = 0; /*0x66ad8a*/
  this[0x1C5] = 0; /*0x66ad90*/
  this[0x1C4] = GetTickCount(); /*0x66ad9c*/
  this[0x1B2] = 0; /*0x66ada2*/
  this[0x1B3] = 0; /*0x66ada8*/
  this[0x1B4] = 0; /*0x66adae*/
  this[0x1B5] = 0; /*0x66adb4*/
  this[0x1B6] = 0; /*0x66adba*/
  this[0x1B7] = 0; /*0x66adc0*/
  this[0x196] = 0; /*0x66adc6*/
  this[0x197] = 0; /*0x66adcc*/
  this[0x198] = 0; /*0x66add2*/
  this[0x199] = 0; /*0x66add8*/
  this[0x19A] = 0; /*0x66adde*/
  this[0x19B] = 0; /*0x66ade4*/
  this[0x19C] = 0; /*0x66adea*/
  this[0x19D] = 0; /*0x66adf0*/
  this[0x19E] = 0; /*0x66adf6*/
  this[0x19F] = 0; /*0x66adfc*/
  this[0x1A0] = 0; /*0x66ae02*/
  this[0x1A1] = 0; /*0x66ae08*/
  this[0x1A2] = 0; /*0x66ae0e*/
  this[0x1A3] = 0; /*0x66ae14*/
  this[0x1A4] = 0; /*0x66ae1a*/
  this[0x1A5] = 0; /*0x66ae20*/
  this[0x1A6] = 0; /*0x66ae26*/
  this[0x1A7] = 0; /*0x66ae2c*/
  this[0x1A8] = 0; /*0x66ae32*/
  this[0x1A9] = 0; /*0x66ae38*/
  this[0x1AA] = 0; /*0x66ae3e*/
  this[0x1AB] = 0; /*0x66ae44*/
  this[0x1AC] = 0; /*0x66ae4a*/
  this[0x1AD] = 0; /*0x66ae50*/
  this[0x1AE] = 0; /*0x66ae56*/
  this[0x1AF] = 0; /*0x66ae5c*/
  this[0x1B0] = 0; /*0x66ae62*/
  this[0x1B1] = 0; /*0x66ae68*/
  this[0x1E9] = 0; /*0x66ae6e*/
  this[0x1EA] = 0; /*0x66ae74*/
  this[0x1EB] = 0; /*0x66ae7a*/
  this[0x1EC] = 0; /*0x66ae80*/
  this[0x1ED] = 0; /*0x66ae86*/
  this[0x1EE] = 0; /*0x66ae8c*/
  this[0x1EF] = 0; /*0x66ae92*/
  this[0x1F0] = 0; /*0x66ae98*/
  this[0x1F1] = 0; /*0x66ae9e*/
  this[0x1F2] = 0; /*0x66aea4*/
  this[0x1F3] = 0; /*0x66aeaa*/
  this[0x1F4] = 0; /*0x66aeb0*/
  this[0x1F5] = 0; /*0x66aeb6*/
  this[0x1F6] = 0; /*0x66aebc*/
  this[0x1F7] = 0; /*0x66aec2*/
  this[0x1F8] = 0; /*0x66aec8*/
  this[0x1F9] = 0; /*0x66aece*/
  this[0x1FA] = 0; /*0x66aed4*/
  this[0x1FB] = 0; /*0x66aeda*/
  this[0x1FC] = 0; /*0x66aee0*/
  this[0x1FD] = 0; /*0x66aee7*/
  v34 = _time64(0); /*0x66aeed*/
  v35 = *this; /*0x66aef2*/
  v36 = *((_BYTE *)this + 0x71D) == 0; /*0x66aef7*/
  this[0x1C6] = v34; /*0x66aefd*/
  v37 = *(void (__stdcall **)(int))(v35 + 0x1BC); /*0x66af03*/
  *((_BYTE *)this + 0x71C) = 0; /*0x66af09*/
  if ( v36 ) /*0x66af11*/
    v37(1); /*0x66af18*/
  else
    v37(0); /*0x66af14*/
  v36 = *((_BYTE *)this + 0x71C) == 0; /*0x66af1a*/
  v38 = *(void (__stdcall **)(int))(*this + 0x1BC); /*0x66af22*/
  *((_BYTE *)this + 0x71D) = 0; /*0x66af28*/
  if ( v36 ) /*0x66af30*/
    v38(1); /*0x66af37*/
  else
    v38(0); /*0x66af33*/
  *((_BYTE *)this + 0x71E) = 0; /*0x66af39*/
  *((_BYTE *)this + 0x71F) = 0; /*0x66af3f*/
  this[0x1C8] = LODWORD(g_zeroNiPoint3.x); /*0x66af4b*/
  this[0x1C9] = LODWORD(g_zeroNiPoint3.y); /*0x66af57*/
  this[0x1CA] = LODWORD(g_zeroNiPoint3.z); /*0x66af62*/
  this[0x1CB] = 0; /*0x66af68*/
  this[0x1CC] = 0; /*0x66af6e*/
  *((float *)this + 0x1CD) = flt_B14EB0; /*0x66af7a*/
  this[0x178] = 0; /*0x66af80*/
  v39 = 0.0; /*0x66af86*/
  *((_BYTE *)this + 0x738) = 0; /*0x66af88*/
  this[0x44] = 0; /*0x66af8e*/
  this[0x1D1] = 0; /*0x66af94*/
  *((_BYTE *)this + 0x748) = 0; /*0x66af9a*/
  *((float *)this + 0x1D3) = 0.0; /*0x66afa0*/
  *((float *)this + 0x1D4) = 0.0; /*0x66afa6*/
  this[0x1D5] = LODWORD(g_zeroNiPoint3.x); /*0x66afb2*/
  this[0x1D6] = LODWORD(g_zeroNiPoint3.y); /*0x66afbe*/
  this[0x1D7] = LODWORD(g_zeroNiPoint3.z); /*0x66afc9*/
  *((_BYTE *)this + 0x200) = 0; /*0x66afcf*/
  this[0x1D8] = 0; /*0x66afd5*/
  this[0x1D9] = 0; /*0x66afdb*/
  this[0x1DA] = 0; /*0x66afe3*/
  this[0x1DB] = 0; /*0x66afe9*/
  this[0x1DC] = 0; /*0x66afef*/
  this[0x1DD] = 0; /*0x66aff5*/
  this[0x1DE] = 0; /*0x66affb*/
  this[0x1DF] = 0; /*0x66b001*/
  this[0x15C] = 0; /*0x66b007*/
  if ( this[0x1E1] ) /*0x66b00d*/
  {
    do /*0x66b031*/
    {
      v40 = *(_DWORD *)(this[0x1E1] + 4); /*0x66b01d*/
      FormHeapFree(this[0x1E1]); /*0x66b021*/
      this[0x1E1] = v40; /*0x66b02b*/
    }
    while ( v40 ); /*0x66b031*/
    v39 = 0.0; /*0x66b033*/
  }
  this[0x1E0] = 0; /*0x66b035*/
  this[0x1E8] = 0; /*0x66b03b*/
  *((_BYTE *)this + 0x7F8) = 0; /*0x66b041*/
  this[0x16B] = 0; /*0x66b047*/
  *((_BYTE *)this + 0x7F9) = 0; /*0x66b04d*/
  *((float *)this + 0x186) = v39; /*0x66b053*/
  *((float *)this + 0x1FF) = v39; /*0x66b059*/
  *((float *)this + 0x200) = v39; /*0x66b061*/
  *((_BYTE *)this + 0x116) = 0; /*0x66b067*/
  this[2] |= 0x400u; /*0x66b06d*/
  return this; /*0x66b074*/
}
