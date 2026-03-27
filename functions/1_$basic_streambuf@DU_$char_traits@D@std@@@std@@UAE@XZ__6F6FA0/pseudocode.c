int __thiscall std::streambuf::~streambuf<char,std::char_traits<char>>(int **this)
{
  int *v2; // ebx
  int v3; // edi
  int v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // esi
  _BYTE v7[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = *(this + 0xE);
  *this = (int *)&std::streambuf::`vftable';
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      std::_Lockit::_Lockit((std::_Lockit *)v7, 0);
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        if ( v4 != 0xFFFFFFFF )
          *(_DWORD *)(v3 + 4) = v4 - 1;
      }
      v5 = *(_DWORD *)(v3 + 4) == 0 ? (void (__thiscall ***)(_DWORD, int))v3 : 0;
      std::_Lockit::~_Lockit((std::_Lockit *)v7);
      if ( v5 )
        (**v5)(v5, 1);
    }
    FormHeapFree((unsigned int)v2);
  }
  return std::streambuf::~streambuf<char,std::char_traits<char>>(this + 1);
}
