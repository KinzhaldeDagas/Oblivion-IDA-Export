int __thiscall sub_8D9F00(int *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebx
  int i; // edi
  int v6; // ebx
  int j; // edi
  int v8; // ecx
  int v9; // ebx
  int k; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int result; // eax
  int v21; // ecx

  v2 = *(this + 3); /*0x8d9f04*/
  v3 = 0; /*0x8d9f08*/
  for ( *this = (int)&off_A9A2A0; v3 < v2; ++v3 ) /*0x8d9f12*/
    sub_8BC730(*(int (__stdcall ****)(signed int))(*(this + 2) + 4 * v3)); /*0x8d9f1a*/
  v4 = *(this + 0xC); /*0x8d9f24*/
  for ( i = 0; i < v4; ++i ) /*0x8d9f2b*/
    sub_8BC730(*(int (__stdcall ****)(signed int))(*(this + 0xB) + 4 * i)); /*0x8d9f36*/
  v6 = *(this + 6); /*0x8d9f40*/
  for ( j = 0; j < v6; ++j ) /*0x8d9f47*/
  {
    v8 = *(_DWORD *)(*(this + 5) + 4 * j); /*0x8d9f53*/
    if ( *(_WORD *)(v8 + 4) ) /*0x8d9f56*/
    {
      if ( !--*(_WORD *)(v8 + 6) ) /*0x8d9f61*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x8d9f6c*/
    }
  }
  v9 = *(this + 9); /*0x8d9f73*/
  for ( k = 0; k < v9; ++k ) /*0x8d9f7a*/
  {
    v11 = *(_DWORD *)(*(this + 8) + 4 * k); /*0x8d9f83*/
    if ( v11 ) /*0x8d9f88*/
    {
      if ( *(_WORD *)(v11 + 4) ) /*0x8d9f8a*/
      {
        if ( !--*(_WORD *)(v11 + 6) ) /*0x8d9f95*/
          (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8d9fa0*/
      }
    }
  }
  v12 = *(this + 0xD); /*0x8d9fa7*/
  v13 = MEMORY[0xBA9DE4]; /*0x8d9fac*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d9fb2*/
  if ( v12 >= 0 ) /*0x8d9fb9*/
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C); /*0x8d9fbe*/
    if ( !v15 ) /*0x8d9fc6*/
      v15 = unk_BA7D9C; /*0x8d9fc8*/
    sub_8A75D0(v15, (_DWORD *)*(this + 0xB), 4 * v12, 0x14); /*0x8d9fdd*/
  }
  v16 = *(this + 0xA); /*0x8d9fe2*/
  if ( v16 >= 0 ) /*0x8d9fe7*/
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C); /*0x8d9fec*/
    if ( !v17 ) /*0x8d9ff4*/
      v17 = unk_BA7D9C; /*0x8d9ff6*/
    sub_8A75D0(v17, (_DWORD *)*(this + 8), 4 * v16, 0x14); /*0x8da00b*/
  }
  v18 = *(this + 7); /*0x8da010*/
  if ( v18 >= 0 ) /*0x8da015*/
  {
    v19 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C); /*0x8da01a*/
    if ( !v19 ) /*0x8da022*/
      v19 = unk_BA7D9C; /*0x8da024*/
    sub_8A75D0(v19, (_DWORD *)*(this + 5), 4 * v18, 0x14); /*0x8da039*/
  }
  result = *(this + 4); /*0x8da03e*/
  if ( result >= 0 ) /*0x8da043*/
  {
    v21 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C); /*0x8da048*/
    if ( !v21 ) /*0x8da050*/
      v21 = unk_BA7D9C; /*0x8da052*/
    result = sub_8A75D0(v21, (_DWORD *)*(this + 2), 4 * result, 0x14); /*0x8da067*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x8da06d*/
  return result; /*0x8da06c*/
}
