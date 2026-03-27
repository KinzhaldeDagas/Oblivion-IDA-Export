char __thiscall OsGlobalsTime::UpdatetimeInfo(_BYTE *this)
{
  DWORD v2; // eax
  DWORD TickCount; // eax
  DWORD v4; // edx

  LOBYTE(v2) = (*this)++;
  if ( !(_BYTE)v2 )
  {
    TickCount = GetTickCount();
    v4 = TickCount - *((_DWORD *)this + 4);
    v2 = TickCount - *((_DWORD *)this + 5);
    *((_DWORD *)this + 4) = v4;
    *((_DWORD *)this + 5) = v2;
  }
  return v2;
}
