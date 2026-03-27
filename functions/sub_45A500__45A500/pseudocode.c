bool __thiscall sub_45A500(_BYTE *this)
{
  UInt32 mainThreadID; // edi

  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    return *(this + 0x18) & 1;
  else
    return (*((_DWORD *)this + 6) & 0x40000) != 0;
}
