signed int __cdecl sub_99F12B(unsigned __int16 *a1, int *a2)
{
  unsigned __int16 v2; // bx
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  signed int result; // eax
  int v8; // esi
  unsigned int *v9; // edi
  int v10; // eax
  bool i; // zf
  int v12; // eax
  unsigned int v13; // edx
  unsigned int *v14; // ecx
  bool v15; // cf
  unsigned int v16; // esi
  int v17; // eax
  int v18; // edx
  int *v19; // ebx
  unsigned int v20; // esi
  char v21; // cl
  int v22; // edx
  unsigned int *v23; // ecx
  int v24; // esi
  int v25; // eax
  unsigned int *v26; // ebx
  bool j; // zf
  int v28; // eax
  unsigned int v29; // edx
  unsigned int *v30; // ecx
  unsigned int v31; // edi
  int k; // ecx
  unsigned int *v33; // ecx
  unsigned int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // edx
  int *v38; // ebx
  unsigned int v39; // esi
  char v40; // cl
  int v41; // edx
  unsigned int *v42; // ecx
  int v43; // eax
  int v44; // edx
  int *v45; // ebx
  unsigned int v46; // esi
  char v47; // cl
  int v48; // edx
  unsigned int *v49; // ecx
  int v50; // eax
  int v51; // edx
  unsigned int v52; // edi
  int v53; // edx
  unsigned int *v54; // ecx
  unsigned int v55; // ebx
  int v56; // edx
  unsigned int v57; // [esp+8h] [ebp-2Ch]
  int v58; // [esp+Ch] [ebp-28h]
  int v59; // [esp+10h] [ebp-24h]
  unsigned int v60; // [esp+14h] [ebp-20h] BYREF
  int v61; // [esp+18h] [ebp-1Ch]
  int v62; // [esp+1Ch] [ebp-18h] BYREF
  int v63; // [esp+20h] [ebp-14h]
  unsigned int v64; // [esp+24h] [ebp-10h]
  int v65; // [esp+28h] [ebp-Ch]
  int v66; // [esp+2Ch] [ebp-8h]
  int v67; // [esp+30h] [ebp-4h]
  int v68; // [esp+3Ch] [ebp+8h]
  unsigned int v69; // [esp+3Ch] [ebp+8h]
  int v70; // [esp+3Ch] [ebp+8h]
  int v71; // [esp+3Ch] [ebp+8h]
  int v72; // [esp+3Ch] [ebp+8h]
  int v73; // [esp+3Ch] [ebp+8h]
  int v74; // [esp+3Ch] [ebp+8h]

  v2 = a1[5];
  v63 = v2 & 0x8000;
  v60 = *(_DWORD *)(a1 + 3);
  v3 = (v2 & 0x7FFF) - 0x3FFF;
  v4 = *a1 << 0x10;
  v61 = *(_DWORD *)(a1 + 1);
  v62 = v4;
  if ( v3 != 0xFFFFC001 )
  {
    v68 = 0;
    v57 = v60;
    v58 = v61;
    v59 = v62;
    v8 = dword_B320F4 - 1;
    v64 = v3;
    v65 = dword_B320F4 / 0x20;
    v9 = &v60 + dword_B320F4 / 0x20;
    v66 = 0x1F - dword_B320F4 % 0x20;
    if ( ((1 << (0x1F - dword_B320F4 % 0x20)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(0xFFFFFFFF << (0x1F - dword_B320F4 % 0x20)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
      {
        if ( ++v10 >= 3 )
          goto LABEL_22;
      }
      v12 = v8 / 0x20;
      v67 = 0;
      v13 = 1 << (0x1F - v8 % 0x20);
      v14 = &v60 + v8 / 0x20;
      v69 = v13 + *v14;
      if ( v69 >= *v14 )
      {
        v15 = v69 < v13;
        goto LABEL_18;
      }
LABEL_19:
      v67 = 1;
      while ( 1 )
      {
        --v12;
        *v14 = v69;
        if ( v12 < 0 || !v67 )
          break;
        v67 = 0;
        v14 = &v60 + v12;
        v16 = *v14 + 1;
        v69 = v16;
        if ( v16 >= *v14 )
        {
          v15 = v16 == 0;
LABEL_18:
          if ( !v15 )
            continue;
        }
        goto LABEL_19;
      }
      v68 = v67;
    }
LABEL_22:
    *v9 &= 0xFFFFFFFF << v66;
    if ( v65 + 1 < 3 )
      memset(&v60 + v65 + 1, 0, 4 * (3 - (v65 + 1)));
    if ( v68 )
      ++v3;
    if ( v3 >= dword_B320F0 - dword_B320F4 )
    {
      if ( v3 > dword_B320F0 )
      {
        if ( v3 < dword_B320EC )
        {
          v60 &= ~0x80000000;
          v5 = dword_B32100 + v3;
          v50 = dword_B320F8 / 0x20;
          v51 = dword_B320F8 % 0x20;
          v65 = 0;
          v74 = 0;
          v67 = 0x20 - dword_B320F8 % 0x20;
          do
          {
            v52 = *(&v60 + v74);
            v64 = ~(0xFFFFFFFF << v51) & v52;
            *(&v60 + v74++) = v65 | (v52 >> v51);
            v65 = v64 << v67;
          }
          while ( v74 < 3 );
          v53 = 2;
          v54 = (unsigned int *)(&v62 - v50);
          do
          {
            if ( v53 < v50 )
              *(&v60 + v53) = 0;
            else
              *(&v60 + v53) = *v54;
            --v53;
            v54 += 0xFFFFFFFF;
          }
          while ( v53 >= 0 );
          result = 0;
        }
        else
        {
          v61 = 0;
          v62 = 0;
          v60 = 0x80000000;
          v43 = dword_B320F8 / 0x20;
          v44 = dword_B320F8 % 0x20;
          v65 = 0;
          v73 = 0;
          v67 = 0x20 - dword_B320F8 % 0x20;
          do
          {
            v45 = (int *)(&v60 + v73);
            v46 = *v45;
            v64 = ~(0xFFFFFFFF << v44) & *v45;
            v47 = v67;
            *v45 = v65 | (v46 >> v44);
            ++v73;
            v65 = v64 << v47;
          }
          while ( v73 < 3 );
          v48 = 2;
          v49 = (unsigned int *)(&v62 - v43);
          do
          {
            if ( v48 < v43 )
              *(&v60 + v48) = 0;
            else
              *(&v60 + v48) = *v49;
            --v48;
            v49 += 0xFFFFFFFF;
          }
          while ( v48 >= 0 );
          v5 = dword_B32100 + dword_B320EC;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (int)(dword_B320F0 - v64) / 0x20;
      v62 = v59;
      v18 = (int)(dword_B320F0 - v64) % 0x20;
      v65 = 0;
      v70 = 0;
      v67 = 0x20 - v18;
      do
      {
        v19 = (int *)(&v60 + v70);
        v20 = *v19;
        v64 = ~(0xFFFFFFFF << v18) & *v19;
        v21 = v67;
        *v19 = v65 | (v20 >> v18);
        ++v70;
        v65 = v64 << v21;
      }
      while ( v70 < 3 );
      v22 = 2;
      v23 = (unsigned int *)(&v62 - v17);
      do
      {
        if ( v22 < v17 )
          *(&v60 + v22) = 0;
        else
          *(&v60 + v22) = *v23;
        --v22;
        v23 += 0xFFFFFFFF;
      }
      while ( v22 >= 0 );
      v24 = dword_B320F4 - 1;
      v25 = dword_B320F4 / 0x20;
      v65 = dword_B320F4 / 0x20;
      v26 = &v60 + dword_B320F4 / 0x20;
      v64 = 0x1F - dword_B320F4 % 0x20;
      if ( ((1 << (0x1F - dword_B320F4 % 0x20)) & *v26) != 0 )
      {
        for ( j = (~(0xFFFFFFFF << (0x1F - dword_B320F4 % 0x20)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
        {
          if ( ++v25 >= 3 )
            goto LABEL_52;
        }
        v28 = v24 / 0x20;
        v71 = 0;
        v29 = 1 << (0x1F - v24 % 0x20);
        v30 = &v60 + v24 / 0x20;
        v31 = *v30 + v29;
        if ( v31 < *v30 || v31 < v29 )
          v71 = 1;
        *v30 = v31;
        for ( k = v71; --v28 >= 0 && k; k = v35 )
        {
          v33 = &v60 + v28;
          v34 = *v33 + 1;
          v35 = 0;
          if ( v34 < *v33 || *v33 == 0xFFFFFFFF )
            v35 = 1;
          *v33 = v34;
        }
      }
LABEL_52:
      *v26 &= 0xFFFFFFFF << v64;
      if ( v65 + 1 < 3 )
        memset(&v60 + v65 + 1, 0, 4 * (3 - (v65 + 1)));
      v36 = (dword_B320F8 + 1) / 0x20;
      v37 = (dword_B320F8 + 1) % 0x20;
      v65 = 0;
      v72 = 0;
      v67 = 0x20 - v37;
      do
      {
        v38 = (int *)(&v60 + v72);
        v39 = *v38;
        v64 = ~(0xFFFFFFFF << v37) & *v38;
        v40 = v67;
        *v38 = v65 | (v39 >> v37);
        ++v72;
        v65 = v64 << v40;
      }
      while ( v72 < 3 );
      v41 = 2;
      v42 = (unsigned int *)(&v62 - v36);
      do
      {
        if ( v41 < v36 )
          *(&v60 + v41) = 0;
        else
          *(&v60 + v41) = *v42;
        --v41;
        v42 += 0xFFFFFFFF;
      }
      while ( v41 >= 0 );
    }
    else
    {
      v60 = 0;
      v61 = 0;
      v62 = 0;
    }
    v5 = 0;
    result = 2;
    goto LABEL_79;
  }
  v5 = 0;
  v6 = 0;
  while ( !*(&v60 + v6) )
  {
    if ( ++v6 >= 3 )
    {
      result = 0;
      goto LABEL_79;
    }
  }
  v60 = 0;
  v61 = 0;
  v62 = 0;
  result = 2;
LABEL_79:
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (0x1F - dword_B320F8));
  if ( dword_B320FC == 0x40 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_B320FC == 0x20 )
  {
    *a2 = v55;
  }
  return result;
}
