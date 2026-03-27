char __thiscall sub_53FD20(_DWORD *this, int a2)
{
  DWORD TickCount; // eax

  TickCount = GetTickCount();
  if ( TickCount <= (*(this + 3) & 0x7FFFFFFFu) )
    return 0;
  *(this + 3) ^= (*(this + 3) ^ (a2 + TickCount)) & 0x7FFFFFFF;
  return 1;
}
