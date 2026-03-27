int __thiscall sub_4C9AE0(int this, int a2)
{
  int v3; // ecx
  int result; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) == 0 )
  {
    v3 = *(_DWORD *)(this + 0x40);
    if ( v3 != a2 )
    {
      if ( v3 )
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1);
      *(_DWORD *)(this + 0x40) = a2;
    }
  }
  return result;
}
