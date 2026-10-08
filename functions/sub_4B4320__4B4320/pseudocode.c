void __thiscall sub_4B4320(TESForm *this)
{
  int *v2; // esi
  Data *OverrideFile; // eax
  void *v4; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 ) /*0x4b432c*/
  {
    v2 = (int *)(this + 2); /*0x4b4333*/
    if ( *((_DWORD *)this + 0xC) ) /*0x4b432e*/
    {
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4b433a*/
      TESForm_ResolveFormID((UInt32 *)this + 0xC, OverrideFile); /*0x4b4341*/
      if ( NiTMap_GetAt(&TESForm_FormIDMap, *v2, &v4) ) /*0x4b4356*/
      {
        *v2 = (int)OblivionDynamicCast( /*0x4b437e*/
                     v4,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESIdleForm `RTTI Type Descriptor',
                     0);
        TESForm_SetIsLinked(this, 1); /*0x4b4380*/
        return; /*0x4b4388*/
      }
      *v2 = 0; /*0x4b4389*/
    }
    TESForm_SetIsLinked(this, 1); /*0x4b4393*/
  }
}
