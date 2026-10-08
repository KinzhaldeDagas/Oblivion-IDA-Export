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

  if ( a1 ) /*0x416675*/
    return BSSimpleList_InsertSorted_::Done_(a5, a6); /*0x416675*/
  if ( *a4 ) /*0x41667b*/
  {
    if ( a11(a2, *a4) > 0 ) /*0x416690*/
    {
      if ( a4[1] ) /*0x4166cb*/
      {
        return BSSimpleList_InsertSorted_::NodeLoop_Next((int)a4, 0, a2, a5, a6, a7, a8, a9, a10, a11); /*0x4166cf*/
      }
      else
      {
        v13 = (_DWORD *)FormHeapAlloc(8u); /*0x4166d3*/
        if ( v13 ) /*0x4166dd*/
        {
          *v13 = a2; /*0x4166df*/
          v13[1] = 0; /*0x4166e1*/
        }
        else
        {
          v13 = 0; /*0x4166ea*/
        }
        a4[1] = v13; /*0x4166ec*/
        return BSSimpleList_InsertSorted_::NodeLoop_Break((int)a4, a5, a6); /*0x4166ed*/
      }
    }
    else if ( a3 ) /*0x416694*/
    {
      v12 = (_DWORD *)FormHeapAlloc(8u); /*0x4166a4*/
      if ( v12 ) /*0x4166ae*/
      {
        *v12 = a2; /*0x4166b0*/
        v12[1] = 0; /*0x4166b2*/
        *(_DWORD *)(a3 + 4) = v12; /*0x4166b9*/
        v12[1] = a4; /*0x4166bc*/
      }
      else
      {
        *(_DWORD *)(a3 + 4) = 0; /*0x4166c3*/
        LODWORD(MEMORY[4]) = a4; /*0x4166c6*/
      }
      return BSSimpleList_InsertSorted_::NodeLoop_Break((int)a4, a5, a6); /*0x4166bf*/
    }
    else
    {
      BSSimpleList_PushFront(a8, a2); /*0x41669b*/
      return BSSimpleList_InsertSorted_::NodeLoop_Break((int)a4, a5, a6); /*0x4166a0*/
    }
  }
  else
  {
    *a4 = a2; /*0x416681*/
    return BSSimpleList_InsertSorted_::NodeLoop_Break((int)a4, a5, a6); /*0x416683*/
  }
}
