char __stdcall sub_440420(char *Str1, int a2)
{
  int v2; // esi

  v2 = (*(int (__thiscall **)(UInt32, char *, _DWORD))(*(_DWORD *)unk_B35300 + 4))(unk_B35300, Str1, 0); /*0x440457*/
  if ( v2 && (InterlockedIncrement((volatile LONG *)(v2 + 4)), *(_DWORD *)(v2 + 4) <= (unsigned int)(a2 + 2)) ) /*0x440486*/
  {
    sub_4A1A10((_DWORD **)unk_B35300, Str1); /*0x44048f*/
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x44049d*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4404af*/
    return 1; /*0x4404b1*/
  }
  else
  {
    if ( v2 ) /*0x4404d2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x4404d8*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4404ea*/
    }
    return 0; /*0x4404ec*/
  }
}
