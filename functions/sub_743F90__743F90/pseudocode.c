unsigned int __usercall sub_743F90@<eax>(unsigned int a1@<eax>, _DWORD *a2@<edi>)
{
  unsigned int v2; // edx
  unsigned int v3; // ebp
  int v4; // esi
  _BYTE *v5; // ecx
  _BYTE *v6; // esi
  _BYTE *v7; // edx
  char v8; // bl
  _BYTE *v9; // edx
  _BYTE *v10; // ecx
  _BYTE *v11; // edx
  char v12; // bl
  _BYTE *v13; // edx
  char v14; // bl
  _BYTE *v15; // edx
  char v16; // bl
  _BYTE *v17; // edx
  char v18; // bl
  _BYTE *v19; // edx
  char v20; // bl
  _BYTE *v21; // edx
  char v22; // bl
  _BYTE *v23; // edx
  char v24; // bl
  _BYTE *v25; // edx
  char v26; // bl
  int v27; // edx
  unsigned int result; // eax
  char v29; // [esp+Eh] [ebp-12h]
  char v30; // [esp+Fh] [ebp-11h]
  unsigned int v31; // [esp+10h] [ebp-10h]
  int v32; // [esp+14h] [ebp-Ch]
  unsigned int v33; // [esp+18h] [ebp-8h]

  v2 = a2[0x19]; /*0x743f96*/
  v3 = a2[0x1C]; /*0x743f9b*/
  v31 = a2[0x1D]; /*0x743fa5*/
  v32 = a2[0x22]; /*0x743fac*/
  v4 = a2[9]; /*0x743fb0*/
  v5 = (_BYTE *)(v2 + a2[0xC]); /*0x743fb9*/
  if ( v2 <= v4 - 0x106 ) /*0x743fbd*/
    v33 = 0; /*0x743fcd*/
  else
    v33 = v2 - v4 + 0x106; /*0x743fc7*/
  v29 = v5[v3 - 1]; /*0x743fe0*/
  v6 = v5 + 0x102; /*0x743fe8*/
  v30 = v5[v3]; /*0x743fee*/
  if ( v3 >= a2[0x21] ) /*0x743ff2*/
    v31 >>= 2; /*0x743ff4*/
  if ( (unsigned int)v32 > a2[0x1B] ) /*0x744000*/
    v32 = a2[0x1B]; /*0x744002*/
  do /*0x7440f6*/
  {
    v7 = (_BYTE *)(a1 + a2[0xC]); /*0x74400d*/
    if ( v7[v3] == v30 && v7[v3 - 1] == v29 && *v7 == *v5 ) /*0x74402a*/
    {
      v8 = v7[1]; /*0x744030*/
      v9 = v7 + 1; /*0x744033*/
      if ( v8 == v5[1] ) /*0x744039*/
      {
        v10 = v5 + 2; /*0x74403f*/
        v11 = v9 + 1; /*0x744042*/
        do /*0x7440af*/
        {
          v12 = *++v10; /*0x744045*/
          v13 = v11 + 1; /*0x74404b*/
          if ( v12 != *v13 ) /*0x744050*/
            break; /*0x744050*/
          v14 = *++v10; /*0x744052*/
          v15 = v13 + 1; /*0x744058*/
          if ( v14 != *v15 ) /*0x74405d*/
            break; /*0x74405d*/
          v16 = *++v10; /*0x74405f*/
          v17 = v15 + 1; /*0x744065*/
          if ( v16 != *v17 ) /*0x74406a*/
            break; /*0x74406a*/
          v18 = *++v10; /*0x74406c*/
          v19 = v17 + 1; /*0x744072*/
          if ( v18 != *v19 ) /*0x744077*/
            break; /*0x744077*/
          v20 = *++v10; /*0x744079*/
          v21 = v19 + 1; /*0x74407f*/
          if ( v20 != *v21 ) /*0x744084*/
            break; /*0x744084*/
          v22 = *++v10; /*0x744086*/
          v23 = v21 + 1; /*0x74408c*/
          if ( v22 != *v23 ) /*0x744091*/
            break; /*0x744091*/
          v24 = *++v10; /*0x744093*/
          v25 = v23 + 1; /*0x744099*/
          if ( v24 != *v25 ) /*0x74409e*/
            break; /*0x74409e*/
          v26 = *++v10; /*0x7440a0*/
          v11 = v25 + 1; /*0x7440a6*/
          if ( v26 != *v11 ) /*0x7440ab*/
            break; /*0x7440ab*/
        }
        while ( v10 < v6 ); /*0x7440af*/
        v27 = v10 - v6 + 0x102; /*0x7440b5*/
        v5 = v6 + 0xFFFFFEFE; /*0x7440bd*/
        if ( v27 > (int)v3 ) /*0x7440c3*/
        {
          a2[0x1A] = a1; /*0x7440c9*/
          v3 = v27; /*0x7440cc*/
          if ( v27 >= v32 ) /*0x7440ce*/
            break; /*0x7440ce*/
          v29 = v5[v27 - 1]; /*0x7440d7*/
          v30 = v5[v27]; /*0x7440db*/
        }
      }
    }
    a1 = *(unsigned __int16 *)(a2[0xE] + 2 * (a1 & a2[0xB])); /*0x7440e7*/
    if ( a1 <= v33 ) /*0x7440ef*/
      break; /*0x7440ef*/
    --v31; /*0x7440f1*/
  }
  while ( v31 ); /*0x7440f6*/
  result = a2[0x1B]; /*0x7440fc*/
  if ( v3 <= result ) /*0x744101*/
    return v3; /*0x744103*/
  return result; /*0x744105*/
}
