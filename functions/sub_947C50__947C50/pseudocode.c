int __thiscall sub_947C50(LPCRITICAL_SECTION *this, const char *a2, int a3)
{
  LPCRITICAL_SECTION *v3; // ebp
  char *v4; // esi
  int v5; // ebx
  int v6; // edi
  int v7; // ebx
  LPCRITICAL_SECTION *v8; // edi
  int v9; // ecx
  int v10; // esi
  unsigned int v11; // ebp
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // esi
  int v16; // eax
  _DWORD *v17; // ebp
  char *v18; // eax
  _DWORD *v19; // edx
  _DWORD *v20; // ecx
  int v21; // esi
  int v22; // ebp
  int v23; // eax
  _DWORD *v24; // esi
  _DWORD *v25; // ecx
  int v26; // eax
  int v27; // ecx
  PRTL_CRITICAL_SECTION_DEBUG_0 *v28; // eax
  int v29; // ecx
  char *v30; // ecx
  signed int v31; // edi
  _DWORD *v32; // eax
  int v33; // ecx
  _DWORD *v34; // eax
  _DWORD *v35; // ecx
  int v36; // eax
  char v39; // [esp+14h] [ebp-14h]
  int v40; // [esp+14h] [ebp-14h]
  int v41; // [esp+18h] [ebp-10h]
  _DWORD *v42; // [esp+1Ch] [ebp-Ch]

  v3 = this; /*0x947c56*/
  v4 = 0; /*0x947c60*/
  v39 = 0; /*0x947c62*/
  sub_8A7720(*(this + 6)); /*0x947c67*/
  v5 = 0; /*0x947c6f*/
  if ( (int)v3[4] <= 0 ) /*0x947c73*/
    goto LABEL_7; /*0x947c73*/
  v6 = 0; /*0x947c75*/
  do /*0x947cab*/
  {
    if ( !sub_8B1770(*(const char **)((char *)&v3[3]->DebugInfo + v6), a2) ) /*0x947c8c*/
    {
      v4 = (char *)v3[3] + v6; /*0x947c9b*/
      v39 = 1; /*0x947c9d*/
    }
    ++v5; /*0x947ca5*/
    v6 += 0xC; /*0x947ca6*/
  }
  while ( v5 < (int)v3[4] ); /*0x947cab*/
  if ( !v39 )
  {
LABEL_7:
    v7 = (int)v3[4]; /*0x947cb9*/
    v8 = v3 + 3; /*0x947cbc*/
    v9 = v7 + 1; /*0x947cbf*/
    if ( v7 + 1 > v7 )
    {
      v15 = (int)v3[5]; /*0x947cf5*/
      v41 = v15; /*0x947d01*/
      if ( v9 > (v15 & 0x3FFFFFFF) )
      {
        v16 = 2 * (v15 & 0x3FFFFFFF); /*0x947d0b*/
        if ( v9 >= v16 ) /*0x947d0f*/
          v16 = v7 + 1; /*0x947d11*/
        v17 = *v8; /*0x947d15*/
        v42 = *v8; /*0x947d17*/
        *v8 = 0; /*0x947d1b*/
        v8[1] = 0; /*0x947d21*/
        v8[2] = (LPCRITICAL_SECTION)0x80000000; /*0x947d28*/
        if ( v16 > 0 )
          sub_8A6E40((const void **)v8, v16 < 0 ? 0 : v16, 0xC);
        v18 = (char *)*v8; /*0x947d49*/
        if ( v7 > 0 ) /*0x947d4b*/
        {
          v19 = v17; /*0x947d4f*/
          v20 = v18 + 4; /*0x947d51*/
          v21 = (char *)v17 - v18; /*0x947d54*/
          v22 = v7; /*0x947d56*/
          do /*0x947d7f*/
          {
            if ( v20 != (_DWORD *)4 ) /*0x947d5d*/
            {
              v23 = *v19 - 0xC; /*0x947d61*/
              ++*(_DWORD *)(v23 + 8); /*0x947d64*/
              v20[0xFFFFFFFF] = v23 + 0xC; /*0x947d6a*/
              *v20 = *(_DWORD *)((char *)v20 + v21); /*0x947d70*/
              v20[1] = v19[2]; /*0x947d75*/
            }
            v20 += 3; /*0x947d78*/
            v19 += 3; /*0x947d7b*/
            --v22; /*0x947d7e*/
          }
          while ( v22 ); /*0x947d7f*/
          v17 = v42; /*0x947d81*/
          v15 = v41; /*0x947d85*/
        }
        v8[1] = (LPCRITICAL_SECTION)v7; /*0x947d8b*/
        if ( v7 > 0 ) /*0x947d8e*/
        {
          v24 = v17; /*0x947d90*/
          v40 = v7; /*0x947d92*/
          do /*0x947db5*/
          {
            v25 = (_DWORD *)(*v24 - 0xC); /*0x947d9b*/
            v26 = *(_DWORD *)(*v24 - 4) - 1; /*0x947d9e*/
            v25[2] = v26; /*0x947d9f*/
            if ( v26 < 0 ) /*0x947da2*/
              sub_8B1930(v25); /*0x947da4*/
            v24 += 3; /*0x947dad*/
            --v40; /*0x947db1*/
          }
          while ( v40 ); /*0x947db5*/
          v15 = v41; /*0x947db7*/
        }
        if ( v15 >= 0 ) /*0x947dbd*/
        {
          v27 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x947dcf*/
          if ( !v27 ) /*0x947dd7*/
            v27 = unk_BA7D9C; /*0x947dd9*/
          sub_8A75D0(v27, v17, 0xC * (v15 & 0x3FFFFFFF), 0x14); /*0x947df1*/
        }
        v3 = this; /*0x947df6*/
      }
      if ( !__OFSUB__(v7, v7 + 1) ) /*0x947e01*/
      {
        v28 = &(*v8)->DebugInfo + 3 * v7; /*0x947e06*/
        v29 = 1; /*0x947e09*/
        do /*0x947e24*/
        {
          if ( v28 ) /*0x947e12*/
          {
            ++unk_BA7FC0; /*0x947e14*/
            *v28 = (PRTL_CRITICAL_SECTION_DEBUG_0)&unk_BA7FC4; /*0x947e1a*/
          }
          v28 += 3; /*0x947e20*/
          --v29; /*0x947e23*/
        }
        while ( v29 ); /*0x947e24*/
      }
    }
    else
    {
      v10 = 0xC * v9; /*0x947ccb*/
      v11 = 0xFFFFFFFF; /*0x947cce*/
      do /*0x947cea*/
      {
        v12 = *(int *)((char *)&(*v8)->DebugInfo + v10); /*0x947cd2*/
        v13 = *(_DWORD *)(v12 - 4); /*0x947cd5*/
        v14 = (_DWORD *)(v12 - 0xC); /*0x947cd8*/
        v14[2] = --v13; /*0x947cdc*/
        if ( v13 < 0 ) /*0x947cdf*/
          sub_8B1930(v14); /*0x947ce1*/
        v10 += 0xC; /*0x947ce6*/
        --v11; /*0x947ce9*/
      }
      while ( v11 ); /*0x947cea*/
      v3 = this; /*0x947cec*/
    }
    v30 = (char *)*v8; /*0x947e26*/
    v8[1] = (LPCRITICAL_SECTION)(v7 + 1); /*0x947e2b*/
    v4 = &v30[0xC * v7]; /*0x947e37*/
    if ( a2 && *a2 ) /*0x947e3c*/
    {
      v31 = sub_8B1860(a2); /*0x947e47*/
      v32 = *(_DWORD **)v4; /*0x947e49*/
      if ( *(_DWORD *)(*(_DWORD *)v4 - 8) < v31 || (int)v32[0xFFFFFFFF] > 0 ) /*0x947e5a*/
      {
        v33 = v32[0xFFFFFFFF]; /*0x947e5c*/
        v34 = v32 + 0xFFFFFFFD; /*0x947e5f*/
        v34[2] = --v33; /*0x947e63*/
        if ( v33 < 0 ) /*0x947e66*/
          sub_8B1930(v34); /*0x947e6a*/
        *(_DWORD *)v4 = sub_8B1950(v31) + 3; /*0x947e7b*/
      }
      sub_8B1890(*(void **)v4, a2, v31 + 1); /*0x947e85*/
      *(_DWORD *)(*(_DWORD *)v4 - 0xC) = v31; /*0x947e8f*/
    }
    else
    {
      v35 = (_DWORD *)(*(_DWORD *)v4 - 0xC); /*0x947e99*/
      v36 = *(_DWORD *)(*(_DWORD *)v4 - 4) - 1; /*0x947e9c*/
      v35[2] = v36; /*0x947e9d*/
      if ( v36 < 0 ) /*0x947ea0*/
        sub_8B1930(v35); /*0x947ea2*/
      ++unk_BA7FC0; /*0x947ea7*/
      *(_DWORD *)v4 = &unk_BA7FC4; /*0x947ead*/
    }
    *((_DWORD *)v4 + 1) = a3; /*0x947eb7*/
    *((_DWORD *)v4 + 2) = v3[2]; /*0x947ebd*/
    v3[2] = (LPCRITICAL_SECTION)((char *)v3[2] + 1); /*0x947ec0*/
  }
  LeaveCriticalSection(v3[6]); /*0x947ec7*/
  return *((_DWORD *)v4 + 2); /*0x947ed0*/
}
