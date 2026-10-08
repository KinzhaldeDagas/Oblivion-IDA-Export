void __cdecl __noreturn sub_6F04D0(unsigned int *a1, char *a2, float *a3)
{
  unsigned int *v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  unsigned int *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6; /*0x6f04f8*/
  v3 = a1; /*0x6f04fb*/
  v7 = a1; /*0x6f0503*/
  v9 = 0; /*0x6f0506*/
  while ( a2 ) /*0x6f0512*/
  {
    LOBYTE(v9) = 1; /*0x6f0519*/
    if ( v3 ) /*0x6f051d*/
    {
      *v3 = *(unsigned int *)a3; /*0x6f0528*/
      sub_557250((int *)v3 + 1, (int)(a3 + 1)); /*0x6f052d*/
    }
    --a2; /*0x6f0532*/
    v3 += 5; /*0x6f0535*/
    LOBYTE(v9) = 0; /*0x6f0538*/
    a1 = v3; /*0x6f053b*/
  }
  for ( i = v7; i != a1; i += 5 ) /*0x6f0548*/
    sub_557180(i); /*0x6f0553*/
  ThrowException__(0, 0); /*0x6f0563*/
}
