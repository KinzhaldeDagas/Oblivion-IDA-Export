void __thiscall hkAvoidBox::~hkAvoidBox(hkAvoidBox *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx

  v2 = *((_DWORD *)this + 0x2C);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v3 = *((_DWORD *)this + 0x2A);
  if ( v3 >= 0 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v4 )
      v4 = dword_BA7D9C;
    sub_8A75D0(v4, *((_DWORD **)this + 0x28), 4 * v3, 0x14);
  }
  sub_8CDAA0(this);
}
