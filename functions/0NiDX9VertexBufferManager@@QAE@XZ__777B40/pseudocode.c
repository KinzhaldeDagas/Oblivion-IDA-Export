NiDX9VertexBufferManager *__thiscall NiDX9VertexBufferManager::NiDX9VertexBufferManager(
        NiDX9VertexBufferManager *this,
        int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v7; // [esp-28h] [ebp-38h]
  unsigned int v8; // [esp-18h] [ebp-28h]
  unsigned int v9; // [esp-8h] [ebp-18h]

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x777b4d*/
  *((_DWORD *)this + 1) = 0; /*0x777b53*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x777b56*/
  *(_DWORD *)this = &NiDX9VertexBufferManager::`vftable'; /*0x777b5c*/
  *((_DWORD *)this + 4) = 0x25; /*0x777b6c*/
  *((_DWORD *)this + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777b79*/
  *((_DWORD *)this + 6) = 0; /*0x777b7f*/
  v3 = FormHeapAlloc(0x94u); /*0x777b87*/
  v9 = 4 * *((_DWORD *)this + 4); /*0x777b93*/
  *((_DWORD *)this + 5) = v3; /*0x777b96*/
  _memset(v3, 0, v9); /*0x777b99*/
  *((_DWORD *)this + 3) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777b9e*/
  *((_DWORD *)this + 8) = 0x25; /*0x777bae*/
  *((_DWORD *)this + 7) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777bbb*/
  *((_DWORD *)this + 0xA) = 0; /*0x777bc2*/
  v4 = FormHeapAlloc(0x94u); /*0x777bca*/
  v8 = 4 * *((_DWORD *)this + 8); /*0x777bd6*/
  *((_DWORD *)this + 9) = v4; /*0x777bd9*/
  _memset(v4, 0, v8); /*0x777bdc*/
  *((_DWORD *)this + 7) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777be1*/
  *((_DWORD *)this + 0xC) = 0x25; /*0x777bf2*/
  *((_DWORD *)this + 0xB) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777bff*/
  *((_DWORD *)this + 0xE) = 0; /*0x777c05*/
  v5 = FormHeapAlloc(0x94u); /*0x777c11*/
  v7 = 4 * *((_DWORD *)this + 0xC); /*0x777c1d*/
  *((_DWORD *)this + 0xD) = v5; /*0x777c21*/
  _memset(v5, 0, v7); /*0x777c24*/
  *((_DWORD *)this + 0xB) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777c2e*/
  *((_DWORD *)this + 0x10) = 0; /*0x777c34*/
  *((_DWORD *)this + 0x11) = 0; /*0x777c37*/
  *((_DWORD *)this + 0x12) = 0; /*0x777c40*/
  *((_DWORD *)this + 0x13) = 0; /*0x777c43*/
  *((_DWORD *)this + 0x3E) = 0; /*0x777c47*/
  *((_DWORD *)this + 0x3F) = 0; /*0x777c4a*/
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x777c4d*/
  *((_DWORD *)this + 2) = a2; /*0x777c57*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x777c60*/
  NiTMap_Clear((_DWORD *)this + 3); /*0x777c64*/
  NiTMap_Clear((_DWORD *)this + 7); /*0x777c6b*/
  NiTMap_Clear((_DWORD *)this + 0xB); /*0x777c72*/
  *((_DWORD *)this + 0xF) = 0; /*0x777c78*/
  return this; /*0x777c77*/
}
