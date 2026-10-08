void __thiscall sub_8DF6B0(struct _RTL_CRITICAL_SECTION *this, int *a2)
{
  int *v2; // ebx
  _RTL_CRITICAL_SECTION_0 *v3; // edi
  _DWORD *v4; // esi
  __m128 *v5; // ebx
  int i; // edi
  int v7; // ecx
  _DWORD *ThreadLocalStoragePointer; // edx
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // ecx
  unsigned __int64 v12; // rax
  int j; // edi
  int v14; // ecx
  _DWORD *v15; // edx
  int v16; // eax
  int v17; // esi
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  int *v20; // esi
  int v21; // esi
  int v22; // ecx
  int v23; // edi
  _DWORD *v24; // eax
  int v25; // edx
  bool v26; // cf
  _DWORD *v27; // esi
  unsigned __int64 v28; // rax
  bool v29; // sf
  int v30; // eax
  unsigned int v31; // esi
  int v32; // edi
  unsigned int v33; // edi
  int v34; // ebx
  int v35; // ecx
  int v36; // edi
  _DWORD *v37; // ecx
  unsigned __int64 v38; // rax
  int v39; // [esp-8h] [ebp-3088h]
  int v40; // [esp-8h] [ebp-3088h]
  int v41; // [esp-8h] [ebp-3088h]
  int v42; // [esp+0h] [ebp-3080h]
  int v43; // [esp+0h] [ebp-3080h]
  int v44; // [esp+Ch] [ebp-3074h] BYREF
  int v45; // [esp+10h] [ebp-3070h]
  int v46; // [esp+14h] [ebp-306Ch]
  LPCRITICAL_SECTION lpCriticalSection; // [esp+18h] [ebp-3068h]
  int v48; // [esp+1Ch] [ebp-3064h]
  int v49; // [esp+20h] [ebp-3060h]
  int v50; // [esp+24h] [ebp-305Ch]
  int v51; // [esp+28h] [ebp-3058h]
  int v52; // [esp+2Ch] [ebp-3054h]
  float v53[3092]; // [esp+30h] [ebp-3050h] BYREF

  v2 = a2; /*0x8df6c1*/
  v3 = (_RTL_CRITICAL_SECTION_0 *)(this + 8); /*0x8df6c6*/
  v39 = a2[2]; /*0x8df6d4*/
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 8); /*0x8df6d7*/
  if ( !sub_926090((LPCRITICAL_SECTION)this + 6, v39, &v44, v42) ) /*0x8df6db*/
  {
    do /*0x8df9d9*/
    {
      while ( 2 ) /*0x8df6fa*/
      {
        switch ( (char)v44 ) /*0x8df6fa*/
        {
          case 0: /*0x8df6fa*/
            v4 = *(_DWORD **)(*(_DWORD *)(*v2 + 0x38) + 4 * HIWORD(v44)); /*0x8df70b*/
            v5 = (__m128 *)(*v2 + 0x160); /*0x8df70e*/
            for ( i = 0; i < v4[0x18]; ++i ) /*0x8df71b*/
            {
              v7 = *(_DWORD *)(v4[0x17] + 4 * i); /*0x8df723*/
              if ( v7 ) /*0x8df728*/
                (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v7 + 8))(v7, v5); /*0x8df72d*/
            }
            if ( v4[3] ) /*0x8df738*/
            {
              sub_924000((int)v5, v5 + 1, a2 + 0xE, v4, v4[0xD], v4[0xE]); /*0x8df7ff*/
            }
            else
            {
              ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8df743*/
              v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8df750*/
              if ( *(_DWORD *)(v9 + 0x1A4) < *(_DWORD *)(v9 + 0x1A8) ) /*0x8df75f*/
              {
                v10 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8df761*/
                v11 = *(_DWORD **)(v9 + 0x1A4); /*0x8df763*/
                *v11 = "TtSingleObj"; /*0x8df769*/
                v12 = __rdtsc(); /*0x8df76f*/
                v50 = v12; /*0x8df771*/
                v11[1] = v12; /*0x8df779*/
                *(_DWORD *)(v10 + 0x1A4) = v11 + 3; /*0x8df77f*/
              }
              for ( j = v4[0xE] - 1; j >= 0; --j ) /*0x8df789*/
              {
                v14 = *(_DWORD *)(*(_DWORD *)(v4[0xD] + 4 * j) + 0x50); /*0x8df796*/
                (*(void (__thiscall **)(int, __m128 *, __m128 *))(*(_DWORD *)v14 + 0x10))(v14, v5, v5 + 3); /*0x8df7a0*/
              }
              v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8df7a6*/
              v16 = v15[MEMORY[0xBA9DE4]]; /*0x8df7b3*/
              if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x8df7c2*/
              {
                v17 = v15[MEMORY[0xBA9DE4]]; /*0x8df7c4*/
                v18 = *(_DWORD **)(v16 + 0x1A4); /*0x8df7c6*/
                *v18 = "Et"; /*0x8df7cc*/
                v19 = __rdtsc(); /*0x8df7d2*/
                v51 = v19; /*0x8df7d4*/
                v18[1] = v19; /*0x8df7dc*/
                *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x8df7e2*/
              }
            }
            v40 = a2[2]; /*0x8df812*/
            LOBYTE(v44) = 4; /*0x8df819*/
            sub_926510(lpCriticalSection, 0, v40, &v44); /*0x8df81e*/
            v2 = a2; /*0x8df823*/
            v3 = lpCriticalSection; /*0x8df826*/
            continue; /*0x8df82a*/
          case 4: /*0x8df6fa*/
            v20 = *(int **)(*(_DWORD *)(*v2 + 0x38) + 4 * HIWORD(v44)); /*0x8df839*/
            sub_8D4590(v20[0xD], v20[0xE], *v2, (LPCRITICAL_SECTION)(v2[1] + 0x180)); /*0x8df84f*/
            v21 = v20[0x12]; /*0x8df854*/
            v41 = v2[2]; /*0x8df863*/
            if ( v21 <= 0 ) /*0x8df859*/
            {
              LOBYTE(v44) = 5; /*0x8df890*/
            }
            else
            {
              LOBYTE(v44) = 6; /*0x8df868*/
              v45 = 0; /*0x8df86d*/
              v46 = v21; /*0x8df875*/
            }
            sub_926510(v3, 1, v41, &v44); /*0x8df879*/
            continue; /*0x8df87e*/
          case 5: /*0x8df6fa*/
            goto LABEL_36;
          case 6: /*0x8df6fa*/
            v22 = *(_DWORD *)(*(_DWORD *)(*v2 + 0x38) + 4 * HIWORD(v44)); /*0x8df8a9*/
            v23 = MEMORY[0xBA9DE4]; /*0x8df8ac*/
            v24 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8df8b2*/
            v25 = v24[MEMORY[0xBA9DE4]]; /*0x8df8b8*/
            v26 = *(_DWORD *)(v25 + 0x1A4) < *(_DWORD *)(v25 + 0x1A8); /*0x8df8c1*/
            v52 = v22; /*0x8df8c7*/
            if ( v26 ) /*0x8df8cb*/
            {
              v27 = *(_DWORD **)(v25 + 0x1A4); /*0x8df8cf*/
              *v27 = "TtNarrowPhase"; /*0x8df8d5*/
              v28 = __rdtsc(); /*0x8df8db*/
              v48 = v28; /*0x8df8dd*/
              HIDWORD(v28) = v28; /*0x8df8e1*/
              LODWORD(v28) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v23); /*0x8df8eb*/
              v27[1] = HIDWORD(v28); /*0x8df8ee*/
              *(_DWORD *)(v28 + 0x1A4) = v27 + 3; /*0x8df8f4*/
              v24 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8df8fa*/
            }
            v29 = v46 - 1 < 0; /*0x8df904*/
            v53[0xC0D] = 3.4028235e38; /*0x8df905*/
            --v46; /*0x8df910*/
            if ( !v29 ) /*0x8df914*/
            {
              v30 = v45; /*0x8df916*/
              do /*0x8df979*/
              {
                v31 = *(_DWORD *)(*(_DWORD *)(v22 + 0x44) + 4 * v30); /*0x8df923*/
                if ( v30 >= *(_DWORD *)(v22 + 0x48) - 1 ) /*0x8df92c*/
                  v32 = *(_DWORD *)(v22 + 0x54); /*0x8df934*/
                else
                  v32 = *(unsigned __int16 *)(v22 + 0x5A); /*0x8df92e*/
                v33 = v31 + v32; /*0x8df937*/
                if ( v31 < v33 ) /*0x8df93b*/
                {
                  v34 = (int)(v2 + 3); /*0x8df93d*/
                  do /*0x8df95e*/
                  {
                    sub_8DF5C0(v31, v34, v53, (_RTL_CRITICAL_SECTION_0 *)a2[1]); /*0x8df94e*/
                    v31 += *(unsigned __int8 *)(v31 + 3); /*0x8df957*/
                  }
                  while ( v31 < v33 ); /*0x8df95e*/
                  v30 = v45; /*0x8df960*/
                  v22 = v52; /*0x8df964*/
                  v2 = a2; /*0x8df968*/
                }
                ++v30; /*0x8df96f*/
                v29 = v46 - 1 < 0; /*0x8df970*/
                v45 = v30; /*0x8df971*/
                --v46; /*0x8df975*/
              }
              while ( !v29 ); /*0x8df979*/
              v23 = MEMORY[0xBA9DE4]; /*0x8df97b*/
              v24 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8df981*/
            }
            v35 = v24[v23]; /*0x8df987*/
            if ( *(_DWORD *)(v35 + 0x1A4) < *(_DWORD *)(v35 + 0x1A8) ) /*0x8df996*/
            {
              v36 = v24[v23]; /*0x8df998*/
              v37 = *(_DWORD **)(v35 + 0x1A4); /*0x8df99a*/
              *v37 = "Et"; /*0x8df9a0*/
              v38 = __rdtsc(); /*0x8df9a6*/
              v49 = v38; /*0x8df9a8*/
              v37[1] = v38; /*0x8df9b0*/
              *(_DWORD *)(v36 + 0x1A4) = v37 + 3; /*0x8df9b6*/
            }
            v3 = lpCriticalSection; /*0x8df9bc*/
            break; /*0x8df9bc*/
          default:
            continue;
        }
        break;
      }
LABEL_36:
      sub_926030(v3); /*0x8df9c0*/
    }
    while ( !sub_926090(v3, v2[2], &v44, v43) ); /*0x8df9d9*/
  }
  sub_926050(v3); /*0x8df9e1*/
}
