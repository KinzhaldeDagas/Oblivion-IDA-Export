void __cdecl __noreturn sub_557880(float *a1, float *a2, unsigned int *a3)
{
  int v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6;
  v3 = (int)a3;
  v7 = (int)a3;
  v9 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v9) = 1;
    if ( v3 )
    {
      *(float *)v3 = *a1;
      sub_557250((int *)(v3 + 4), (int)(a1 + 1));
    }
    v3 += 0x14;
    LOBYTE(v9) = 0;
    a3 = (unsigned int *)v3;
    a1 += 5;
  }
  for ( i = (unsigned int *)v7; i != a3; i += 5 )
    sub_557180(i);
  ThrowException__(0, 0);
}
