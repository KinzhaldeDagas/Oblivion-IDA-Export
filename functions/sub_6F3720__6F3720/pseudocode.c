void __cdecl __noreturn sub_6F3720(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  char *v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]
  int savedregs; // [esp+28h] [ebp+0h] BYREF

  v9 = &v6;
  v3 = (char *)a1;
  v8 = (int)a1;
  v10 = 0;
  while ( a2 )
  {
    v7 = v3;
    LOBYTE(v10) = 1;
    if ( v3 )
      sub_6F2DB0((int)v3, (int)&savedregs, a3);
    --a2;
    v3 += 0x30;
    LOBYTE(v10) = 0;
    a1 = (unsigned int *)v3;
  }
  for ( i = (unsigned int *)v8; i != a1; i += 0xC )
    sub_556F70(i);
  ThrowException__(0, 0);
}
