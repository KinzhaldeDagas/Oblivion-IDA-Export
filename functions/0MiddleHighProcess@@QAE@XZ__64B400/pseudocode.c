// MiddleHighProcess constructor: derives from MiddleLowProcess, installs MiddleHighProcess vtable, initializes pathing, currentPackage +0x0C0 and currentPackProcedure. No movementFlags field is initialized here.
MiddleHighProcess *__thiscall MiddleHighProcess::MiddleHighProcess(MiddleHighProcess *this)
{
  EffectListNode *v2; // eax
  double v3; // st7
  float z; // edx
  NiObject *unk184; // edi

  MiddleLowProcess::MiddleLowProcess(this); /*0x64b42a*/
  this->__vftable = (MiddleHighProcess_vtbl *)&MiddleHighProcess::`vftable'; /*0x64b431*/
  this->unk0A8 = 0; /*0x64b437*/
  this->unk0AC = 0; /*0x64b43d*/
  this->unk0B0 = 0; /*0x64b443*/
  this->unk0B4 = 0; /*0x64b449*/
  this->charProxy = 0; /*0x64b453*/
  this->unk128.unkC = 0; /*0x64b45f*/
  this->unk128.unkE = 0xFF; /*0x64b463*/
  this->unk184 = 0; /*0x64b467*/
  this->unk0F8 = kTerrainLODQuadRayDirectionZ; /*0x64b475*/
  this->queuedMagicItem = 0; /*0x64b480*/
  this->unk178 = 0; /*0x64b486*/
  this->equippedWeaponData = 0; /*0x64b48c*/
  this->equippedLightData = 0; /*0x64b492*/
  this->equippedAmmoData = 0; /*0x64b498*/
  this->equippedShieldData = 0; /*0x64b49e*/
  this->weaponAttachNode = 0; /*0x64b4a4*/
  this->torchAttachNode = 0; /*0x64b4aa*/
  this->forearmTwistAttachNode = 0; /*0x64b4b0*/
  this->backOrSideWeaponAttachNode = 0; /*0x64b4b6*/
  this->quiverAttachNode = 0; /*0x64b4bc*/
  this->arrowBoneAttachNode = 0; /*0x64b4c2*/
  this->unk0F4 = 0; /*0x64b4c8*/
  this->unk0F5 = 0; /*0x64b4ce*/
  this->unk138 = 0xFFFF; /*0x64b4d4*/
  this->unk13C = 0; /*0x64b4dd*/
  this->unk140 = 0; /*0x64b4e3*/
  v2 = (EffectListNode *)FormHeapAlloc(8u); /*0x64b4e9*/
  if ( v2 ) /*0x64b4f3*/
  {
    v2->effect = 0; /*0x64b4f5*/
    v2->next = 0; /*0x64b4f7*/
  }
  else
  {
    v2 = 0; /*0x64b4fc*/
  }
  this->effectList = v2; /*0x64b506*/
  this->pathing = 0; /*0x64b50c*/
  this->currentPackage = 0; /*0x64b50f*/
  this->currentPackProcedure = kProcedure_TRAVEL; /*0x64b515*/
  this->animData = 0; /*0x64b51b*/
  this->unk114 = 0; /*0x64b521*/
  this->unk115 = 0; /*0x64b527*/
  this->knockedState = 0; /*0x64b52d*/
  this->unk038 = 0; /*0x64b533*/
  this->sleepState = 0; /*0x64b536*/
  this->furniture = 0; /*0x64b53c*/
  this->furnitureMarkerIndex = 0x7F; /*0x64b542*/
  sub_6FAEE0(&this->unk128, 0.0); /*0x64b549*/
  v3 = 0.0; /*0x64b54e*/
  this->unk128.unkE = 0; /*0x64b550*/
  this->unk128.unk00.x = g_zeroNiPoint3.x; /*0x64b55b*/
  this->unk128.unk00.y = g_zeroNiPoint3.y; /*0x64b563*/
  z = g_zeroNiPoint3.z; /*0x64b566*/
  *(float *)&this->unk0B8 = 0.0; /*0x64b56c*/
  this->unk128.unk00.z = z; /*0x64b572*/
  this->unk180 = 0; /*0x64b575*/
  unk184 = this->unk184; /*0x64b57b*/
  if ( unk184 ) /*0x64b583*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk184->members) ) /*0x64b58b*/
      unk184->__vftable->super.Destructor((NiRefObject *)unk184, 1); /*0x64b5a1*/
    v3 = 0.0; /*0x64b5a3*/
    this->unk184 = 0; /*0x64b5a5*/
  }
  this->unk0BC = v3; /*0x64b5ab*/
  this->unk0E0 = 0; /*0x64b5b1*/
  *(float *)&this->unk0C4 = v3; /*0x64b5b7*/
  this->unk148 = 0; /*0x64b5bd*/
  this->unk14C = 0; /*0x64b5c5*/
  this->actorAlpha = 1.0; /*0x64b5cb*/
  this->unk150 = 0; /*0x64b5d1*/
  this->unk15C = 0; /*0x64b5d7*/
  this->unk164 = 0; /*0x64b5dd*/
  this->unk158 = v3; /*0x64b5e3*/
  this->unk161 = 0; /*0x64b5e9*/
  this->unk088 = v3; /*0x64b5ef*/
  this->unk0C8 = 1; /*0x64b5f5*/
  this->unk168 = 0; /*0x64b5fc*/
  this->unk169 = 0; /*0x64b602*/
  this->unk160 = 0; /*0x64b608*/
  this->boundingBox = 0; /*0x64b60e*/
  this->unk16A = 0; /*0x64b614*/
  this->unk16B = 0; /*0x64b61a*/
  this->unk16C = 0; /*0x64b620*/
  this->unk16D = 0; /*0x64b626*/
  this->unk170 = 0; /*0x64b62c*/
  return this; /*0x64b634*/
}
