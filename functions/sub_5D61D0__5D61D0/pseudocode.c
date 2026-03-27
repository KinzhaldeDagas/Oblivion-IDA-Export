void __userpurge sub_5D61D0(_DWORD *a1@<ecx>, double a2@<st0>, int a3, _DWORD *a4)
{
  void *v8; // eax

  if ( a3 == 0x63 )
  {
    Tile_GetFloat(a4, 0xFB0);
    v8 = (void *)Double_To_SInt32(a2);
    sub_5D5B40(a1, v8);
    sub_57DE50(4);
  }
  else if ( a3 == 4 || a3 == 5 || a3 == 6 || a3 == 7 && Tile_GetFloat((_DWORD *)a1[1], 0xFB7) == fConstant_2 )
  {
    sub_57DE50(4);
  }
}
