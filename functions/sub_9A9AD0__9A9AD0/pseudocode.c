int __thiscall sub_9A9AD0(_DWORD *this, int a2)
{
  int v2; // esi
  bool v4; // bl

  v2 = a2; /*0x9a9ad2*/
  if ( a2 ) /*0x9a9adf*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x9a9ae5*/
  v4 = sub_9A9A00((int)(this + 3), &a2) == 0xFFFFFFFF; /*0x9a9afb*/
  if ( v2 ) /*0x9a9b00*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x9a9b06*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x9a9b18*/
  }
  if ( v4 ) /*0x9a9b1c*/
    *(this + 9) = 0x80000030; /*0x9a9b1e*/
  return *(this + 9); /*0x9a9b28*/
}
