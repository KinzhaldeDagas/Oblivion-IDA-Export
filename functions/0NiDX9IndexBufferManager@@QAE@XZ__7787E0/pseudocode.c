NiDX9IndexBufferManager *__thiscall NiDX9IndexBufferManager::NiDX9IndexBufferManager(
        NiDX9IndexBufferManager *this,
        int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v7; // [esp-28h] [ebp-38h]
  unsigned int v8; // [esp-18h] [ebp-28h]
  unsigned int v9; // [esp-8h] [ebp-18h]

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7787ed*/
  *((_DWORD *)this + 1) = 0; /*0x7787f3*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x7787f6*/
  *(_DWORD *)this = &NiDX9IndexBufferManager::`vftable'; /*0x7787fc*/
  *((_DWORD *)this + 8) = 0x25; /*0x77880c*/
  *((_DWORD *)this + 7) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x778819*/
  *((_DWORD *)this + 0xA) = 0; /*0x77881f*/
  v3 = FormHeapAlloc(0x94u); /*0x778827*/
  v9 = 4 * *((_DWORD *)this + 8); /*0x778833*/
  *((_DWORD *)this + 9) = v3; /*0x778836*/
  _memset(v3, 0, v9); /*0x778839*/
  *((_DWORD *)this + 7) = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x77883e*/
  *((_DWORD *)this + 0xC) = 0x25; /*0x77884e*/
  *((_DWORD *)this + 0xB) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x77885b*/
  *((_DWORD *)this + 0xE) = 0; /*0x778862*/
  v4 = FormHeapAlloc(0x94u); /*0x77886a*/
  v8 = 4 * *((_DWORD *)this + 0xC); /*0x778876*/
  *((_DWORD *)this + 0xD) = v4; /*0x778879*/
  _memset(v4, 0, v8); /*0x77887c*/
  *((_DWORD *)this + 0xB) = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x778881*/
  *((_DWORD *)this + 0x10) = 0x25; /*0x778892*/
  *((_DWORD *)this + 0xF) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x77889f*/
  *((_DWORD *)this + 0x12) = 0; /*0x7788a5*/
  v5 = FormHeapAlloc(0x94u); /*0x7788b1*/
  v7 = 4 * *((_DWORD *)this + 0x10); /*0x7788bd*/
  *((_DWORD *)this + 0x11) = v5; /*0x7788c1*/
  _memset(v5, 0, v7); /*0x7788c4*/
  *((_DWORD *)this + 0xF) = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x7788cd*/
  *((_DWORD *)this + 2) = a2; /*0x7788d3*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x7788df*/
  *((_DWORD *)this + 3) = 0; /*0x7788e5*/
  *((_DWORD *)this + 4) = 0; /*0x7788e8*/
  *((_DWORD *)this + 5) = 0; /*0x7788eb*/
  *((_DWORD *)this + 6) = 0; /*0x7788ee*/
  NiTMap_Clear((_DWORD *)this + 7); /*0x7788f1*/
  NiTMap_Clear((_DWORD *)this + 0xB); /*0x7788f8*/
  NiTMap_Clear((_DWORD *)this + 0xF); /*0x7788ff*/
  return this; /*0x778904*/
}
