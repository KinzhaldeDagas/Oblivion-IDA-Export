void __thiscall sub_4F9890(TESForm *this)
{
  UInt32 **v2; // edi
  UInt32 *v3; // esi
  Data *OverrideFile; // eax
  UInt32 *v5; // esi
  Data *v6; // eax

  if ( (this->member.flags & 8) == 0 ) /*0x4f989b*/
  {
    v2 = (UInt32 **)((char *)this + 0x2C); /*0x4f989e*/
    if ( this != (TESForm *)0xFFFFFFD4 ) /*0x4f98a3*/
    {
      do /*0x4f98eb*/
      {
        if ( !v2[1] && !*v2 ) /*0x4f98ac*/
          break; /*0x4f98af*/
        v3 = *v2; /*0x4f98b1*/
        if ( **v2 ) /*0x4f98b3*/
        {
          OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4f98bc*/
          TESForm_ResolveFormID(v3, OverrideFile); /*0x4f98c3*/
        }
        v5 = v3 + 1; /*0x4f98cb*/
        if ( *v5 ) /*0x4f98ce*/
        {
          v6 = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4f98d7*/
          TESForm_ResolveFormID(v5, v6); /*0x4f98de*/
        }
        v2 = (UInt32 **)v2[1]; /*0x4f98e6*/
      }
      while ( v2 ); /*0x4f98eb*/
    }
    TESForm_SetIsLinked(this, 1); /*0x4f98f2*/
  }
}
