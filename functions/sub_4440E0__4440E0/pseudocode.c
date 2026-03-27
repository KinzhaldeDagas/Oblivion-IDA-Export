void __thiscall sub_4440E0(int **this)
{
  int *v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int *v4; // eax
  unsigned int v5; // esi
  int *v6; // esi

  v2 = *this;
  v3 = InterlockedDecrement;
  if ( *this )
  {
    if ( !v3(v2 + 1) )
    {
      if ( v2 )
        (*(void (__thiscall **)(int *, int))*v2)(v2, 1);
    }
    *this = 0;
  }
  v4 = *(this + 1);
  if ( v4 )
  {
    v5 = (unsigned int)(v4 + 0xFFFFFFFF);
    _LN21(v4, 4u, v4[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v5);
  }
  v6 = *this;
  if ( *this )
  {
    if ( !v3(v6 + 1) )
    {
      if ( v6 )
        (*(void (__thiscall **)(int *, int))*v6)(v6, 1);
    }
  }
}
