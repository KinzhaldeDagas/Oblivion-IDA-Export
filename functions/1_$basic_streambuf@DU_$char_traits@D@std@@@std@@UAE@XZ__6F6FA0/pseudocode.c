void __thiscall std::streambuf::~streambuf<char,std::char_traits<char>>(LPCRITICAL_SECTION *this)
{
  int *v2; // ebx
  int v3; // edi
  int v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // esi
  _BYTE v6[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = (int *)*(this + 0xE); /*0x6f6fa5*/
  *this = (LPCRITICAL_SECTION)&std::streambuf::`vftable'; /*0x6f6faa*/
  if ( v2 )
  {
    v3 = *v2; /*0x6f6fb4*/
    if ( *v2 )
    {
      std::_Lockit::_Lockit((std::_Lockit *)v6, 0); /*0x6f6fc0*/
      v4 = *(_DWORD *)(v3 + 4); /*0x6f6fc5*/
      if ( v4 ) /*0x6f6fca*/
      {
        if ( v4 != 0xFFFFFFFF ) /*0x6f6fcf*/
          *(_DWORD *)(v3 + 4) = v4 - 1; /*0x6f6fd4*/
      }
      v5 = *(_DWORD *)(v3 + 4) == 0 ? (void (__thiscall ***)(_DWORD, int))v3 : 0;
      std::_Lockit::~_Lockit((std::_Lockit *)v6); /*0x6f6fe7*/
      if ( v5 ) /*0x6f6fee*/
        (**v5)(v5, 1); /*0x6f6ff8*/
    }
    FormHeapFree((unsigned int)v2); /*0x6f6ffc*/
  }
  std::streambuf::~streambuf<char,std::char_traits<char>>(this + 1); /*0x6f700d*/
}
