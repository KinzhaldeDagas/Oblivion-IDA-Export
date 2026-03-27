BOOL __thiscall BSWStringT_Set(unsigned __int16 *this, const unsigned __int16 *a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ebp
  unsigned __int16 *v7; // eax
  unsigned __int16 v8; // ax

  if ( !a2 || (v4 = wcslen(a2), v4 <= a3) )
    v4 = a3;
  if ( v4 > *(this + 3) )
  {
    v6 = *(_DWORD *)this;
    v7 = (unsigned __int16 *)FormHeapAlloc((unsigned __int64)(v4 + 1) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * (v4 + 1));
    *(_DWORD *)this = v7;
    if ( v7 )
    {
      if ( a2 )
        BSWStringT_Static_StrCpy(v7, a2);
      else
        *v7 = 0;
    }
    else
    {
      v4 = 0;
    }
    FormHeapFree(v6);
    v8 = v4;
    if ( v4 > 0xFFFF )
      v8 = 0xFFFF;
    *(this + 3) = v8;
  }
  else
  {
    if ( !v4 )
    {
      FormHeapFree(*(_DWORD *)this);
      *(this + 2) = 0;
      *(_DWORD *)this = 0;
      *(this + 3) = 0;
      return 0;
    }
    if ( a2 )
      BSWStringT_Static_StrCpy(*(unsigned __int16 **)this, a2);
    else
      **(_WORD **)this = 0;
  }
  if ( v4 > 0xFFFF )
    *(this + 2) = 0xFFFF;
  else
    *(this + 2) = v4;
  return v4 != 0;
}
