// Verified: clears list/indexed storage and then frees/nulls both dedicated nodes at +8/+0xC. Completes constructor ownership. Probable relative of Fallout ModifierList destructor, but permanent-node layout is Oblivion-specific.
void __thiscall AVCollection_destr(AVCollection *self)
{
  unsigned int *p_magicka; // esi
  unsigned int *p_fatigue; // esi

  AVCollection_ClearArrayAndList(self); /*0x65ccc4*/
  p_magicka = (unsigned int *)&self->magicka; /*0x65ccc9*/
  if ( self != (AVCollection *)0xFFFFFFF8 ) /*0x65ccce*/
  {
    if ( *p_magicka ) /*0x65ccd0*/
    {
      FormHeapFree(*p_magicka); /*0x65ccd7*/
      *p_magicka = 0; /*0x65ccdf*/
    }
  }
  p_fatigue = (unsigned int *)&self->fatigue; /*0x65cce5*/
  if ( self != (AVCollection *)0xFFFFFFF4 ) /*0x65ccea*/
  {
    if ( *p_fatigue ) /*0x65ccec*/
    {
      FormHeapFree(*p_fatigue); /*0x65ccf3*/
      *p_fatigue = 0; /*0x65ccfb*/
    }
  }
}
