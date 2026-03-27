BSExtraDataVtbl *__thiscall HighPRocess_DoAction_____(PlayerCharacter *this, int a2, int a3)
{
  int v4; // eax
  BSExtraDataVtbl *result; // eax
  bool v6; // zf
  _DWORD *AnimData; // eax
  int v8; // eax
  PlayerCharacter *v9; // ecx
  UInt32 v10; // edi
  int v11; // ebx

  if ( this->super.super.super.process )
    v4 = ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetCurrentAction)(this->super.super.super.process);
  else
    v4 = 0xFFFFFFFF;
  result = (BSExtraDataVtbl *)(v4 - 3);
  if ( !result )
  {
    if ( !this->super.super.super.process )
      return result;
    result = (BSExtraDataVtbl *)this->super.super.super.process->GetEquippedWeaponData(
                                  this->super.super.super.process,
                                  1);
    if ( !result )
      goto LABEL_36;
    result = (BSExtraDataVtbl *)this->super.super.super.process->GetEquippedWeaponData(
                                  this->super.super.super.process,
                                  1);
    if ( *((_BYTE *)result[1].Destructor + 0x90) != 5 )
      goto LABEL_36;
    goto LABEL_20;
  }
  result = (BSExtraDataVtbl *)((char *)result + 0xFFFFFFFE);
  if ( !result )
  {
LABEL_20:
    if ( !this->super.super.super.process )
      return result;
    result = (BSExtraDataVtbl *)((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetCurrentAction)(this->super.super.super.process);
    if ( result == (BSExtraDataVtbl *)5 && a2 != 3 )
      goto LABEL_27;
    if ( !this->super.super.super.process )
      return result;
    result = (BSExtraDataVtbl *)((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetCurrentAction)(this->super.super.super.process);
    if ( result == (BSExtraDataVtbl *)3 && a2 != 0xFFFFFFFF && a2 != 2 )
    {
LABEL_27:
      v8 = ((int (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.super.Unk_5A)(this);
      v9 = TESDataHandler_g_PlayerRef;
      v10 = v8;
      v11 = 1;
      if ( this != TESDataHandler_g_PlayerRef )
        goto LABEL_33;
      v11 = 2;
      while ( 1 )
      {
        if ( this == v9 && v11 == 1 )
          v10 = sub_6600D0(v9, v9->isThirdPerson);
LABEL_33:
        result = (BSExtraDataVtbl *)this->super.super.super.process->Unk_4A(this->super.super.super.process, v10);
        if ( result )
          result = (BSExtraDataVtbl *)sub_477EF0(&result[0x15].CompareTo);
        if ( !--v11 )
          break;
        v9 = TESDataHandler_g_PlayerRef;
      }
    }
    goto LABEL_36;
  }
  result = (BSExtraDataVtbl *)((char *)result + 0xFFFFFFFF);
  if ( !result )
  {
    if ( a2 == 2 )
    {
      if ( !a3 )
      {
LABEL_14:
        result = TESObjectREFR_GetAnimData((Actor *)this);
        if ( result )
        {
          result = (BSExtraDataVtbl *)sub_470FC0(result, 1, 0.0);
          if ( this == TESDataHandler_g_PlayerRef )
          {
            AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
            result = (BSExtraDataVtbl *)sub_470FC0(AnimData, 1, 0.0);
          }
        }
        goto LABEL_36;
      }
      result = (BSExtraDataVtbl *)TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(a3 + 0x68));
      v6 = result == (BSExtraDataVtbl *)0x1D;
    }
    else
    {
      result = (BSExtraDataVtbl *)(a2 - 6);
      v6 = a2 == 6;
    }
    if ( v6 )
      goto LABEL_36;
    if ( a3 )
    {
      result = (BSExtraDataVtbl *)(9 * TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(a3 + 0x68)));
      if ( *(_DWORD *)(4 * (_DWORD)result + 0xB102E8) == 1 )
        goto LABEL_36;
    }
    goto LABEL_14;
  }
LABEL_36:
  if ( this->super.super.super.process )
    return (BSExtraDataVtbl *)((void **(__thiscall *)(LowProcess *, int, int))this->super.super.super.process->SetCurrentAction)(
                                this->super.super.super.process,
                                a2,
                                a3);
  return result;
}
