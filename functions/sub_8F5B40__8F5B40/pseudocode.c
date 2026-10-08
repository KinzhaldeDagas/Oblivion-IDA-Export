signed int __thiscall sub_8F5B40(int *this)
{
  int v1; // eax

  v1 = *(this + 7); /*0x8f5b40*/
  if ( v1 < 0 ) /*0x8f5b45*/
    return 1; /*0x8f5b4d*/
  *(this + 4) = v1; /*0x8f5b47*/
  return 0; /*0x8f5b4c*/
}
