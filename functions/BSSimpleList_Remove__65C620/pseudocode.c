void __thiscall BSSimpleList_Remove(int *this, int a2)
{
  int v2; // esi

  if ( a2 )
  {
    v2 = *(this + 1);
    if ( v2 || *this )
      BSSimpleList_Remove_::LoopCheck(this, a2, (int)this, v2, a2);
    else
      BSSimpleList_Remove_::Done_(a2);
  }
  else
  {
    BSSimpleList_Remove_::Done(0);
  }
}
