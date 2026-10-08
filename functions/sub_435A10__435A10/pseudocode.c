void __thiscall sub_435A10(_DWORD *this, unsigned int a2, int a3)
{
  unsigned int flags; // eax

  if ( !*(_WORD *)(a2 + 4) ) /*0x435a15*/
  {
    if ( !g_TESSaveLoadGame || (flags = g_TESSaveLoadGame->flags, (flags & 0x800) == 0) || (flags & 0x4000) != 0 ) /*0x435a37*/
    {
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 0x10))(*this, a3); /*0x435a45*/
      sub_4349B0((unsigned int *)a2); /*0x435a49*/
      FormHeapFree(a2); /*0x435a4f*/
    }
  }
}
