char __thiscall sub_5E5480(int *this)
{
  int v1; // ecx

  v1 = *(this + 0x16);
  if ( v1 )
    return (*(char (__thiscall **)(int))(*(_DWORD *)v1 + 0x2B8))(v1);
  else
    return 0;
}
