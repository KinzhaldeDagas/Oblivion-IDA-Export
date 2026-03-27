void __cdecl __noreturn sub_79BF40(char *a1, unsigned int a2, int a3)
{
  char *v3; // esi
  char *i; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6;
  v3 = a1;
  v8 = (int)a1;
  v10 = 0;
  while ( a2 )
  {
    v7 = v3;
    LOBYTE(v10) = 1;
    if ( v3 )
      sub_7A3580(v3, a3);
    --a2;
    v3 += 0x10;
    LOBYTE(v10) = 0;
    a1 = v3;
  }
  for ( i = (char *)v8; i != a1; i += 0x10 )
    sub_79BFF0(i);
  ThrowException__(0, 0);
}
