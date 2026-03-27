void __thiscall hkCharControllerShape::~hkCharControllerShape(hkCharControllerShape *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx

  v2 = *((_DWORD *)this + 0x12);
  v3 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v2 >= 0 )
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, *((_DWORD **)this + 0x10), 0x10 * v2, 0x14);
  }
  v6 = *((_DWORD *)this + 0xE);
  if ( v6 >= 0 )
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    sub_8A75D0(v7, *((_DWORD **)this + 0xC), 0x30 * (v6 & 0x3FFFFFFF), 0x14);
  }
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
