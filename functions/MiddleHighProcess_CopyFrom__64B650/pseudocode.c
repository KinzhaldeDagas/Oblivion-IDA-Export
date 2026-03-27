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

  this->unk0D0 = a2->unk0D0;
  this->currentPackage = a2->currentPackage;
  GetCurrentPackProcedure = a2->GetCurrentPackProcedure;
  a2->currentPackage = 0;
  this->currentPackProcedure = GetCurrentPackProcedure(a2);
  this->positionOfFollowedActor[0] = a2->positionOfFollowedActor[0];
  this->positionOfFollowedActor[1] = a2->positionOfFollowedActor[1];
  this->positionOfFollowedActor[2] = a2->positionOfFollowedActor[2];
  this->animData = a2->animData;
  a2->animData = 0;
  animData = this->animData;
  if ( animData )
    sub_470FC0(animData, 5, 0.0);
  this->equippedWeaponData = a2->equippedWeaponData;
  this->equippedLightData = a2->equippedLightData;
  this->equippedAmmoData = a2->equippedAmmoData;
  this->equippedShieldData = a2->equippedShieldData;
  this->unk0F8 = a2->unk0F8;
  this->unk0F4 = a2->unk0F4;
  this->unk0F5 = a2->unk0F5;
  this->unk114 = a2->GetCombatMode(a2);
  this->unk115 = a2->GetWeaponOut(a2);
  this->knockedState = a2->knockedState;
  this->unk110 = a2->unk110;
  this->unk148 = a2->unk148;
  this->unk0F5 = a2->unk0F5;
  this->unk0FC = a2->unk0FC;
  this->unk100 = a2->unk100;
  this->unk104 = a2->unk104;
  this->unk108 = a2->unk108;
  this->unk10C = a2->unk10C;
  this->unk168 = a2->unk168;
  this->unk169 = a2->unk169;
  unk0E0 = a2->unk0E0;
  a2->equippedWeaponData = 0;
  a2->equippedLightData = 0;
  a2->equippedAmmoData = 0;
  a2->equippedShieldData = 0;
  a2->unk0F4 = 0;
  a2->unk0F5 = 0;
  this->unk0E0 = unk0E0;
  p_unk0A8 = &a2->unk0A8;
  this->unk0BC = a2->unk0BC;
  this->unk0C4 = a2->unk0C4;
  if ( a2 != (MiddleHighProcess *)0xFFFFFF58 )
  {
    do
    {
      v8 = *p_unk0A8;
      if ( !*p_unk0A8 )
        break;
      if ( this->unk0A8 )
      {
        v9 = (void **)FormHeapAlloc(8u);
        if ( v9 )
        {
          *v9 = this->unk0A8;
          v9[1] = 0;
        }
        else
        {
          v9 = 0;
        }
        v9[1] = (void *)this->unk0AC;
        this->unk0AC = (UInt32)v9;
      }
      this->unk0A8 = v8;
      p_unk0A8 = (void **)p_unk0A8[1];
    }
    while ( p_unk0A8 );
  }
  this->unk180 = ((int (__thiscall *)(MiddleHighProcess *))a2->GetUnk180)(a2);
  this->sleepState = a2->sleepState;
  this->furniture = a2->furniture;
  this->furnitureMarkerIndex = a2->furnitureMarkerIndex;
  this->unk128 = a2->unk128;
  v10 = ((int (__thiscall *)(MiddleHighProcess *))a2->GetUnk184)(a2);
  unk184 = this->unk184;
  v12 = (NiObject *)v10;
  if ( unk184 != (NiObject *)v10 )
  {
    if ( unk184 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&unk184->members) )
        unk184->__vftable->super.Destructor((NiRefObject *)unk184, 1);
    }
    this->unk184 = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)&v12->members);
  }
  effectList = this->effectList;
  if ( effectList->next )
  {
    do
    {
      next = effectList->next->next;
      FormHeapFree((unsigned int)effectList->next);
      effectList->next = next;
    }
    while ( next );
  }
  effectList->effect = 0;
  for ( i = (_DWORD *)((int (__thiscall *)(MiddleHighProcess *))a2->Unk_A5)(a2); i; i = (_DWORD *)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    v16 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*i + 4))(*i);
    v17 = this->effectList;
    v22 = (MiddleHighProcess *)v16;
    if ( v16 )
    {
      if ( v17->effect )
      {
        v18 = (EffectListNode *)FormHeapAlloc(8u);
        if ( v18 )
        {
          v18->effect = v17->effect;
          v18->next = 0;
        }
        else
        {
          v18 = 0;
        }
        v18->next = v17->next;
        v17->next = v18;
        v16 = (int)v22;
      }
      v17->effect = (ActiveEffect *)v16;
    }
  }
  this->unk138 = a2->unk138;
  this->unk13C = a2->unk13C;
  this->unk140 = a2->unk140;
  charProxy = (volatile LONG *)this->charProxy;
  if ( charProxy != (volatile LONG *)a2->charProxy )
  {
    if ( charProxy )
    {
      if ( !InterlockedDecrement(charProxy + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))charProxy)(charProxy, 1);
    }
    v20 = (volatile LONG *)a2->charProxy;
    this->charProxy = (bhkCharacterProxy *)v20;
    if ( v20 )
      InterlockedIncrement(v20 + 1);
  }
  this->unk14C = a2->unk14C;
  this->unk150 = a2->unk150;
  this->actorAlpha = a2->actorAlpha;
  this->unk158 = a2->unk158;
  this->boundingBox = a2->boundingBox;
  this->unk16A = a2->unk16A;
  this->unk16C = a2->unk16C;
  result = a2->unk16D;
  this->unk16D = result;
  this->unk170 = a2->unk170;
  a2->unk170 = 0;
  return result;
}
