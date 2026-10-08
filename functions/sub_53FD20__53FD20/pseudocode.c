char __thiscall sub_53FD20(_DWORD *this, int a2)
{
  DWORD TickCount; // eax

  TickCount = GetTickCount(); /*0x53fd23*/
  if ( TickCount <= (*(this + 3) & 0x7FFFFFFFu) ) /*0x53fd43*/
    return 0; /*0x53fd5d*/
  *(this + 3) ^= (*(this + 3) ^ (a2 + TickCount)) & 0x7FFFFFFF; /*0x53fd54*/
  return 1; /*0x53fd59*/
}
