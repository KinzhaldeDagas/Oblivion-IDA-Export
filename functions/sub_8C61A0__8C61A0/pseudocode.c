void __thiscall sub_8C61A0(_DWORD *this, char a2)
{
  int v3; // edi
  int v4; // esi

  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      MemoryHeap_Free_checked((void *)(v3 - *(unsigned __int8 *)(v3 - 1)));
    }
    *(this + 3) = 0;
  }
}
