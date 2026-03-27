void __thiscall sub_6C4810(int *this, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  int v5; // eax

  v2 = --*(this + 2);
  v3 = *this;
  v4 = *(_DWORD *)(*this + 4 * a2);
  if ( v4 != *(_DWORD *)(*this + 4 * v2) )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    v5 = *(_DWORD *)(v3 + 4 * v2);
    *(_DWORD *)(v3 + 4 * a2) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
}
