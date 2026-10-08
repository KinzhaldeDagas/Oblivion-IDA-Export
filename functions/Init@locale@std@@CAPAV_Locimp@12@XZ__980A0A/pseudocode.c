struct std::locale::_Locimp *__cdecl std::locale::_Init()
{
  std::locale::_Locimp *v0; // esi
  int v1; // eax
  std::locale::_Locimp *v2; // ecx
  _BYTE v4[12]; // [esp+18h] [ebp-10h] BYREF
  unsigned int v5; // [esp+24h] [ebp-4h]

  v0 = (std::locale::_Locimp *)unk_BA9B58; /*0x980a1d*/
  if ( !unk_BA9B58 ) /*0x980a16*/
  {
    std::_Lockit::_Lockit((std::_Lockit *)v4, unk_BA9B58); /*0x980a25*/
    v1 = unk_BA9B58; /*0x980a2a*/
    v5 = 0; /*0x980a2f*/
    v0 = (std::locale::_Locimp *)v1; /*0x980a34*/
    if ( !v1 ) /*0x980a36*/
    {
      v2 = (std::locale::_Locimp *)FormHeapAlloc(0x34u); /*0x980a40*/
      LOBYTE(v5) = 1; /*0x980a47*/
      if ( v2 ) /*0x980a4b*/
        v0 = std::locale::_Locimp::_Locimp(v2, 0); /*0x980a53*/
      else
        v0 = 0; /*0x980a57*/
      LOBYTE(v5) = 0; /*0x980a5a*/
      sub_980844((int)v0); /*0x980a5e*/
      *((_DWORD *)v0 + 4) = 0x3F; /*0x980a66*/
      sub_4146B0((OB_stString28_010201A0 *)((char *)v0 + 0x18), "C"); /*0x980a74*/
      dword_BA9B5C = v0; /*0x980a7b*/
      sub_6F6D90(v0); /*0x980a81*/
      unk_BA9B74 = dword_BA9B5C; /*0x980a8b*/
    }
    v5 = 0xFFFFFFFF; /*0x980a90*/
    std::_Lockit::~_Lockit((std::_Lockit *)v4); /*0x980a97*/
  }
  return v0; /*0x980a9e*/
}
