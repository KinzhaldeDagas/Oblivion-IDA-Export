void __thiscall sub_6D5810(_DWORD *this, int a2)
{
  int v3; // edi

  v3 = *(this + 0x14); /*0x6d581a*/
  if ( v3 != a2 ) /*0x6d5821*/
  {
    if ( v3 ) /*0x6d5825*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6d582b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6d5841*/
    }
    *(this + 0x14) = a2; /*0x6d5845*/
    if ( a2 ) /*0x6d5848*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6d584e*/
  }
  *(this + 0xF) = 0; /*0x6d5856*/
  *(this + 0x11) = 0; /*0x6d5859*/
  *(this + 0x10) = 0; /*0x6d585c*/
  *(this + 0x12) = 0; /*0x6d585f*/
  sub_6D5300((int)this); /*0x6d5862*/
}
