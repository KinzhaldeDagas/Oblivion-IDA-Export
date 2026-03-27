_DWORD *__thiscall std::streambuf::streambuf(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // eax
  _BYTE v6[4]; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  v7 = this;
  *this = &std::streambuf::`vftable';
  std::_Mutex::_Mutex((std::_Mutex *)(this + 1));
  v8 = 0;
  v2 = (_DWORD *)FormHeapAlloc(4u);
  if ( v2 )
  {
    *v2 = std::locale::_Init();
    v3 = sub_98083E();
    std::_Lockit::_Lockit((std::_Lockit *)v6, 0);
    v4 = *(_DWORD *)(v3 + 4);
    if ( v4 != 0xFFFFFFFF )
      *(_DWORD *)(v3 + 4) = v4 + 1;
    std::_Lockit::~_Lockit((std::_Lockit *)v6);
  }
  else
  {
    v2 = 0;
  }
  *(this + 0xE) = v2;
  sub_6F6F40(this);
  return this;
}
