int __usercall sub_8CA770@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int i; // edi
  int v4; // ecx
  int j; // ebx
  _DWORD *v6; // edi
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int result; // eax
  int v23; // ecx

  *(_DWORD *)a1 = &off_A99AE8; /*0x8ca775*/
  sub_8CA2A0((_DWORD *)a1, a2); /*0x8ca77b*/
  for ( i = 0; i < *(_DWORD *)(a1 + 0x1C); ++i ) /*0x8ca787*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 0x18) + 4 * i); /*0x8ca793*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 8))(v4, 0); /*0x8ca79a*/
  }
  for ( j = 0; j < *(_DWORD *)(a1 + 0x50); ++j ) /*0x8ca7ac*/
  {
    v6 = *(_DWORD **)(*(_DWORD *)(a1 + 0x4C) + 4 * j); /*0x8ca7b3*/
    if ( v6 ) /*0x8ca7b8*/
    {
      v7 = (_DWORD *)(*v6 - 0xC); /*0x8ca7bf*/
      v8 = *(_DWORD *)(*v6 - 4) - 1; /*0x8ca7c2*/
      v7[2] = v8; /*0x8ca7c3*/
      if ( v8 < 0 ) /*0x8ca7c6*/
        sub_8B1930(v7); /*0x8ca7c8*/
      (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v6, 4, 0x13); /*0x8ca7da*/
    }
  }
  v9 = *(_DWORD *)(a1 + 0x48); /*0x8ca7e5*/
  *(_DWORD *)(a1 + 0x50) = 0; /*0x8ca7ea*/
  if ( v9 ) /*0x8ca7f1*/
  {
    if ( *(_WORD *)(v9 + 4) ) /*0x8ca7f3*/
    {
      if ( !--*(_WORD *)(v9 + 6) ) /*0x8ca7fe*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x8ca809*/
    }
  }
  v10 = *(_DWORD *)(a1 + 0x54); /*0x8ca80b*/
  v11 = MEMORY[0xBA9DE4]; /*0x8ca810*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ca816*/
  if ( v10 >= 0 ) /*0x8ca81d*/
  {
    v13 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C); /*0x8ca822*/
    if ( !v13 ) /*0x8ca82a*/
      v13 = unk_BA7D9C; /*0x8ca82c*/
    sub_8A75D0(v13, *(_DWORD **)(a1 + 0x4C), 4 * v10, 0x14); /*0x8ca841*/
  }
  v14 = *(_DWORD *)(a1 + 0x44); /*0x8ca846*/
  if ( v14 >= 0 ) /*0x8ca84b*/
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C); /*0x8ca850*/
    if ( !v15 ) /*0x8ca858*/
      v15 = unk_BA7D9C; /*0x8ca85a*/
    sub_8A75D0(v15, *(_DWORD **)(a1 + 0x3C), 4 * v14, 0x14); /*0x8ca86f*/
  }
  v16 = *(_DWORD *)(a1 + 0x38); /*0x8ca874*/
  if ( v16 >= 0 ) /*0x8ca879*/
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C); /*0x8ca87e*/
    if ( !v17 ) /*0x8ca886*/
      v17 = unk_BA7D9C; /*0x8ca888*/
    sub_8A75D0(v17, *(_DWORD **)(a1 + 0x30), 4 * v16, 0x14); /*0x8ca89d*/
  }
  v18 = *(_DWORD *)(a1 + 0x2C); /*0x8ca8a2*/
  if ( v18 >= 0 ) /*0x8ca8a7*/
  {
    v19 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C); /*0x8ca8ac*/
    if ( !v19 ) /*0x8ca8b4*/
      v19 = unk_BA7D9C; /*0x8ca8b6*/
    sub_8A75D0(v19, *(_DWORD **)(a1 + 0x24), 8 * v18, 0x14); /*0x8ca8cb*/
  }
  v20 = *(_DWORD *)(a1 + 0x20); /*0x8ca8d0*/
  if ( v20 >= 0 ) /*0x8ca8d5*/
  {
    v21 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C); /*0x8ca8da*/
    if ( !v21 ) /*0x8ca8e2*/
      v21 = unk_BA7D9C; /*0x8ca8e4*/
    sub_8A75D0(v21, *(_DWORD **)(a1 + 0x18), 4 * v20, 0x14); /*0x8ca8f9*/
  }
  result = *(_DWORD *)(a1 + 0x14); /*0x8ca8fe*/
  if ( result >= 0 ) /*0x8ca903*/
  {
    v23 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C); /*0x8ca908*/
    if ( !v23 ) /*0x8ca910*/
      v23 = unk_BA7D9C; /*0x8ca912*/
    result = sub_8A75D0(v23, *(_DWORD **)(a1 + 0xC), 8 * result, 0x14); /*0x8ca927*/
  }
  *(_DWORD *)a1 = &hkBaseObject::`vftable'; /*0x8ca92d*/
  return result; /*0x8ca92c*/
}
