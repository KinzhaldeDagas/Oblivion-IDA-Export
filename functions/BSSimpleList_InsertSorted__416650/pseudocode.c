int __thiscall BSSimpleList_InsertSorted(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int (__cdecl *a8)(int, _DWORD))
{
  if ( !a2 )
    return BSSimpleList_InsertSorted_::Done(0, a3);
  if ( this )
    return BSSimpleList_InsertSorted_::NodeLoop(0, a2, 0, this, a2, a3, a4, a5, a6, a7, a8);
  return BSSimpleList_InsertSorted_::Done_(a2, a3);
}
