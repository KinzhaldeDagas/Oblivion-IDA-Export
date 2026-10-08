// FormHeap shutdown path: destroys all small MemoryPools, unlinks remaining free entries, releases allocator tables/backing state, and clears heap fields.
int __thiscall MemoryHeap_Shutdown(_BYTE *this)
{
  bool v2; // zf
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ebp
  bool v8; // cc
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *i; // edi
  void (__thiscall *v12)(_BYTE *, int); // edx
  int (__thiscall *v13)(_BYTE *, int); // edx
  int result; // eax
  int v15; // [esp-4h] [ebp-10h]
  int v16; // [esp-4h] [ebp-10h]

  v2 = *(this + 0x16C) == 0; /*0x401756*/
  *(this + 0x16D) = 1; /*0x40175d*/
  if ( v2 ) /*0x401764*/
    MemoryPool_DestroyAll(); /*0x401766*/
  v3 = *((_DWORD *)this + 0x17); /*0x40176b*/
  while ( v3 ) /*0x401770*/
  {
    v4 = v3; /*0x401774*/
    v3 = *(_DWORD *)(v3 + 0x140); /*0x401776*/
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x18))(this, v4); /*0x401782*/
  }
  v5 = *((_DWORD *)this + 0x18); /*0x401788*/
  *((_DWORD *)this + 0x17) = 0; /*0x40178d*/
  while ( v5 ) /*0x401790*/
  {
    v6 = v5; /*0x401794*/
    v5 = *(_DWORD *)(v5 + 0x208); /*0x401796*/
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x18))(this, v6); /*0x4017a2*/
  }
  v7 = 0; /*0x4017a9*/
  v8 = *((_DWORD *)this + 0xC) <= 0; /*0x4017ab*/
  *((_DWORD *)this + 0x18) = 0; /*0x4017ae*/
  if ( !v8 ) /*0x4017b1*/
  {
    do /*0x4017d7*/
    {
      v9 = *((_DWORD *)this + 0xD); /*0x4017b3*/
      v10 = *(_DWORD **)(v9 + 8 * v7 + 4); /*0x4017b6*/
      for ( i = (_DWORD *)(v9 + 8 * v7); v10; v10 = (_DWORD *)i[1] ) /*0x4017bf*/
        MemoryHeap_RemoveFreeEntry(this, i, v10); /*0x4017c5*/
      ++v7; /*0x4017d1*/
    }
    while ( v7 < *((_DWORD *)this + 0xC) ); /*0x4017d7*/
  }
  v2 = *((_DWORD *)this + 0x10) == 0; /*0x4017d9*/
  *((_DWORD *)this + 0xC) = 0; /*0x4017dc*/
  if ( !v2 ) /*0x4017e0*/
  {
    do /*0x4017f1*/
      MemoryHeap_RemoveFreeEntry(this, (_DWORD *)this + 0xF, *((_DWORD **)this + 0x10)); /*0x4017ec*/
    while ( *((_DWORD *)this + 0x10) ); /*0x4017f1*/
  }
  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 0x18))(this, *((_DWORD *)this + 0xD)); /*0x401801*/
  v12 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x18); /*0x401808*/
  v15 = *((_DWORD *)this + 0x11); /*0x40180b*/
  *((_DWORD *)this + 0xD) = 0; /*0x40180e*/
  v12(this, v15); /*0x401811*/
  v13 = *(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10); /*0x401818*/
  v16 = *((_DWORD *)this + 6); /*0x40181b*/
  *((_DWORD *)this + 0x11) = 0; /*0x40181e*/
  result = v13(this, v16); /*0x401821*/
  *((_DWORD *)this + 6) = 0; /*0x401824*/
  *((_DWORD *)this + 3) = 0; /*0x401827*/
  return result; /*0x401823*/
}
