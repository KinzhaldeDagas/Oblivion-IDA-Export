double __userpurge sub_660450@<st0>(_DWORD *this@<ecx>, double st7_0@<st0>, char *a3)
{
  int *v4; // eax

  v4 = (int *)*(this + 0x17D); /*0x660453*/
  if ( a3 == (char *)v4 ) /*0x66045f*/
  {
    if ( v4 ) /*0x66048c*/
    {
      if ( !sub_5299B0(v4, this + 0x17E) ) /*0x660498*/
        return sub_529A20(*(this + 0x17D), st7_0, this + 0x17E); /*0x6604a8*/
    }
  }
  else
  {
    *(this + 0x17D) = a3; /*0x660463*/
    if ( a3 ) /*0x660469*/
      return sub_529A20((int)a3, st7_0, this + 0x17E); /*0x660472*/
    else
      BSSimpleList_Clear(this + 0x17E); /*0x660481*/
  }
  return st7_0; /*0x660477*/
}
