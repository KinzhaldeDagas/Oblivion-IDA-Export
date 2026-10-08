// HighProcess constructor: derives from MiddleHighProcess, then installs HighProcess vtable and initializes movementFlags at +0x1FC to 0. Confirms movement flag storage is HighProcess-only.
HighProcess *__thiscall HighProcess::HighProcess(HighProcess *this)
{
  float z; // edx
  int v3; // eax
  DetectionList *v4; // eax
  double v5; // st7
  double v6; // st7
  float v7; // ecx
  NiObject *unk268; // edi
  double v9; // st6
  int v10; // eax
  TESObjectREFR **actionTarget; // ecx

  MiddleHighProcess::MiddleHighProcess(this); /*0x628f0d*/
  this->__vftable = (MiddleHighProcess_vtbl *)&HighProcess::`vftable'; /*0x628f14*/
  this->recentSocialTargets.data = 0; /*0x628f1a*/
  this->recentSocialTargets.next = 0; /*0x628f20*/
  this->unk268 = 0; /*0x628f2a*/
  this->unk0D0 = 1; /*0x628f32*/
  this->unk1D4 = 0; /*0x628f39*/
  this->unk090 = 0xFFFFFFFF; /*0x628f44*/
  unk_B3B928 = 0; /*0x628f4a*/
  this->unk1BC.unk0 = 0; /*0x628f50*/
  this->unk1BC.unk4 = 0; /*0x628f56*/
  this->unk1BC.unk8 = 0; /*0x628f5c*/
  this->unk1BC.unkC = 0; /*0x628f62*/
  this->unk1D8 = 0.0; /*0x628f68*/
  this->unk1DC = 0.0; /*0x628f6e*/
  this->movementFlags = 0; /*0x628f74*/
  this->unk1AC = 0.0; /*0x628f7b*/
  this->unk200 = 0; /*0x628f81*/
  this->unk204 = 0.0; /*0x628f87*/
  this->unk208 = 0xFFFF; /*0x628f8d*/
  this->recentSocialTargetCooldown = 0.0; /*0x628f94*/
  this->unk1A4 = 0; /*0x628f9a*/
  this->unk1EC = 0; /*0x628fa0*/
  this->unk1F0 = 0; /*0x628fa6*/
  this->currentAction = 0xFFFF; /*0x628fac*/
  this->animgroupSequence = 0; /*0x628fb3*/
  this->unk218 = 0; /*0x628fb9*/
  this->unk1D0 = 0; /*0x628fbf*/
  this->unk220[0] = 0; /*0x628fc5*/
  this->unk220[1] = 0; /*0x628fcb*/
  this->unk20C.unk0 = LODWORD(g_zeroNiPoint3.x); /*0x628fd6*/
  this->unk20C.unk4 = LODWORD(g_zeroNiPoint3.y); /*0x628fe2*/
  z = g_zeroNiPoint3.z; /*0x628fe8*/
  this->dialogueResponseTimer = 0.0; /*0x628fee*/
  this->unk22C = 0.0; /*0x628ff5*/
  *(float *)&this->unk20C.unk8 = z; /*0x629000*/
  this->dialogueActive = 0; /*0x629006*/
  this->unk23C = 1; /*0x62900c*/
  this->unk244 = 0; /*0x629013*/
  this->activeDialogueItem = 0; /*0x629019*/
  v3 = Game_RandomLargeInteger(0); /*0x62901f*/
  this->unk24C = 0; /*0x62902e*/
  this->unk25C = 0; /*0x629034*/
  this->unk1CC = 0; /*0x62903a*/
  this->unk230 = (double)(v3 % 0x1388) * dbl_A30E40 + dbl_A3F3E8;// Initialize the action-5 idle-window timer at HighProcess+0x230 to a uniform millisecond step in [1.000, 5.999] seconds. /*0x629054*/
  this->unk248 = 0.0; /*0x62905c*/
  this->unk234 = 0.0; /*0x629062*/
  this->unk1E8 = 0.0; /*0x629068*/
  this->unk1B4 = 0.0; /*0x62906e*/
  this->unk1B0 = 0.0; /*0x629074*/
  v4 = (DetectionList *)FormHeapAlloc(8u); /*0x62907a*/
  if ( v4 ) /*0x629084*/
  {
    v4->data = 0; /*0x629086*/
    v4->next = 0; /*0x629088*/
  }
  else
  {
    v4 = 0; /*0x62908d*/
  }
  v5 = flt_A417B4; /*0x62908f*/
  this->detectionList = v4; /*0x629095*/
  this->swimBreath = v5; /*0x62909b*/
  this->unk1E4 = 0; /*0x6290a1*/
  v6 = 0.0; /*0x6290a7*/
  this->unk2BC = 1; /*0x6290a9*/
  this->conversationScanCooldown = 0.0; /*0x6290b3*/
  this->unk2C4 = 0; /*0x6290b9*/
  this->unk1E0 = 0.0; /*0x6290bf*/
  this->unk25D = 0; /*0x6290c5*/
  this->unk240 = 0.0; /*0x6290cb*/
  this->unk2C0 = 0.0; /*0x6290d1*/
  this->unk1B8 = 0.0; /*0x6290d7*/
  this->unk27C.unk0 = LODWORD(g_zeroNiPoint3.x); /*0x6290e3*/
  this->unk27C.unk4 = LODWORD(g_zeroNiPoint3.y); /*0x6290ee*/
  v7 = g_zeroNiPoint3.z; /*0x6290f4*/
  this->unk260 = 0.0; /*0x6290fa*/
  *(float *)&this->unk27C.unk8 = v7; /*0x629100*/
  this->unk19C = flt_B36778[0x72]; /*0x62910c*/
  this->unk288 = 0; /*0x629112*/
  this->unk264 = 0.0; /*0x629118*/
  this->unk26C = 1.0; /*0x629120*/
  this->unk270 = 0.0; /*0x629126*/
  unk268 = this->unk268; /*0x62912c*/
  if ( unk268 ) /*0x629134*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk268->members) ) /*0x62913c*/
      unk268->__vftable->super.Destructor((NiRefObject *)unk268, 1); /*0x629152*/
    v6 = 0.0; /*0x629154*/
    this->unk268 = 0; /*0x629156*/
  }
  this->unk28C = v6; /*0x62915c*/
  this->unk274 = 0; /*0x629162*/
  v9 = kTerrainLODQuadRayDirectionZ; /*0x629168*/
  this->unk278 = 0; /*0x62916e*/
  this->unk294 = v9; /*0x629174*/
  this->unk290 = 0; /*0x62917a*/
  this->unk298 = 0xFFFFFFFF; /*0x629180*/
  this->unk29C = 0xFFFFFFFF; /*0x629186*/
  this->unk2A0 = 0xFFFFFFFF; /*0x62918c*/
  this->unk2A4 = 0; /*0x629192*/
  this->unk2A8 = 0; /*0x629198*/
  this->unk2A9 = 0; /*0x62919e*/
  v10 = 0; /*0x6291a4*/
  actionTarget = this->actionTarget; /*0x6291a6*/
  do /*0x6291be*/
  {
    *actionTarget = 0; /*0x6291ac*/
    this->actionActive[v10++] = 0; /*0x6291ae*/
    ++actionTarget; /*0x6291b8*/
  }
  while ( v10 < 5 ); /*0x6291be*/
  this->unk2AC = v6; /*0x6291c0*/
  this->unk2E4 = 0; /*0x6291c6*/
  this->unk2B0 = v6; /*0x6291cc*/
  this->unk2E8 = 0; /*0x6291d2*/
  this->unk1A0 = 0; /*0x6291d8*/
  this->unk2B4 = 0; /*0x6291de*/
  this->unk2B8 = 0; /*0x6291e4*/
  this->unk258 = 0; /*0x6291ea*/
  this->unk1D1 = 0; /*0x6291f0*/
  this->unk2B9 = 0; /*0x6291f6*/
  return this; /*0x6291fe*/
}
