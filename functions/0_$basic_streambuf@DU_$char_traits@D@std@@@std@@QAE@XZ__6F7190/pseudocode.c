_DWORD *__thiscall std::streambuf::streambuf(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // eax
  _BYTE v6[4]; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  v7 = this; /*0x6f71b8*/
  *this = &std::streambuf::`vftable'; /*0x6f71bf*/
  std::_Mutex::_Mutex((std::_Mutex *)(this + 1)); /*0x6f71c5*/
  v8 = 0; /*0x6f71cc*/
  v2 = (_DWORD *)FormHeapAlloc(4u); /*0x6f71d9*/
  if ( v2 ) /*0x6f71e0*/
  {
    *v2 = std::locale::_Init(); /*0x6f71e7*/
    v3 = sub_98083E(); /*0x6f71f4*/
    std::_Lockit::_Lockit((std::_Lockit *)v6, 0); /*0x6f71f6*/
    v4 = *(_DWORD *)(v3 + 4); /*0x6f71fb*/
    if ( v4 != 0xFFFFFFFF ) /*0x6f7201*/
      *(_DWORD *)(v3 + 4) = v4 + 1; /*0x6f7206*/
    std::_Lockit::~_Lockit((std::_Lockit *)v6); /*0x6f720d*/
  }
  else
  {
    v2 = 0; /*0x6f7214*/
  }
  *(this + 0xE) = v2; /*0x6f7218*/
  sub_6F6F40(this); /*0x6f721b*/
  return this; /*0x6f7222*/
}
