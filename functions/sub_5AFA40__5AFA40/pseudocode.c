void __usercall sub_5AFA40(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  Tile *v4; // ecx

  v4 = *(Tile **)(a1 + 0x178); /*0x5afa43*/
  if ( v4 ) /*0x5afa4b*/
  {
    if ( !*((_DWORD *)v4 + 0x11) ) /*0x5afa4d*/
    {
      *(_DWORD *)(a1 + 0x150) = 0; /*0x5afa59*/
      Tile_SetFloat(v4, 0xFAEu, 1.0); /*0x5afa68*/
      sub_58FBA0(*(_DWORD *)(a1 + 0x178), 1.0, a2, a3, 0); /*0x5afa75*/
    }
  }
}
