void __thiscall Actor_SetDispositionBonus(char *this, int a2, int a3, int a4, int a5, int a6)
{
  char *v6; // ebp
  char *v7; // esi

  v6 = this + 0xA4; /*0x5e207b*/
  v7 = this + 0xA4; /*0x5e2086*/
  (*(void (__cdecl **)(int))(*(_DWORD *)this + 0x40))(0x8000); /*0x5e2088*/
  if ( v7 ) /*0x5e208c*/
    Actor_SetDispositionBonus_::FindEntryLoop(v7, a2, a3, a4, a5, a6); /*0x5e208f*/
  else
    Actor_SetDispositionBonus_::NewDispositionEntry(v6, a2, *(float *)&a3); /*0x5e208c*/
}
