int __thiscall sub_712750(_DWORD *this, int a2, int a3)
{
  int v3; // ecx

  v3 = *(this + 0x95);
  if ( v3 )
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 4))(v3, a2, a3);
  else
    return 0;
}
