char __thiscall sub_6DB890(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx

  result = sub_6EC2C0(a2); /*0x6db899*/
  if ( result ) /*0x6db8a0*/
  {
    v4 = *(this + 6); /*0x6db8a7*/
    if ( v4 ) /*0x6db8ac*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x6db8b4*/
    v5 = *(this + 7); /*0x6db8b6*/
    if ( v5 ) /*0x6db8bb*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2); /*0x6db8c3*/
    return 1; /*0x6db8c6*/
  }
  return result; /*0x6db8a2*/
}
