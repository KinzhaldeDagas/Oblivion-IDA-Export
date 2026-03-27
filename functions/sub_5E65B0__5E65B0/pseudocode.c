double __thiscall sub_5E65B0(TESObjectREFR *this)
{
  __int16 v2; // ax
  int (*v3)(void); // edx
  __int16 v5; // ax
  TESObjectREFR *v6; // ecx
  __int16 v7; // ax

  if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)) )
  {
    v6 = this;
  }
  else
  {
    v2 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16));
    v3 = *(int (**)(void))(**((_DWORD **)this + 0x16) + 0x2C0);
    if ( (v2 & 0x200) != 0 )
    {
      if ( (v3() & 0x800) != 0 )
        return (float)sub_5E3AD0(this);
      v5 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16));
      v6 = this;
      if ( (v5 & 0x2000) == 0 )
        return (float)sub_5E3750(this);
      return (float)sub_5E3C80(v6);
    }
    if ( (v3() & 0x800) != 0 )
      return (float)sub_5E3920(this);
    v7 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16));
    v6 = this;
    if ( (v7 & 0x2000) != 0 )
      return (float)sub_5E3C80(v6);
  }
  return (float)sub_5E3590((Actor *)v6);
}
