void __thiscall QueuedTreeModel_ReleaseBuildResources(_DWORD *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // esi
  volatile LONG *v6; // eax
  int v7; // esi

  v3 = *(this + 7); /*0x4392e4*/
  if ( v3 ) /*0x4392e9*/
  {
    v4 = *(unsigned __int16 *)(v3 + 0xA); /*0x4392ec*/
    for ( i = 0; i < v4; ++i ) /*0x4392ec*/
    {
      v6 = *(volatile LONG **)(*(_DWORD *)(*(this + 7) + 4) + 4 * i); /*0x4392fc*/
      if ( v6 ) /*0x439301*/
        sub_432130(v6); /*0x43930a*/
    }
  }
  v7 = *(this + 6); /*0x439317*/
  if ( v7 ) /*0x43931c*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x439322*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x439338*/
    *(this + 6) = 0; /*0x43933a*/
  }
}
