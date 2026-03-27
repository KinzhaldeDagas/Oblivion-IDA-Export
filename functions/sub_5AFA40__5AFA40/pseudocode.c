void __usercall sub_5AFA40(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  Tile *v6; // ecx

  v6 = *(Tile **)(a1 + 0x178);
  if ( v6 )
  {
    if ( !*((_DWORD *)v6 + 0x11) )
    {
      *(_DWORD *)(a1 + 0x150) = 0;
      Tile_SetFloat(v6, (_DWORD *)0xFAE, 1.0);
      sub_58FBA0(*(_DWORD *)(a1 + 0x178), 1.0, a2, a3, 0);
    }
  }
}
