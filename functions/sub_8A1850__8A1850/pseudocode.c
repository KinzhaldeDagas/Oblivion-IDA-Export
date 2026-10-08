int __thiscall sub_8A1850(_DWORD *this, signed int a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // ecx
  int v4; // ebp
  _DWORD *v5; // ecx
  int v6; // edx
  _DWORD *v7; // edx
  int v8; // edx
  int v9; // edx
  signed int v10; // esi
  int v11; // eax
  void (__cdecl *v12)(int, unsigned int *, int, signed int *, int); // eax
  unsigned int i; // edi
  int v14; // eax
  int v15; // eax
  int result; // eax
  int v17; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // [esp-14h] [ebp-58h]
  int v22; // [esp+14h] [ebp-30h] BYREF
  unsigned int v23; // [esp+18h] [ebp-2Ch] BYREF
  _DWORD *v24; // [esp+1Ch] [ebp-28h]
  _DWORD *v25; // [esp+20h] [ebp-24h] BYREF
  int v26; // [esp+24h] [ebp-20h]
  int v27; // [esp+28h] [ebp-1Ch]
  _DWORD *v28; // [esp+2Ch] [ebp-18h]
  unsigned int v29; // [esp+30h] [ebp-14h]
  unsigned int v30; // [esp+34h] [ebp-10h]
  int v31; // [esp+40h] [ebp-4h]

  v24 = this; /*0x8a1877*/
  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, (char *)&v22 + 3); /*0x8a1885*/
  v3 = 0; /*0x8a1889*/
  v4 = 0x80000000; /*0x8a188b*/
  v28 = 0; /*0x8a1890*/
  v29 = 0; /*0x8a1894*/
  v30 = 0x80000000; /*0x8a1898*/
  v31 = 1; /*0x8a189c*/
  v25 = 0; /*0x8a18a0*/
  v26 = 0; /*0x8a18a4*/
  v27 = 0x80000000; /*0x8a18a8*/
  if ( v2 ) /*0x8a18b3*/
  {
    v5 = (_DWORD *)v2[1]; /*0x8a18b5*/
    v6 = v2[3]; /*0x8a18b8*/
    v2[3] = 0x80000000; /*0x8a18bb*/
    v2[1] = 0; /*0x8a18be*/
    v28 = v5; /*0x8a18c1*/
    v3 = v2[2]; /*0x8a18c5*/
    v2[2] = 0; /*0x8a18c8*/
    v4 = v6; /*0x8a18cf*/
    v7 = (_DWORD *)v2[4]; /*0x8a18d1*/
    v2[4] = v25; /*0x8a18d4*/
    v25 = v7; /*0x8a18db*/
    v8 = v2[5]; /*0x8a18df*/
    v2[5] = v26; /*0x8a18e2*/
    v26 = v8; /*0x8a18e9*/
    v9 = v2[6]; /*0x8a18ed*/
    v2[6] = v27; /*0x8a18f0*/
    v29 = v3; /*0x8a18f3*/
    v30 = v4; /*0x8a18f7*/
    v27 = v9; /*0x8a18fb*/
  }
  v10 = a2; /*0x8a18ff*/
  v11 = *(_DWORD *)(a2 + 0x220); /*0x8a1903*/
  v23 = v3; /*0x8a1909*/
  v21 = v11; /*0x8a191b*/
  v12 = *(void (__cdecl **)(int, unsigned int *, int, signed int *, int))(v11 + 8); /*0x8a191c*/
  a2 = 4; /*0x8a191f*/
  v12(v21, &v23, 4, &a2, 1); /*0x8a1927*/
  for ( i = 0; i < v23; ++i ) /*0x8a1932*/
  {
    v14 = v28[i]; /*0x8a1938*/
    if ( v14 ) /*0x8a193d*/
      v15 = *(_DWORD *)(v14 + 8); /*0x8a193f*/
    else
      v15 = 0; /*0x8a1944*/
    (*(void (__thiscall **)(signed int, int))(*(_DWORD *)v10 + 0x2C))(v10, v15); /*0x8a194e*/
  }
  sub_8A2610(v24, v10); /*0x8a195e*/
  sub_8E8310(v10, (signed int)&v25); /*0x8a1969*/
  result = v27; /*0x8a196e*/
  v17 = MEMORY[0xBA9DE4]; /*0x8a1972*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8a1978*/
  LOBYTE(v31) = 0; /*0x8a1984*/
  if ( v27 >= 0 ) /*0x8a1988*/
  {
    v19 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8a198d*/
    if ( !v19 ) /*0x8a1995*/
      v19 = unk_BA7D9C; /*0x8a1997*/
    result = sub_8A75D0(v19, v25, 4 * v27, 0x14); /*0x8a19ae*/
  }
  v31 = 0xFFFFFFFF; /*0x8a19b5*/
  if ( v4 >= 0 ) /*0x8a19bd*/
  {
    v20 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8a19c2*/
    if ( !v20 ) /*0x8a19ca*/
      v20 = unk_BA7D9C; /*0x8a19cc*/
    return sub_8A75D0(v20, v28, 4 * v4, 0x14); /*0x8a19e5*/
  }
  return result; /*0x8a19ea*/
}
