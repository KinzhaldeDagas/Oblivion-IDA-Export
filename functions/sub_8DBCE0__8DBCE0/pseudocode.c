int __thiscall sub_8DBCE0(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8dbce1*/
  v3 = *(this + 0x10); /*0x8dbceb*/
  v4 = MEMORY[0xBA9DE4]; /*0x8dbcf1*/
  if ( v3 >= 0 ) /*0x8dbcf7*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8dbcfc*/
    if ( !v5 ) /*0x8dbd04*/
      v5 = unk_BA7D9C; /*0x8dbd06*/
    sub_8A75D0(v5, (_DWORD *)*(this + 0xE), 0x14 * (v3 & 0x3FFFFFFF), 0x14); /*0x8dbd1e*/
  }
  v6 = *(this + 0xA); /*0x8dbd23*/
  if ( v6 >= 0 ) /*0x8dbd28*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8dbd2d*/
    if ( !v7 ) /*0x8dbd35*/
      v7 = unk_BA7D9C; /*0x8dbd37*/
    sub_8A75D0(v7, (_DWORD *)*(this + 8), 0x20 * v6, 0x14); /*0x8dbd4c*/
  }
  result = *(this + 5); /*0x8dbd51*/
  if ( result >= 0 ) /*0x8dbd56*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8dbd5b*/
    if ( !v9 ) /*0x8dbd63*/
      v9 = unk_BA7D9C; /*0x8dbd65*/
    result = sub_8A75D0(v9, (_DWORD *)*(this + 3), result & 0x3FFFFFFF, 0x14); /*0x8dbd77*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x8dbd7d*/
  return result; /*0x8dbd7c*/
}
