UInt8 __thiscall MiddleHighProcess_CopyFrom(MiddleHighProcess *this, MiddleHighProcess *a2)
{
  eProcedure (__thiscall *GetCurrentPackProcedure)(BaseProcess *__hidden); // eax
  ActorAnimData *animData; // ecx
  UInt32 unk0E0; // eax
  void **p_unk0A8; // ebx
  void *v8; // ebp
  void **v9; // eax
  int v10; // eax
  NiObject *unk184; // ebp
  NiObject *v12; // ebx
  EffectListNode *effectList; // ebp
  EffectListNode *next; // ebx
  _DWORD *i; // ebx
  int v16; // eax
  EffectListNode *v17; // ebp
  EffectListNode *v18; // eax
  volatile LONG *charProxy; // ebx
  volatile LONG *v20; // eax
  UInt8 result; // al
  MiddleHighProcess *v22; // [esp+18h] [ebp+4h]

  this->unk0D0 = a2->unk0D0; /*0x64b660*/
  this->currentPackage = a2->currentPackage; /*0x64b66c*/
  GetCurrentPackProcedure = a2->GetCurrentPackProcedure; /*0x64b674*/
  a2->currentPackage = 0; /*0x64b67e*/
  this->currentPackProcedure = GetCurrentPackProcedure(a2); /*0x64b686*/
  this->positionOfFollowedActor[0] = a2->positionOfFollowedActor[0]; /*0x64b692*/
  this->positionOfFollowedActor[1] = a2->positionOfFollowedActor[1]; /*0x64b69e*/
  this->positionOfFollowedActor[2] = a2->positionOfFollowedActor[2]; /*0x64b6aa*/
  this->animData = a2->animData; /*0x64b6b6*/
  a2->animData = 0; /*0x64b6bc*/
  animData = this->animData; /*0x64b6c2*/
  if ( animData ) /*0x64b6ca*/
    ActorAnimData_ClearSlot(animData, 5, 0.0); /*0x64b6d4*/
  this->equippedWeaponData = a2->equippedWeaponData; /*0x64b6df*/
  this->equippedLightData = a2->equippedLightData; /*0x64b6eb*/
  this->equippedAmmoData = a2->equippedAmmoData; /*0x64b6f7*/
  this->equippedShieldData = a2->equippedShieldData; /*0x64b703*/
  this->unk0F8 = a2->unk0F8; /*0x64b70f*/
  this->unk0F4 = a2->unk0F4; /*0x64b71b*/
  this->unk0F5 = a2->unk0F5; /*0x64b728*/
  this->unk114 = a2->GetCombatMode(a2); /*0x64b73a*/
  this->unk115 = a2->GetWeaponOut(a2); /*0x64b74c*/
  this->knockedState = a2->knockedState; /*0x64b759*/
  this->arrowBoneAttachNode = a2->arrowBoneAttachNode; /*0x64b765*/
  this->unk148 = a2->unk148; /*0x64b771*/
  this->unk0F5 = a2->unk0F5; /*0x64b77e*/
  this->weaponAttachNode = a2->weaponAttachNode; /*0x64b78a*/
  this->torchAttachNode = a2->torchAttachNode; /*0x64b796*/
  this->forearmTwistAttachNode = a2->forearmTwistAttachNode; /*0x64b7a2*/
  this->backOrSideWeaponAttachNode = a2->backOrSideWeaponAttachNode; /*0x64b7ae*/
  this->quiverAttachNode = a2->quiverAttachNode; /*0x64b7ba*/
  this->unk168 = a2->unk168; /*0x64b7c7*/
  this->unk169 = a2->unk169; /*0x64b7d3*/
  unk0E0 = a2->unk0E0; /*0x64b7d9*/
  a2->equippedWeaponData = 0; /*0x64b7df*/
  a2->equippedLightData = 0; /*0x64b7e5*/
  a2->equippedAmmoData = 0; /*0x64b7eb*/
  a2->equippedShieldData = 0; /*0x64b7f1*/
  a2->unk0F4 = 0; /*0x64b7f7*/
  a2->unk0F5 = 0; /*0x64b7fe*/
  this->unk0E0 = unk0E0; /*0x64b805*/
  p_unk0A8 = &a2->unk0A8; /*0x64b80b*/
  this->unk0BC = a2->unk0BC; /*0x64b819*/
  this->unk0C4 = a2->unk0C4; /*0x64b825*/
  if ( a2 != (MiddleHighProcess *)0xFFFFFF58 ) /*0x64b82b*/
  {
    do /*0x64b87a*/
    {
      v8 = *p_unk0A8; /*0x64b830*/
      if ( !*p_unk0A8 ) /*0x64b830*/
        break; /*0x64b834*/
      if ( this->unk0A8 ) /*0x64b836*/
      {
        v9 = (void **)FormHeapAlloc(8u); /*0x64b841*/
        if ( v9 ) /*0x64b84b*/
        {
          *v9 = this->unk0A8; /*0x64b853*/
          v9[1] = 0; /*0x64b855*/
        }
        else
        {
          v9 = 0; /*0x64b85e*/
        }
        v9[1] = (void *)this->unk0AC; /*0x64b866*/
        this->unk0AC = (UInt32)v9; /*0x64b869*/
      }
      this->unk0A8 = v8; /*0x64b86f*/
      p_unk0A8 = (void **)p_unk0A8[1]; /*0x64b875*/
    }
    while ( p_unk0A8 ); /*0x64b87a*/
  }
  this->unk180 = ((int (__thiscall *)(MiddleHighProcess *))a2->GetUnk180)(a2); /*0x64b888*/
  this->sleepState = a2->sleepState; /*0x64b894*/
  this->furniture = a2->furniture; /*0x64b8a0*/
  this->furnitureMarkerIndex = a2->furnitureMarkerIndex; /*0x64b8ac*/
  this->unk128 = a2->unk128; /*0x64b8b8*/
  v10 = ((int (__thiscall *)(MiddleHighProcess *))a2->GetUnk184)(a2); /*0x64b8ec*/
  unk184 = this->unk184; /*0x64b8ee*/
  v12 = (NiObject *)v10; /*0x64b8f4*/
  if ( unk184 != (NiObject *)v10 ) /*0x64b8f8*/
  {
    if ( unk184 ) /*0x64b8fc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&unk184->members) ) /*0x64b902*/
        unk184->__vftable->super.Destructor((NiRefObject *)unk184, 1); /*0x64b919*/
    }
    this->unk184 = v12; /*0x64b91d*/
    if ( v12 ) /*0x64b923*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x64b929*/
  }
  effectList = this->effectList; /*0x64b92f*/
  if ( effectList->next ) /*0x64b935*/
  {
    do /*0x64b954*/
    {
      next = effectList->next->next; /*0x64b943*/
      FormHeapFree((unsigned int)effectList->next); /*0x64b947*/
      effectList->next = next; /*0x64b951*/
    }
    while ( next ); /*0x64b954*/
  }
  effectList->effect = 0; /*0x64b956*/
  for ( i = (_DWORD *)((int (__thiscall *)(MiddleHighProcess *))a2->Unk_A5)(a2); i; i = (_DWORD *)i[1] ) /*0x64b96d*/
  {
    if ( !i[1] && !*i ) /*0x64b976*/
      break; /*0x64b979*/
    v16 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*i + 4))(*i); /*0x64b982*/
    v17 = this->effectList; /*0x64b986*/
    v22 = (MiddleHighProcess *)v16; /*0x64b98c*/
    if ( v16 ) /*0x64b990*/
    {
      if ( v17->effect ) /*0x64b992*/
      {
        v18 = (EffectListNode *)FormHeapAlloc(8u); /*0x64b99a*/
        if ( v18 ) /*0x64b9a4*/
        {
          v18->effect = v17->effect; /*0x64b9a9*/
          v18->next = 0; /*0x64b9ab*/
        }
        else
        {
          v18 = 0; /*0x64b9b4*/
        }
        v18->next = v17->next; /*0x64b9b9*/
        v17->next = v18; /*0x64b9bc*/
        v16 = (int)v22; /*0x64b9bf*/
      }
      v17->effect = (ActiveEffect *)v16; /*0x64b9c3*/
    }
  }
  this->unk138 = a2->unk138; /*0x64b9d4*/
  this->unk13C = a2->unk13C; /*0x64b9e1*/
  this->unk140 = a2->unk140; /*0x64b9ed*/
  charProxy = (volatile LONG *)this->charProxy; /*0x64b9f3*/
  if ( charProxy != (volatile LONG *)a2->charProxy ) /*0x64b9ff*/
  {
    if ( charProxy ) /*0x64ba03*/
    {
      if ( !InterlockedDecrement(charProxy + 1) ) /*0x64ba09*/
        (**(void (__thiscall ***)(volatile LONG *, int))charProxy)(charProxy, 1); /*0x64ba1f*/
    }
    v20 = (volatile LONG *)a2->charProxy; /*0x64ba21*/
    this->charProxy = (bhkCharacterProxy *)v20; /*0x64ba29*/
    if ( v20 ) /*0x64ba2f*/
      InterlockedIncrement(v20 + 1); /*0x64ba35*/
  }
  this->unk14C = a2->unk14C; /*0x64ba42*/
  this->unk150 = a2->unk150; /*0x64ba4e*/
  this->actorAlpha = a2->actorAlpha; /*0x64ba5a*/
  this->unk158 = a2->unk158; /*0x64ba66*/
  this->boundingBox = a2->boundingBox; /*0x64ba72*/
  this->unk16A = a2->unk16A; /*0x64ba7f*/
  this->unk16C = a2->unk16C; /*0x64ba8b*/
  result = a2->unk16D; /*0x64ba91*/
  this->unk16D = result; /*0x64ba97*/
  this->unk170 = a2->unk170; /*0x64baa3*/
  a2->unk170 = 0; /*0x64baaa*/
  return result; /*0x64baa9*/
}
