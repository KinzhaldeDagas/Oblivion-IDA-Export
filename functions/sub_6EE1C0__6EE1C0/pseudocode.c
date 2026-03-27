void __cdecl __noreturn sub_6EE1C0(_DWORD *a1, _DWORD *a2, unsigned int *a3)
{
  char *v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6;
  v3 = (char *)a3;
  v8 = (int)a3;
  v10 = 0;
  while ( a1 != a2 )
  {
    v7 = v3;
    LOBYTE(v10) = 1;
    if ( v3 )
      sub_6EDC20(v3, a1);
    v3 += 0x34;
    LOBYTE(v10) = 0;
    a3 = (unsigned int *)v3;
    a1 += 0xD;
  }
  for ( i = (unsigned int *)v8; i != a3; i += 0xD )
    sub_552090(i);
  ThrowException__(0, 0);
}
