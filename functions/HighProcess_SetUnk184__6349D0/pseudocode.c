void __thiscall HighProcess::SetUnk184(HighProcess *this, NiObject *a2)
{
  NiObject *unk184; // esi

  unk184 = this->unk184; /*0x6349d4*/
  if ( unk184 != a2 ) /*0x6349e1*/
  {
    if ( unk184 ) /*0x6349e5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&unk184->members) ) /*0x6349eb*/
        unk184->__vftable->super.Destructor((NiRefObject *)unk184, 1); /*0x634a01*/
    }
    this->unk184 = a2; /*0x634a05*/
    if ( a2 ) /*0x634a0b*/
      InterlockedIncrement((volatile LONG *)&a2->members); /*0x634a11*/
  }
}
