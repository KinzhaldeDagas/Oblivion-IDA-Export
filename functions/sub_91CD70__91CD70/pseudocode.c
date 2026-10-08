_DWORD *__thiscall sub_91CD70(_WORD *this, _DWORD *a2)
{
  sub_9491F0(this, a2); /*0x91cd78*/
  *((_DWORD *)this + 0xA) = &hkPhantomListener::`vftable'; /*0x91cd7d*/
  *((_DWORD *)this + 0xB) = &off_A9D2B4; /*0x91cd84*/
  *(_DWORD *)this = &off_A9D708; /*0x91cd8b*/
  *((_DWORD *)this + 2) = &off_A9D6F0; /*0x91cd91*/
  *((_DWORD *)this + 8) = off_A9D6E8; /*0x91cd98*/
  *((_DWORD *)this + 0xA) = off_A9D6D4; /*0x91cd9f*/
  *((_DWORD *)this + 0xB) = &off_A9D6C8; /*0x91cda6*/
  *((_DWORD *)this + 0xC) = 0; /*0x91cdaf*/
  *((_DWORD *)this + 0xD) = 0; /*0x91cdb2*/
  *((_DWORD *)this + 0xE) = 0x80000000; /*0x91cdb5*/
  return this; /*0x91cdbe*/
}
