int __thiscall sub_89FDA0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebp
  int v4; // edi
  int v5; // ebx
  int v6; // eax

  v2 = a2; /*0x89fda2*/
  v4 = sub_7124A0(a2); /*0x89fdb3*/
  v5 = sub_7124A0(v2); /*0x89fdba*/
  v6 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this + 0x74))(this, &a2); /*0x89fdc8*/
  if ( v6 && v4 ) /*0x89fdd0*/
  {
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(v4 + 8); /*0x89fdd7*/
    if ( v5 ) /*0x89fdda*/
    {
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v5 + 8); /*0x89fde2*/
      return sub_89D6C0(this, (int)v2); /*0x89fdee*/
    }
    *(_DWORD *)(v6 + 8) = 0; /*0x89fdf3*/
  }
  return sub_89D6C0(this, (int)v2); /*0x89fdea*/
}
