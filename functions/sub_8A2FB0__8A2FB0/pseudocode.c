int __thiscall sub_8A2FB0(_DWORD *this, int a2, int a3)
{
  _DWORD **v4; // edi
  int result; // eax

  if ( this ) /*0x8a2fb5*/
  {
    v4 = (_DWORD **)*(this + 2); /*0x8a2fb8*/
    if ( v4 ) /*0x8a2fbd*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x8a2fbf*/
      sub_8A9E20(v4, a2, a3); /*0x8a2fd0*/
      return bhkRefObject_UpdateHavokObject(this); /*0x8a2fd7*/
    }
  }
  return result; /*0x8a2fdd*/
}
