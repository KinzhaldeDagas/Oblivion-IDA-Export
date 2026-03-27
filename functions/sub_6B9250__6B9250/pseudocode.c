void __thiscall sub_6B9250(BSSimpleList_VoidPtr **this, char a2)
{
  BSSimpleList_VoidPtr **v2; // esi
  UInt32 *v3; // edi
  BSSimpleList_VoidPtr **v4; // eax

  *this = 0;
  v2 = this + 1;
  if ( !a2 )
  {
    if ( this == (BSSimpleList_VoidPtr **)0xFFFFFFFC )
      return;
    v2 = (BSSimpleList_VoidPtr **)*(this + 2);
  }
  if ( v2 )
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v2) )
    {
      v3 = (UInt32 *)*v2;
      if ( !LOBYTE((*v2)[4].firstNode.data) )
      {
        if ( v3 )
        {
          sub_6B8F50((UInt32 *)*v2);
          FormHeapFree((unsigned int)v3);
        }
      }
      v4 = (BSSimpleList_VoidPtr **)v2[1];
      if ( v4 )
      {
        v2[1] = v4[1];
        *v2 = *v4;
        FormHeapFree((unsigned int)v4);
      }
      else
      {
        *v2 = 0;
      }
    }
  }
}
