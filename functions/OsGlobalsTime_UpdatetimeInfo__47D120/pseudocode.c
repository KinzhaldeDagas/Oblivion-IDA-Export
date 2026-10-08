char __thiscall OsGlobalsTime::UpdatetimeInfo(_BYTE *this)
{
  DWORD v2; // eax
  DWORD TickCount; // eax
  DWORD v4; // edx

  LOBYTE(v2) = (*this)++; /*0x47d123*/
  if ( !(_BYTE)v2 ) /*0x47d12e*/
  {
    TickCount = GetTickCount(); /*0x47d130*/
    v4 = TickCount - *((_DWORD *)this + 4); /*0x47d138*/
    v2 = TickCount - *((_DWORD *)this + 5); /*0x47d13b*/
    *((_DWORD *)this + 4) = v4; /*0x47d13e*/
    *((_DWORD *)this + 5) = v2; /*0x47d141*/
  }
  return v2; /*0x47d144*/
}
