int __thiscall sub_5639A0(_DWORD *this, int a2)
{
  int v3; // edi
  int result; // eax

  if ( this ) /*0x5639a5*/
  {
    v3 = *(this + 2); /*0x5639a8*/
    if ( v3 ) /*0x5639ad*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x5639af*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x38))(v3, a2); /*0x5639c0*/
      return bhkRefObject_UpdateHavokObject(this); /*0x5639c4*/
    }
  }
  return result; /*0x5639ca*/
}
