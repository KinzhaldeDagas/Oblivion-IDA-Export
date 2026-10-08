int __thiscall sub_4D6B30(int *this, int a2)
{
  int v3; // edi
  int result; // eax

  if ( this ) /*0x4d6b35*/
  {
    v3 = *(this + 2); /*0x4d6b38*/
    if ( v3 ) /*0x4d6b3d*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x4d6b3f*/
      sub_8A6410(v3); /*0x4d6b46*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 0x50) + 0x58))(*(_DWORD *)(v3 + 0x50), a2); /*0x4d6b58*/
      return bhkRefObject_UpdateHavokObject(this); /*0x4d6b5c*/
    }
  }
  return result; /*0x4d6b62*/
}
