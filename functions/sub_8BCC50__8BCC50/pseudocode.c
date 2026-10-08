int __thiscall sub_8BCC50(_DWORD *this)
{
  int result; // eax
  unsigned int i; // ebx
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // ebp

  result = 0; /*0x8bcc77*/
  for ( i = 0; i < *(this + 3); ++i ) /*0x8bcc7b*/
  {
    v4 = *(this + 1); /*0x8bcc84*/
    v5 = *(_DWORD *)(v4 + 4 * i); /*0x8bcc87*/
    v6 = (_DWORD *)(v4 + 4 * i); /*0x8bcc8c*/
    if ( v5 ) /*0x8bcc93*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x8bcc99*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x8bccaf*/
      *v6 = 0; /*0x8bccb1*/
      result = 0; /*0x8bccb8*/
    }
  }
  *(this + 4) = 0; /*0x8bccca*/
  *(this + 3) = 0; /*0x8bcccd*/
  return result; /*0x8bccd0*/
}
