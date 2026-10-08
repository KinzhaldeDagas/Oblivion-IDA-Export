void __thiscall BSSimpleList_Remove(int *this, int a2)
{
  int v2; // esi

  if ( a2 ) /*0x65c627*/
  {
    v2 = *(this + 1); /*0x65c62a*/
    if ( v2 || *this ) /*0x65c631*/
      BSSimpleList_Remove_::LoopCheck(this, a2, (int)this, v2, (int)this, a2); /*0x65c63a*/
    else
      BSSimpleList_Remove_::Done_(a2); /*0x65c633*/
  }
  else
  {
    BSSimpleList_Remove_::Done(0); /*0x65c627*/
  }
}
