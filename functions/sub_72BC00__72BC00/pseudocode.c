LONG __thiscall sub_72BC00(LONG *this, int a2, _DWORD **a3)
{
  LONG result; // eax
  int v5; // esi
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  int v7; // esi
  int v8; // edi

  result = sub_700770(this, a2, a3); /*0x72bc10*/
  v5 = *(_DWORD *)(a2 + 8); /*0x72bc15*/
  v6 = InterlockedDecrement; /*0x72bc1b*/
  if ( v5 != *(this + 2) ) /*0x72bc21*/
  {
    if ( v5 ) /*0x72bc25*/
    {
      if ( !v6((volatile LONG *)(v5 + 4)) ) /*0x72bc2b*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x72bc3d*/
    }
    result = *(this + 2); /*0x72bc3f*/
    *(_DWORD *)(a2 + 8) = result; /*0x72bc44*/
    if ( result ) /*0x72bc47*/
      result = InterlockedIncrement((volatile LONG *)(result + 4)); /*0x72bc4d*/
  }
  v7 = *(_DWORD *)(a2 + 0xC); /*0x72bc53*/
  if ( v7 != *(this + 3) ) /*0x72bc59*/
  {
    if ( v7 ) /*0x72bc5d*/
    {
      result = v6((volatile LONG *)(v7 + 4)); /*0x72bc63*/
      if ( !result ) /*0x72bc67*/
        result = (**(int (__thiscall ***)(int, int))v7)(v7, 1); /*0x72bc75*/
    }
    v8 = *(this + 3); /*0x72bc77*/
    *(_DWORD *)(a2 + 0xC) = v8; /*0x72bc7c*/
    if ( v8 ) /*0x72bc7f*/
      return InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x72bc85*/
  }
  return result; /*0x72bc8b*/
}
