int __cdecl sub_8E1200(int a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // ebx
  int v6; // ecx
  int result; // eax
  int v8; // edi
  int v9; // edx

  v4 = a2; /*0x8e1207*/
  v5 = a3; /*0x8e120b*/
  while ( 1 ) /*0x8e1218*/
  {
    v6 = *(_DWORD *)(a1 + 4 * ((v4 + v5) >> 1)); /*0x8e1218*/
    result = v5; /*0x8e121b*/
    v8 = v4; /*0x8e121d*/
    do /*0x8e1256*/
    {
      for ( ; *(_WORD *)(a1 + 4 * v8) < (unsigned __int16)v6; ++v8 ) /*0x8e1224*/
        ; /*0x8e1226*/
      for ( ; (unsigned __int16)v6 < *(_WORD *)(a1 + 4 * result); --result ) /*0x8e1231*/
        ; /*0x8e1233*/
      if ( result < v8 ) /*0x8e123c*/
        break; /*0x8e123c*/
      if ( result != v8 ) /*0x8e123e*/
      {
        v9 = *(_DWORD *)(a1 + 4 * result); /*0x8e1243*/
        *(_DWORD *)(a1 + 4 * result) = *(_DWORD *)(a1 + 4 * v8); /*0x8e1246*/
        v5 = a3; /*0x8e1249*/
        *(_DWORD *)(a1 + 4 * v8) = v9; /*0x8e124c*/
        v4 = a2; /*0x8e124f*/
      }
      --result; /*0x8e1252*/
      ++v8; /*0x8e1253*/
    }
    while ( v8 <= result ); /*0x8e1256*/
    if ( v4 < result ) /*0x8e125a*/
      result = sub_8E1200(a1, v4, result, a4); /*0x8e1263*/
    if ( v8 >= v5 ) /*0x8e126d*/
      break; /*0x8e126d*/
    v4 = v8; /*0x8e126f*/
    a2 = v8; /*0x8e1271*/
  }
  return result; /*0x8e1276*/
}
