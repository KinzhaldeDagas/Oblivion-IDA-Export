int __thiscall TESContainer_GetNthForm(_DWORD *this, int a2)
{
  if ( *(this + 2) )
    return TESContainer_GetNthForm_::ContentLoop(a2);
  else
    return TESContainer_GetNthForm_::Return_0(a2);
}
