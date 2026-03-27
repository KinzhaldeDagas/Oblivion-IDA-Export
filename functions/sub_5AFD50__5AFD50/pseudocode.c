void __stdcall sub_5AFD50(char *a1)
{
  _DWORD *sound; // ecx
  int *v6; // eax
  int *v7; // esi

  sound = OSGlobals->sound;
  if ( sound )
  {
    v6 = PlaySound___(sound, a1, 0x121, 1);
    v7 = v6;
    if ( v6 )
    {
      if ( !sub_6B7260(v6) )
      {
        sub_6B7190(v7, 0);
        sub_6B73E0(v7);
        FormHeapFree((unsigned int)v7);
      }
    }
  }
}
