void __thiscall sub_7A6E00(_DWORD *this)
{
  bool v2; // zf

  *this = &Normal::`vftable';
  v2 = dword_B42C9C-- == 1;
  if ( !v2 )
    *((_BYTE *)this + 0x10) = 1;
  v2 = *((_BYTE *)this + 0x10) == 0;
  *this = &PosGen::`vftable';
  if ( v2 )
  {
    FormHeapFree(*(this + 2));
    FormHeapFree(*(this + 3));
  }
  *this = &Random::`vftable';
}
