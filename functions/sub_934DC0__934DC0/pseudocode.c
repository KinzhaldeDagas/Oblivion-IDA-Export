int __cdecl sub_934DC0(int ***a1, __m128 *a2, _BYTE *a3, int *a4, int a5, int a6)
{
  int v6; // ecx
  int *v7; // eax
  int v8; // edx
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edx
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // eax
  _DWORD *v16; // ebx
  _DWORD *v17; // ecx
  _DWORD *v18; // eax
  int v19; // esi
  unsigned int v20; // eax
  _DWORD *v21; // ecx
  _DWORD *v22; // eax
  int v23; // eax
  int v25; // edx
  __int32 v26; // eax
  int v27; // eax
  unsigned __int8 v28; // al
  __int32 v29; // eax
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __int32 v32; // edx
  __int32 v33; // eax
  _BYTE *v34; // eax
  int v35; // eax
  int v36; // [esp+8h] [ebp-15D0h]
  __int32 *v37; // [esp+8h] [ebp-15D0h]
  __int32 v38; // [esp+8h] [ebp-15D0h]
  int v39; // [esp+20h] [ebp-15B8h]
  char v40; // [esp+20h] [ebp-15B8h]
  int v41; // [esp+28h] [ebp-15B0h]
  int v42; // [esp+28h] [ebp-15B0h]
  int v43; // [esp+28h] [ebp-15B0h]
  int v44; // [esp+30h] [ebp-15A8h]
  int v45; // [esp+34h] [ebp-15A4h]
  int v46; // [esp+3Ch] [ebp-159Ch]
  int v47; // [esp+40h] [ebp-1598h] BYREF
  int v48; // [esp+44h] [ebp-1594h]
  char v49; // [esp+48h] [ebp-1590h] BYREF
  int v50; // [esp+50h] [ebp-1588h]
  int v51; // [esp+54h] [ebp-1584h]
  int v52; // [esp+58h] [ebp-1580h]
  int v53; // [esp+5Ch] [ebp-157Ch]
  int v54; // [esp+60h] [ebp-1578h]
  int v55; // [esp+68h] [ebp-1570h]
  int v56; // [esp+6Ch] [ebp-156Ch]
  char v57; // [esp+73h] [ebp-1565h] BYREF
  int v58; // [esp+74h] [ebp-1564h]
  _DWORD v59[4]; // [esp+338h] [ebp-12A0h] BYREF
  __m128 v60[6]; // [esp+348h] [ebp-1290h] BYREF
  char v61[24]; // [esp+3B0h] [ebp-1228h] BYREF
  char v62[520]; // [esp+3C8h] [ebp-1210h] BYREF
  _DWORD v63[2]; // [esp+5D0h] [ebp-1008h] BYREF
  char v64; // [esp+5D8h] [ebp-1000h] BYREF
  char v65; // [esp+9D8h] [ebp-C00h] BYREF

  v55 = *(_DWORD *)(a6 + 0x3040);
  if ( v55 || a3[0xC] )
  {
    *(_DWORD *)(a6 + 0x3040) = 0;
  }
  else
  {
    v63[0] = &v65;
    v63[1] = &v64;
    *(_DWORD *)(a6 + 0x3040) = v63;
  }
  v6 = *(_DWORD *)a2->m128_i32[2];
  v51 = a2->m128_i32[1];
  v44 = v6;
  v50 = *(_DWORD *)(v51 + 8);
  a2->m128_i32[1] = (__int32)&v49;
  v7 = **a1;
  v8 = *v7;
  v9 = v7 + 4;
  v56 = (int)v7;
  v10 = (int)v7 + v8 + 0x10;
  v11 = TlsIndex;
  v46 = (int)v9;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v58 = v10;
  v13 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C);
  v14 = *(_DWORD **)(v13 + 0x64);
  v54 = 0;
  v52 = 1;
  v53 = 0;
  if ( v14 )
  {
    --*(_DWORD *)(v13 + 0xA8);
    *(_DWORD *)(v13 + 0x64) = *v14;
    v15 = v14;
  }
  else
  {
    v15 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x18))(dword_BA7D98, 0xC, 0x1C);
  }
  if ( v15 )
    *v15 = 0;
  else
    v15 = 0;
  v48 = (int)v15;
  v16 = v15 + 4;
  if ( !a4 )
  {
    if ( (*(unsigned __int8 *)(v46 + 3) >> 4) - 1 >= 0 )
    {
      v17 = (_DWORD *)(v46 + 0xC);
      v18 = v15 + 6;
      v45 = *(unsigned __int8 *)(v46 + 3) >> 4;
      do
      {
        v18[0xFFFFFFFE] = v17[0xFFFFFFFD];
        v18[0xFFFFFFFF] = v17[0xFFFFFFFE];
        *v18 = *(_DWORD *)((char *)v18 + v46 - (_DWORD)v16);
        v18[1] = *v17;
        v17 += 4;
        v18 += 4;
        --v45;
      }
      while ( v45 );
    }
    v19 = *(_DWORD *)(v46 + 8);
    goto LABEL_36;
  }
  v19 = *a4;
  v20 = *(_DWORD *)(v46 + 8);
  if ( v20 == *a4 )
  {
    v41 = (*(unsigned __int8 *)(v46 + 3) >> 4) - 1;
    if ( v41 >= 0 )
    {
      v21 = (_DWORD *)(v46 + 0xC);
      v47 = v46 - (_DWORD)v16;
      v22 = v16 + 2;
      v42 = v41 + 1;
      do
      {
        v22[0xFFFFFFFE] = v21[0xFFFFFFFD];
        v22[0xFFFFFFFF] = v21[0xFFFFFFFE];
        *v22 = *(_DWORD *)((char *)v22 + v47);
        v22[1] = *v21;
        v21 += 4;
        v22 += 4;
        --v42;
      }
      while ( v42 );
    }
LABEL_35:
    ++a4;
LABEL_36:
    switch ( *(_BYTE *)v16 )
    {
      case 0:
      case 1:
        return def_9351A0(a1, a2, a3, a4);
      case 2:
        JUMPOUT(0x93521A);
      case 3:
        JUMPOUT(0x93526C);
      case 4:
        JUMPOUT(0x9356BD);
      case 5:
        JUMPOUT(0x93538F);
      case 6:
        v35 = (*(int (__thiscall **)(_BYTE *, int, char *))(*(_DWORD *)a3 + 0x28))(a3, v19, v62);
        v38 = a2->m128_i32[2];
        v47 = v35;
        v48 = v19;
        (*(void (__thiscall **)(_DWORD, __int32, int *, __int32, int))(*(_DWORD *)v16[1] + 0x14))(
          v16[1],
          a2->m128_i32[0],
          &v47,
          v38,
          a6);
        break;
      default:
        JUMPOUT(0x9351DB);
    }
    return def_9351A0(a1, a2, a3, a4);
  }
  if ( v20 >= *a4 )
  {
    v25 = *(_DWORD *)(a2->m128_i32[1] + 0xC);
    v26 = a2->m128_i32[2];
    v47 = *(_DWORD *)(v26 + 4);
    if ( *(_BYTE *)(**(int (__thiscall ***)(int, char *, __int32, __int32, int))v47)(
                     v47,
                     &v57,
                     v26,
                     a2->m128_i32[0],
                     v25) )
    {
      v43 = (*(int (__thiscall **)(_BYTE *, int, char *))(*(_DWORD *)a3 + 0x28))(a3, v19, v61);
      v16[2] = v19;
      v39 = *(_DWORD *)a2->m128_i32[0];
      LOBYTE(v56) = *(_BYTE *)(a2->m128_i32[2] + 0xC);
      v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v43 + 8))(v43);
      v27 = 0x20 * (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 8))(v39);
      if ( (_BYTE)v56 )
        v28 = a3[v36 + 0x1294 + v27];
      else
        v28 = a3[v36 + 0xE94 + v27];
      *((_BYTE *)v16 + 1) = v28;
      *((_BYTE *)v16 + 2) = 0;
      v37 = (__int32 *)a2;
      v40 = 0;
      if ( *(_DWORD *)&a3[0x34 * v28 + 0x16C4] == 2 )
      {
        v29 = a2->m128_i32[1];
        v30 = a2[6];
        v31 = (__m128)xmmword_A9B570;
        v59[1] = a2->m128_i32[0];
        v37 = v59;
        v32 = a2->m128_i32[2];
        v59[0] = v29;
        v33 = a2->m128_i32[3];
        v40 = 1;
        v59[2] = v32;
        v59[3] = v33;
        v60[5] = _mm_xor_ps(v30, v31);
        sub_8B1F10(v60, a2 + 1);
      }
      v34 = &a3[0x34 * *((unsigned __int8 *)v16 + 1)];
      if ( *((_DWORD *)v34 + 0x5AE) )
      {
        *(_BYTE *)v16 = v40 + 4;
        v16[3] = 0xBF800000;
        *((_OWORD *)v16 + 1) = 0;
        *((_BYTE *)v16 + 3) = (*((int (__cdecl **)(__int32 *, _DWORD *, _DWORD *))v34 + 0x5A5))(v37, v16, v16 + 8)
                            - (_BYTE)v16;
      }
      else
      {
        *(_BYTE *)v16 = v40 + 2;
        *((_BYTE *)v16 + 3) = (*((int (__cdecl **)(__int32 *, _DWORD *, _DWORD *))v34 + 0x5A5))(v37, v16, v16 + 4)
                            - (_BYTE)v16;
      }
    }
    else
    {
      v16[2] = v19;
      *((_BYTE *)v16 + 1) = 0;
      *((_BYTE *)v16 + 2) = 0;
      *(_BYTE *)v16 = 0;
      *((_BYTE *)v16 + 3) = 0x10;
    }
    goto LABEL_35;
  }
  v23 = v46 + 0x20;
  if ( (*(_BYTE *)v46 & 0xE) != 4 )
    v23 = v46 + 0x10;
  (*(void (__cdecl **)(int, int, __int32))(0x34 * *(unsigned __int8 *)(v46 + 1) + v44 + 0x1698))(
    v46,
    v23,
    a2->m128_i32[3]);
  return ((int (*)(void))def_9351A0)();
}
