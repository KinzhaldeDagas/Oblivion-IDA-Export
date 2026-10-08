void __thiscall sub_4440E0(char **this)
{
  char *v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  char *v4; // eax
  unsigned int v5; // esi
  char *v6; // esi

  v2 = *this; /*0x44410a*/
  v3 = InterlockedDecrement; /*0x44410e*/
  if ( *this ) /*0x44410a*/
  {
    if ( !v3((volatile LONG *)v2 + 1) ) /*0x444122*/
    {
      if ( v2 ) /*0x44412a*/
        (**(void (__thiscall ***)(int, int))v2)((int)v2, 1); /*0x444134*/
    }
    *this = 0; /*0x444136*/
  }
  v4 = *(this + 1); /*0x44413c*/
  if ( v4 ) /*0x444141*/
  {
    v5 = (unsigned int)(v4 + 0xFFFFFFFC); /*0x444146*/
    _LN21(v4, 4u, *((_DWORD *)v4 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x444152*/
    FormHeapFree(v5); /*0x444158*/
  }
  v6 = *this; /*0x444160*/
  if ( *this ) /*0x444160*/
  {
    if ( !v3((volatile LONG *)v6 + 1) ) /*0x444172*/
    {
      if ( v6 ) /*0x44417a*/
        (**(void (__thiscall ***)(int, int))v6)((int)v6, 1); /*0x444184*/
    }
  }
}
