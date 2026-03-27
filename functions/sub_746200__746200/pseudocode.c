int __usercall sub_746200@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // esi
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // edx
  int v8; // edi
  int v9; // ecx
  unsigned __int16 v10; // si
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  __int16 v14; // si
  int v15; // ecx
  int v16; // ecx
  unsigned __int16 v17; // si
  int v18; // edi
  int v19; // ecx
  int v20; // ebx
  int v21; // ecx
  int v22; // ecx
  unsigned __int16 v23; // si
  int v24; // edi
  int v25; // ecx
  int v26; // ebx
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  int v30; // ecx
  int v31; // ebx
  int v32; // ecx
  int v33; // ecx
  unsigned __int16 v34; // si
  int v35; // edi
  int v36; // ecx
  int v37; // ebx
  int v38; // ecx
  int v39; // esi
  int v40; // edi
  int v41; // ecx
  int v42; // ebx
  unsigned __int16 v43; // si
  int v44; // edi
  int v45; // ecx
  int v46; // ebx
  int v47; // ecx
  int v48; // esi
  int v49; // edi
  int v50; // ecx
  int v51; // ebx
  int v52; // [esp+10h] [ebp-18h]
  unsigned int v53; // [esp+14h] [ebp-14h]
  unsigned __int16 *v54; // [esp+18h] [ebp-10h]
  unsigned int v55; // [esp+1Ch] [ebp-Ch]
  int v56; // [esp+1Ch] [ebp-Ch]
  int v57; // [esp+1Ch] [ebp-Ch]
  int v58; // [esp+1Ch] [ebp-Ch]
  int v59; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+20h] [ebp-8h]
  unsigned int v61; // [esp+24h] [ebp-4h]

  v3 = 0;
  v55 = 0xFFFFFFFF;
  v53 = *(unsigned __int16 *)(a2 + 2);
  v5 = 7;
  v6 = 4;
  if ( !*(_WORD *)(a2 + 2) )
  {
    v5 = 0x8A;
    v6 = 3;
  }
  if ( a3 >= 0 )
  {
    v54 = (unsigned __int16 *)(a2 + 6);
    for ( i = a3 + 1; i; --i )
    {
      v7 = v53;
      ++v3;
      v61 = v53;
      v53 = *v54;
      v52 = v3;
      if ( v3 < v5 && v7 == *v54 )
        goto LABEL_44;
      if ( v3 < v6 )
      {
        do
        {
          v8 = *(unsigned __int16 *)(result + 4 * v7 + 0xA76);
          v9 = *(_DWORD *)(result + 0x16B4);
          if ( v9 <= 0x10 - v8 )
          {
            *(_WORD *)(result + 0x16B0) |= *(_WORD *)(result + 4 * v7 + 0xA74) << v9;
            v15 = v8 + v9;
          }
          else
          {
            v10 = *(_WORD *)(result + 4 * v7 + 0xA74);
            v11 = v10 << v9;
            v12 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 0x16B0) |= v11;
            *(_BYTE *)(v12 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
            v13 = *(_DWORD *)(result + 0x16B4);
            ++*(_DWORD *)(result + 0x14);
            v14 = v10 >> (0x10 - v13);
            v15 = v13 + v8 - 0x10;
            v7 = v61;
            *(_WORD *)(result + 0x16B0) = v14;
            v3 = v52;
          }
          --v3;
          *(_DWORD *)(result + 0x16B4) = v15;
          v52 = v3;
        }
        while ( v3 );
        goto LABEL_39;
      }
      if ( v7 )
      {
        if ( v7 != v55 )
        {
          v16 = *(_DWORD *)(result + 0x16B4);
          v56 = *(unsigned __int16 *)(result + 4 * v7 + 0xA76);
          if ( v16 <= 0x10 - v56 )
          {
            *(_WORD *)(result + 0x16B0) |= *(_WORD *)(result + 4 * v7 + 0xA74) << v16;
            v21 = v56 + v16;
          }
          else
          {
            v17 = *(_WORD *)(result + 4 * v7 + 0xA74);
            v18 = v17 << v16;
            v19 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 0x16B0) |= v18;
            *(_BYTE *)(v19 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
            v20 = *(_DWORD *)(result + 0x16B4);
            ++*(_DWORD *)(result + 0x14);
            v21 = v20 + v56 - 0x10;
            *(_WORD *)(result + 0x16B0) = v17 >> (0x10 - v20);
            v3 = v52;
          }
          --v3;
          *(_DWORD *)(result + 0x16B4) = v21;
          v52 = v3;
        }
        v22 = *(_DWORD *)(result + 0x16B4);
        v57 = *(unsigned __int16 *)(result + 0xAB6);
        if ( v22 <= 0x10 - v57 )
        {
          *(_WORD *)(result + 0x16B0) |= *(_WORD *)(result + 0xAB4) << v22;
          v27 = v57 + v22;
        }
        else
        {
          v23 = *(_WORD *)(result + 0xAB4);
          v24 = v23 << v22;
          v25 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 0x16B0) |= v24;
          *(_BYTE *)(v25 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
          v26 = *(_DWORD *)(result + 0x16B4);
          ++*(_DWORD *)(result + 0x14);
          v27 = v26 + v57 - 0x10;
          *(_WORD *)(result + 0x16B0) = v23 >> (0x10 - v26);
          v3 = v52;
        }
        v28 = v3 - 3;
        *(_DWORD *)(result + 0x16B4) = v27;
        if ( v27 > 0xE )
        {
          v29 = v28 << v27;
          v30 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 0x16B0) |= v29;
          *(_BYTE *)(v30 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
          v31 = *(_DWORD *)(result + 0x16B4);
          ++*(_DWORD *)(result + 0x14);
          *(_DWORD *)(result + 0x16B4) = v31 - 0xE;
          *(_WORD *)(result + 0x16B0) = (unsigned __int16)v28 >> (0x10 - v31);
          goto LABEL_39;
        }
        *(_WORD *)(result + 0x16B0) |= v28 << v27;
        v32 = v27 + 2;
      }
      else
      {
        v33 = *(_DWORD *)(result + 0x16B4);
        if ( v3 > 0xA )
        {
          v59 = *(unsigned __int16 *)(result + 0xABE);
          if ( v33 <= 0x10 - v59 )
          {
            *(_WORD *)(result + 0x16B0) |= *(_WORD *)(result + 0xABC) << v33;
            v47 = v59 + v33;
          }
          else
          {
            v43 = *(_WORD *)(result + 0xABC);
            v44 = v43 << v33;
            v45 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 0x16B0) |= v44;
            *(_BYTE *)(v45 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
            v46 = *(_DWORD *)(result + 0x16B4);
            ++*(_DWORD *)(result + 0x14);
            v47 = v46 + v59 - 0x10;
            *(_WORD *)(result + 0x16B0) = v43 >> (0x10 - v46);
            v3 = v52;
          }
          v48 = v3 - 0xB;
          *(_DWORD *)(result + 0x16B4) = v47;
          if ( v47 > 9 )
          {
            v49 = v48 << v47;
            v50 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 0x16B0) |= v49;
            *(_BYTE *)(v50 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
            v51 = *(_DWORD *)(result + 0x16B4);
            ++*(_DWORD *)(result + 0x14);
            *(_DWORD *)(result + 0x16B4) = v51 - 9;
            *(_WORD *)(result + 0x16B0) = (unsigned __int16)v48 >> (0x10 - v51);
            goto LABEL_39;
          }
          *(_WORD *)(result + 0x16B0) |= v48 << v47;
          v32 = v47 + 7;
        }
        else
        {
          v58 = *(unsigned __int16 *)(result + 0xABA);
          if ( v33 <= 0x10 - v58 )
          {
            *(_WORD *)(result + 0x16B0) |= *(_WORD *)(result + 0xAB8) << v33;
            v38 = v58 + v33;
          }
          else
          {
            v34 = *(_WORD *)(result + 0xAB8);
            v35 = v34 << v33;
            v36 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 0x16B0) |= v35;
            *(_BYTE *)(v36 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
            v37 = *(_DWORD *)(result + 0x16B4);
            ++*(_DWORD *)(result + 0x14);
            v38 = v37 + v58 - 0x10;
            *(_WORD *)(result + 0x16B0) = v34 >> (0x10 - v37);
            v3 = v52;
          }
          v39 = v3 - 3;
          *(_DWORD *)(result + 0x16B4) = v38;
          if ( v38 > 0xD )
          {
            v40 = v39 << v38;
            v41 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 0x16B0) |= v40;
            *(_BYTE *)(v41 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
            v42 = *(_DWORD *)(result + 0x16B4);
            ++*(_DWORD *)(result + 0x14);
            *(_DWORD *)(result + 0x16B4) = v42 - 0xD;
            *(_WORD *)(result + 0x16B0) = (unsigned __int16)v39 >> (0x10 - v42);
            goto LABEL_39;
          }
          *(_WORD *)(result + 0x16B0) |= v39 << v38;
          v32 = v38 + 3;
        }
      }
      *(_DWORD *)(result + 0x16B4) = v32;
LABEL_39:
      v3 = 0;
      v55 = v7;
      if ( v53 )
      {
        if ( v7 == v53 )
        {
          v5 = 6;
          v6 = 3;
        }
        else
        {
          v5 = 7;
          v6 = 4;
        }
      }
      else
      {
        v5 = 0x8A;
        v6 = 3;
      }
LABEL_44:
      v54 += 2;
    }
  }
  return result;
}
