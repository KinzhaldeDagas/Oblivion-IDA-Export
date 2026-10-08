void __thiscall Actor_Resurrect(Actor *this, int a1, char a2, bool useAnimBoh)
{
  int v4; // ebx
  int v5; // edi
  TESObjectCELL *v7; // eax
  bhkCharacterProxy *CharProxy; // eax
  LowProcess *process; // ecx
  ActorAnimData *v10; // eax
  LowProcess *v11; // ecx
  int v12; // eax
  LowProcess *v13; // ecx
  LowProcess *v14; // eax
  LowProcess *v15; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v17; // edi
  signed int v18; // eax
  ActorVtbl *vtbl; // eax
  Actor *v20; // ecx
  NiPoint3 *v21; // [esp+Ch] [ebp-1Ch]
  float a1a; // [esp+2Ch] [ebp+4h]
  float a3a; // [esp+34h] [ebp+Ch]

  ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->super.super.super.Unk_23)(this, 0); /*0x5f604e*/
  ExtraDataList_RemoveSavedMovementData(&this->members.super.super.baseExtraList.vtbl); /*0x5f6053*/
  LOBYTE(this->members.unk0E8[5]) = 0; /*0x5f605d*/
  if ( useAnimBoh /*0x5f609d*/
    && this->vtbl->super.super.GetNiNode(this)
    && Shared_GetDwordAtOffset40(this)
    && (v7 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this), TESObjectCELL_IsProcessLevel_LowHigh(v7, 1)) )
  {
    Actor_HandleDeathState(this, 0); /*0x5f60ae*/
    a1a = this->vtbl->GetAV_F(this, kActorVal_Health); /*0x5f60c1*/
    a3a = (double)Actor_GetBaseCalcAVi((int *)this, v4, v5, (int)this, 8) - a1a; /*0x5f60e7*/
    ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))this->vtbl->DamageAV_F)(this, 8, LODWORD(a3a), 0); /*0x5f60f4*/
    v21 = (NiPoint3 *)this->vtbl->super.super.GetPos(this); /*0x5f6102*/
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x5f6105*/
    sub_452A10(CharProxy, v21); /*0x5f610c*/
    this->members.super.process->Unk_63(this->members.super.process, 0); /*0x5f6129*/
    this->vtbl->super.super.Unk_52((TESObjectREFR *)this); /*0x5f6135*/
    process = this->members.super.process; /*0x5f6137*/
    if ( process ) /*0x5f613c*/
      process->SetKnockedState(process, 3); /*0x5f6148*/
    v10 = this->vtbl->super.super.GetAnimData(this); /*0x5f6154*/
    if ( v10 ) /*0x5f6158*/
      ActorAnimData_ResetRootMotion((int)v10); /*0x5f6160*/
  }
  else
  {
    AVCollection_ClearArrayAndList(&this->members.avModifiers); /*0x5f617f*/
    Actor_HandleDeathState(this, 0); /*0x5f6188*/
    LOBYTE(this->members.unk0B4[3]) = 0; /*0x5f618d*/
    if ( this != (Actor *)reference ) /*0x5f619a*/
    {
      v11 = this->members.super.process; /*0x5f619c*/
      if ( v11 ) /*0x5f61a1*/
      {
        v12 = v11->GetProcessLevel(v11); /*0x5f61a8*/
        sub_674550((int)this, v12); /*0x5f61b1*/
      }
      v13 = this->members.super.process; /*0x5f61b6*/
      if ( v13 ) /*0x5f61bb*/
        ((void (__thiscall *)(LowProcess *, int))v13->Destructor)(v13, 1); /*0x5f61c3*/
      v14 = (LowProcess *)FormHeapAlloc(0x90u); /*0x5f61ca*/
      if ( v14 ) /*0x5f61e0*/
        v15 = LowProcess::LowProcess(v14); /*0x5f61e4*/
      else
        v15 = 0; /*0x5f61eb*/
      this->members.super.process = v15; /*0x5f61f5*/
    }
    if ( (_BYTE)a1 ) /*0x5f61fd*/
      this->vtbl->super.super.Unk_61((TESObjectREFR *)this, 0); /*0x5f620b*/
    if ( this != (Actor *)reference ) /*0x5f6213*/
    {
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5f621b*/
      v17 = DwordAtOffset40; /*0x5f6220*/
      if ( DwordAtOffset40 && TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) && a2 ) /*0x5f623d*/
      {
        v18 = sub_440C80(MEMORY[0xB333A0], v17, 0); /*0x5f6248*/
        sub_438060((_DWORD **)MEMORY[0xB33A1C], (TESObjectREFR *)this, v18); /*0x5f6255*/
        vtbl = this->vtbl; /*0x5f625e*/
        v20 = this; /*0x5f6260*/
        if ( v17->members.cellProcessLevel == 6 ) /*0x5f6262*/
          vtbl->super.super.MoveToHigh((TESObjectREFR *)this); /*0x5f626a*/
        else
LABEL_29:
          vtbl->super.MoveToMiddleHigh((MobileObject *)v20); /*0x5f62b7*/
      }
      else
      {
        switch ( MobileObject_GetProcessLevel((MobileObject *)this) ) /*0x5f628c*/
        {
          case 0u: /*0x5f628c*/
            this->vtbl->super.super.MoveToHigh((TESObjectREFR *)this); /*0x5f629d*/
            break; /*0x5f62b0*/
          case 1u: /*0x5f628c*/
            vtbl = this->vtbl; /*0x5f62b3*/
            v20 = this; /*0x5f62b5*/
            goto LABEL_29; /*0x5f62b5*/
          case 2u: /*0x5f628c*/
            this->vtbl->super.MoveToMiddleLow((MobileObject *)this); /*0x5f62dd*/
            break; /*0x5f62f0*/
          case 3u: /*0x5f628c*/
            ActorProcessManager_AddMobileObject( /*0x5f6301*/
              (ActorProcessManager *)&qword_B3BB2C[0x75],
              (MobileObject *)this,
              3,
              0,
              0,
              0);
            break; /*0x5f6301*/
          default:
            return;
        }
      }
    }
  }
}
