int __thiscall sub_8B0360(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx

  if ( this && (v2 = *(this + 2)) != 0 )
    v3 = *(_DWORD *)(v2 + 0xC);
  else
    v3 = 0;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 8);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2);
  }
  return sub_6EC2C0(a2);
}
