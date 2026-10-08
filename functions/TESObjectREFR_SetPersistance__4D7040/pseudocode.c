void __thiscall TESObjectREFR_SetPersistance(TESChildCELL *this, char a2)
{
  TESObjectCELL *v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  TESWorldSpace *WorldSpace; // eax
  TESWorldSpace *v9; // eax

  v5 = (TESObjectCELL *)(**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6); /*0x4d7054*/
  v6 = *((_DWORD *)this + 2); /*0x4d7056*/
  if ( a2 ) /*0x4d7059*/
    v7 = v6 | 0x400; /*0x4d705b*/
  else
    v7 = v6 & 0xFFFFFBFF; /*0x4d7062*/
  *((_DWORD *)this + 2) = v7; /*0x4d7069*/
  if ( a2 ) /*0x4d706c*/
  {
    (*((void (__thiscall **)(TESChildCELL *, int))this->vtbl + 0x10))(this, 1); /*0x4d7077*/
    if ( v5 ) /*0x4d707b*/
    {
      if ( !TESObjectCELL_IsInterior(v5) && !TESForm_GetQuestItem((TESForm *)v5) ) /*0x4d708a*/
      {
        WorldSpace = TESObjectCELL_GetWorldSpace(v5); /*0x4d7095*/
        TESWorldspace_Boh_(WorldSpace, this); /*0x4d709d*/
      }
    }
  }
  else if ( v5 ) /*0x4d70a9*/
  {
    if ( TESForm_GetQuestItem((TESForm *)v5) ) /*0x4d70ad*/
    {
      v9 = TESObjectCELL_GetWorldSpace(v5); /*0x4d70b8*/
      TESWorldSpace_RemovePersistentCellReference(v9, (TESObjectREFR *)this); /*0x4d70c0*/
      (*((void (__thiscall **)(TESChildCELL *, int))this->vtbl + 0x24))(this, 1); /*0x4d70d1*/
    }
  }
}
