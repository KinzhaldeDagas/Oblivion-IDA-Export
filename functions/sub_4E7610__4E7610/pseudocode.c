char __thiscall sub_4E7610(int *this)
{
  Data *OverrideFile; // eax
  Data *v4; // eax
  Data *v5; // edi
  char v6; // bl

  if ( *(this + 9) )
  {
    sub_4E6F30(this);
    if ( byte_B35F84 )
      sub_4E71A0((TESObjectREFR *)this);
    return 1;
  }
  else
  {
    OverrideFile = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF);
    v4 = sub_4520F0(OverrideFile);
    v5 = v4;
    if ( v4 && TESFile::FindForm(v4, (TESForm *)this) )
    {
      v6 = sub_4E65B0((int)this, v5);
      if ( v6 )
      {
        sub_4E6F30(this);
        if ( byte_B35F84 )
          sub_4E71A0((TESObjectREFR *)this);
      }
      return v6;
    }
    else
    {
      return 0;
    }
  }
}
