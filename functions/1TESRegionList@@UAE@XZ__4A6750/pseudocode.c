void __thiscall TESRegionList::~TESRegionList(TESRegionList *this)
{
  unsigned int i; // esi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx

  *(_DWORD *)this = &TESRegionList::`vftable';
  sub_4A6380(this);
  if ( *((_BYTE *)this + 0xC) )
  {
    if ( dword_B35460-- == 1 )
    {
      for ( i = 0; i < 0x10; i += 2 )
      {
        v4 = (void (__thiscall ***)(_DWORD, int))dword_B35420[i];
        if ( v4 )
        {
          dword_B35420[i] = 0;
          (**v4)(v4, 1);
        }
        v5 = (void (__thiscall ***)(_DWORD, int))dword_B35424[i];
        if ( v5 )
        {
          dword_B35424[i] = 0;
          (**v5)(v5, 1);
        }
      }
    }
  }
}
