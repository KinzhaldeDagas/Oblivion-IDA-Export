int __cdecl sub_908DE0(__m128 **a1, int a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  _DWORD *v9; // ebx
  _DWORD *v10; // ecx
  _DWORD *v11; // ecx
  unsigned __int64 v12; // rax
  int v13; // eax
  char *v14; // esi
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // edi
  int v19; // ebx
  unsigned __int64 v20; // rax
  int v21; // esi
  _DWORD *v22; // ecx
  int v23; // eax
  char *v25; // [esp+34h] [ebp-49Ch]
  int v26; // [esp+38h] [ebp-498h]
  int v27; // [esp+38h] [ebp-498h]
  char v28; // [esp+3Fh] [ebp-491h] BYREF
  _DWORD v29[4]; // [esp+40h] [ebp-490h] BYREF
  _BYTE v30[32]; // [esp+50h] [ebp-480h] BYREF
  __m128 v31[4]; // [esp+70h] [ebp-460h] BYREF
  char *v32; // [esp+B0h] [ebp-420h] BYREF
  int v33; // [esp+B4h] [ebp-41Ch]
  int v34; // [esp+B8h] [ebp-418h]
  char v35; // [esp+BCh] [ebp-414h] BYREF
  _BYTE v36[524]; // [esp+2C0h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "LtBvTree";
    v7[3] = "QueryTree";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 4;
  }
  sub_8B1FF0(v31, *(__m128 **)(a2 + 8), a1[2]);
  (*(void (__thiscall **)(_DWORD, __m128 *, _DWORD, _BYTE *))((*a1)->m128_i32[0] + 0xC))(
    *a1,
    v31,
    *(_DWORD *)(a3 + 8),
    v30);
  v9 = *(_DWORD **)a2;
  v32 = &v35;
  v33 = 0;
  v34 = 0x80000080;
  (*(void (__thiscall **)(_DWORD *, _BYTE *, char **))(*v9 + 0x24))(v9, v30, &v32);
  v10 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( *(_DWORD *)(v10[TlsIndex] + 0x1A4) < *(_DWORD *)(v10[TlsIndex] + 0x1A8) )
  {
    v26 = v10[TlsIndex];
    v11 = *(_DWORD **)(v26 + 0x1A4);
    *v11 = "StNarrowPhase";
    v12 = __rdtsc();
    v11[1] = v12;
    *(_DWORD *)(v26 + 0x1A4) = v11 + 3;
  }
  v13 = (*(int (__thiscall **)(_DWORD))((*a1)->m128_i32[0] + 8))(*a1);
  v14 = v32;
  v15 = v9[3];
  v27 = v13;
  v29[3] = a2;
  v25 = &v32[4 * v33];
  v29[2] = *(_DWORD *)(a2 + 8);
  if ( v32 != v25 )
  {
    do
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, __m128 **, int, int, _DWORD))(a3 + 4))(
                       *(_DWORD *)(a3 + 4),
                       &v28,
                       a3,
                       a1,
                       a2,
                       v15,
                       *(_DWORD *)v14) )
      {
        v16 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v15 + 0x28))(v15, *(_DWORD *)v14, v36);
        v29[1] = *(_DWORD *)v14;
        v29[0] = v16;
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16);
        (*(void (__cdecl **)(__m128 **, _DWORD *, int, int))(*(_DWORD *)a3
                                                           + 0x14
                                                           * *(unsigned __int8 *)(*(_DWORD *)a3
                                                                                + 0x20 * v27
                                                                                + v17
                                                                                + 0x190)
                                                           + 0x998))(
          a1,
          v29,
          a3,
          a4);
      }
      v14 += 4;
    }
    while ( v14 != v25 );
    v14 = v32;
  }
  v18 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v19 = TlsIndex;
  LODWORD(v20) = v18[TlsIndex];
  if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) )
  {
    v21 = v18[TlsIndex];
    v22 = *(_DWORD **)(v20 + 0x1A4);
    *v22 = "lt";
    v20 = __rdtsc();
    v22[1] = v20;
    *(_DWORD *)(v21 + 0x1A4) = v22 + 3;
    v14 = v32;
  }
  if ( v34 >= 0 )
  {
    v23 = *(_DWORD *)(v18[v19] + 0x19C);
    if ( !v23 )
      v23 = dword_BA7D9C;
    LODWORD(v20) = sub_8A75D0(v23, v14, 4 * v34, 0x14);
  }
  return v20;
}
