BSStringT *__thiscall sub_571C50(BSStringT *this, int arg0, char *a2, int a4, int a5)
{
  sub_721350((NiObject *)this); /*0x571c78*/
  this->m_data = (char *)&DebugTextExtraData::`vftable'; /*0x571c82*/
  *((_DWORD *)this + 4) = 0; /*0x571c8c*/
  *((_WORD *)this + 0xA) = 0; /*0x571c8e*/
  *((_WORD *)this + 0xB) = 0; /*0x571c92*/
  *((_DWORD *)this + 3) = arg0; /*0x571ca5*/
  BSStringT_Set(this + 2, a2, 0); /*0x571ca8*/
  *((_DWORD *)this + 6) = a4; /*0x571cb5*/
  *((_DWORD *)this + 7) = a5; /*0x571cb8*/
  return this; /*0x571cbd*/
}
