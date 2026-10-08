void __thiscall sub_4A3430(TESForm *this)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  _BYTE *v4; // eax
  bool v5; // zf
  int a1; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 ) /*0x4a343c*/
  {
    a1 = *((_DWORD *)this + 8); /*0x4a3441*/
    OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4a3449*/
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x4a3454*/
    v3 = TESForm_LookupByFormID(a1); /*0x4a346f*/
    v4 = OblivionDynamicCast( /*0x4a3478*/
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESWorldSpace `RTTI Type Descriptor',
           0);
    if ( v4 ) /*0x4a3482*/
    {
      v5 = (this->member.flags & 0x40) == 0; /*0x4a348a*/
      *((_DWORD *)this + 8) = v4; /*0x4a348d*/
      if ( !v5 && !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[5] ) /*0x4a3498*/
        sub_4EF170(v4, 1); /*0x4a34a5*/
    }
    TESForm_SetIsLinked(this, 1); /*0x4a34ae*/
  }
}
