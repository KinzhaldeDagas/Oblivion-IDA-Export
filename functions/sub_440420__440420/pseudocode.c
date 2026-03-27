char __stdcall sub_440420(char *Str1, int a2)
{
  int v2; // esi

  v2 = (*(int (__thiscall **)(UInt32, char *, _DWORD))(*(_DWORD *)dword_B35300 + 4))(dword_B35300, Str1, 0);
  if ( v2 && (InterlockedIncrement((volatile LONG *)(v2 + 4)), *(_DWORD *)(v2 + 4) <= (unsigned int)(a2 + 2)) )
  {
    sub_4A1A10((_DWORD **)dword_B35300, Str1);
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    return 1;
  }
  else
  {
    if ( v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    }
    return 0;
  }
}
