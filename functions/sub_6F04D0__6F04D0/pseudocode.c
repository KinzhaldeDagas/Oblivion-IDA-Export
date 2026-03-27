void __cdecl __noreturn sub_6F04D0(unsigned int *a1, char *a2, float *a3)
{
  int v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6;
  v3 = (int)a1;
  v7 = (int)a1;
  v9 = 0;
  while ( a2 )
  {
    LOBYTE(v9) = 1;
    if ( v3 )
    {
      *(float *)v3 = *a3;
      sub_557250((int *)(v3 + 4), (int)(a3 + 1));
    }
    --a2;
    v3 += 0x14;
    LOBYTE(v9) = 0;
    a1 = (unsigned int *)v3;
  }
  for ( i = (unsigned int *)v7; i != a1; i += 5 )
    sub_557180(i);
  ThrowException__(0, 0);
}
