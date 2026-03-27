void __thiscall TESOjectREFR_stuffsWithPArentCell(TESChildCELL *this)
{
  ExtraDataList *v2; // esi
  BSExtraDataVtbl *v3; // eax
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // esi
  _DWORD *v5; // eax

  v2 = *((ExtraDataList **)this + 0x10);
  if ( v2 )
  {
    if ( TESObjectCELL_IsInterior(*((TESObjectCELL **)this + 0x10)) )
      v3 = sub_424180(v2 + 2);
    else
      v3 = (BSExtraDataVtbl *)bhkWorldM;
    if ( v3 )
    {
      CompareTo = v3[4].CompareTo;
      if ( CompareTo )
      {
        v5 = sub_5369B0(*((_DWORD **)CompareTo + 6), (int)this);
        sub_536D30(CompareTo, v5);
        sub_5374F0(CompareTo, (int)this);
      }
    }
  }
}
