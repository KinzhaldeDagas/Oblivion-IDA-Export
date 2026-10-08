void __thiscall sub_6E80F0(int this, char a2)
{
  int v3; // esi

  v3 = *(_DWORD *)(this + 0x10); /*0x6e80f4*/
  if ( v3 ) /*0x6e80f9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6e80ff*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6e8115*/
    *(_DWORD *)(this + 0x10) = 0; /*0x6e811b*/
    *(_BYTE *)(this + 0xC) = a2; /*0x6e8122*/
  }
  else
  {
    *(_BYTE *)(this + 0xC) = a2; /*0x6e812e*/
  }
}
