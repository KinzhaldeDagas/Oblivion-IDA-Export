char __thiscall sub_43F280(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx

  v7 = a6; /*0x43f282*/
  if ( a6 ) /*0x43f289*/
    return (*(char (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v7 + 0xDC))(v7, a2, a3, a4, a5); /*0x43f289*/
  v7 = *(this + 0x1D); /*0x43f28b*/
  if ( v7 ) /*0x43f290*/
    return (*(char (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v7 + 0xDC))(v7, a2, a3, a4, a5); /*0x43f2be*/
  else
    return 0; /*0x43f292*/
}
