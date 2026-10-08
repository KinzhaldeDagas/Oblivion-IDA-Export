int __thiscall sub_8B9A00(int *this, int a2)
{
  int v2; // ecx
  int result; // eax

  if ( this ) /*0x8b9a02*/
  {
    v2 = *(this + 2); /*0x8b9a04*/
    if ( v2 ) /*0x8b9a09*/
      return sub_8AC0F0(v2, a2); /*0x8b9a0b*/
  }
  return result; /*0x8b9a10*/
}
