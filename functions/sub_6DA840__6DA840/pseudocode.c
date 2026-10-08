char __thiscall sub_6DA840(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_6EC2C0(a2); /*0x6da849*/
  if ( result ) /*0x6da850*/
  {
    v4 = *(this + 6); /*0x6da857*/
    if ( v4 ) /*0x6da85c*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x6da864*/
    return 1; /*0x6da867*/
  }
  return result; /*0x6da852*/
}
