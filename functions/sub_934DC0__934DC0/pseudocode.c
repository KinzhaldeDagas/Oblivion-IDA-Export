int __cdecl sub_934DC0(
        int ***a1,
        __m128 *a2,
        _BYTE *a3,
        int *a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        _DWORD *a17,
        int a18,
        int a19)
{
  int v19; // ecx
  int *v20; // eax
  int v21; // edx
  _DWORD *v22; // ecx
  int v23; // eax
  int v24; // edx
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v26; // eax
  _DWORD *v27; // ecx
  _DWORD *v28; // eax
  int v29; // ebx
  _DWORD *v30; // ecx
  _DWORD *v31; // eax
  int v32; // esi
  unsigned int v33; // eax
  _DWORD *v34; // ecx
  _DWORD *v35; // eax
  int v36; // eax
  int v38; // edx
  __int32 v39; // eax
  int v40; // eax
  unsigned __int8 v41; // al
  __int32 v42; // eax
  __m128 v43; // xmm0
  __m128 v44; // xmm1
  __int32 v45; // edx
  __int32 v46; // eax
  int (__cdecl **v47)(__m128 *, int, int); // eax
  int v48; // eax
  int v49; // [esp+8h] [ebp-15D0h]
  __m128 *v50; // [esp+8h] [ebp-15D0h]
  __int32 v51; // [esp+8h] [ebp-15D0h]
  int v52; // [esp+20h] [ebp-15B8h]
  char v53; // [esp+20h] [ebp-15B8h]
  int v54; // [esp+28h] [ebp-15B0h]
  int v55; // [esp+28h] [ebp-15B0h]
  int v56; // [esp+28h] [ebp-15B0h]
  int v57; // [esp+30h] [ebp-15A8h]
  int v58; // [esp+34h] [ebp-15A4h]
  int v59; // [esp+3Ch] [ebp-159Ch]
  int v60; // [esp+40h] [ebp-1598h] BYREF
  int v61; // [esp+44h] [ebp-1594h]
  char v62; // [esp+48h] [ebp-1590h] BYREF
  int v63; // [esp+50h] [ebp-1588h]
  int v64; // [esp+54h] [ebp-1584h]
  int v65; // [esp+58h] [ebp-1580h]
  int v66; // [esp+5Ch] [ebp-157Ch]
  int v67; // [esp+60h] [ebp-1578h]
  int v68; // [esp+68h] [ebp-1570h]
  int v69; // [esp+6Ch] [ebp-156Ch]
  char v70; // [esp+73h] [ebp-1565h] BYREF
  int v71; // [esp+74h] [ebp-1564h]
  _DWORD v72[4]; // [esp+338h] [ebp-12A0h] BYREF
  __m128 v73[6]; // [esp+348h] [ebp-1290h] BYREF
  char v74[24]; // [esp+3B0h] [ebp-1228h] BYREF
  char v75[520]; // [esp+3C8h] [ebp-1210h] BYREF
  _DWORD v76[2]; // [esp+5D0h] [ebp-1008h] BYREF
  char v77; // [esp+5D8h] [ebp-1000h] BYREF
  char v78; // [esp+9D8h] [ebp-C00h] BYREF
  int savedregs; // [esp+15D8h] [ebp+0h] BYREF

  v68 = *(_DWORD *)(a6 + 0x3040); /*0x934de0*/
  if ( v68 || a3[0xC] ) /*0x934de9*/
  {
    *(_DWORD *)(a6 + 0x3040) = 0; /*0x934e1b*/
  }
  else
  {
    v76[0] = &v78; /*0x934df7*/
    v76[1] = &v77; /*0x934e0c*/
    *(_DWORD *)(a6 + 0x3040) = v76; /*0x934e13*/
  }
  v19 = *(_DWORD *)a2->m128_i32[2]; /*0x934e27*/
  v64 = a2->m128_i32[1]; /*0x934e2c*/
  v57 = v19; /*0x934e33*/
  v63 = *(_DWORD *)(v64 + 8); /*0x934e3a*/
  a2->m128_i32[1] = (__int32)&v62; /*0x934e42*/
  v20 = **a1; /*0x934e47*/
  v21 = *v20; /*0x934e49*/
  v22 = v20 + 4; /*0x934e4b*/
  v69 = (int)v20; /*0x934e4e*/
  v23 = (int)v20 + v21 + 0x10; /*0x934e52*/
  v24 = MEMORY[0xBA9DE4]; /*0x934e56*/
  v59 = (int)v22; /*0x934e5c*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x934e60*/
  v71 = v23; /*0x934e67*/
  v26 = *(_DWORD *)(ThreadLocalStoragePointer[v24] + 0x19C); /*0x934e72*/
  v27 = *(_DWORD **)(v26 + 0x64); /*0x934e78*/
  v67 = 0; /*0x934e7d*/
  v65 = 1; /*0x934e81*/
  v66 = 0; /*0x934e89*/
  if ( v27 ) /*0x934e8d*/
  {
    --*(_DWORD *)(v26 + 0xA8); /*0x934e8f*/
    *(_DWORD *)(v26 + 0x64) = *v27; /*0x934e97*/
    v28 = v27; /*0x934e9a*/
  }
  else
  {
    v28 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x18))(unk_BA7D98, 0xC, 0x1C); /*0x934eaa*/
  }
  if ( v28 ) /*0x934eaf*/
    *v28 = 0; /*0x934eb1*/
  else
    v28 = 0; /*0x934eb5*/
  v61 = (int)v28; /*0x934ec1*/
  v29 = (int)(v28 + 4); /*0x934ec5*/
  if ( !a4 ) /*0x934ed9*/
  {
    if ( (*(unsigned __int8 *)(v59 + 3) >> 4) - 1 >= 0 ) /*0x934ee7*/
    {
      v30 = (_DWORD *)(v59 + 0xC); /*0x934ee9*/
      v31 = v28 + 6; /*0x934eef*/
      v58 = *(unsigned __int8 *)(v59 + 3) >> 4; /*0x934ef2*/
      do /*0x934f1b*/
      {
        v31[0xFFFFFFFE] = v30[0xFFFFFFFD]; /*0x934ef9*/
        v31[0xFFFFFFFF] = v30[0xFFFFFFFE]; /*0x934eff*/
        *v31 = *(_DWORD *)((char *)v31 + v59 - v29); /*0x934f05*/
        v31[1] = *v30; /*0x934f09*/
        v30 += 4; /*0x934f10*/
        v31 += 4; /*0x934f13*/
        --v58; /*0x934f17*/
      }
      while ( v58 ); /*0x934f1b*/
    }
    v32 = *(_DWORD *)(v59 + 8); /*0x934f29*/
    goto LABEL_36; /*0x934f36*/
  }
  v32 = *a4; /*0x934f3e*/
  v33 = *(_DWORD *)(v59 + 8); /*0x934f40*/
  if ( v33 == *a4 ) /*0x934f4b*/
  {
    v54 = (*(unsigned __int8 *)(v59 + 3) >> 4) - 1; /*0x934f55*/
    if ( v54 >= 0 ) /*0x934f59*/
    {
      v34 = (_DWORD *)(v59 + 0xC); /*0x934f5b*/
      v60 = v59 - v29; /*0x934f60*/
      v35 = (_DWORD *)(v29 + 8); /*0x934f69*/
      v55 = v54 + 1; /*0x934f6c*/
      do /*0x934f99*/
      {
        v35[0xFFFFFFFE] = v34[0xFFFFFFFD]; /*0x934f73*/
        v35[0xFFFFFFFF] = v34[0xFFFFFFFE]; /*0x934f79*/
        *v35 = *(_DWORD *)((char *)v35 + v60); /*0x934f83*/
        v35[1] = *v34; /*0x934f87*/
        v34 += 4; /*0x934f8e*/
        v35 += 4; /*0x934f91*/
        --v55; /*0x934f95*/
      }
      while ( v55 ); /*0x934f99*/
    }
LABEL_35:
    ++a4; /*0x935194*/
LABEL_36:
    switch ( *(_BYTE *)v29 ) /*0x9351a0*/
    {
      case 0: /*0x9351a0*/
      case 1: /*0x9351a0*/
        return def_9351A0(
                 v29 + 0x10,
                 &savedregs,
                 (int)a2,
                 (int)a1,
                 (int)a2,
                 (int)a3,
                 (int)a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19);
      case 2: /*0x9351a0*/
        JUMPOUT(0x93521A); /*0x93521a*/
      case 3: /*0x9351a0*/
        JUMPOUT(0x93526C); /*0x93526c*/
      case 4: /*0x9351a0*/
        JUMPOUT(0x9356BD); /*0x9356bd*/
      case 5: /*0x9351a0*/
        JUMPOUT(0x93538F); /*0x93538f*/
      case 6: /*0x9351a0*/
        v48 = (*(int (__thiscall **)(_BYTE *, int, char *))(*(_DWORD *)a3 + 0x28))(a3, v32, v75); /*0x9351b5*/
        v51 = a2->m128_i32[2]; /*0x9351bf*/
        v60 = v48; /*0x9351c4*/
        v61 = v32; /*0x9351c8*/
        (*(void (__thiscall **)(_DWORD, __int32, int *, __int32, int))(**(_DWORD **)(v29 + 4) + 0x14))( /*0x9351d5*/
          *(_DWORD *)(v29 + 4),
          a2->m128_i32[0],
          &v60,
          v51,
          a6);
        break; /*0x9351d5*/
      default:
        JUMPOUT(0x9351DB); /*0x9351db*/
    }
    return def_9351A0( /*0x9351d9*/
             v29 + 0x10,
             &savedregs,
             (int)a2,
             (int)a1,
             (int)a2,
             (int)a3,
             (int)a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19);
  }
  if ( v33 >= *a4 ) /*0x934fae*/
  {
    v38 = *(_DWORD *)(a2->m128_i32[1] + 0xC); /*0x934fef*/
    v39 = a2->m128_i32[2]; /*0x934ff2*/
    v60 = *(_DWORD *)(v39 + 4); /*0x934ff8*/
    if ( *(_BYTE *)(**(int (__thiscall ***)(int, char *, __int32, __int32, int))v60)( /*0x93501b*/
                     v60,
                     &v70,
                     v39,
                     a2->m128_i32[0],
                     v38) )
    {
      v56 = (*(int (__thiscall **)(_BYTE *, int, char *))(*(_DWORD *)a3 + 0x28))(a3, v32, v74); /*0x935035*/
      *(_DWORD *)(v29 + 8) = v32; /*0x93503d*/
      v52 = *(_DWORD *)a2->m128_i32[0]; /*0x935047*/
      LOBYTE(v69) = *(_BYTE *)(a2->m128_i32[2] + 0xC); /*0x93504e*/
      v49 = (*(int (__thiscall **)(int))(*(_DWORD *)v56 + 8))(v56); /*0x93505d*/
      v40 = 0x20 * (*(int (__thiscall **)(int))(*(_DWORD *)v52 + 8))(v52); /*0x93506a*/
      if ( (_BYTE)v69 ) /*0x935073*/
        v41 = a3[v49 + 0x1294 + v40]; /*0x93507b*/
      else
        v41 = a3[v49 + 0xE94 + v40]; /*0x93508b*/
      *(_BYTE *)(v29 + 1) = v41; /*0x935097*/
      *(_BYTE *)(v29 + 2) = 0; /*0x9350a0*/
      v50 = a2; /*0x9350ac*/
      v53 = 0; /*0x9350b0*/
      if ( *(_DWORD *)&a3[0x34 * v41 + 0x16C4] == 2 ) /*0x9350b8*/
      {
        v42 = a2->m128_i32[1]; /*0x9350bc*/
        v43 = a2[6]; /*0x9350bf*/
        v44 = (__m128)xmmword_A9B570; /*0x9350c3*/
        v72[1] = a2->m128_i32[0]; /*0x9350ca*/
        v50 = (__m128 *)v72; /*0x9350db*/
        v45 = a2->m128_i32[2]; /*0x9350df*/
        v72[0] = v42; /*0x9350e2*/
        v46 = a2->m128_i32[3]; /*0x9350e9*/
        v53 = 1; /*0x9350f7*/
        v72[2] = v45; /*0x9350ff*/
        v72[3] = v46; /*0x935106*/
        v73[5] = _mm_xor_ps(v43, v44); /*0x93510d*/
        sub_8B1F10(v73, a2 + 1); /*0x935115*/
      }
      v47 = (int (__cdecl **)(__m128 *, int, int))&a3[0x34 * *(unsigned __int8 *)(v29 + 1)]; /*0x93512c*/
      if ( v47[0x5AE] ) /*0x935125*/
      {
        *(_BYTE *)v29 = v53 + 4; /*0x93513d*/
        *(_DWORD *)(v29 + 0xC) = 0xBF800000; /*0x935146*/
        *(_OWORD *)(v29 + 0x10) = 0; /*0x93514d*/
        *(_BYTE *)(v29 + 3) = v47[0x5A5](v50, v29, v29 + 0x20) - v29; /*0x935160*/
      }
      else
      {
        *(_BYTE *)v29 = v53 + 2; /*0x935168*/
        *(_BYTE *)(v29 + 3) = v47[0x5A5](v50, v29, v29 + 0x10) - v29; /*0x93517d*/
      }
    }
    else
    {
      *(_DWORD *)(v29 + 8) = v32; /*0x935182*/
      *(_BYTE *)(v29 + 1) = 0; /*0x935185*/
      *(_BYTE *)(v29 + 2) = 0; /*0x935189*/
      *(_BYTE *)v29 = 0; /*0x93518d*/
      *(_BYTE *)(v29 + 3) = 0x10; /*0x935190*/
    }
    goto LABEL_35; /*0x935163*/
  }
  v36 = v59 + 0x20; /*0x934fb6*/
  if ( (*(_BYTE *)v59 & 0xE) != 4 ) /*0x934fb9*/
    v36 = v59 + 0x10; /*0x934fbb*/
  (*(void (__cdecl **)(int, int, __int32))(0x34 * *(unsigned __int8 *)(v59 + 1) + v57 + 0x1698))( /*0x934fdd*/
    v59,
    v36,
    a2->m128_i32[3]);
  return def_9351A0(
           v29,
           &savedregs,
           (int)a2,
           (int)a1,
           (int)a2,
           (int)a3,
           (int)a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19);
}
