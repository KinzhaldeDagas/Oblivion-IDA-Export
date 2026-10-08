void __thiscall sub_88A790(_DWORD *this)
{
  int i; // esi

  if ( *(this + 5) ) /*0x88a793*/
  {
    for ( i = *(this + 0x1C); /*0x88a79a*/
          i;
          sub_8A7830(
            (LPCRITICAL_SECTION *)unk_BA7DA0,
            *(_DWORD *)(*(this + 0x1B) + 8 * i + 4),
            *(_DWORD *)(*(this + 0x1B) + 8 * i),
            0) )
    {
      --i; /*0x88a7a4*/
    }
  }
  *(this + 0x1C) = 0; /*0x88a7c5*/
}
