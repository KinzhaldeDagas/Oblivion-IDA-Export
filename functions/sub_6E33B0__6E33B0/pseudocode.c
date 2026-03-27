void __thiscall sub_6E33B0(int this, int a2, int a3, int a4)
{
  char v4; // dl

  if ( a2 && a3 && a4 )
  {
    v4 = byte_B3D3E8[a4];
    *(_DWORD *)(this + 0xC) = a2;
    *(_DWORD *)(this + 8) = a3;
    *(_DWORD *)(this + 0x10) = a4;
    *(_BYTE *)(this + 0x14) = v4;
  }
  else
  {
    *(_DWORD *)(this + 8) = 0;
    *(_DWORD *)(this + 0xC) = 0;
    *(_DWORD *)(this + 0x10) = 0;
    *(_BYTE *)(this + 0x14) = 0;
  }
}
