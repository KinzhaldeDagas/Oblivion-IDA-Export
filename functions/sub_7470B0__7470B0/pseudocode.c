signed int __usercall sub_7470B0@<eax>(_DWORD *a1@<esi>, int *a2)
{
  int v2; // edi
  int *v3; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int i; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  int v14; // eax
  unsigned __int8 v15; // cl
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]

  v2 = *a2;
  v3 = (int *)a2[2];
  v4 = v3[3];
  v5 = *v3;
  v6 = 0xFFFFFFFF;
  v7 = 0;
  v18 = v4;
  v17 = 0xFFFFFFFF;
  a1[0x512] = 0;
  for ( a1[0x513] = 0x23D; v7 < v4; ++v7 )
  {
    if ( *(_WORD *)(v2 + 4 * v7) )
    {
      a1[++a1[0x512] + 0x2D5] = v7;
      v17 = v7;
      *((_BYTE *)a1 + v7 + 0x1450) = 0;
      v6 = v7;
    }
    else
    {
      *(_WORD *)(v2 + 4 * v7 + 2) = 0;
    }
  }
  if ( (int)a1[0x512] < 2 )
  {
    do
    {
      if ( v6 >= 2 )
        v8 = 0;
      else
        v8 = ++v6;
      a1[++a1[0x512] + 0x2D5] = v8;
      *(_WORD *)(v2 + 4 * v8) = 1;
      *((_BYTE *)a1 + v8 + 0x1450) = 0;
      --a1[0x5A8];
      if ( v5 )
        a1[0x5A9] -= *(unsigned __int16 *)(v5 + 4 * v8 + 2);
    }
    while ( (int)a1[0x512] < 2 );
    v17 = v6;
  }
  a2[1] = v6;
  for ( i = a1[0x512] / 2; i >= 1; --i )
    sub_745E20((int)a1, v2, i);
  v10 = v18;
  do
  {
    v11 = a1[0x512];
    v12 = a1[v11 + 0x2D5];
    v13 = a1[0x2D6];
    a1[0x512] = v11 - 1;
    a1[0x2D6] = v12;
    sub_745E20((int)a1, v2, 1);
    v14 = a1[0x2D6];
    --a1[0x513];
    a1[a1[0x513]-- + 0x2D5] = v13;
    a1[a1[0x513] + 0x2D5] = v14;
    *(_WORD *)(v2 + 4 * v10) = *(_WORD *)(v2 + 4 * v13) + *(_WORD *)(v2 + 4 * v14);
    v15 = *((_BYTE *)a1 + v14 + 0x1450);
    if ( *((_BYTE *)a1 + v13 + 0x1450) >= v15 )
      v15 = *((_BYTE *)a1 + v13 + 0x1450);
    *((_BYTE *)a1 + v10 + 0x1450) = v15 + 1;
    *(_WORD *)(v2 + 4 * v14 + 2) = v10;
    *(_WORD *)(v2 + 4 * v13 + 2) = v10;
    a1[0x2D6] = v10++;
    sub_745E20((int)a1, v2, 1);
  }
  while ( (int)a1[0x512] >= 2 );
  a1[--a1[0x513] + 0x2D5] = a1[0x2D6];
  sub_745EF0(a1, a2);
  return sub_747020((int)(a1 + 0x2CD), v17, v2);
}
