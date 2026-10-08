char __thiscall sub_6E1A80(int this, int a2, int a3, int a4)
{
  char result; // al

  if ( a2 && (result = a3, a3) ) /*0x6e1a91*/
  {
    *(_WORD *)(this + 0xA) = a3; /*0x6e1a93*/
    *(_DWORD *)(this + 0x24) = a2; /*0x6e1a9b*/
    *(_DWORD *)(this + 0x14) = a4; /*0x6e1a9e*/
    result = unk_B3D3EE[a4]; /*0x6e1aa1*/
    *(_BYTE *)(this + 0x1D) = result; /*0x6e1aa7*/
  }
  else
  {
    *(_WORD *)(this + 0xA) = 0; /*0x6e1aae*/
    *(_DWORD *)(this + 0x24) = 0; /*0x6e1ab2*/
    *(_DWORD *)(this + 0x14) = 0; /*0x6e1ab5*/
    *(_BYTE *)(this + 0x1D) = 0; /*0x6e1ab8*/
  }
  return result; /*0x6e1aaa*/
}
