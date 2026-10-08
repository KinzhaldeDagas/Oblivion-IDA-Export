int __thiscall sub_8CE720(_DWORD *this)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < *(this + 0x6A); ++i ) /*0x8ce72c*/
    result = sub_8BC730(*(int (__stdcall ****)(signed int))(*(this + 0x69) + 4 * i)); /*0x8ce739*/
  *(this + 0x6A) = 0; /*0x8ce74a*/
  *(this + 0x70) = 0; /*0x8ce754*/
  *(this + 0x6D) = 0; /*0x8ce75e*/
  return result; /*0x8ce749*/
}
