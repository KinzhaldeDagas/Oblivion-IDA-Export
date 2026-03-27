void __thiscall sub_4F9890(TESForm *this)
{
  UInt32 **v2; // edi
  UInt32 *v3; // esi
  Data *OverrideFile; // eax
  UInt32 *v5; // esi
  Data *v6; // eax

  if ( (this->member.flags & 8) == 0 )
  {
    v2 = (UInt32 **)((char *)this + 0x2C);
    if ( this != (TESForm *)0xFFFFFFD4 )
    {
      do
      {
        if ( !v2[1] && !*v2 )
          break;
        v3 = *v2;
        if ( **v2 )
        {
          OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
          TESForm_ResolveFormID(v3, OverrideFile);
        }
        v5 = v3 + 1;
        if ( *v5 )
        {
          v6 = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
          TESForm_ResolveFormID(v5, v6);
        }
        v2 = (UInt32 **)v2[1];
      }
      while ( v2 );
    }
    TESForm_SetIsLinked(this, 1);
  }
}
