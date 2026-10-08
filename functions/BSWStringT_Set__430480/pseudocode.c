BOOL __thiscall BSWStringT_Set(unsigned __int16 *this, const unsigned __int16 *a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ebp
  unsigned __int16 *v7; // eax
  unsigned __int16 v8; // ax

  if ( !a2 || (v4 = wcslen(a2), v4 <= a3) ) /*0x4304aa*/
    v4 = a3; /*0x4304ac*/
  if ( v4 > *(this + 3) )
  {
    v6 = *(_DWORD *)this; /*0x430503*/
    v7 = (unsigned __int16 *)FormHeapAlloc((unsigned __int64)(v4 + 1) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * (v4 + 1));
    *(_DWORD *)this = v7; /*0x430523*/
    if ( v7 ) /*0x430525*/
    {
      if ( a2 ) /*0x430529*/
        BSWStringT_Static_StrCpy(v7, a2); /*0x43052d*/
      else
        *v7 = 0; /*0x430537*/
    }
    else
    {
      v4 = 0; /*0x43053e*/
    }
    FormHeapFree(v6); /*0x430541*/
    v8 = v4; /*0x43054f*/
    if ( v4 > 0xFFFF ) /*0x430552*/
      v8 = 0xFFFF; /*0x430554*/
    *(this + 3) = v8; /*0x430559*/
  }
  else
  {
    if ( !v4 ) /*0x4304b8*/
    {
      FormHeapFree(*(_DWORD *)this); /*0x4304de*/
      *(this + 2) = 0; /*0x4304eb*/
      *(_DWORD *)this = 0; /*0x4304ef*/
      *(this + 3) = 0; /*0x4304f1*/
      return 0; /*0x430500*/
    }
    if ( a2 ) /*0x4304bc*/
      BSWStringT_Static_StrCpy(*(unsigned __int16 **)this, a2); /*0x4304c2*/
    else
      **(_WORD **)this = 0; /*0x4304d1*/
  }
  if ( v4 > 0xFFFF ) /*0x430563*/
    *(this + 2) = 0xFFFF; /*0x43057f*/
  else
    *(this + 2) = v4; /*0x430568*/
  return v4 != 0; /*0x4304f5*/
}
