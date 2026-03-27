int __thiscall sub_4A4400(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // edi

  for ( result = BSSimpleList_Count(this); result; result = BSSimpleList_Count(this) )
  {
    v3 = (_DWORD *)*(this + 1);
    v4 = (void (__thiscall ***)(_DWORD, int))*this;
    if ( v3 )
    {
      *(this + 1) = v3[1];
      *this = *v3;
      FormHeapFree((unsigned int)v3);
    }
    else
    {
      *this = 0;
    }
    if ( *((_BYTE *)this + 8) )
    {
      if ( v4 )
        (**v4)(v4, 1);
    }
  }
  return result;
}
