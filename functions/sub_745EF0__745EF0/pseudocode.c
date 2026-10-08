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

  v2 = a2[1]; /*0x745ef3*/
  v3 = *a2; /*0x745ef7*/
  v4 = (int *)a2[2]; /*0x745ef9*/
  v31 = v2; /*0x745efc*/
  v5 = *v4; /*0x745f04*/
  v33 = v4[1]; /*0x745f06*/
  v6 = v4[2]; /*0x745f0a*/
  v7 = v4[4]; /*0x745f0e*/
  result[0x2CD] = 0; /*0x745f13*/
  result[0x2CE] = 0; /*0x745f19*/
  result[0x2CF] = 0; /*0x745f1f*/
  result[0x2D0] = 0; /*0x745f25*/
  result[0x2D1] = 0; /*0x745f2b*/
  result[0x2D2] = 0; /*0x745f31*/
  result[0x2D3] = 0; /*0x745f37*/
  result[0x2D4] = 0; /*0x745f3d*/
  v32 = v6; /*0x745f43*/
  *(_WORD *)(v3 + 4 * result[result[0x513] + 0x2D5] + 2) = 0; /*0x745f55*/
  v8 = result[0x513] + 1; /*0x745f60*/
  v27 = v7; /*0x745f69*/
  v26 = 0; /*0x745f6d*/
  if ( v8 < 0x23D ) /*0x745f71*/
  {
    v25 = &result[v8 + 0x2D5]; /*0x745f7e*/
    v9 = 0x23D - v8; /*0x745f87*/
    v10 = 0x23D; /*0x745f89*/
    v29 = v9; /*0x745f8b*/
    v24 = 0x23D; /*0x745f8f*/
    while ( 1 ) /*0x745f9d*/
    {
      v11 = *v25; /*0x745f9d*/
      v12 = *(unsigned __int16 *)(v3 + 4 * *(unsigned __int16 *)(v3 + 4 * *v25 + 2) + 2) + 1; /*0x745fa9*/
      if ( v12 > v7 ) /*0x745fae*/
      {
        ++v26; /*0x745fb0*/
        v12 = v7; /*0x745fb5*/
      }
      *(_WORD *)(v3 + 4 * v11 + 2) = v12; /*0x745fbb*/
      if ( v11 <= v31 ) /*0x745fc0*/
      {
        ++*((_WORD *)result + v12 + 0x59A); /*0x745fc6*/
        v13 = 0; /*0x745fcf*/
        if ( v11 >= v32 ) /*0x745fd3*/
          v13 = *(_DWORD *)(v33 + 4 * (v11 - v32)); /*0x745fdd*/
        v14 = *(unsigned __int16 *)(v3 + 4 * v11); /*0x745fe4*/
        result[0x5A8] += v14 * (v13 + v12); /*0x745fec*/
        if ( v5 ) /*0x745ff4*/
          result[0x5A9] += v14 * (v13 + *(unsigned __int16 *)(v5 + 4 * v11 + 2)); /*0x746000*/
        v10 = 0x23D; /*0x746006*/
      }
      ++v25; /*0x74600a*/
      if ( !--v29 ) /*0x746014*/
        break; /*0x746014*/
      v7 = v27; /*0x745f95*/
    }
    v15 = v26; /*0x74601a*/
    if ( v26 ) /*0x746020*/
    {
      v16 = (_WORD *)result + v27 + 0x59A; /*0x746031*/
      do /*0x74607f*/
      {
        v17 = v27 - 1; /*0x746040*/
        for ( i = (_WORD *)result + v27 + 0x599; !*i; --v17 ) /*0x746044*/
          i += 0xFFFFFFFF; /*0x746056*/
        --*((_WORD *)result + v17 + 0x59A); /*0x746062*/
        *((_WORD *)result + v17 + 0x59B) += 2; /*0x74606c*/
        --*v16; /*0x746075*/
        v15 -= 2; /*0x74607a*/
      }
      while ( v15 > 0 ); /*0x74607f*/
      v19 = v27; /*0x746081*/
      if ( v27 ) /*0x746087*/
      {
        v30 = (char *)result + 2 * v27 + 0xB34; /*0x746089*/
        do /*0x7460fd*/
        {
          v20 = (unsigned __int16)*v16; /*0x746090*/
          v28 = v20; /*0x746095*/
          if ( v20 ) /*0x746099*/
          {
            v21 = &result[v10 + 0x2D5]; /*0x74609b*/
            do /*0x7460e7*/
            {
              v22 = v21[0xFFFFFFFF]; /*0x7460a2*/
              --v24; /*0x7460a5*/
              v21 += 0xFFFFFFFF; /*0x7460aa*/
              if ( v22 <= v31 ) /*0x7460b5*/
              {
                v23 = *(unsigned __int16 *)(v3 + 4 * v22 + 2); /*0x7460b7*/
                if ( v23 != v19 ) /*0x7460c2*/
                {
                  result[0x5A8] += *(unsigned __int16 *)(v3 + 4 * v22) * (v19 - v23); /*0x7460cf*/
                  *(_WORD *)(v3 + 4 * v22 + 2) = v19; /*0x7460d9*/
                }
                v20 = --v28; /*0x7460e1*/
              }
            }
            while ( v20 ); /*0x7460e7*/
            v10 = v24; /*0x7460e9*/
          }
          --v19; /*0x7460f1*/
          v16 = v30 + 0xFFFFFFFE; /*0x7460f4*/
          v30 += 0xFFFFFFFE; /*0x7460f9*/
        }
        while ( v19 ); /*0x7460fd*/
      }
    }
  }
  return result; /*0x7460ff*/
}
