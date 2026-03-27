char __thiscall sub_6E1A80(int this, int a2, int a3, int a4)
{
  char result; // al

  if ( a2 && (result = a3, a3) )
  {
    *(_WORD *)(this + 0xA) = a3;
    *(_DWORD *)(this + 0x24) = a2;
    *(_DWORD *)(this + 0x14) = a4;
    result = byte_B3D3EE[a4];
    *(_BYTE *)(this + 0x1D) = result;
  }
  else
  {
    *(_WORD *)(this + 0xA) = 0;
    *(_DWORD *)(this + 0x24) = 0;
    *(_DWORD *)(this + 0x14) = 0;
    *(_BYTE *)(this + 0x1D) = 0;
  }
  return result;
}
