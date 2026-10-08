char __thiscall sub_6E8400(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_6EC2C0(a2); /*0x6e8409*/
  if ( result ) /*0x6e8410*/
  {
    v4 = *(this + 4); /*0x6e8417*/
    if ( v4 ) /*0x6e841c*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x6e8424*/
    return 1; /*0x6e8427*/
  }
  return result; /*0x6e8412*/
}
