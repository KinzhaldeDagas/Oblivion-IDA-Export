char __thiscall sub_6E1AC0(int this, int a2, int a3, int a4)
{
  char result; // al

  if ( a2 && (result = a3, a3) )
  {
    *(_WORD *)(this + 0xC) = a3;
    *(_DWORD *)(this + 0x28) = a2;
    *(_DWORD *)(this + 0x18) = a4;
    result = byte_B3D3E8[a4];
    *(_BYTE *)(this + 0x1E) = result;
  }
  else
  {
    *(_WORD *)(this + 0xC) = 0;
    *(_DWORD *)(this + 0x28) = 0;
    *(_BYTE *)(this + 0x1E) = 0;
    *(_DWORD *)(this + 0x18) = 0;
  }
  return result;
}
