DWORD __thiscall sub_45A530(_DWORD *this, char a2)
{
  UInt32 mainThreadID; // edi
  DWORD result; // eax

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45a537*/
  result = GetCurrentThreadId(); /*0x45a53c*/
  if ( result == mainThreadID ) /*0x45a544*/
  {
    if ( a2 ) /*0x45a54b*/
      *(this + 6) |= 1u; /*0x45a54d*/
    else
      *(this + 6) &= ~1u; /*0x45a556*/
  }
  else if ( a2 ) /*0x45a564*/
  {
    *(this + 6) |= 0x40000u; /*0x45a566*/
  }
  else
  {
    *(this + 6) &= ~0x40000u; /*0x45a572*/
  }
  return result; /*0x45a551*/
}
