_DWORD *__usercall __sbh_free_block@<eax>(DWORD a1@<ebx>, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  int *v4; // esi
  unsigned int v5; // edi
  int v6; // ecx
  char *v7; // ebx
  unsigned int v8; // edx
  _BYTE *v9; // ecx
  unsigned int v10; // ebx
  bool v11; // zf
  _BYTE *v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // edx
  unsigned int v15; // ebx
  int v16; // ecx
  unsigned int v17; // esi
  unsigned int v18; // esi
  _DWORD *v19; // ecx
  int v20; // ebx
  int v21; // eax
  DWORD v23; // [esp-4h] [ebp-1Ch]
  _DWORD *v24; // [esp+8h] [ebp-10h]
  int v25; // [esp+Ch] [ebp-Ch]
  int v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+14h] [ebp-4h]
  char *v28; // [esp+24h] [ebp+Ch]
  int *v29; // [esp+24h] [ebp+Ch]
  char v30; // [esp+27h] [ebp+Fh]

  result = (_DWORD *)a2[4];
  v4 = (int *)(a3 - 4);
  v5 = (unsigned int)(a3 - a2[3]) >> 0xF;
  v24 = &result[0x81 * v5 + 0x51];
  v6 = *(_DWORD *)(a3 - 4) - 1;
  v27 = v6;
  if ( (v6 & 1) == 0 )
  {
    v7 = (char *)v4 + v6;
    v25 = *(int *)((char *)v4 + v6);
    v26 = *(_DWORD *)(a3 - 8);
    v28 = (char *)v4 + v6;
    if ( (v25 & 1) == 0 )
    {
      v8 = (v25 >> 4) - 1;
      if ( v8 > 0x3F )
        v8 = 0x3F;
      if ( *((_DWORD *)v7 + 1) == *((_DWORD *)v7 + 2) )
      {
        if ( v8 >= 0x20 )
        {
          v12 = (char *)result + v8 + 4;
          v13 = ~(0x80000000 >> (v8 - 0x20));
          result[v5 + 0x31] &= v13;
          v11 = (*v12)-- == 1;
          if ( v11 )
            a2[1] &= v13;
        }
        else
        {
          v9 = (char *)result + v8 + 4;
          v10 = ~(0x80000000 >> v8);
          result[v5 + 0x11] &= v10;
          v11 = (*v9)-- == 1;
          if ( v11 )
            *a2 &= v10;
        }
        v7 = v28;
      }
      v6 = v25 + v27;
      *(_DWORD *)(*((_DWORD *)v7 + 2) + 4) = *((_DWORD *)v7 + 1);
      *(_DWORD *)(*((_DWORD *)v28 + 1) + 8) = *((_DWORD *)v28 + 2);
      v27 += v25;
    }
    v14 = (v6 >> 4) - 1;
    if ( v14 > 0x3F )
      v14 = 0x3F;
    if ( (v26 & 1) != 0 )
    {
      v15 = (unsigned int)a2;
    }
    else
    {
      v29 = (int *)((char *)v4 - v26);
      v15 = (v26 >> 4) - 1;
      if ( v15 > 0x3F )
        v15 = 0x3F;
      v16 = v26 + v6;
      v14 = (v16 >> 4) - 1;
      v27 = v16;
      if ( v14 > 0x3F )
        v14 = 0x3F;
      if ( v15 != v14 )
      {
        if ( v29[1] == v29[2] )
        {
          if ( v15 >= 0x20 )
          {
            v18 = ~(0x80000000 >> (v15 - 0x20));
            result[v5 + 0x31] &= v18;
            v11 = (*((_BYTE *)result + v15 + 4))-- == 1;
            if ( v11 )
              a2[1] &= v18;
          }
          else
          {
            v17 = ~(0x80000000 >> v15);
            result[v5 + 0x11] &= v17;
            v11 = (*((_BYTE *)result + v15 + 4))-- == 1;
            if ( v11 )
              *a2 &= v17;
          }
        }
        *(_DWORD *)(v29[2] + 4) = v29[1];
        *(_DWORD *)(v29[1] + 8) = v29[2];
      }
      v4 = v29;
    }
    if ( (v26 & 1) != 0 || v15 != v14 )
    {
      v19 = &v24[2 * v14];
      v20 = v19[1];
      v4[2] = (int)v19;
      v4[1] = v20;
      v19[1] = v4;
      *(_DWORD *)(v4[1] + 8) = v4;
      if ( v4[1] == v4[2] )
      {
        v30 = *((_BYTE *)result + v14 + 4);
        *((_BYTE *)result + v14 + 4) = v30 + 1;
        if ( v14 >= 0x20 )
        {
          if ( !v30 )
            a2[1] |= 0x80000000 >> (v14 - 0x20);
          result[v5 + 0x31] |= 0x80000000 >> (v14 - 0x20);
        }
        else
        {
          if ( !v30 )
            *a2 |= 0x80000000 >> v14;
          result[v5 + 0x11] |= 0x80000000 >> v14;
        }
      }
    }
    *v4 = v27;
    *(int *)((char *)v4 + v27 - 4) = v27;
    result += 0x81 * v5 + 0x51;
    v11 = (*v24)-- == 1;
    if ( v11 )
    {
      if ( dword_BAA2A8 )
      {
        VirtualFree((LPVOID)(*(_DWORD *)(dword_BAA2A8 + 0xC) + (dword_BAABD8 << 0xF)), 0x400000008000uLL, a1);
        *(_DWORD *)(dword_BAA2A8 + 8) |= 0x80000000 >> dword_BAABD8;
        *(_DWORD *)(*(_DWORD *)(dword_BAA2A8 + 0x10) + 4 * dword_BAABD8 + 0xC4) = 0;
        --*(_BYTE *)(*(_DWORD *)(dword_BAA2A8 + 0x10) + 0x43);
        v21 = dword_BAA2A8;
        if ( !*(_BYTE *)(*(_DWORD *)(dword_BAA2A8 + 0x10) + 0x43) )
        {
          *(_DWORD *)(dword_BAA2A8 + 4) &= ~1u;
          v21 = dword_BAA2A8;
        }
        if ( *(_DWORD *)(v21 + 8) == 0xFFFFFFFF )
        {
          VirtualFree(*(LPVOID *)(v21 + 0xC), 0x800000000000uLL, v23);
          HeapFree(hHeap, 0, *(LPVOID *)(dword_BAA2A8 + 0x10));
          unknown_libname_16(dword_BAA2A8, dword_BAA2A8 + 0x14, (int)lpMem + 0x14 * dword_BAABC4 - dword_BAA2A8 - 0x14);
          --dword_BAABC4;
          if ( (unsigned int)a2 > dword_BAA2A8 )
            a2 += 0xFFFFFFFB;
          dword_BAABD0 = (int)lpMem;
        }
      }
      dword_BAA2A8 = (int)a2;
      dword_BAABD8 = v5;
      return a2;
    }
  }
  return result;
}
