void __thiscall sub_675B30(_DWORD *this, unsigned int *a2)
{
  unsigned int v3; // eax
  BSSimpleList_VoidPtr *v4; // esi
  BSSimpleList_VoidPtr *v5; // eax

  if ( a2 )
  {
    v3 = a2[1];
    if ( v3 <= 5 )
    {
      v4 = (BSSimpleList_VoidPtr *)*(this + v3 + 0xA);
      if ( !v4 )
      {
        v5 = (BSSimpleList_VoidPtr *)FormHeapAlloc(8u);
        if ( v5 )
        {
          v5->firstNode.data = 0;
          v5->firstNode.next = 0;
          v4 = v5;
        }
        else
        {
          v4 = 0;
        }
        *(this + a2[1] + 0xA) = v4;
      }
      if ( sub_446C30(v4, a2) )
      {
        sub_605E80(a2);
        FormHeapFree((unsigned int)a2);
      }
      else
      {
        BSSimpleList_PushFront(v4, (int)a2);
      }
    }
  }
}
