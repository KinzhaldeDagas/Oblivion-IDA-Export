MiddleHighProcess *__thiscall MiddleHighProcess::MiddleHighProcess(MiddleHighProcess *this)
{
  EffectListNode *v2; // eax
  double v3; // st7
  float v4; // edx
  NiObject *unk184; // edi

  MiddleLowProcess::MiddleLowProcess(this);
  this->__vftable = (MiddleHighProcess_vtbl *)&MiddleHighProcess::`vftable';
  this->unk0A8 = 0;
  this->unk0AC = 0;
  this->unk0B0 = 0;
  this->unk0B4 = 0;
  this->charProxy = 0;
  this->unk128.unkC = 0;
  this->unk128.unkE = 0xFF;
  this->unk184 = 0;
  this->unk0F8 = flt_A30634;
  this->queuedMagicItem = 0;
  this->unk178 = 0;
  this->equippedWeaponData = 0;
  this->equippedLightData = 0;
  this->equippedAmmoData = 0;
  this->equippedShieldData = 0;
  this->unk0FC = 0;
  this->unk100 = 0;
  this->unk104 = 0;
  this->unk108 = 0;
  this->unk10C = 0;
  this->unk110 = 0;
  this->unk0F4 = 0;
  this->unk0F5 = 0;
  this->unk138 = 0xFFFF;
  this->unk13C = 0;
  this->unk140 = 0;
  v2 = (EffectListNode *)FormHeapAlloc(8u);
  if ( v2 )
  {
    v2->effect = 0;
    v2->next = 0;
  }
  else
  {
    v2 = 0;
  }
  this->effectList = v2;
  this->pathing = 0;
  this->currentPackage = 0;
  this->currentPackProcedure = kProcedure_TRAVEL;
  this->animData = 0;
  this->unk114 = 0;
  this->unk115 = 0;
  this->knockedState = 0;
  this->unk038 = 0;
  this->sleepState = 0;
  this->furniture = 0;
  this->furnitureMarkerIndex = 0x7F;
  sub_6FAEE0(&this->unk128, 0.0);
  v3 = 0.0;
  this->unk128.unkE = 0;
  this->unk128.unk00.x = Vector3_InitValue_;
  this->unk128.unk00.y = *(&Vector3_InitValue_ + 1);
  v4 = dword_B3F9B0;
  *(float *)&this->unk0B8 = 0.0;
  this->unk128.unk00.z = v4;
  this->unk180 = 0;
  unk184 = this->unk184;
  if ( unk184 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk184->members) )
      unk184->__vftable->super.Destructor((NiRefObject *)unk184, 1);
    v3 = 0.0;
    this->unk184 = 0;
  }
  this->unk0BC = v3;
  this->unk0E0 = 0;
  *(float *)&this->unk0C4 = v3;
  this->unk148 = 0;
  this->unk14C = 0;
  this->actorAlpha = 1.0;
  this->unk150 = 0;
  this->unk15C = 0;
  this->unk164 = 0;
  this->unk158 = v3;
  this->unk161 = 0;
  this->unk088 = v3;
  this->unk0C8 = 1;
  this->unk168 = 0;
  this->unk169 = 0;
  this->unk160 = 0;
  this->boundingBox = 0;
  this->unk16A = 0;
  this->unk16B = 0;
  this->unk16C = 0;
  this->unk16D = 0;
  this->unk170 = 0;
  return this;
}
