DWORD __thiscall sub_45A530(_DWORD *this, char a2)
{
  UInt32 mainThreadID; // edi
  DWORD result; // eax

  mainThreadID = OSGlobals->mainThreadID;
  result = GetCurrentThreadId();
  if ( result == mainThreadID )
  {
    if ( a2 )
      *(this + 6) |= 1u;
    else
      *(this + 6) &= ~1u;
  }
  else if ( a2 )
  {
    *(this + 6) |= 0x40000u;
  }
  else
  {
    *(this + 6) &= ~0x40000u;
  }
  return result;
}
