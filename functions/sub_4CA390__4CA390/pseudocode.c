void sub_4CA390()
{
  int v0; // esi

  v0 = bhkWorldM;
  if ( bhkWorldM )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(int, int))v0)(v0, 1);
    }
    bhkWorldM = 0;
  }
  dword_B3659C = 0;
}
