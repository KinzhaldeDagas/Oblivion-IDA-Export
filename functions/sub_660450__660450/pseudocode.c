double __userpurge sub_660450@<st0>(_DWORD *this@<ecx>, double st7_0@<st0>, char *a3)
{
  int *v5; // eax

  v5 = (int *)*(this + 0x17D);
  if ( a3 == (char *)v5 )
  {
    if ( v5 )
    {
      if ( !sub_5299B0(v5, this + 0x17E) )
        return sub_529A20(*(this + 0x17D), st7_0, this + 0x17E);
    }
  }
  else
  {
    *(this + 0x17D) = a3;
    if ( a3 )
      return sub_529A20((int)a3, st7_0, this + 0x17E);
    else
      BSSimpleList_Clear(this + 0x17E);
  }
  return st7_0;
}
