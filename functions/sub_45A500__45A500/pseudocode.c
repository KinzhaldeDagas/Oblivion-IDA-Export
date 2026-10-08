bool __thiscall sub_45A500(_BYTE *this)
{
  UInt32 mainThreadID; // edi

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45a507*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x45a514*/
    return *(this + 0x18) & 1; /*0x45a51a*/
  else
    return (*((_DWORD *)this + 6) & 0x40000) != 0; /*0x45a525*/
}
