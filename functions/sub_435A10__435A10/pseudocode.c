void __thiscall sub_435A10(_DWORD *this, unsigned int a2, int a3)
{
  UInt32 flags; // eax

  if ( !*(_WORD *)(a2 + 4) )
  {
    if ( !SaveLoad_CurrentSavegame
      || (flags = SaveLoad_CurrentSavegame->flags, (flags & 0x800) == 0)
      || (flags & 0x4000) != 0 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 0x10))(*this, a3);
      sub_4349B0((unsigned int *)a2);
      FormHeapFree(a2);
    }
  }
}
