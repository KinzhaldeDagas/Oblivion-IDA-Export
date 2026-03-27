char __fastcall sub_9399E0(unsigned __int8 *a1)
{
  int v1; // esi
  int v2; // edi
  unsigned __int8 *v3; // eax
  int v4; // edx
  unsigned __int8 *v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // edx
  int i; // ebp
  char v10; // bl
  unsigned __int8 v11; // dl
  unsigned __int8 *v12; // eax
  int v13; // esi
  int v15[20]; // [esp+10h] [ebp-50h] BYREF

  v1 = a1[2];
  memset(v15, 0, 0x10);
  if ( v1 )
  {
    v2 = a1[2];
    v3 = a1 + 8;
    do
    {
      v4 = v3[0xFFFFFFFD] + v3[0xFFFFFFFC];
      *((_BYTE *)v15 + (*v3 >> 4)) = 1;
      *((_BYTE *)v15 + (v3[1] >> 4)) = 1;
      if ( v4 >= 3 )
        *((_BYTE *)v15 + (v3[2] >> 4)) = 1;
      if ( v4 == 4 )
        *((_BYTE *)v15 + (v3[3] >> 4)) = 1;
      v3 += 8;
      --v2;
    }
    while ( v2 );
  }
  v5 = &a1[8 * v1 + 4];
  v6 = *a1 + a1[1];
  v7 = 0;
  v8 = 0;
  for ( i = 0; v7 < v6; ++v7 )
  {
    v10 = *((_BYTE *)v15 + v7);
    v15[v7 + 4] = i;
    if ( v10 )
    {
      *(_WORD *)&v5[2 * v8++] = *(_WORD *)&v5[2 * v7];
      i += 0x10;
    }
  }
  v12 = (unsigned __int8 *)((unsigned int)v15[*a1 + 4] >> 4);
  v11 = v8 - (_BYTE)v12;
  *a1 = (unsigned __int8)v12;
  LOBYTE(v12) = a1[2];
  v13 = 0;
  a1[1] = v11;
  if ( (_BYTE)v12 )
  {
    v12 = a1 + 9;
    do
    {
      v12[0xFFFFFFFF] = v15[(v12[0xFFFFFFFF] >> 4) + 4];
      *v12 = v15[(*v12 >> 4) + 4];
      v12[1] = v15[(v12[1] >> 4) + 4];
      v12[2] = v15[(v12[2] >> 4) + 4];
      ++v13;
      v12 += 8;
    }
    while ( v13 < a1[2] );
  }
  return (char)v12;
}
