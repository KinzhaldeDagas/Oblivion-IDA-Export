// AnimSequenceMultiple remove sequence: removes one BSAnimGroupSequence from the list and returns true when list is empty.
char __thiscall sub_473E50(_DWORD **this, int a2)
{
  void (__thiscall ***v2)(_DWORD, int); // esi
  int v4; // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))a2; /*0x473e51*/
  if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) ) /*0x473e5c*/
  {
    if ( v2 ) /*0x473e68*/
      (**v2)(v2, 1); /*0x473e72*/
  }
  NiTPointerList_RemoveByData((BSTextureManager *)*(this + 1), &a2); /*0x473e7c*/
  v4 = (int)*(this + 1); /*0x473e81*/
  if ( *(_DWORD *)(v4 + 0xC) ) /*0x473e84*/
    return 0; /*0x473ea5*/
  if ( v4 ) /*0x473e8c*/
    (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x473e94*/
  *(this + 1) = 0; /*0x473e96*/
  return 1; /*0x473e9d*/
}
