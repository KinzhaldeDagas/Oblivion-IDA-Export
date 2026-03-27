void __thiscall sub_4B4320(TESForm *this)
{
  int *v2; // esi
  Data *OverrideFile; // eax
  void *v4; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 )
  {
    v2 = (int *)(this + 2);
    if ( *((_DWORD *)this + 0xC) )
    {
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)this + 0xC, OverrideFile);
      if ( NiTMap_GetAt(&TESForm_FormIDMap, *v2, &v4) )
      {
        *v2 = (int)OblivionDynamicCast(
                     v4,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESIdleForm `RTTI Type Descriptor',
                     0);
        TESForm_SetIsLinked(this, 1);
        return;
      }
      *v2 = 0;
    }
    TESForm_SetIsLinked(this, 1);
  }
}
