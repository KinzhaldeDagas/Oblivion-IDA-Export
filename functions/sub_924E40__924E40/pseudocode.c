int __thiscall sub_924E40(_DWORD *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  v2 = *(this + 0x34); /*0x924e43*/
  *this = &off_A9DFE8; /*0x924e4b*/
  if ( v2 ) /*0x924e51*/
  {
    if ( *(_WORD *)(v2 + 4) ) /*0x924e53*/
    {
      if ( !--*(_WORD *)(v2 + 6) ) /*0x924e5e*/
        result = (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x924e69*/
    }
  }
  v4 = *(this + 0x35); /*0x924e6b*/
  if ( v4 ) /*0x924e73*/
  {
    if ( *(_WORD *)(v4 + 4) ) /*0x924e75*/
    {
      if ( !--*(_WORD *)(v4 + 6) ) /*0x924e80*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x924e8b*/
    }
  }
  v5 = *(this + 0x36); /*0x924e8d*/
  if ( v5 ) /*0x924e95*/
  {
    if ( *(_WORD *)(v5 + 4) ) /*0x924e97*/
    {
      if ( !--*(_WORD *)(v5 + 6) ) /*0x924ea2*/
        result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x924ead*/
    }
  }
  *this = &hkBaseObject::`vftable'; /*0x924eaf*/
  return result; /*0x924eb5*/
}
