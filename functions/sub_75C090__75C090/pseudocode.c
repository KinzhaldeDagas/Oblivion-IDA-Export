int __thiscall sub_75C090(_DWORD *this, float *a2)
{
  int result; // eax

  result = *(this + 0x11); /*0x75c090*/
  *a2 = *(float *)(result + 0x64); /*0x75c09a*/
  return result; /*0x75c09c*/
}
