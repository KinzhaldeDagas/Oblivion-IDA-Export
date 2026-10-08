void __thiscall BSSimpleList_PushFront(_DWORD *this, int a2)
{
  _DWORD *v3; // eax

  if ( a2 ) /*0x446cba*/
  {
    if ( *this ) /*0x446cbc*/
    {
      v3 = (_DWORD *)FormHeapAlloc(8u); /*0x446cc3*/
      if ( v3 ) /*0x446ccd*/
      {
        *v3 = *this; /*0x446cd1*/
        v3[1] = 0; /*0x446cd3*/
        v3[1] = *(this + 1); /*0x446cdd*/
        *this = a2; /*0x446ce0*/
        *(this + 1) = v3; /*0x446ce3*/
      }
      else
      {
        *(_DWORD *)4 = *(this + 1); /*0x446cef*/
        *(this + 1) = 0; /*0x446cf2*/
        BSSimpleList_PushFront_::SetNodeData(a2, this, a2); /*0x446cf3*/
      }
    }
    else
    {
      BSSimpleList_PushFront_::SetNodeData(a2, this, a2); /*0x446cbf*/
    }
  }
  else
  {
    BSSimpleList_PushFront_::Done(0); /*0x446cba*/
  }
}
