char __thiscall sub_43F280(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx

  v7 = a6;
  if ( a6 )
    return (*(char (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v7 + 0xDC))(v7, a2, a3, a4, a5);
  v7 = *(this + 0x1D);
  if ( v7 )
    return (*(char (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v7 + 0xDC))(v7, a2, a3, a4, a5);
  else
    return 0;
}
