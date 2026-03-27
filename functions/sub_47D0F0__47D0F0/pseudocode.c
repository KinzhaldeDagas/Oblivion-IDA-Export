char __thiscall sub_47D0F0(_BYTE *this)
{
  DWORD v2; // eax
  DWORD TickCount; // eax
  DWORD v4; // ecx

  LOBYTE(v2) = *this;
  if ( *this )
  {
    LOBYTE(v2) = v2 - 1;
    *this = v2;
    if ( !(_BYTE)v2 )
    {
      TickCount = GetTickCount();
      v4 = TickCount - *((_DWORD *)this + 4);
      v2 = TickCount - *((_DWORD *)this + 5);
      *((_DWORD *)this + 4) = v4;
      *((_DWORD *)this + 5) = v2;
    }
  }
  return v2;
}
