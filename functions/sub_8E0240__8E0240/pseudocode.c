int __thiscall sub_8E0240(char *this)
{
  void (__stdcall *v2)(LPCRITICAL_SECTION); // edi
  int v3; // eax
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v6; // eax

  v2 = DeleteCriticalSection; /*0x8e0246*/
  *(_DWORD *)this = &off_A9A5A8; /*0x8e0253*/
  v2((LPCRITICAL_SECTION)this + 0xE); /*0x8e0259*/
  v2((LPCRITICAL_SECTION)this + 0xC); /*0x8e0262*/
  v2((LPCRITICAL_SECTION)this + 0xA); /*0x8e026b*/
  sub_8E01F0((_RTL_CRITICAL_SECTION_0 *)this + 6); /*0x8e0273*/
  v2((LPCRITICAL_SECTION)(this + 0x78)); /*0x8e027c*/
  v3 = *((_DWORD *)this + 0x1D); /*0x8e027e*/
  v4 = MEMORY[0xBA9DE4]; /*0x8e0283*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e0289*/
  if ( v3 >= 0 ) /*0x8e0290*/
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), *((_DWORD **)this + 0x1B), 8 * v3, 0x14); /*0x8e02ab*/
  v2((LPCRITICAL_SECTION)(this + 0x54)); /*0x8e02b4*/
  v6 = *((_DWORD *)this + 0x14); /*0x8e02b6*/
  if ( v6 >= 0 ) /*0x8e02bb*/
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), *((_DWORD **)this + 0x12), 8 * v6, 0x14); /*0x8e02d6*/
  *((_DWORD *)this + 0xE) = &hkBaseObject::`vftable'; /*0x8e02e1*/
  *((_DWORD *)this + 0xB) = &hkBaseObject::`vftable'; /*0x8e02e4*/
  return sub_8D3390(this); /*0x8e02e0*/
}
