void __thiscall sub_4A3430(TESForm *this)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  _BYTE *v4; // eax
  bool v5; // zf
  int a1; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 )
  {
    a1 = *((_DWORD *)this + 8);
    OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile);
    v3 = TESForm_LookupByFormID(a1);
    v4 = OblivionDynamicCast(
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESWorldSpace `RTTI Type Descriptor',
           0);
    if ( v4 )
    {
      v5 = (this->member.flags & 0x40) == 0;
      *((_DWORD *)this + 8) = v4;
      if ( !v5 && !*(_BYTE *)(TESDataHandler + 0xCD7) )
        sub_4EF170(v4, 1);
    }
    TESForm_SetIsLinked(this, 1);
  }
}
