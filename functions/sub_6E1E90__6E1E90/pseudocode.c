int __thiscall sub_6E1E90(int this, int a2, int a3, int a4)
{
  int v5; // edi
  int result; // eax

  v5 = *(_DWORD *)(this + 0x20);
  if ( v5 )
  {
    if ( *(_DWORD *)(this + 0x10) == 4 )
      sub_6BE490(*(int **)(this + 0x20));
    result = (*(int (__cdecl **)(int))(4 * *(_DWORD *)(this + 0x10) + 0xB3D2F8))(v5);
  }
  if ( a2 && (result = a3) != 0 )
  {
    *(_WORD *)(this + 8) = a3;
    *(_DWORD *)(this + 0x20) = a2;
    *(_DWORD *)(this + 0x10) = a4;
    *(_BYTE *)(this + 0x1C) = byte_B3D3F4[a4];
    return a4;
  }
  else
  {
    *(_WORD *)(this + 8) = 0;
    *(_DWORD *)(this + 0x20) = 0;
    *(_DWORD *)(this + 0x10) = 0;
    *(_BYTE *)(this + 0x1C) = 0;
  }
  return result;
}
