void __thiscall sub_6E33B0(int this, int a2, int a3, int a4)
{
  char v4; // dl

  if ( a2 && a3 && a4 ) /*0x6e33ca*/
  {
    v4 = byte_B3D3E8[a4]; /*0x6e33cc*/
    *(_DWORD *)(this + 0xC) = a2; /*0x6e33d2*/
    *(_DWORD *)(this + 8) = a3; /*0x6e33d6*/
    *(_DWORD *)(this + 0x10) = a4; /*0x6e33d9*/
    *(_BYTE *)(this + 0x14) = v4; /*0x6e33dc*/
  }
  else
  {
    *(_DWORD *)(this + 8) = 0; /*0x6e33e4*/
    *(_DWORD *)(this + 0xC) = 0; /*0x6e33e7*/
    *(_DWORD *)(this + 0x10) = 0; /*0x6e33ea*/
    *(_BYTE *)(this + 0x14) = 0; /*0x6e33ed*/
  }
}
