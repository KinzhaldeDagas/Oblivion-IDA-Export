struct std::locale::_Locimp *__cdecl std::locale::_Init()
{
  std::locale::_Locimp *v0; // esi
  int v1; // eax
  std::locale::_Locimp *v2; // ecx
  _BYTE v4[12]; // [esp+18h] [ebp-10h] BYREF
  unsigned int v5; // [esp+24h] [ebp-4h]

  v0 = (std::locale::_Locimp *)dword_BA9B58;
  if ( !dword_BA9B58 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v4, dword_BA9B58);
    v1 = dword_BA9B58;
    v5 = 0;
    v0 = (std::locale::_Locimp *)v1;
    if ( !v1 )
    {
      v2 = (std::locale::_Locimp *)FormHeapAlloc(0x34u);
      LOBYTE(v5) = 1;
      if ( v2 )
        v0 = std::locale::_Locimp::_Locimp(v2, 0);
      else
        v0 = 0;
      LOBYTE(v5) = 0;
      sub_980844((int)v0);
      *((_DWORD *)v0 + 4) = 0x3F;
      sub_4146B0((_DWORD *)v0 + 6, "C");
      dword_BA9B5C = (int)v0;
      sub_6F6D90(v0);
      dword_BA9B74 = dword_BA9B5C;
    }
    v5 = 0xFFFFFFFF;
    std::_Lockit::~_Lockit((std::_Lockit *)v4);
  }
  return v0;
}
