void __thiscall sub_6F8AF0(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int v4; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  *(this + 9) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0x201;
  *(this + 5) = 6;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  sub_6F89A0(this, 0, 0);
  v2 = (_DWORD *)FormHeapAlloc(4u);
  if ( v2 )
  {
    *v2 = std::locale::_Init();
    v3 = sub_98083E();
    std::_Lockit::_Lockit((std::_Lockit *)v5, 0);
    v4 = *(_DWORD *)(v3 + 4);
    if ( v4 != 0xFFFFFFFF )
      *(_DWORD *)(v3 + 4) = v4 + 1;
    std::_Lockit::~_Lockit((std::_Lockit *)v5);
    *(this + 9) = v2;
  }
  else
  {
    *(this + 9) = 0;
  }
}
