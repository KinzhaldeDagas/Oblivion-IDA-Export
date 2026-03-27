_DWORD *__thiscall sub_45B700(_DWORD **this, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  UInt32 mainThreadID; // ebx
  unsigned int v6; // eax
  _DWORD *v7; // ecx

  result = (_DWORD *)(a2[2] >> 0xE);
  if ( (a2[2] & 0x4000) == 0 )
  {
    mainThreadID = OSGlobals->mainThreadID;
    if ( GetCurrentThreadId() == mainThreadID )
      LOBYTE(v6) = *((_BYTE *)this + 0x18);
    else
      v6 = (unsigned int)*(this + 6) >> 0x12;
    if ( (v6 & 1) != 0 && (v7 = *(this + 1)) != 0 )
      return sub_452C20(v7, a2, a3);
    else
      return sub_452C20(*this, a2, a3);
  }
  return result;
}
