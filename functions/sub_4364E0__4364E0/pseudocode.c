char __thiscall sub_4364E0(int *this)
{
  int v1; // ecx

  v1 = *(this + 7);
  if ( v1 )
    return (*(char (__thiscall **)(int))(*(_DWORD *)v1 + 0xF4))(v1);
  else
    return 0;
}
