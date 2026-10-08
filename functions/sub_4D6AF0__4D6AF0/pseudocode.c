int __thiscall sub_4D6AF0(int *this, int a2)
{
  int v3; // edi
  int result; // eax

  if ( this ) /*0x4d6af5*/
  {
    v3 = *(this + 2); /*0x4d6af8*/
    if ( v3 ) /*0x4d6afd*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x4d6aff*/
      sub_8A6410(v3); /*0x4d6b06*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 0x50) + 0x54))(*(_DWORD *)(v3 + 0x50), a2); /*0x4d6b18*/
      return bhkRefObject_UpdateHavokObject(this); /*0x4d6b1c*/
    }
  }
  return result; /*0x4d6b22*/
}
