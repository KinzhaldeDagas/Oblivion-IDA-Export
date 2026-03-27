void __thiscall BSSimpleList_PushFront(_DWORD *this, int a2)
{
  _DWORD *v3; // eax

  if ( a2 )
  {
    if ( *this )
    {
      v3 = (_DWORD *)FormHeapAlloc(8u);
      if ( v3 )
      {
        *v3 = *this;
        v3[1] = 0;
        v3[1] = *(this + 1);
        *this = a2;
        *(this + 1) = v3;
      }
      else
      {
        *(_DWORD *)4 = *(this + 1);
        *(this + 1) = 0;
        BSSimpleList_PushFront_::SetNodeData(a2);
      }
    }
    else
    {
      BSSimpleList_PushFront_::SetNodeData(a2);
    }
  }
  else
  {
    BSSimpleList_PushFront_::Done(0);
  }
}
