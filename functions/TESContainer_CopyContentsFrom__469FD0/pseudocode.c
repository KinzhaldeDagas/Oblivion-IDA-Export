void __thiscall TESContainer_CopyContentsFrom(TESContainer *ecx0, int a2)
{
  if ( a2 ) /*0x469fd9*/
  {
    if ( a2 == 0xFFFFFFF8 ) /*0x469fe1*/
      TESContainer_CopyContentsFrom_::Done_(0xFFFFFFF8); /*0x469fe1*/
    else
      TESContainer_CopyContentsFrom_::ItemLoop(ecx0, (int **)(a2 + 8), a2); /*0x469fe2*/
  }
  else
  {
    TESContainer_CopyContentsFrom_::Done(0); /*0x469fd9*/
  }
}
