NiDX9IndexBufferManager *__thiscall NiDX9IndexBufferManager::NiDX9IndexBufferManager(
        NiDX9IndexBufferManager *this,
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
  *(_DWORD *)this = &NiDX9IndexBufferManager::`vftable';
  *((_DWORD *)this + 8) = 0x25;
  *((_DWORD *)this + 7) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  v3 = FormHeapAlloc(0x94u);
  v9 = 4 * *((_DWORD *)this + 8);
  *((_DWORD *)this + 9) = v3;
  _memset(v3, 0, v9);
  *((_DWORD *)this + 7) = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  *((_DWORD *)this + 0xC) = 0x25;
  *((_DWORD *)this + 0xB) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  *((_DWORD *)this + 0xE) = 0;
  v4 = FormHeapAlloc(0x94u);
  v8 = 4 * *((_DWORD *)this + 0xC);
  *((_DWORD *)this + 0xD) = v4;
  _memset(v4, 0, v8);
  *((_DWORD *)this + 0xB) = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  *((_DWORD *)this + 0x10) = 0x25;
  *((_DWORD *)this + 0xF) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  *((_DWORD *)this + 0x12) = 0;
  v5 = FormHeapAlloc(0x94u);
  v7 = 4 * *((_DWORD *)this + 0x10);
  *((_DWORD *)this + 0x11) = v5;
  _memset(v5, 0, v7);
  *((_DWORD *)this + 0xF) = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  *((_DWORD *)this + 2) = a2;
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  NiTMap_Clear((_DWORD *)this + 7);
  NiTMap_Clear((_DWORD *)this + 0xB);
  NiTMap_Clear((_DWORD *)this + 0xF);
  return this;
}
