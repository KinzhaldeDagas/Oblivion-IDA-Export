int __cdecl sub_588FC0(_BYTE *a1, _BYTE *a2)
{
  int v2; // esi
  int i; // eax
  unsigned __int8 v4; // cl
  unsigned __int8 v6[256]; // [esp+8h] [ebp-104h] BYREF

  if ( !a1 || !*a1 || !a2 )
    return 0;
  v2 = 0xFFFFFFFF;
  *a2 = 0;
  v6[0] = 0;
  for ( i = 0; i < 0xFF; ++i )
  {
    if ( !a1[i] )
      break;
    a2[i + 1] = 0;
    v4 = a1[i];
    v6[i + 1] = 0;
    if ( v4 == 0x28 )
    {
      v2 = 0;
    }
    else if ( v4 == 0x29 )
    {
      i = 0x100;
    }
    else if ( v2 < 0 )
    {
      v6[i] = v4;
    }
    else
    {
      a2[v2++] = v4;
    }
  }
  return TileStringToStringID(v6);
}
