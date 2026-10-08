int __userpurge sub_90E860@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  char v4; // al
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  _DWORD *v11; // eax
  unsigned int *v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  char v16; // al
  int i; // ecx
  int v18; // eax
  int v19; // ebx
  int v20; // edi
  int v21; // eax
  int v22; // ebp
  _DWORD *v23; // ebx
  int v24; // edx
  int v25; // eax
  int v26; // edi
  char v27; // al
  int j; // ecx
  int v29; // eax
  _DWORD *ThreadLocalStoragePointer; // edi
  int v31; // eax
  int v32; // ebx
  int v33; // ebp
  _DWORD *v34; // edi
  int v35; // ebp
  int v36; // ebx
  int k; // eax
  int v38; // eax
  int v39; // ebx
  int v40; // ebp
  int v41; // eax
  int v42; // ecx
  int v43; // ebp
  _DWORD *v44; // edi
  int v45; // ebx
  int v46; // ebx
  int v47; // ebp
  int v48; // eax
  bool v49; // cc
  int v50; // edi
  int v51; // edx
  _DWORD *v52; // eax
  int v53; // edx
  char *v55; // [esp+10h] [ebp-A8h]
  char *v56; // [esp+28h] [ebp-90h] BYREF
  int v57; // [esp+2Ch] [ebp-8Ch]
  int v58; // [esp+30h] [ebp-88h]
  char *v59; // [esp+34h] [ebp-84h] BYREF
  int v60; // [esp+38h] [ebp-80h]
  int v61; // [esp+3Ch] [ebp-7Ch]
  _DWORD *v62; // [esp+40h] [ebp-78h]
  int v63; // [esp+44h] [ebp-74h]
  int v64; // [esp+48h] [ebp-70h]
  int v65; // [esp+4Ch] [ebp-6Ch]
  int v66; // [esp+50h] [ebp-68h]
  int *v67; // [esp+54h] [ebp-64h]
  _DWORD *v68; // [esp+58h] [ebp-60h] BYREF
  int v69; // [esp+5Ch] [ebp-5Ch]
  int v70; // [esp+60h] [ebp-58h]
  _DWORD v71[10]; // [esp+64h] [ebp-54h] BYREF
  _DWORD v72[4]; // [esp+8Ch] [ebp-2Ch] BYREF
  char *v73[4]; // [esp+9Ch] [ebp-1Ch] BYREF
  char *v74[3]; // [esp+ACh] [ebp-Ch] BYREF

  v4 = *(_BYTE *)(a3 + 0x48); /*0x90e872*/
  v6 = *(_DWORD *)(a3 + 0x1C); /*0x90e878*/
  v62 = a1; /*0x90e87b*/
  sub_9183A0(v72, v6, v4); /*0x90e885*/
  if ( *(_BYTE *)(*(_DWORD *)a3 + 8) )
  {
    v7 = 0; /*0x90e897*/
    v59 = 0; /*0x90e8a0*/
    v60 = 0; /*0x90e8a4*/
    v61 = 0x80000000; /*0x90e8a8*/
    sub_8B0E10(v74, a2); /*0x90e8b0*/
    v8 = 2 * a1[0x14]; /*0x90e8bc*/
    if ( v8 > 0 ) /*0x90e8c6*/
    {
      if ( v8 < 2 * (v61 & 0x3FFFFFFF) ) /*0x90e8cc*/
        v8 = 2 * (v61 & 0x3FFFFFFF); /*0x90e8ce*/
      sub_8A6E40((const void **)&v59, v8, 4); /*0x90e8d8*/
    }
    if ( (int)a1[3] > 0 ) /*0x90e8e3*/
    {
      v9 = 0; /*0x90e8e5*/
      do /*0x90e945*/
      {
        v10 = a1[2]; /*0x90e8e7*/
        v11 = *(_DWORD **)(v10 + v9 + 4); /*0x90e8ea*/
        v12 = (unsigned int *)(v9 + v10); /*0x90e8ee*/
        if ( v11 == unk_BA8788 ) /*0x90e8f5*/
        {
          sub_8B0E80(v74, *v12, v60 / 2); /*0x90e90b*/
          *(_DWORD *)&v59[4 * v60] = *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * v7); /*0x90e91e*/
          v13 = *(_DWORD *)(a3 + 0x10); /*0x90e925*/
          ++v60; /*0x90e929*/
          *(_DWORD *)&v59[4 * v60++] = *(_DWORD *)(v13 + 8 * v7 + 4); /*0x90e935*/
        }
        ++v7; /*0x90e93f*/
        v9 += 0x18; /*0x90e940*/
      }
      while ( v7 < a1[3] ); /*0x90e945*/
    }
    v14 = sub_953130(v72); /*0x90e94b*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v14 + 0x18))( /*0x90e95d*/
      v14,
      *(_DWORD *)(*(_DWORD *)(a3 + 4) + 0x44),
      0);
    sub_918480(v72, v59, v60); /*0x90e96e*/
    v15 = sub_953130(v72); /*0x90e97c*/
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x1C))(v15); /*0x90e982*/
    v68 = v71; /*0x90e989*/
    v70 = 0x80000020; /*0x90e98d*/
    for ( i = 0; i < 0x10; ++i ) /*0x90e995*/
      *((_BYTE *)v68 + i) = 0xFF; /*0x90e99b*/
    v18 = v16 & 0xF; /*0x90e9a5*/
    v69 = 0x10; /*0x90e9a8*/
    if ( v18 ) /*0x90e9b0*/
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v15 + 0xC))(v15, v68, 0x10 - v18); /*0x90e9c3*/
    v19 = MEMORY[0xBA9DE4]; /*0x90e9cc*/
    if ( v70 >= 0 ) /*0x90e9d2*/
      sub_8A75D0( /*0x90e9f1*/
        *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v19) + 0x19C),
        v68,
        v70 & 0x3FFFFFFF,
        0x14);
    v20 = 0; /*0x90e9f9*/
    v21 = 3 * a1[0x13]; /*0x90e9fb*/
    v56 = 0; /*0x90ea00*/
    v57 = 0; /*0x90ea04*/
    v58 = 0x80000000; /*0x90ea08*/
    if ( v21 > 0 )
      sub_8A6E40((const void **)&v56, v21 < 0 ? 0 : v21, 4);
    if ( (int)a1[3] > 0 ) /*0x90ea31*/
    {
      v22 = 0; /*0x90ea37*/
      do /*0x90eaab*/
      {
        v23 = v62; /*0x90ea40*/
        if ( *(_DWORD **)(v62[2] + v22 + 4) != unk_BA8788 ) /*0x90ea4f*/
        {
          *(_DWORD *)&v56[4 * v57] = *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * v20); /*0x90ea5f*/
          v24 = *(_DWORD *)(a3 + 0x10); /*0x90ea66*/
          ++v57; /*0x90ea6a*/
          *(_DWORD *)&v56[4 * v57++] = *(_DWORD *)(v24 + 8 * v20 + 4); /*0x90ea76*/
          v25 = sub_8B1550((int *)v74, *(_DWORD *)(v23[2] + v22 + 4), 0xFFFFFFFF); /*0x90ea8e*/
          *(_DWORD *)&v56[4 * v57++] = v25; /*0x90ea9b*/
        }
        ++v20; /*0x90eaa5*/
        v22 += 0x18; /*0x90eaa6*/
      }
      while ( v20 < v23[3] ); /*0x90eaab*/
      a1 = v62; /*0x90eaad*/
      v19 = MEMORY[0xBA9DE4]; /*0x90eab1*/
    }
    sub_918480(v72, v56, v57); /*0x90eac5*/
    v26 = sub_953130(v72); /*0x90ead3*/
    v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x1C))(v26); /*0x90ead9*/
    v68 = v71; /*0x90eae0*/
    v70 = 0x80000020; /*0x90eae4*/
    for ( j = 0; j < 0x10; ++j ) /*0x90eaec*/
      *((_BYTE *)v68 + j) = 0xFF; /*0x90eaf4*/
    v29 = v27 & 0xF; /*0x90eafe*/
    v69 = 0x10; /*0x90eb01*/
    if ( v29 ) /*0x90eb09*/
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v26 + 0xC))(v26, v68, 0x10 - v29); /*0x90eb1c*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90eb25*/
    if ( v70 >= 0 ) /*0x90eb2c*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v19] + 0x19C), v68, v70 & 0x3FFFFFFF, 0x14); /*0x90eb44*/
    if ( v58 >= 0 ) /*0x90eb4f*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v19] + 0x19C), v56, 4 * v58, 0x14); /*0x90eb6a*/
    sub_8B0E60(v74); /*0x90eb76*/
    if ( v61 >= 0 ) /*0x90eb81*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v19] + 0x19C), v59, 4 * v61, 0x14); /*0x90eb9c*/
  }
  v31 = *(_DWORD *)(a3 + 8); /*0x90eba1*/
  v32 = 0; /*0x90eba4*/
  v64 = 0; /*0x90eba8*/
  if ( v31 > 0 )
  {
    v66 = 0; /*0x90ebb2*/
    v65 = 0; /*0x90ebb6*/
    do
    {
      v33 = *(_DWORD *)(a3 + 4); /*0x90ebc7*/
      v34 = (_DWORD *)(v66 + *(_DWORD *)(a3 + 0x30)); /*0x90ebd0*/
      v59 = 0; /*0x90ebd2*/
      v60 = 0; /*0x90ebd6*/
      v61 = 0x80000000; /*0x90ebda*/
      v35 = v65 + v33; /*0x90ebe5*/
      v36 = 3 * v34[1]; /*0x90ebe7*/
      v63 = v35; /*0x90ebec*/
      if ( v36 > 0 ) /*0x90ebf0*/
      {
        sub_8A6E40((const void **)&v59, v36, 4); /*0x90ebfa*/
        for ( k = 0; k < v36; ++k ) /*0x90ec02*/
          *(_DWORD *)&v59[4 * k] = 0xFFFFFFFF; /*0x90ec08*/
      }
      v60 = v36; /*0x90ec14*/
      v38 = v34[1]; /*0x90ec18*/
      v39 = 0; /*0x90ec1b*/
      v67 = 0; /*0x90ec1f*/
      if ( v38 > 0 ) /*0x90ec23*/
      {
        v40 = 0; /*0x90ec25*/
        do /*0x90ec96*/
        {
          v41 = sub_8B1550(v62 + 5, *(_DWORD *)(*v34 + v40 + 4), 0xFFFFFFFE); /*0x90ec40*/
          if ( v41 >= 0 && *(int *)(*(_DWORD *)(a3 + 0x10) + 8 * v41) >= 0 ) /*0x90ec50*/
          {
            *(_DWORD *)&v59[v39] = *(_DWORD *)(*v34 + v40) - *(_DWORD *)(v63 + 0x14); /*0x90ec62*/
            *(_DWORD *)&v59[v39 + 4] = *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * v41); /*0x90ec6f*/
            *(_DWORD *)&v59[v39 + 8] = *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * v41 + 4); /*0x90ec7e*/
            v39 += 0xC; /*0x90ec82*/
          }
          v42 = v34[1]; /*0x90ec89*/
          v40 += 0xC; /*0x90ec8d*/
          v67 = (int *)((char *)v67 + 1); /*0x90ec92*/
        }
        while ( (int)v67 < v42 ); /*0x90ec96*/
        v35 = v63; /*0x90ec98*/
      }
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a3 + 0x1C) + 0x18))( /*0x90ecac*/
        *(_DWORD *)(a3 + 0x1C),
        *(_DWORD *)(v35 + 0x14) + *(_DWORD *)(v35 + 0x1C),
        0);
      sub_918480(v72, v59, v60); /*0x90ecbd*/
      if ( v61 >= 0 ) /*0x90ecc8*/
        sub_8A75D0( /*0x90ecf0*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          v59,
          4 * v61,
          0x14);
      v43 = v65 + *(_DWORD *)(a3 + 4); /*0x90ed00*/
      v44 = (_DWORD *)(v66 + *(_DWORD *)(a3 + 0x3C)); /*0x90ed07*/
      v56 = 0; /*0x90ed09*/
      v57 = 0; /*0x90ed0d*/
      v58 = 0x80000000; /*0x90ed11*/
      v45 = 3 * v44[1]; /*0x90ed1c*/
      v63 = v43; /*0x90ed21*/
      if ( v45 > 0 )
        sub_8A6E40((const void **)&v56, v45 < 0 ? 0 : v45, 4);
      v57 = v45; /*0x90ed43*/
      v46 = 0; /*0x90ed4a*/
      if ( (int)v44[1] > 0 ) /*0x90ed4e*/
      {
        v47 = 0; /*0x90ed50*/
        do /*0x90eda1*/
        {
          *(_DWORD *)&v56[v47] = *(_DWORD *)(*v44 + 8 * v46) - *(_DWORD *)(v63 + 0x14); /*0x90ed62*/
          *(_DWORD *)&v56[v47 + 4] = 0; /*0x90ed69*/
          v55 = *(char **)(*v44 + 8 * v46 + 4); /*0x90ed85*/
          v67 = (int *)&v56[v47 + 8]; /*0x90ed89*/
          v48 = sub_942B40(v62 + 0xE, v55, 0xFFFFFFFF); /*0x90ed8d*/
          *v67 = v48; /*0x90ed96*/
          ++v46; /*0x90ed9b*/
          v47 += 0xC; /*0x90ed9c*/
        }
        while ( v46 < v44[1] ); /*0x90eda1*/
        v43 = v63; /*0x90eda3*/
      }
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a3 + 0x1C) + 0x18))( /*0x90edb7*/
        *(_DWORD *)(a3 + 0x1C),
        *(_DWORD *)(v43 + 0x14) + *(_DWORD *)(v43 + 0x20),
        0);
      sub_918480(v72, v56, v57); /*0x90edc8*/
      if ( v58 >= 0 ) /*0x90edd3*/
        sub_8A75D0( /*0x90edfb*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          v56,
          4 * v58,
          0x14);
      v49 = ++v64 < *(_DWORD *)(a3 + 8); /*0x90ee16*/
      v65 += 0x30; /*0x90ee1c*/
      v66 += 0xC; /*0x90ee20*/
    }
    while ( v49 );
    a1 = v62; /*0x90ee2a*/
    v32 = 0; /*0x90ee2e*/
  }
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a3 + 0x1C) + 0x18))(*(_DWORD *)(a3 + 0x1C), a4, 0); /*0x90ee3e*/
  if ( *(int *)(a3 + 8) > 0 ) /*0x90ee48*/
  {
    v50 = 0; /*0x90ee4d*/
    do /*0x90eeba*/
    {
      v51 = *(_DWORD *)(a3 + 0x20); /*0x90ee53*/
      v68 = 0; /*0x90ee5b*/
      v69 = 0; /*0x90ee5f*/
      v71[0] = 0; /*0x90ee63*/
      v71[1] = 0; /*0x90ee67*/
      v71[3] = 0; /*0x90ee6b*/
      v71[4] = 0; /*0x90ee6f*/
      v71[6] = 0; /*0x90ee73*/
      v71[7] = 0; /*0x90ee77*/
      v71[9] = 0; /*0x90ee7b*/
      v70 = 0x80000000; /*0x90ee7f*/
      v71[2] = 0x80000000; /*0x90ee83*/
      v71[5] = 0x80000000; /*0x90ee87*/
      v71[8] = 0x80000000; /*0x90ee8b*/
      (*(void (__thiscall **)(int, _DWORD, int, _DWORD *, _DWORD **))(v51 + 8))( /*0x90eea5*/
        a3 + 0x20,
        *(_DWORD *)(a3 + 0x1C),
        v50 + *(_DWORD *)(a3 + 4),
        unk_BA9498,
        &v68);
      sub_941400(&v68); /*0x90eeac*/
      ++v32; /*0x90eeb4*/
      v50 += 0x30; /*0x90eeb5*/
    }
    while ( v32 < *(_DWORD *)(a3 + 8) ); /*0x90eeba*/
    a1 = v62; /*0x90eebc*/
  }
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a3 + 0x1C) + 0x18))(*(_DWORD *)(a3 + 0x1C), 0x18, 0); /*0x90eeca*/
  v52 = (_DWORD *)sub_942CA0((_DWORD *)(a3 + 0x20)); /*0x90eed0*/
  v53 = *(_DWORD *)(a3 + 0x1C); /*0x90eedd*/
  LOBYTE(v64) = BYTE1(*v52) != BYTE1(dword_B2FDE4); /*0x90eee5*/
  sub_9183A0(v73, v53, v64); /*0x90eef6*/
  sub_918440(v73, *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * a1[0x11])); /*0x90ef0c*/
  sub_918440(v73, *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * a1[0x11] + 4)); /*0x90ef23*/
  sub_918440(v73, *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * a1[0x12])); /*0x90ef39*/
  sub_918440(v73, *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * a1[0x12] + 4)); /*0x90ef50*/
  sub_918180(v73); /*0x90ef5c*/
  return sub_918180(v72); /*0x90ef6a*/
}
