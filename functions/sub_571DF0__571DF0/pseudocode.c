void __thiscall sub_571DF0(_DWORD *this)
{
  int v2; // esi

  FormHeapFree(*(this + 4)); /*0x571e19*/
  *(this + 4) = 0; /*0x571e23*/
  *((_WORD *)this + 0xB) = 0; /*0x571e26*/
  *((_WORD *)this + 0xA) = 0; /*0x571e2a*/
  FormHeapFree(0); /*0x571e2e*/
  *(this + 4) = 0; /*0x571e33*/
  *((_WORD *)this + 0xB) = 0; /*0x571e36*/
  *((_WORD *)this + 0xA) = 0; /*0x571e3a*/
  v2 = *(this + 3); /*0x571e3e*/
  if ( v2 ) /*0x571e4e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x571e54*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x571e6a*/
  }
}
