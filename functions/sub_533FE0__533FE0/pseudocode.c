int __thiscall sub_533FE0(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(this + 2); /*0x533fe0*/
  if ( !v1 ) /*0x533fe5*/
    return 0; /*0x533ff6*/
  result = *(_DWORD *)(v1 + 0x30); /*0x533fe7*/
  if ( result == 0xFFFFFFFF ) /*0x533fed*/
    return *(_DWORD *)(v1 + 0x148); /*0x533fef*/
  return result; /*0x533ff5*/
}
