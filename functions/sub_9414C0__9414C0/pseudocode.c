signed int __cdecl sub_9414C0(int a1, char *a2, signed int a3)
{
  char *v3; // ebp
  int v4; // edi
  int v5; // ebx
  signed int v6; // esi
  _DWORD *v8[4]; // [esp+14h] [ebp-50h] BYREF
  _DWORD v9[16]; // [esp+24h] [ebp-40h] BYREF

  v3 = a2;
  qmemcpy(v9, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/", sizeof(v9));
  sub_9183A0(v8, a1, 0);
  v4 = a3;
  v5 = 0x13;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      LOBYTE(a3) = 0;
      *(_WORD *)((char *)&a3 + 1) = 0;
      v6 = 3;
      if ( v4 < 3 )
        v6 = v4;
      sub_8B1890(&a3, v3, v6);
      v3 += v6;
      v4 -= v6;
      if ( v6 < 3 )
        break;
      sub_918390(v8);
      if ( !--v5 )
      {
        sub_918390(v8);
        v5 = 0x13;
      }
      if ( !*(_BYTE *)(*(int (__thiscall **)(int, char **))(*(_DWORD *)a1 + 8))(a1, &a2) )
      {
        sub_918180(v8);
        return 1;
      }
      if ( v4 <= 0 )
        goto LABEL_13;
    }
    if ( (unsigned int)(v6 - 1) <= 1 )
      sub_918390(v8);
  }
LABEL_13:
  sub_918180(v8);
  return 0;
}
