// positive sp value has been detected, the output may be wrong!
int __userpurge def_574B56@<eax>(
        unsigned __int8 a1@<al>,
        int a2@<ebx>,
        int a3@<ebp>,
        unsigned int a4@<edi>,
        BSStringT *a5@<esi>,
        int a6,
        _DWORD *a7,
        int *a8,
        int a9,
        char a10)
{
  int v10; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // ebx
  char *v14; // ebx
  char *m_data; // ebx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  char v18; // dl
  unsigned int v19; // ebx
  int v20; // eax
  char *i; // eax
  int v23; // [esp-24h] [ebp-24h]
  int v24; // [esp-20h] [ebp-20h]
  int v25; // [esp-1Ch] [ebp-1Ch]
  unsigned int v26; // [esp-18h] [ebp-18h]
  int v27; // [esp-14h] [ebp-14h]
  int v28; // [esp-10h] [ebp-10h]
  int v29; // [esp-Ch] [ebp-Ch]
  int v30; // [esp-4h] [ebp-4h]

  v10 = 7 * a1;
  v11 = *(_DWORD *)(a3 + 0x38);
  v12 = v11 + 8 * v10 + 0x128;
  v13 = Double_To_SInt32(*(float *)(v11 + 8 * v10 + 0x158) + *(float *)(v11 + 8 * v10 + 0x14C)) + a2;
  v28 = v13;
  if ( v25 == a4 )
    v29 = v13;
  if ( v13 > *a7 )
  {
    if ( v25 )
    {
      a5->m_data[a5->m_data != 0 ? v25 : 0] = a10;
      v24 = Double_To_SInt32((double)v24 + **(float **)(v27 + 0x38));
      if ( v23 <= v29 )
        v23 = v29;
      ++a6;
      v13 -= v29;
    }
    else
    {
      if ( BSStringT_GetLen(a5) >= (unsigned __int16)a5->m_bufLen )
      {
        if ( BSStringT_GetLen(a5) + 1 < (unsigned __int16)a5->m_bufLen )
        {
          BSStringT_Append(a5, "\n");
          m_data = a5->m_data;
          v16 = BSStringT_GetLen(a5) - 1;
        }
        else
        {
          BSStringT_Append(a5, "\n\n");
          v14 = a5->m_data;
          a5->m_data[v14 != 0 ? BSStringT_GetLen(a5) - 1 : 0] = 0;
          m_data = a5->m_data;
          v16 = BSStringT_GetLen(a5) - 2;
        }
        a5->m_data[m_data != 0 ? v16 : 0] = 0;
        v13 = v28;
      }
      v17 = v26 + 2;
      if ( v26 + 2 > a4 )
      {
        do
        {
          v18 = a5->m_data[a5->m_data != 0 ? v17 - 2 : 0];
          v19 = a5->m_data != 0 ? v17-- : 0;
          a5->m_data[v19] = v18;
        }
        while ( v17 > a4 );
        v13 = v28;
      }
      a5->m_data[a5->m_data != 0 ? a4 - 1 : 0] = 0x2D;
      a5->m_data[a5->m_data != 0 ? a4 : 0] = a10;
      v24 = Double_To_SInt32((double)v24 + **(float **)(v27 + 0x38));
      v20 = Double_To_SInt32(*(float *)(v12 + 0x30) + *(float *)(v12 + 0x24));
      if ( v23 <= v13 - v20 )
        v23 = v13 - v20;
      v13 = 0;
      ++a6;
    }
  }
  if ( v30 > 0 && a6 >= v30 )
  {
    for ( i = a5->m_data; i[i != 0 ? a4 : 0] != a10; --a4 )
      ;
    i[i != 0 ? a4 : 0] = 0;
    v24 = Double_To_SInt32((double)v24 - **(float **)(v27 + 0x38));
  }
  else if ( ++a4 < v26 )
  {
    JUMPOUT(0x574B10);
  }
  if ( *a5->m_data )
  {
    if ( a4 >= v26 )
      ++a6;
  }
  if ( v23 <= v13 )
    v23 = v13;
  *a7 = v23;
  *a8 = v24;
  return a6;
}
