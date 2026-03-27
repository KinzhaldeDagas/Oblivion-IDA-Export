char __userpurge sub_5C9AB0@<al>(_DWORD *a1@<ecx>, double a2@<st1>, double a3@<st0>, int a4)
{
  _DWORD *v5; // edi
  Tile *v6; // ebp
  Tile *v8; // esi
  double Float; // st5
  int v10; // eax
  char v12; // [esp+Eh] [ebp-Ah]
  char v13; // [esp+Fh] [ebp-9h]
  double v14; // [esp+10h] [ebp-8h]

  v5 = *(_DWORD **)(a4 + 0x34);
  v6 = 0;
  v12 = 0;
  v13 = 0;
  if ( !v5 )
    return 0;
  do
  {
    v8 = (Tile *)v5[2];
    Float = Tile_GetFloat(v8, 0xFC2);
    if ( Float == fConstant_1 )
    {
      v14 = Tile_GetFloat(v8, 0xFAE);
      Float = Tile_GetFloat(v8, 0xFB8);
      if ( Float != v14 )
      {
        Tile_GetFloat(v8, 0xFB4);
        v10 = Double_To_SInt32(a3);
        sub_5C6390(a1, v10);
        v13 = 1;
        v6 = v8;
        Float = Tile_GetFloat(v8, 0xFB6);
        if ( Float == fConstant_1 )
          v12 = 1;
      }
    }
    v5 = (_DWORD *)*v5;
  }
  while ( v5 );
  if ( v12 )
  {
    sub_5C7800();
    UpdatePlayerHead(Float, a2, a3);
  }
  if ( !v13 )
    return 0;
  sub_5C6AF0(a1, a4, v6);
  return 1;
}
