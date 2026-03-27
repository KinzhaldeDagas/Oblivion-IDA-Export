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
  _BYTE v42[2]; // [esp+Ch] [ebp-3074h] BYREF
  unsigned __int16 v43; // [esp+Eh] [ebp-3072h]
  int v44; // [esp+10h] [ebp-3070h]
  int v45; // [esp+14h] [ebp-306Ch]
  LPCRITICAL_SECTION lpCriticalSection; // [esp+18h] [ebp-3068h]
  int v47; // [esp+1Ch] [ebp-3064h]
  int v48; // [esp+20h] [ebp-3060h]
  int v49; // [esp+24h] [ebp-305Ch]
  int v50; // [esp+28h] [ebp-3058h]
  int v51; // [esp+2Ch] [ebp-3054h]
  float v52[3092]; // [esp+30h] [ebp-3050h] BYREF

  v2 = a2;
  v3 = (_RTL_CRITICAL_SECTION_0 *)(this + 8);
  v39 = a2[2];
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 8);
  if ( !sub_926090((LPCRITICAL_SECTION)this + 6, v39, (int)v42) )
  {
    do
    {
      while ( 2 )
      {
        switch ( v42[0] )
        {
          case 0:
            v4 = *(_DWORD **)(*(_DWORD *)(*v2 + 0x38) + 4 * v43);
            v5 = (__m128 *)(*v2 + 0x160);
            for ( i = 0; i < v4[0x18]; ++i )
            {
              v7 = *(_DWORD *)(v4[0x17] + 4 * i);
              if ( v7 )
                (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v7 + 8))(v7, v5);
            }
            if ( v4[3] )
            {
              sub_924000((int)v5, v5 + 1, a2 + 0xE, v4, v4[0xD], v4[0xE]);
            }
            else
            {
              ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
              v9 = ThreadLocalStoragePointer[TlsIndex];
              if ( *(_DWORD *)(v9 + 0x1A4) < *(_DWORD *)(v9 + 0x1A8) )
              {
                v10 = ThreadLocalStoragePointer[TlsIndex];
                v11 = *(_DWORD **)(v9 + 0x1A4);
                *v11 = "TtSingleObj";
                v12 = __rdtsc();
                v49 = v12;
                v11[1] = v12;
                *(_DWORD *)(v10 + 0x1A4) = v11 + 3;
              }
              for ( j = v4[0xE] - 1; j >= 0; --j )
              {
                v14 = *(_DWORD *)(*(_DWORD *)(v4[0xD] + 4 * j) + 0x50);
                (*(void (__thiscall **)(int, __m128 *, __m128 *))(*(_DWORD *)v14 + 0x10))(v14, v5, v5 + 3);
              }
              v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
              v16 = v15[TlsIndex];
              if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
              {
                v17 = v15[TlsIndex];
                v18 = *(_DWORD **)(v16 + 0x1A4);
                *v18 = "Et";
                v19 = __rdtsc();
                v50 = v19;
                v18[1] = v19;
                *(_DWORD *)(v17 + 0x1A4) = v18 + 3;
              }
            }
            v40 = a2[2];
            v42[0] = 4;
            sub_926510(lpCriticalSection, 0, v40, (int)v42);
            v2 = a2;
            v3 = lpCriticalSection;
            continue;
          case 4:
            v20 = *(int **)(*(_DWORD *)(*v2 + 0x38) + 4 * v43);
            sub_8D4590(v20[0xD], v20[0xE], *v2, (LPCRITICAL_SECTION)(v2[1] + 0x180));
            v21 = v20[0x12];
            v41 = v2[2];
            if ( v21 <= 0 )
            {
              v42[0] = 5;
            }
            else
            {
              v42[0] = 6;
              v44 = 0;
              v45 = v21;
            }
            sub_926510(v3, 1, v41, (int)v42);
            continue;
          case 5:
            goto LABEL_36;
          case 6:
            v22 = *(_DWORD *)(*(_DWORD *)(*v2 + 0x38) + 4 * v43);
            v23 = TlsIndex;
            v24 = NtCurrentTeb()->ThreadLocalStoragePointer;
            v25 = v24[TlsIndex];
            v26 = *(_DWORD *)(v25 + 0x1A4) < *(_DWORD *)(v25 + 0x1A8);
            v51 = v22;
            if ( v26 )
            {
              v27 = *(_DWORD **)(v25 + 0x1A4);
              *v27 = "TtNarrowPhase";
              v28 = __rdtsc();
              v47 = v28;
              HIDWORD(v28) = v28;
              LODWORD(v28) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v23);
              v27[1] = HIDWORD(v28);
              *(_DWORD *)(v28 + 0x1A4) = v27 + 3;
              v24 = NtCurrentTeb()->ThreadLocalStoragePointer;
            }
            v29 = v45 - 1 < 0;
            v52[0xC0D] = 3.4028235e38;
            --v45;
            if ( !v29 )
            {
              v30 = v44;
              do
              {
                v31 = *(_DWORD *)(*(_DWORD *)(v22 + 0x44) + 4 * v30);
                if ( v30 >= *(_DWORD *)(v22 + 0x48) - 1 )
                  v32 = *(_DWORD *)(v22 + 0x54);
                else
                  v32 = *(unsigned __int16 *)(v22 + 0x5A);
                v33 = v31 + v32;
                if ( v31 < v33 )
                {
                  v34 = (int)(v2 + 3);
                  do
                  {
                    sub_8DF5C0(v31, v34, v52, (_RTL_CRITICAL_SECTION_0 *)a2[1]);
                    v31 += *(unsigned __int8 *)(v31 + 3);
                  }
                  while ( v31 < v33 );
                  v30 = v44;
                  v22 = v51;
                  v2 = a2;
                }
                ++v30;
                v29 = v45 - 1 < 0;
                v44 = v30;
                --v45;
              }
              while ( !v29 );
              v23 = TlsIndex;
              v24 = NtCurrentTeb()->ThreadLocalStoragePointer;
            }
            v35 = v24[v23];
            if ( *(_DWORD *)(v35 + 0x1A4) < *(_DWORD *)(v35 + 0x1A8) )
            {
              v36 = v24[v23];
              v37 = *(_DWORD **)(v35 + 0x1A4);
              *v37 = "Et";
              v38 = __rdtsc();
              v48 = v38;
              v37[1] = v38;
              *(_DWORD *)(v36 + 0x1A4) = v37 + 3;
            }
            v3 = lpCriticalSection;
            break;
          default:
            continue;
        }
        break;
      }
LABEL_36:
      sub_926030(v3);
    }
    while ( !sub_926090(v3, v2[2], (int)v42) );
  }
  sub_926050(v3);
}
