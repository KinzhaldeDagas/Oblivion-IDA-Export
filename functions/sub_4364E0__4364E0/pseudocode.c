char __thiscall sub_4364E0(int *this)
{
  int v1; // ecx

  v1 = *(this + 7); /*0x4364e0*/
  if ( v1 ) /*0x4364e5*/
    return (*(char (__thiscall **)(int))(*(_DWORD *)v1 + 0xF4))(v1); /*0x4364ef*/
  else
    return 0; /*0x4364f1*/
}
