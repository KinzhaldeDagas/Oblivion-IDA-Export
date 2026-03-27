_DWORD *__usercall sub_745EF0@<eax>(_DWORD *result@<eax>, int *a2@<ecx>)
{
  int v2; // edx
  int v3; // ebx
  int *v4; // ecx
  int v5; // ebp
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // edi
  int v15; // ebp
  _WORD *v16; // esi
  int v17; // ecx
  _WORD *i; // edx
  int v19; // edx
  int v20; // esi
  _DWORD *v21; // ebp
  int v22; // ecx
  int v23; // edi
  int v24; // [esp+10h] [ebp-20h]
  int *v25; // [esp+14h] [ebp-1Ch]
  int v26; // [esp+18h] [ebp-18h]
  int v27; // [esp+1Ch] [ebp-14h]
  int v28; // [esp+1Ch] [ebp-14h]
  int v29; // [esp+20h] [ebp-10h]
  char *v30; // [esp+20h] [ebp-10h]
  int v31; // [esp+24h] [ebp-Ch]
  int v32; // [esp+28h] [ebp-8h]
  int v33; // [esp+2Ch] [ebp-4h]

  v2 = a2[1];
  v3 = *a2;
  v4 = (int *)a2[2];
  v31 = v2;
  v5 = *v4;
  v33 = v4[1];
  v6 = v4[2];
  v7 = v4[4];
  result[0x2CD] = 0;
  result[0x2CE] = 0;
  result[0x2CF] = 0;
  result[0x2D0] = 0;
  result[0x2D1] = 0;
  result[0x2D2] = 0;
  result[0x2D3] = 0;
  result[0x2D4] = 0;
  v32 = v6;
  *(_WORD *)(v3 + 4 * result[result[0x513] + 0x2D5] + 2) = 0;
  v8 = result[0x513] + 1;
  v27 = v7;
  v26 = 0;
  if ( v8 < 0x23D )
  {
    v25 = &result[v8 + 0x2D5];
    v9 = 0x23D - v8;
    v10 = 0x23D;
    v29 = v9;
    v24 = 0x23D;
    while ( 1 )
    {
      v11 = *v25;
      v12 = *(unsigned __int16 *)(v3 + 4 * *(unsigned __int16 *)(v3 + 4 * *v25 + 2) + 2) + 1;
      if ( v12 > v7 )
      {
        ++v26;
        v12 = v7;
      }
      *(_WORD *)(v3 + 4 * v11 + 2) = v12;
      if ( v11 <= v31 )
      {
        ++*((_WORD *)result + v12 + 0x59A);
        v13 = 0;
        if ( v11 >= v32 )
          v13 = *(_DWORD *)(v33 + 4 * (v11 - v32));
        v14 = *(unsigned __int16 *)(v3 + 4 * v11);
        result[0x5A8] += v14 * (v13 + v12);
        if ( v5 )
          result[0x5A9] += v14 * (v13 + *(unsigned __int16 *)(v5 + 4 * v11 + 2));
        v10 = 0x23D;
      }
      ++v25;
      if ( !--v29 )
        break;
      v7 = v27;
    }
    v15 = v26;
    if ( v26 )
    {
      v16 = (_WORD *)result + v27 + 0x59A;
      do
      {
        v17 = v27 - 1;
        for ( i = (_WORD *)result + v27 + 0x599; !*i; --v17 )
          i += 0xFFFFFFFF;
        --*((_WORD *)result + v17 + 0x59A);
        *((_WORD *)result + v17 + 0x59B) += 2;
        --*v16;
        v15 -= 2;
      }
      while ( v15 > 0 );
      v19 = v27;
      if ( v27 )
      {
        v30 = (char *)result + 2 * v27 + 0xB34;
        do
        {
          v20 = (unsigned __int16)*v16;
          v28 = v20;
          if ( v20 )
          {
            v21 = &result[v10 + 0x2D5];
            do
            {
              v22 = v21[0xFFFFFFFF];
              --v24;
              v21 += 0xFFFFFFFF;
              if ( v22 <= v31 )
              {
                v23 = *(unsigned __int16 *)(v3 + 4 * v22 + 2);
                if ( v23 != v19 )
                {
                  result[0x5A8] += *(unsigned __int16 *)(v3 + 4 * v22) * (v19 - v23);
                  *(_WORD *)(v3 + 4 * v22 + 2) = v19;
                }
                v20 = --v28;
              }
            }
            while ( v20 );
            v10 = v24;
          }
          --v19;
          v16 = v30 + 0xFFFFFFFE;
          v30 += 0xFFFFFFFE;
        }
        while ( v19 );
      }
    }
  }
  return result;
}
