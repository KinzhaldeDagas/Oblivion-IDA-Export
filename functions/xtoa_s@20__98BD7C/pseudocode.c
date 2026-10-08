int __userpurge xtoa_s@<eax>(
        unsigned int a1@<eax>,
        char *a2@<ecx>,
        char *a3@<edi>,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  char *v6; // esi
  int *v8; // eax
  char v9; // dl
  unsigned int v10; // et2
  char v11; // dl
  char *v12; // ecx
  char v13; // al
  int v14; // [esp-8h] [ebp-14h]
  unsigned int v15; // [esp+8h] [ebp-4h]

  v6 = a2; /*0x98bd82*/
  if ( !a2 ) /*0x98bd88*/
  {
    *_errno() = 0x16; /*0x98bd97*/
    _invalid_parameter(0, (int)a3, 0x16); /*0x98bd99*/
    return 0x16; /*0x98bda3*/
  }
  if ( !a4 ) /*0x98bdac*/
    goto LABEL_4; /*0x98bdac*/
  *a2 = 0; /*0x98bdd1*/
  if ( a4 <= (unsigned int)(a6 != 0) + 1 ) /*0x98bdda*/
  {
LABEL_7:
    v8 = _errno(); /*0x98bddc*/
    v14 = 0x22; /*0x98bde1*/
    goto LABEL_5; /*0x98bde3*/
  }
  if ( a5 - 2 > 0x22 ) /*0x98bdee*/
  {
LABEL_4:
    v8 = _errno(); /*0x98bdae*/
    v14 = 0x16; /*0x98bdb3*/
LABEL_5:
    *v8 = v14; /*0x98bdb5*/
    _invalid_parameter(0, (int)a3, v14); /*0x98bdbd*/
    return v14; /*0x98bdc7*/
  }
  v15 = 0; /*0x98bdf3*/
  if ( a6 ) /*0x98bdf8*/
  {
    *a2++ = 0x2D; /*0x98bdfa*/
    v15 = 1; /*0x98be00*/
    a1 = -a1; /*0x98be07*/
  }
  a3 = a2; /*0x98be09*/
  do /*0x98be2f*/
  {
    v10 = a1 % a5; /*0x98be0d*/
    a1 /= a5; /*0x98be0d*/
    v9 = v10; /*0x98be0d*/
    if ( v10 <= 9 ) /*0x98be13*/
      v11 = v9 + 0x30; /*0x98be1a*/
    else
      v11 = v9 + 0x57; /*0x98be15*/
    *a2++ = v11; /*0x98be1d*/
    ++v15; /*0x98be20*/
  }
  while ( a1 && v15 < a4 ); /*0x98be2f*/
  if ( v15 >= a4 ) /*0x98be37*/
  {
    *v6 = 0; /*0x98be39*/
    goto LABEL_7; /*0x98be3b*/
  }
  *a2 = 0; /*0x98be3d*/
  v12 = a2 + 0xFFFFFFFF; /*0x98be3f*/
  do /*0x98be4c*/
  {
    v13 = *v12; /*0x98be42*/
    *v12-- = *a3; /*0x98be44*/
    *a3++ = v13; /*0x98be47*/
  }
  while ( a3 < v12 ); /*0x98be4c*/
  return 0; /*0x98be51*/
}
