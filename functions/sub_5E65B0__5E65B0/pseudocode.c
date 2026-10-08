// Authoritative actor movement speed selector: process flags +0x2C0 choose run (0x200), swim (0x800), fly-speed (0x2000); when those are absent it falls through to ordinary walk speed. AI callers may supply a movement vector without direction bits.
double __thiscall sub_5E65B0(TESObjectREFR *this)
{
  __int16 v2; // ax
  int (*v3)(void); // edx
  __int16 v5; // ax
  TESObjectREFR *v6; // ecx
  __int16 v7; // ax

  if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)) ) /*0x5e65bc*/
  {
    v6 = this; /*0x5e6662*/
  }
  else
  {
    v2 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16)); /*0x5e65d1*/
    v3 = *(int (**)(void))(**((_DWORD **)this + 0x16) + 0x2C0); /*0x5e65dc*/
    if ( (v2 & 0x200) != 0 ) /*0x5e65e2*/
    {
      if ( (v3() & 0x800) != 0 ) /*0x5e65ea*/
        return (float)sub_5E3AD0(this); /*0x5e65fd*/
      v5 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16)); /*0x5e6609*/
      v6 = this; /*0x5e660f*/
      if ( (v5 & 0x2000) == 0 ) /*0x5e6611*/
        return (float)Actor_CalcFastTravelSpeed(this); /*0x5e6622*/
      return (float)sub_5E3C80(v6); /*0x5e6661*/
    }
    if ( (v3() & 0x800) != 0 ) /*0x5e6629*/
      return (float)sub_5E3920(this); /*0x5e663c*/
    v7 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16)); /*0x5e6648*/
    v6 = this; /*0x5e664e*/
    if ( (v7 & 0x2000) != 0 ) /*0x5e6650*/
      return (float)sub_5E3C80(v6); /*0x5e6650*/
  }
  return (float)sub_5E3590((Actor *)v6); /*0x5e65fb*/
}
