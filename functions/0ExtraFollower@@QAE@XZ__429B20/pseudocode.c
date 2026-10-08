ExtraFollower *__thiscall ExtraFollower::ExtraFollower(ExtraFollower *this)
{
  _DWORD *v2; // eax

  *((_BYTE *)this + 4) = 0x23; /*0x429b48*/
  *((_DWORD *)this + 2) = 0; /*0x429b4c*/
  *(_DWORD *)this = &ExtraFollower::`vftable'; /*0x429b5d*/
  v2 = (_DWORD *)FormHeapAlloc(8u); /*0x429b63*/
  if ( v2 ) /*0x429b6d*/
  {
    *v2 = 0; /*0x429b6f*/
    v2[1] = 0; /*0x429b75*/
  }
  else
  {
    v2 = 0; /*0x429b7e*/
  }
  *((_DWORD *)this + 3) = v2; /*0x429b80*/
  return this; /*0x429b85*/
}
