void __thiscall hkAvoidBox::~hkAvoidBox(hkAvoidBox *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx

  v2 = *((_DWORD *)this + 0x2C); /*0x88e629*/
  if ( v2 ) /*0x88e639*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x88e63f*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x88e655*/
  }
  v3 = *((_DWORD *)this + 0x2A); /*0x88e657*/
  if ( v3 >= 0 ) /*0x88e664*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x88e676*/
    if ( !v4 ) /*0x88e67e*/
      v4 = unk_BA7D9C; /*0x88e680*/
    sub_8A75D0(v4, *((_DWORD **)this + 0x28), 4 * v3, 0x14); /*0x88e699*/
  }
  sub_8CDAA0((int *)this); /*0x88e6a8*/
}
