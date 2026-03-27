int __userpurge BSSimpleList_InsertSorted_::NodeLoop_Next@<eax>(
        int a1@<esi>,
        char a2@<bl>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        int a8,
        int a9,
        int (__cdecl *a10)(int, _DWORD))
{
  _DWORD *v11; // esi

  v11 = *(_DWORD **)(a1 + 4);
  if ( v11 )
    return BSSimpleList_InsertSorted_::NodeLoop(a2, a3, a1, v11, a4, a5, a6, a7, a8, a9, a10);
  else
    return BSSimpleList_InsertSorted_::Done_(a4, a5);
}
