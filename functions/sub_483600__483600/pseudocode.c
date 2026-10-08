void __thiscall sub_483600(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 1); /*0x483601*/
  if ( v1 ) /*0x483606*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v1 + 4)) ) /*0x48360c*/
      (**(void (__thiscall ***)(int, int))v1)(v1, 1); /*0x483622*/
  }
}
