void __cdecl __noreturn sub_557880(float *a1, float *a2, unsigned int *a3)
{
  unsigned int *v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  unsigned int *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6; /*0x5578a8*/
  v3 = a3; /*0x5578ab*/
  v7 = a3; /*0x5578b3*/
  v9 = 0; /*0x5578b6*/
  while ( a1 != a2 ) /*0x5578c3*/
  {
    LOBYTE(v9) = 1; /*0x5578ca*/
    if ( v3 ) /*0x5578ce*/
    {
      *v3 = *(unsigned int *)a1; /*0x5578d6*/
      sub_557250((int *)v3 + 1, (int)(a1 + 1)); /*0x5578db*/
    }
    v3 += 5; /*0x5578e0*/
    LOBYTE(v9) = 0; /*0x5578e3*/
    a3 = v3; /*0x5578e6*/
    a1 += 5; /*0x5578e9*/
  }
  for ( i = v7; i != a3; i += 5 ) /*0x5578f6*/
    sub_557180(i); /*0x557903*/
  ThrowException__(0, 0); /*0x557913*/
}
