int __thiscall sub_8F7330(_DWORD *this)
{
  int v2; // ebx
  int i; // edi

  v2 = *(this + 4); /*0x8f7334*/
  for ( i = 0; i < v2; ++i ) /*0x8f733c*/
  {
    if ( *(_WORD *)(*(this + 3) + 2 * i) != 0xFFFF ) /*0x8f734b*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 2) + 0x10))( /*0x8f7353*/
        *(this + 2),
        *(unsigned __int16 *)(*(this + 3) + 2 * i));
  }
  return (*(int (__thiscall **)(_DWORD *, int))*this)(this, 1); /*0x8f7363*/
}
