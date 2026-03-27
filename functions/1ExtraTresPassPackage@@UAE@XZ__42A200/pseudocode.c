void __thiscall ExtraTresPassPackage::~ExtraTresPassPackage(ExtraTresPassPackage *this)
{
  unsigned int *v2; // ecx
  int v3; // ecx

  *(_DWORD *)this = &ExtraTresPassPackage::`vftable';
  v2 = *((unsigned int **)this + 3);
  if ( v2 )
  {
    sub_566830(v2, 1);
    if ( sub_45A500(SaveLoad_CurrentSavegame) )
    {
      sub_45C7A0((char *)SaveLoad_CurrentSavegame, *((TESForm **)this + 3));
    }
    else
    {
      v3 = *((_DWORD *)this + 3);
      if ( v3 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1);
    }
  }
  *(_DWORD *)this = &BSExtraData::`vftable';
}
