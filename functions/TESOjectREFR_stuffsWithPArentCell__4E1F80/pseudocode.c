void __thiscall TESOjectREFR_stuffsWithPArentCell(TESChildCELL *this)
{
  ExtraDataList *v2; // esi
  BSExtraDataVtbl *v3; // eax
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // esi
  _DWORD *v5; // eax

  v2 = *((ExtraDataList **)this + 0x10); /*0x4e1f84*/
  if ( v2 ) /*0x4e1f89*/
  {
    if ( TESObjectCELL_IsInterior(*((TESObjectCELL **)this + 0x10)) ) /*0x4e1f8d*/
      v3 = sub_424180(v2 + 2); /*0x4e1f99*/
    else
      v3 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4e1fa0*/
    if ( v3 ) /*0x4e1fa7*/
    {
      CompareTo = v3[4].CompareTo; /*0x4e1fa9*/
      if ( CompareTo ) /*0x4e1fae*/
      {
        v5 = sub_5369B0(*((_DWORD **)CompareTo + 6), (int)this); /*0x4e1fb4*/
        sub_536D30(CompareTo, v5); /*0x4e1fbc*/
        sub_5374F0(CompareTo, (int)this); /*0x4e1fc4*/
      }
    }
  }
}
