BSStringT *__stdcall sub_574E00(BSStringT *a1, int a2, _DWORD *a3, int a4, int a5, signed int *a6, char *a7, char a8)
{
  signed int v8; // eax
  int v9; // edx
  int v10; // edx
  char v12; // [esp-4h] [ebp-838h]
  char v13; // [esp-4h] [ebp-838h]
  char v14; // [esp-4h] [ebp-838h]
  char v15[2048]; // [esp+24h] [ebp-810h] BYREF
  int v16; // [esp+830h] [ebp-4h]

  a1->m_data = 0; /*0x574e69*/
  a1->m_dataLen = 0; /*0x574e6b*/
  a1->m_bufLen = 0; /*0x574e6f*/
  v12 = *(_BYTE *)(*a3 + a2); /*0x574e80*/
  v16 = 0; /*0x574e81*/
  v15[0] = 0; /*0x574e90*/
  *a7 = v12; /*0x574e94*/
  v8 = sub_573760(v12); /*0x574e96*/
  if ( (v8 & 0x20) != 0 ) /*0x574e9d*/
  {
LABEL_11:
    *a6 = 0x20; /*0x574f13*/
  }
  else
  {
    while ( 1 ) /*0x574ea0*/
    {
      if ( (v8 & a4) != 0 ) /*0x574ea9*/
      {
        *a6 = v8; /*0x574f23*/
        ++*a3; /*0x574f25*/
        goto LABEL_14; /*0x574f28*/
      }
      if ( a5 && (v8 & a5) == 0 ) /*0x574eb8*/
        break; /*0x574eb8*/
      if ( *a7 != 0xA && *a7 != 0xD ) /*0x574ec2*/
      {
        if ( a8 ) /*0x574ecc*/
        {
          v15[v9] = *(_BYTE *)(*a3 + a2); /*0x574ed3*/
          v10 = v9 + 1; /*0x574ed7*/
          v15[v10] = 0; /*0x574ee0*/
          if ( v10 > 0x7D0 ) /*0x574ee5*/
          {
            BSStringT_Append(a1, v15); /*0x574eee*/
            v15[0] = 0; /*0x574ef3*/
          }
        }
      }
      v13 = *(_BYTE *)(++*a3 + a2); /*0x574f07*/
      *a7 = v13; /*0x574f08*/
      v8 = sub_573760(v13); /*0x574f0a*/
      if ( (v8 & 0x20) != 0 ) /*0x574f11*/
        goto LABEL_11; /*0x574f11*/
    }
    v14 = *(_BYTE *)(*a3 + a2); /*0x574f34*/
    *a7 = v14; /*0x574f35*/
    *a6 = sub_573760(v14); /*0x574f40*/
  }
LABEL_14:
  BSStringT_Append(a1, v15); /*0x574f42*/
  return a1; /*0x574f50*/
}
