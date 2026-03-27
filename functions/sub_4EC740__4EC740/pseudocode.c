void __thiscall sub_4EC740(unsigned int *this)
{
  unsigned int *v2; // esi
  int v3; // ebx
  unsigned int v4; // edi
  int v5; // esi
  LONG (__stdcall *v6)(volatile LONG *); // edi
  int v7; // esi

  v2 = this + 0xC;
  v3 = 4;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      sub_4EC740((_DWORD *)*v2);
      FormHeapFree(v4);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  v5 = *(this + 0xB);
  v6 = InterlockedDecrement;
  if ( v5 )
  {
    if ( !v6((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  v7 = *(this + 1);
  if ( v7 )
  {
    if ( !v6((volatile LONG *)(v7 + 8)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
}
