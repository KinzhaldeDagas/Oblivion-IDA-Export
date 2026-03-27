void __thiscall sub_401160(char *this)
{
  char *v1; // edi
  int v2; // esi
  int v3; // esi

  v1 = this + 8;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)v1 + 3) = 0;
  }
  v3 = *((_DWORD *)v1 + 3);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
}
