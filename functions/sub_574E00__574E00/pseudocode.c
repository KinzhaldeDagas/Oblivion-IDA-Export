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

  a1->m_data = 0;
  a1->m_dataLen = 0;
  a1->m_bufLen = 0;
  v12 = *(_BYTE *)(*a3 + a2);
  v16 = 0;
  v15[0] = 0;
  *a7 = v12;
  v8 = sub_573760(v12);
  if ( (v8 & 0x20) != 0 )
  {
LABEL_11:
    *a6 = 0x20;
  }
  else
  {
    while ( 1 )
    {
      if ( (v8 & a4) != 0 )
      {
        *a6 = v8;
        ++*a3;
        goto LABEL_14;
      }
      if ( a5 && (v8 & a5) == 0 )
        break;
      if ( *a7 != 0xA && *a7 != 0xD )
      {
        if ( a8 )
        {
          v15[v9] = *(_BYTE *)(*a3 + a2);
          v10 = v9 + 1;
          v15[v10] = 0;
          if ( v10 > 0x7D0 )
          {
            BSStringT_Append(a1, v15);
            v15[0] = 0;
          }
        }
      }
      v13 = *(_BYTE *)(++*a3 + a2);
      *a7 = v13;
      v8 = sub_573760(v13);
      if ( (v8 & 0x20) != 0 )
        goto LABEL_11;
    }
    v14 = *(_BYTE *)(*a3 + a2);
    *a7 = v14;
    *a6 = sub_573760(v14);
  }
LABEL_14:
  BSStringT_Append(a1, v15);
  return a1;
}
