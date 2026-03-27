NiDX9VertexBufferManager *__thiscall NiDX9VertexBufferManager::NiDX9VertexBufferManager(
        NiDX9VertexBufferManager *this,
        int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp-28h] [ebp-38h]
  int v8; // [esp-18h] [ebp-28h]
  int v9; // [esp-8h] [ebp-18h]

  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &NiDX9VertexBufferManager::`vftable';
  *((_DWORD *)this + 4) = 0x25;
  *((_DWORD *)this + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  *((_DWORD *)this + 6) = 0;
  v3 = FormHeapAlloc(0x94u);
  v9 = 4 * *((_DWORD *)this + 4);
  *((_DWORD *)this + 5) = v3;
  _memset(v3, 0, v9);
  *((_DWORD *)this + 3) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  *((_DWORD *)this + 8) = 0x25;
  *((_DWORD *)this + 7) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  v4 = FormHeapAlloc(0x94u);
  v8 = 4 * *((_DWORD *)this + 8);
  *((_DWORD *)this + 9) = v4;
  _memset(v4, 0, v8);
  *((_DWORD *)this + 7) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  *((_DWORD *)this + 0xC) = 0x25;
  *((_DWORD *)this + 0xB) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  *((_DWORD *)this + 0xE) = 0;
  v5 = FormHeapAlloc(0x94u);
  v7 = 4 * *((_DWORD *)this + 0xC);
  *((_DWORD *)this + 0xD) = v5;
  _memset(v5, 0, v7);
  *((_DWORD *)this + 0xB) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4);
  *((_DWORD *)this + 2) = a2;
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  NiTMap_Clear((_DWORD *)this + 3);
  NiTMap_Clear((_DWORD *)this + 7);
  NiTMap_Clear((_DWORD *)this + 0xB);
  *((_DWORD *)this + 0xF) = 0;
  return this;
}
