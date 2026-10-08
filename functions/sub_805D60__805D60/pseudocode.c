int __thiscall sub_805D60(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int result; // eax

  v2 = this + 0x1F; /*0x805d65*/
  v3 = 2; /*0x805d68*/
  do /*0x805d85*/
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x94))(this, *v2++); /*0x805d7d*/
    --v3; /*0x805d82*/
  }
  while ( v3 ); /*0x805d85*/
  return result; /*0x805d87*/
}
