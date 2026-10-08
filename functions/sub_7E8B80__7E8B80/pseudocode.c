int __thiscall sub_7E8B80(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int result; // eax

  v2 = this + 0x1F; /*0x7e8b85*/
  v3 = 3; /*0x7e8b88*/
  do /*0x7e8ba5*/
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x94))(this, *v2++); /*0x7e8b9d*/
    --v3; /*0x7e8ba2*/
  }
  while ( v3 ); /*0x7e8ba5*/
  return result; /*0x7e8ba7*/
}
