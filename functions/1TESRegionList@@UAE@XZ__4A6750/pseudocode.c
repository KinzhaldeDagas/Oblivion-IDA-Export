void __thiscall TESRegionList::~TESRegionList(TESRegionList *this)
{
  unsigned int i; // esi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx

  *(_DWORD *)this = &TESRegionList::`vftable'; /*0x4a6754*/
  sub_4A6380(this); /*0x4a675a*/
  if ( *((_BYTE *)this + 0xC) ) /*0x4a6761*/
  {
    if ( unk_B35460-- == 1 ) /*0x4a6766*/
    {
      for ( i = 0; i < 0x10; i += 2 ) /*0x4a676f*/
      {
        v4 = (void (__thiscall ***)(_DWORD, int))unk_B35420[i]; /*0x4a6771*/
        if ( v4 ) /*0x4a6779*/
        {
          unk_B35420[i] = 0; /*0x4a677b*/
          (**v4)(v4, 1); /*0x4a6787*/
        }
        v5 = (void (__thiscall ***)(_DWORD, int))unk_B35424[i]; /*0x4a6789*/
        if ( v5 ) /*0x4a6791*/
        {
          unk_B35424[i] = 0; /*0x4a6793*/
          (**v5)(v5, 1); /*0x4a679f*/
        }
      }
    }
  }
}
