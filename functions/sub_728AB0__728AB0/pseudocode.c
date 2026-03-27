char __thiscall sub_728AB0(int this, int a2)
{
  char v4; // bl
  int v5; // esi

  if ( *(_BYTE *)(this + 0x3C) )
    return 0;
  v4 = a2;
  v5 = *(_DWORD *)(this + 0x34);
  if ( v5 && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 0x4C))(*(_DWORD *)(this + 0x34)) )
  {
    if ( v4 )
    {
      sub_7261D0(v5, 0);
      *(_BYTE *)(this + 0x3D) = v4;
      *(_BYTE *)(this + 0x3C) = 1;
      return 1;
    }
    a2 = 0;
    sub_726190(v5, 0, &a2);
  }
  *(_BYTE *)(this + 0x3D) = v4;
  *(_BYTE *)(this + 0x3C) = 1;
  return 1;
}
