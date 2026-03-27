void __cdecl sub_790C10(char *a1, char *a2, int a3, int a4)
{
  int *v4; // ebx
  int *v5; // edi
  int v6; // eax
  int *v8; // ebp
  char *v9; // [esp+10h] [ebp-8h] BYREF
  int *v10; // [esp+14h] [ebp-4h]

  v4 = (int *)a1;
  v5 = (int *)a2;
  v6 = (a2 - a1) >> 2;
  if ( v6 <= 0x20 )
  {
LABEL_7:
    if ( v6 > 1 )
      sub_790930(v4, v5);
  }
  else
  {
    while ( a3 > 0 )
    {
      sub_7905D0((int **)&v9, v4, (unsigned int)v5);
      v8 = v10;
      a3 = a3 / 2 / 2 + a3 / 2;
      if ( (int)((v9 - (char *)v4) & 0xFFFFFFFC) >= (int)(((char *)v5 - (char *)v10) & 0xFFFFFFFC) )
      {
        sub_790C10(v10, (char *)v5, a3, a4);
        v5 = (int *)v9;
      }
      else
      {
        sub_790C10(v4, v9, a3, a4);
        v4 = v8;
      }
      v6 = v5 - v4;
      if ( v6 <= 0x20 )
        goto LABEL_7;
    }
    if ( (int)(((char *)v5 - (char *)v4) & 0xFFFFFFFC) > 4 )
      sub_790560((int)v4, (int)v5);
    sub_790AB0(v4, (int)v5);
  }
}
