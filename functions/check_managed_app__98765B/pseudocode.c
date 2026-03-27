BOOL check_managed_app()
{
  int v0; // eax

  if ( *(_WORD *)0x400000 == 0x5A4D
    && (v0 = *(_DWORD *)0x40003C, *(_DWORD *)(*(_DWORD *)0x40003C + 0x400000) == 0x4550)
    && *(_WORD *)(v0 + 0x400018) == 0x10B
    && *(_DWORD *)(v0 + 0x400074) > 0xEu )
  {
    return *(_DWORD *)(v0 + 0x4000E8) != 0;
  }
  else
  {
    return 0;
  }
}
