void __thiscall sub_6C4810(int *this, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  int v5; // eax

  v2 = --*(this + 2); /*0x6c4815*/
  v3 = *this; /*0x6c481e*/
  v4 = *(_DWORD *)(*this + 4 * a2); /*0x6c4821*/
  if ( v4 != *(_DWORD *)(*this + 4 * v2) ) /*0x6c4827*/
  {
    if ( v4 ) /*0x6c482b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6c4831*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6c4847*/
    }
    v5 = *(_DWORD *)(v3 + 4 * v2); /*0x6c4849*/
    *(_DWORD *)(v3 + 4 * a2) = v5; /*0x6c484e*/
    if ( v5 ) /*0x6c4851*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6c485e*/
  }
}
