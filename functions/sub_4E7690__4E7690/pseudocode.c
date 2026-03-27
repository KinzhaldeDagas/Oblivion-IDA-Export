void __thiscall sub_4E7690(TESForm *this)
{
  Data *OverrideFile; // eax

  if ( *((_DWORD *)this + 9) )
  {
    sub_4E5400((int)this);
    if ( !TESForm_GetOverrideFile(this, 0xFFFFFFFF)
      || (OverrideFile = TESForm_GetOverrideFile(this, 0), !TESFile_IsActive(OverrideFile)) )
    {
      sub_4E6CA0(this);
      sub_4E5280(this);
    }
  }
}
