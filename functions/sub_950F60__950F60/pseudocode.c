bool *__thiscall sub_950F60(int *this, bool *a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  signed int v11; // edi
  int (__stdcall ***v12)(char *, int, _DWORD, _DWORD); // eax
  int v13; // eax
  float v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // ebx
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  float v21; // [esp+24h] [ebp-23Ch]
  unsigned int v22; // [esp+28h] [ebp-238h]
  char v23; // [esp+2Eh] [ebp-232h] BYREF
  char v24; // [esp+2Fh] [ebp-231h] BYREF
  __int128 v25; // [esp+30h] [ebp-230h] BYREF
  int v26; // [esp+40h] [ebp-220h]
  float v27; // [esp+44h] [ebp-21Ch]
  _BYTE v28[524]; // [esp+50h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtrcConvxPiece";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *(this + 8);
  v11 = 0;
  v22 = 0xFFFFFFFF;
  v27 = 1.0;
  v21 = 3.4028235e38;
  if ( v10 > 0 )
  {
    do
    {
      v12 = *(int (__stdcall ****)(char *, int, _DWORD, _DWORD))(a3 + 0x24);
      if ( !v12 || *(_BYTE *)(**v12)(&v24, a3, *(this + 6), *(_DWORD *)(*(this + 7) + 4 * v11)) )
      {
        v13 = (*(int (__thiscall **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)*(this + 6) + 0x28))(
                *(this + 6),
                *(_DWORD *)(*(this + 7) + 4 * v11),
                v28);
        if ( *(_BYTE *)(*(int (__thiscall **)(int, char *, int, __int128 *))(*(_DWORD *)v13 + 0x14))(
                         v13,
                         &v23,
                         a3,
                         &v25) )
        {
          if ( v27 < (double)v21 )
          {
            v14 = v27;
            v15 = v26;
            v22 = v11;
            v21 = v27;
            *(__int128 *)a4 = v25;
            *(_DWORD *)(a4 + 0x10) = v15;
            *(float *)(a4 + 0x14) = v14;
          }
        }
      }
      ++v11;
    }
    while ( v11 < *(this + 8) );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  v16 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
  {
    v17 = ThreadLocalStoragePointer[TlsIndex];
    v18 = *(_DWORD **)(v16 + 0x1A4);
    *v18 = "Et";
    v19 = __rdtsc();
    v18[1] = v19;
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3;
  }
  *a2 = v22 != 0xFFFFFFFF;
  return a2;
}
