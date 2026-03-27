int __thiscall sub_8E0240(char *this)
{
  void (__stdcall *v2)(LPCRITICAL_SECTION); // edi
  int v3; // eax
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v6; // eax

  v2 = DeleteCriticalSection;
  *(_DWORD *)this = &off_A9A5A8;
  v2((LPCRITICAL_SECTION)this + 0xE);
  v2((LPCRITICAL_SECTION)this + 0xC);
  v2((LPCRITICAL_SECTION)this + 0xA);
  sub_8E01F0(this + 0xC0);
  v2((LPCRITICAL_SECTION)(this + 0x78));
  v3 = *((_DWORD *)this + 0x1D);
  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v3 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), *((_DWORD **)this + 0x1B), 8 * v3, 0x14);
  v2((LPCRITICAL_SECTION)(this + 0x54));
  v6 = *((_DWORD *)this + 0x14);
  if ( v6 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), *((_DWORD **)this + 0x12), 8 * v6, 0x14);
  *((_DWORD *)this + 0xE) = &hkBaseObject::`vftable';
  *((_DWORD *)this + 0xB) = &hkBaseObject::`vftable';
  return sub_8D3390(this);
}
