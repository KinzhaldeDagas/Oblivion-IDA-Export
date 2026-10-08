int __thiscall sub_749510(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int i; // edi
  int v4; // ecx
  int result; // eax

  v2 = (_DWORD *)*(this + 0x32); /*0x749511*/
  for ( i = *(this + 0x2D); v2; result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 0x50))(v4, i, a2) ) /*0x749520*/
  {
    v4 = v2[2]; /*0x749527*/
    v2 = (_DWORD *)*v2; /*0x749532*/
  }
  return result; /*0x74953d*/
}
