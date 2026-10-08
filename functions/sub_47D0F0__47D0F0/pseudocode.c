char __thiscall sub_47D0F0(_BYTE *this)
{
  DWORD v2; // eax
  DWORD TickCount; // eax
  DWORD v4; // ecx

  LOBYTE(v2) = *this; /*0x47d0f3*/
  if ( *this ) /*0x47d0f3*/
  {
    LOBYTE(v2) = v2 - 1; /*0x47d0f9*/
    *this = v2; /*0x47d0fb*/
    if ( !(_BYTE)v2 ) /*0x47d0fd*/
    {
      TickCount = GetTickCount(); /*0x47d0ff*/
      v4 = TickCount - *((_DWORD *)this + 4); /*0x47d107*/
      v2 = TickCount - *((_DWORD *)this + 5); /*0x47d10a*/
      *((_DWORD *)this + 4) = v4; /*0x47d10d*/
      *((_DWORD *)this + 5) = v2; /*0x47d110*/
    }
  }
  return v2; /*0x47d113*/
}
