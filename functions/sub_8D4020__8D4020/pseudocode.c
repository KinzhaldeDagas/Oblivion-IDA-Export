_BYTE *__cdecl sub_8D4020(_BYTE *a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // eax
  int v8; // [esp+0h] [ebp-418h]
  int v9; // [esp+4h] [ebp-414h]
  int v10; // [esp+8h] [ebp-410h]
  float v11; // [esp+Ch] [ebp-40Ch]
  float v12; // [esp+10h] [ebp-408h]
  int v13; // [esp+14h] [ebp-404h] BYREF
  int v14[256]; // [esp+18h] [ebp-400h] BYREF

  v4 = 0;
  v12 = 0.0;
  if ( (int)a3[1] <= 0 )
  {
LABEL_5:
    *a1 = 1;
    return a1;
  }
  else
  {
    while ( 1 )
    {
      v5 = v4 + *a3;
      if ( *(_BYTE *)(*(_DWORD *)v5 + 0x18) == 4 )
      {
        v6 = sub_91FF70(a2[1], *(_DWORD **)(v5 + 4), 0x100, (int)v14, v8, v9, v10, v11, v12, *(float *)&v13, v14[0]);
        sub_8D3980(&v13, *(float *)(*a2 + 8), (float *)v5, (int)v14, v6, a4);
        if ( !(_BYTE)v13 )
          break;
      }
      v4 += 0xC;
      ++LODWORD(v12);
      if ( SLODWORD(v12) >= a3[1] )
        goto LABEL_5;
    }
    *a1 = 0;
    return a1;
  }
}
