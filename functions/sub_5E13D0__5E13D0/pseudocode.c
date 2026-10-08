void __thiscall sub_5E13D0(TESObjectREFR *this, char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD *AnimData; // eax
  _DWORD *v7; // eax
  ActorAnimData *v8; // eax

  if ( ((int (__thiscall *)(TESObjectREFR *))this->vtbl[2].super.Unk_0C)(this) ) /*0x5e13dc*/
  {
    v3 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[2].super.Unk_0C)(this); /*0x5e13f0*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x164))(v3) ) /*0x5e13fc*/
    {
      v4 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[2].super.Unk_0C)(this); /*0x5e140c*/
      v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x164))(v4); /*0x5e1419*/
      ActorAnimData_ResetControllerSequences(v5, a2); /*0x5e141d*/
    }
  }
  if ( this == (TESObjectREFR *)reference ) /*0x5e142a*/
  {
    if ( PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1) ) /*0x5e142e*/
    {
      AnimData = PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1); /*0x5e1440*/
      ActorAnimData_ResetControllerSequences(AnimData, a2); /*0x5e1447*/
    }
    if ( PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 0) ) /*0x5e1454*/
    {
      v7 = PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 0); /*0x5e1466*/
      ActorAnimData_ResetControllerSequences(v7, a2); /*0x5e146d*/
    }
  }
  else if ( this->vtbl->GetAnimData(this) ) /*0x5e1481*/
  {
    v8 = this->vtbl->GetAnimData(this); /*0x5e1492*/
    ActorAnimData_ResetControllerSequences(v8, a2); /*0x5e1496*/
  }
}
