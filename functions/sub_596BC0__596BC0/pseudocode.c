_BYTE *__stdcall sub_596BC0(_DWORD *a1)
{
  double Float; // st7
  int v2; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // ebp

  Float = Tile_GetFloat(a1, 0xFAA);
  v2 = Double_To_SInt32(Float);
  v3 = 0;
  v4 = 0;
  v5 = TESDataHandler + 0x54;
  v6 = v2;
  if ( TESDataHandler != 0xFFFFFFAC )
  {
    do
    {
      if ( !*(_DWORD *)v5 )
        break;
      if ( v3 > v6 )
        break;
      v4 = *(_DWORD *)v5;
      if ( TESClass_IsPlayable(*(_BYTE **)v5) )
        ++v3;
      v5 = *(_DWORD *)(v5 + 4);
    }
    while ( v5 );
  }
  return (_BYTE *)v4;
}
