int __thiscall sub_8BEDE0(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 1); /*0x8bede0*/
  if ( result ) /*0x8bede5*/
    *(float *)(result + 0x14) = a2; /*0x8bedeb*/
  return result; /*0x8bedee*/
}
