int __thiscall sub_756700(_DWORD *this, _BYTE *a2)
{
  int result; // eax

  result = *(this + 0x11); /*0x756700*/
  *a2 = *(_BYTE *)(result + 0x14); /*0x75670a*/
  return result; /*0x75670c*/
}
