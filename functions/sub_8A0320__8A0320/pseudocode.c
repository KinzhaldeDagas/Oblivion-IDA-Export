int __thiscall sub_8A0320(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // eax

  v2 = a2; /*0x8a0324*/
  sub_7124D0(a2); /*0x8a032c*/
  v4 = sub_7124A0(v2); /*0x8a033a*/
  v5 = sub_7124A0(v2); /*0x8a0341*/
  v6 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this + 0x74))(this, &a2); /*0x8a034f*/
  if ( v6 ) /*0x8a0353*/
  {
    v7 = v6 - 4; /*0x8a0355*/
    if ( v7 ) /*0x8a0358*/
    {
      if ( v4 ) /*0x8a035c*/
      {
        *(_DWORD *)(v7 + 0xC) = *(_DWORD *)(v4 + 8); /*0x8a0363*/
        if ( v5 ) /*0x8a0366*/
        {
          *(_DWORD *)(v7 + 0x10) = *(_DWORD *)(v5 + 8); /*0x8a036e*/
          return sub_89D6C0(this, (int)v2); /*0x8a037a*/
        }
        *(_DWORD *)(v7 + 0x10) = 0; /*0x8a037f*/
      }
    }
  }
  return sub_89D6C0(this, (int)v2); /*0x8a0376*/
}
