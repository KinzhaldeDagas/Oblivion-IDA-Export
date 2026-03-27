int __thiscall Actor_SetDispositionBonus(char *this, int a2, int a3, int a4, int a5, int a6)
{
  char *v6; // esi

  v6 = this + 0xA4;
  (*(void (__cdecl **)(int))(*(_DWORD *)this + 0x40))(0x8000);
  if ( v6 )
    return Actor_SetDispositionBonus_::FindEntryLoop(v6, a2, a3, a4, a5, a6);
  else
    return Actor_SetDispositionBonus_::NewDispositionEntry(a2, a3);
}
