int __userpurge BSSimpleList_InsertSorted_::NodeLoop@<eax>(
        char a1@<bl>,
        int a2@<ebp>,
        int a3@<edi>,
        _DWORD *a4@<esi>,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        int a9,
        int a10,
        int (__cdecl *a11)(int, _DWORD))
{
  _DWORD *v12; // eax
  _DWORD *v13; // eax

  if ( a1 )
    return BSSimpleList_InsertSorted_::Done_(a5, a6);
  if ( *a4 )
  {
    if ( a11(a2, *a4) > 0 )
    {
      if ( a4[1] )
      {
        return BSSimpleList_InsertSorted_::NodeLoop_Next((int)a4, a5, a6);
      }
      else
      {
        v13 = (_DWORD *)FormHeapAlloc(8u);
        if ( v13 )
        {
          *v13 = a2;
          v13[1] = 0;
        }
        else
        {
          v13 = 0;
        }
        a4[1] = v13;
        return BSSimpleList_InsertSorted_::NodeLoop_Break(a5, a6);
      }
    }
    else if ( a3 )
    {
      v12 = (_DWORD *)FormHeapAlloc(8u);
      if ( v12 )
      {
        *v12 = a2;
        v12[1] = 0;
        *(_DWORD *)(a3 + 4) = v12;
        v12[1] = a4;
      }
      else
      {
        *(_DWORD *)(a3 + 4) = 0;
        LODWORD(MEMORY[4]) = a4;
      }
      return BSSimpleList_InsertSorted_::NodeLoop_Break(a5, a6);
    }
    else
    {
      BSSimpleList_PushFront(a8, a2);
      return BSSimpleList_InsertSorted_::NodeLoop_Break(a5, a6);
    }
  }
  else
  {
    *a4 = a2;
    return BSSimpleList_InsertSorted_::NodeLoop_Break(a5, a6);
  }
}
