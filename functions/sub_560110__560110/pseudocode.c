void sub_560110()
{
  LONG (__stdcall *v0)(volatile LONG *); // ebx
  int v1; // esi
  _DWORD *v2; // edi
  int v3; // esi

  if ( !dword_B39E04 )
    sub_55F750(0);
  if ( *(_DWORD *)(dword_B39E04 + 4) )
  {
    nullsub_returnTrue_0arg();
    if ( !dword_B39E04 )
      sub_55F750(0);
    v0 = InterlockedDecrement;
    v1 = *(_DWORD *)(dword_B39E04 + 4);
    v2 = (_DWORD *)(dword_B39E04 + 4);
    if ( v1 )
    {
      if ( !v0((volatile LONG *)(v1 + 4)) )
        (**(void (__thiscall ***)(int, int))v1)(v1, 1);
      *v2 = 0;
    }
    v3 = dword_B43108;
    if ( dword_B43108 )
    {
      if ( !v0((volatile LONG *)(v3 + 4)) )
      {
        if ( v3 )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      }
      dword_B43108 = 0;
    }
    sub_440420("Data\\Textures\\Trees\\CanopyShadow.dds", 0);
    nullsub_returnTrue_0arg();
  }
}
