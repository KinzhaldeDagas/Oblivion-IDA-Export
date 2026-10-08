int __thiscall sub_9064C0(_DWORD *this)
{
  int v2; // esi
  int i; // ebx
  int v4; // eax

  v2 = *(this + 3); /*0x9064c5*/
  for ( i = v2 + 0xC * *(this + 4); v2 != i; v2 += 0xC ) /*0x9064d5*/
  {
    v4 = *(_DWORD *)(v2 + 8); /*0x9064d7*/
    if ( v4 ) /*0x9064dc*/
      (*(void (**)(void))(*(_DWORD *)v4 + 0x18))(); /*0x9064e2*/
  }
  return (*(int (__thiscall **)(_DWORD *, int))*this)(this, 1); /*0x9064f4*/
}
