void __cdecl sub_79FA30(unsigned int a1, int a2, int a3, char *a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  int v6; // eax
  unsigned int v8; // ebp
  int v9; // [esp+10h] [ebp-8h] BYREF
  unsigned int v10; // [esp+14h] [ebp-4h]

  v4 = a1;
  v5 = a2;
  v6 = (int)(a2 - a1) / 0x30;
  if ( v6 <= 0x20 )
  {
LABEL_7:
    if ( v6 > 1 )
      sub_79E9F0(v4, v5);
  }
  else
  {
    while ( a3 > 0 )
    {
      sub_79E790((unsigned int *)&v9, v4, v5);
      v8 = v10;
      a3 = a3 / 2 / 2 + a3 / 2;
      if ( (int)(v9 - v4) / 0x30 >= (int)(v5 - v10) / 0x30 )
      {
        sub_79FA30(v10, v5, a3, (int)a4);
        v5 = v9;
      }
      else
      {
        sub_79FA30(v4, v9, a3, (int)a4);
        v4 = v8;
      }
      v6 = (int)(v5 - v4) / 0x30;
      if ( v6 <= 0x20 )
        goto LABEL_7;
    }
    if ( (int)(v5 - v4) / 0x30 > 1 )
      sub_79E2E0(v4, v5, a4);
    sub_79EF40(v4, v5, a4);
  }
}
