unsigned int *__cdecl sub_79E790(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  float *i; // esi
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6
  double v9; // st6
  double v10; // st6
  double v11; // st6
  double v12; // st7
  double v13; // st6
  unsigned int v14; // edi
  unsigned int v15; // ebp
  double v16; // st7
  double v17; // st6
  unsigned int v18; // ecx
  bool v19; // zf
  double v20; // st7
  double v21; // st6
  int v23; // [esp-8h] [ebp-18h]
  int v24; // [esp-8h] [ebp-18h]
  int v25; // [esp-4h] [ebp-14h]

  sub_79E220(a2, a2 + 0x30 * ((int)(a3 - a2) / 0x30 / 2), a3 - 0x30);
  v3 = a2 + 0x30 * ((int)(a3 - a2) / 0x30 / 2);
  for ( i = (float *)(v3 + 0x30); a2 < v3; v3 -= 0x30 )
  {
    v5 = *(float *)(v3 - 0xC);
    v6 = *(float *)(v3 + 0x24);
    if ( v6 < v5 )
      break;
    if ( v6 > v5 )
      break;
  }
  if ( (int)(a3 - (_DWORD)i + 0x2F) / 0x30 < 4 )
  {
LABEL_16:
    if ( (unsigned int)i < a3 )
    {
      v12 = *(float *)(v3 + 0x24);
      do
      {
        v13 = i[9];
        if ( v13 > v12 )
          break;
        if ( v13 < v12 )
          break;
        i += 0xC;
      }
      while ( (unsigned int)i < a3 );
    }
  }
  else
  {
    v7 = *(float *)(v3 + 0x24);
    while ( 1 )
    {
      v8 = i[9];
      if ( v8 > v7 || v8 < v7 )
        break;
      v9 = i[0x15];
      if ( v9 > v7 || v9 < v7 )
      {
        i += 0xC;
        break;
      }
      v10 = i[0x21];
      if ( v10 > v7 || v10 < v7 )
      {
        i += 0x18;
        break;
      }
      v11 = i[0x2D];
      if ( v11 > v7 || v11 < v7 )
      {
        i += 0x24;
        break;
      }
      i += 0x30;
      if ( (int)i >= (int)(a3 - 0x90) )
        goto LABEL_16;
    }
  }
  v14 = (unsigned int)i;
  v15 = v3;
  while ( 1 )
  {
    while ( 1 )
    {
      for ( ; v14 < a3; v14 += 0x30 )
      {
        v16 = *(float *)(v3 + 0x24);
        v17 = *(float *)(v14 + 0x24);
        if ( v17 >= v16 )
        {
          if ( v17 > v16 )
            break;
          v23 = (int)i;
          i += 0xC;
          sub_79B8D0(v23, v14);
        }
      }
      v18 = a2;
      v19 = v15 == a2;
      if ( v15 > a2 )
      {
        do
        {
          v20 = *(float *)(v15 - 0xC);
          v21 = *(float *)(v3 + 0x24);
          if ( v21 >= v20 )
          {
            if ( v21 > v20 )
              break;
            v3 -= 0x30;
            sub_79B8D0(v3, v15 - 0x30);
            v18 = a2;
          }
          v15 -= 0x30;
        }
        while ( v18 < v15 );
        v19 = v15 == v18;
      }
      if ( v19 )
        break;
      v15 -= 0x30;
      if ( v14 == a3 )
      {
        v3 -= 0x30;
        if ( v15 != v3 )
          sub_79B8D0(v15, v3);
        i += 0xFFFFFFF4;
        sub_79B8D0(v3, (int)i);
      }
      else
      {
        sub_79B8D0(v14, v15);
        v14 += 0x30;
      }
    }
    if ( v14 == a3 )
      break;
    if ( i != (float *)v14 )
      sub_79B8D0(v3, (int)i);
    v25 = v14;
    v24 = v3;
    i += 0xC;
    v3 += 0x30;
    v14 += 0x30;
    sub_79B8D0(v24, v25);
  }
  a1[1] = (unsigned int)i;
  *a1 = v3;
  return a1;
}
