int __thiscall sub_89F350(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v4; // edi
  int v5; // eax

  v2 = a2; /*0x89f351*/
  v4 = sub_7124A0(a2); /*0x89f360*/
  v5 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this + 0x74))(this, &a2); /*0x89f36e*/
  if ( v5 ) /*0x89f372*/
  {
    if ( v4 ) /*0x89f376*/
      *(_DWORD *)(v5 + 4) = *(_DWORD *)(v4 + 8); /*0x89f37b*/
  }
  return sub_89D6C0(this, (int)v2); /*0x89f386*/
}
