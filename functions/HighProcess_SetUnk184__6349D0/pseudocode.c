void __thiscall HighProcess::SetUnk184(HighProcess *this, NiObject *a2)
{
  NiObject *unk184; // esi

  unk184 = this->unk184;
  if ( unk184 != a2 )
  {
    if ( unk184 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&unk184->members) )
        unk184->__vftable->super.Destructor((NiRefObject *)unk184, 1);
    }
    this->unk184 = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)&a2->members);
  }
}
