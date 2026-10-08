void __thiscall sub_6F8AF0(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int v4; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  *(this + 9) = 0; /*0x6f8afa*/
  *(this + 3) = 0; /*0x6f8afd*/
  *(this + 4) = 0x201; /*0x6f8b00*/
  *(this + 5) = 6; /*0x6f8b07*/
  *(this + 6) = 0; /*0x6f8b0e*/
  *(this + 7) = 0; /*0x6f8b11*/
  *(this + 8) = 0; /*0x6f8b14*/
  sub_6F89A0(this, 0, 0); /*0x6f8b17*/
  v2 = (_DWORD *)FormHeapAlloc(4u); /*0x6f8b23*/
  if ( v2 ) /*0x6f8b2a*/
  {
    *v2 = std::locale::_Init(); /*0x6f8b32*/
    v3 = sub_98083E(); /*0x6f8b3e*/
    std::_Lockit::_Lockit((std::_Lockit *)v5, 0); /*0x6f8b40*/
    v4 = *(_DWORD *)(v3 + 4); /*0x6f8b45*/
    if ( v4 != 0xFFFFFFFF ) /*0x6f8b4b*/
      *(_DWORD *)(v3 + 4) = v4 + 1; /*0x6f8b50*/
    std::_Lockit::~_Lockit((std::_Lockit *)v5); /*0x6f8b57*/
    *(this + 9) = v2; /*0x6f8b5d*/
  }
  else
  {
    *(this + 9) = 0; /*0x6f8b66*/
  }
}
