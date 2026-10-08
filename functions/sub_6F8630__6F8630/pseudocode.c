_DWORD *__thiscall sub_6F8630(_DWORD *this, int a2, char a3, int a4)
{
  int v6; // eax
  _Ctypevec v8; // [esp+10h] [ebp-94h] BYREF
  _BYTE v9[116]; // [esp+20h] [ebp-84h] BYREF
  int v10; // [esp+A0h] [ebp-4h]

  *(this + 1) = a4; /*0x6f8676*/
  v10 = 0; /*0x6f8682*/
  *this = &std::ctype<char>::`vftable'; /*0x6f868d*/
  sub_6F84E0((struct std::_Locinfo *)v9, "C"); /*0x6f8693*/
  *(_Ctypevec *)(this + 2) = *_Getctype(&v8); /*0x6f86a4*/
  sub_6F7670((std::_Lockit *)v9); /*0x6f86c0*/
  if ( a2 ) /*0x6f86ce*/
  {
    v6 = *(this + 5); /*0x6f86d0*/
    if ( v6 <= 0 ) /*0x6f86d5*/
    {
      if ( v6 < 0 ) /*0x6f86e2*/
        FormHeapFree(*(this + 4)); /*0x6f86e8*/
    }
    else
    {
      free((void *)*(this + 4)); /*0x6f86db*/
    }
    *(this + 4) = a2; /*0x6f86f9*/
    *(this + 5) = -(a3 != 0); /*0x6f86fe*/
  }
  return this; /*0x6f8703*/
}
