char __thiscall sub_4E48B0(int this)
{
  char v2; // bl
  _WORD *v3; // eax
  ExtraDataList *v4; // esi
  BSExtraDataVtbl *v5; // eax
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // esi
  _DWORD *v7; // eax

  v2 = 0;
  v3 = (_WORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 0x154))(this);
  if ( v3 )
  {
    sub_88CD50(v3, 1, 0);
    v2 = 1;
  }
  v4 = *(ExtraDataList **)(this + 0x40);
  if ( v4 )
  {
    if ( TESObjectCELL_IsInterior(*(TESObjectCELL **)(this + 0x40)) )
      v5 = sub_424180(v4 + 2);
    else
      v5 = (BSExtraDataVtbl *)bhkWorldM;
    if ( v5 )
    {
      CompareTo = v5[4].CompareTo;
      if ( CompareTo )
      {
        v7 = sub_5369B0(*((_DWORD **)CompareTo + 6), this);
        sub_536D30(CompareTo, v7);
        sub_5374F0(CompareTo, this);
      }
    }
  }
  return v2;
}
