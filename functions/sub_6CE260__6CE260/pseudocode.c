int __thiscall sub_6CE260(int *this, float a2, float a3)
{
  int v3; // ecx
  int result; // eax

  v3 = *(this + 0xF); /*0x6ce260*/
  if ( v3 ) /*0x6ce265*/
    return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v3 + 0x84))(v3, LODWORD(a2), LODWORD(a3)); /*0x6ce281*/
  return result; /*0x6ce283*/
}
