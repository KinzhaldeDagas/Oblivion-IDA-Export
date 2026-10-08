int __thiscall sub_8A2F80(_DWORD *this, int a2)
{
  _DWORD **v3; // edi
  int result; // eax

  if ( this ) /*0x8a2f85*/
  {
    v3 = (_DWORD **)*(this + 2); /*0x8a2f88*/
    if ( v3 ) /*0x8a2f8d*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x8a2f8f*/
      sub_8A9E00(v3, a2); /*0x8a2f9b*/
      return bhkRefObject_UpdateHavokObject(this); /*0x8a2fa2*/
    }
  }
  return result; /*0x8a2fa8*/
}
