int sub_551320()
{
  int v0; // eax
  int v1; // edi
  int v2; // esi

  v0 = FormHeapAlloc(0xCu);
  if ( v0 )
  {
    *(_DWORD *)(v0 + 8) = 0;
    v1 = v0;
  }
  else
  {
    v1 = 0;
  }
  v2 = *(_DWORD *)(v1 + 8);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(_DWORD *)(v1 + 8) = 0;
  }
  return v1;
}
