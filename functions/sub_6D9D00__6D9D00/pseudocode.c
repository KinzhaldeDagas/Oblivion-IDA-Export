int __thiscall sub_6D9D00(int this, int a2, int a3, int a4)
{
  int result; // eax
  char v5; // dl

  result = 0;
  if ( a2 && a3 )
  {
    v5 = byte_B3D3EE[a4];
    *(_DWORD *)(this + 0xC) = a2;
    *(_DWORD *)(this + 8) = a3;
    *(_BYTE *)(this + 0x14) = v5;
    *(_DWORD *)(this + 0x10) = a4;
    return a4;
  }
  else
  {
    *(_DWORD *)(this + 8) = 0;
    *(_DWORD *)(this + 0xC) = 0;
    *(_BYTE *)(this + 0x14) = 0;
    *(_DWORD *)(this + 0x10) = 0;
  }
  return result;
}
