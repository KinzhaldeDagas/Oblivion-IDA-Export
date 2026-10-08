int __thiscall sub_4820F0(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 0x38) = *a2; /*0x4820f6*/
  *(this + 0x39) = a2[1]; /*0x4820ff*/
  result = a2[2]; /*0x482105*/
  ++*(this + 0x2E); /*0x482108*/
  *(this + 0x3A) = result; /*0x48210f*/
  return result; /*0x482115*/
}
