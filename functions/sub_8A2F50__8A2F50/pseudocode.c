int __thiscall sub_8A2F50(_DWORD *this, int a2)
{
  _DWORD **v3; // edi
  int result; // eax

  if ( this ) /*0x8a2f55*/
  {
    v3 = (_DWORD **)*(this + 2); /*0x8a2f58*/
    if ( v3 ) /*0x8a2f5d*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x8a2f5f*/
      sub_8A9DE0(v3, a2); /*0x8a2f6b*/
      return bhkRefObject_UpdateHavokObject(this); /*0x8a2f72*/
    }
  }
  return result; /*0x8a2f78*/
}
