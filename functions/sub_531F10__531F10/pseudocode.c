int __thiscall sub_531F10(int *this)
{
  int v1; // ecx
  int result; // eax
  int v3; // eax

  v1 = *this;
  result = 0;
  if ( v1 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x58))(v1);
    if ( v3 )
      return *(_DWORD *)(v3 + 0x2B0);
    else
      return 0;
  }
  return result;
}
