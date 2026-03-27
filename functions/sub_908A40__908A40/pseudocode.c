int __cdecl sub_908A40(__m128 **a1, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  _DWORD *v10; // ebx
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // eax
  char *v16; // esi
  int v17; // ebx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // edi
  int v22; // ebx
  unsigned __int64 v23; // rax
  int v24; // esi
  _DWORD *v25; // ecx
  int v26; // eax
  int v28; // [esp+28h] [ebp-45Ch]
  char v29; // [esp+2Fh] [ebp-455h] BYREF
  char *v30; // [esp+30h] [ebp-454h]
  _DWORD v31[4]; // [esp+34h] [ebp-450h] BYREF
  __m128 v32[2]; // [esp+44h] [ebp-440h] BYREF
  char *v33; // [esp+64h] [ebp-420h] BYREF
  int v34; // [esp+68h] [ebp-41Ch]
  int v35; // [esp+6Ch] [ebp-418h]
  char v36; // [esp+70h] [ebp-414h] BYREF
  _BYTE v37[524]; // [esp+274h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "LtBvTree";
    v8[3] = "QueryTree";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4;
  }
  sub_9067E0(a1, (int)a2, (__m128 *)a3, v32);
  v10 = (_DWORD *)*a2;
  v33 = &v36;
  v34 = 0;
  v35 = 0x80000080;
  (*(void (__thiscall **)(_DWORD *, __m128 *, char **))(*v10 + 0x24))(v10, v32, &v33);
  v11 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) )
  {
    v12 = ThreadLocalStoragePointer[TlsIndex];
    v13 = *(_DWORD **)(v11 + 0x1A4);
    *v13 = "StNarrowPhase";
    v14 = __rdtsc();
    v13[1] = v14;
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3;
  }
  v15 = (*(int (__thiscall **)(_DWORD))((*a1)->m128_i32[0] + 8))(*a1);
  v16 = v33;
  v17 = v10[3];
  v28 = v15;
  v31[3] = a2;
  v18 = a2[2];
  v30 = &v33[4 * v34];
  v31[2] = v18;
  if ( v33 != v30 )
  {
    do
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, __m128 **, _DWORD *, int, _DWORD))(a3 + 4))(
                       *(_DWORD *)(a3 + 4),
                       &v29,
                       a3,
                       a1,
                       a2,
                       v17,
                       *(_DWORD *)v16) )
      {
        v19 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v17 + 0x28))(v17, *(_DWORD *)v16, v37);
        v31[1] = *(_DWORD *)v16;
        v31[0] = v19;
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19);
        (*(void (__cdecl **)(__m128 **, _DWORD *, int, int, int))(*(_DWORD *)a3
                                                                + 0x14
                                                                * (*(unsigned __int8 *)(*(_DWORD *)a3
                                                                                      + 0x20 * v28
                                                                                      + v20
                                                                                      + 0x190)
                                                                 + 0x7B)))(
          a1,
          v31,
          a3,
          a4,
          a5);
      }
      v16 += 4;
    }
    while ( v16 != v30 );
    v16 = v33;
  }
  v21 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v22 = TlsIndex;
  LODWORD(v23) = v21[TlsIndex];
  if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) )
  {
    v24 = v21[TlsIndex];
    v25 = *(_DWORD **)(v23 + 0x1A4);
    *v25 = "lt";
    v23 = __rdtsc();
    v30 = (char *)v23;
    v25[1] = v23;
    *(_DWORD *)(v24 + 0x1A4) = v25 + 3;
    v16 = v33;
  }
  if ( v35 >= 0 )
  {
    v26 = *(_DWORD *)(v21[v22] + 0x19C);
    if ( !v26 )
      v26 = dword_BA7D9C;
    LODWORD(v23) = sub_8A75D0(v26, v16, 4 * v35, 0x14);
  }
  return v23;
}
