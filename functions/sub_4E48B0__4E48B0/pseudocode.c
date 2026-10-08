char __thiscall sub_4E48B0(TESObjectCELL **this)
{
  char v2; // bl
  NiObjectNET *v3; // eax
  ExtraDataList *v4; // esi
  BSExtraDataVtbl *v5; // eax
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // esi
  _DWORD *v7; // eax

  v2 = 0; /*0x4e48bd*/
  v3 = (NiObjectNET *)((int (__thiscall *)(TESObjectCELL **))(*this)[3].members.objectList.next)(this); /*0x4e48bf*/
  if ( v3 ) /*0x4e48c3*/
  {
    sub_88CD50(v3, 1, 0); /*0x4e48ca*/
    v2 = 1; /*0x4e48d2*/
  }
  v4 = (ExtraDataList *)*(this + 0x10); /*0x4e48d4*/
  if ( v4 ) /*0x4e48d9*/
  {
    if ( TESObjectCELL_IsInterior(*(this + 0x10)) ) /*0x4e48dd*/
      v5 = sub_424180(v4 + 2); /*0x4e48e9*/
    else
      v5 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4e48f0*/
    if ( v5 ) /*0x4e48f7*/
    {
      CompareTo = v5[4].CompareTo; /*0x4e48f9*/
      if ( CompareTo ) /*0x4e48fe*/
      {
        v7 = sub_5369B0(*((_DWORD **)CompareTo + 6), (int)this); /*0x4e4904*/
        sub_536D30(CompareTo, v7); /*0x4e490c*/
        sub_5374F0(CompareTo, (int)this); /*0x4e4914*/
      }
    }
  }
  return v2; /*0x4e4919*/
}
