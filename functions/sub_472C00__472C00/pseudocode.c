// Attaches a played BSAnimGroupSequence to a ready AnimIdle. Requires phase +0x00 == 1, stores the sequence at +0x10, advances phase to 2 (active), and for dispatch mode +0x04 == 3 starts actor high-process action 0x0B.
char __thiscall AnimIdle_AttachLoadedSequence(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  int *v4; // edi
  bool v5; // zf

  if ( *this != (Ni2DBuffer *)1 ) /*0x472c06*/
    return 0; /*0x472c08*/
  v4 = (int *)(this + 4); /*0x472c13*/
  NiSmartPointer_Set__(this + 4, a2); /*0x472c19*/
  v5 = *(this + 1) == (Ni2DBuffer *)3; /*0x472c1e*/
  *this = (Ni2DBuffer *)2; /*0x472c22*/
  if ( v5 ) /*0x472c28*/
    Actor_SetCurrentActionWithBowVisualCleanup((PlayerCharacter *)*(this + 0xA), 0xB, *v4); /*0x472c32*/
  return 1; /*0x472c0a*/
}
