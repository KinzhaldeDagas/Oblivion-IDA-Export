int __thiscall TESContainer_GetNthForm(_DWORD *this, int a2)
{
  if ( *(this + 2) ) /*0x469c72*/
    return TESContainer_GetNthForm_::ContentLoop(this + 2, 0, a2, a2); /*0x469c7f*/
  else
    return TESContainer_GetNthForm_::Return_0(a2); /*0x469c78*/
}
