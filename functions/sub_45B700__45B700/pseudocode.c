_DWORD *__thiscall sub_45B700(_DWORD **this, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  UInt32 mainThreadID; // ebx
  unsigned int v6; // eax
  _DWORD *v7; // ecx

  result = (_DWORD *)(a2[2] >> 0xE); /*0x45b709*/
  if ( (a2[2] & 0x4000) == 0 ) /*0x45b710*/
  {
    mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45b719*/
    if ( GetCurrentThreadId() == mainThreadID ) /*0x45b725*/
      LOBYTE(v6) = *((_BYTE *)this + 0x18); /*0x45b727*/
    else
      v6 = (unsigned int)*(this + 6) >> 0x12; /*0x45b72f*/
    if ( (v6 & 1) != 0 && (v7 = *(this + 1)) != 0 ) /*0x45b73d*/
      return sub_452C20(v7, a2, a3); /*0x45b745*/
    else
      return sub_452C20(*this, a2, a3); /*0x45b769*/
  }
  return result; /*0x45b74a*/
}
