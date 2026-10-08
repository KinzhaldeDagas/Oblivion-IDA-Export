UInt32 __thiscall sub_4BF110(TESForm *this, TESForm *a2)
{
  UInt32 result; // eax

  result = TESForm_SetFromActiveFile(this, (bool)a2); /*0x4bf119*/
  if ( (_BYTE)a2 ) /*0x4bf120*/
  {
    if ( *((_DWORD *)this + 8) ) /*0x4bf122*/
      return (*(UInt32 (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 8) + 0x90))(*((_DWORD *)this + 8), 1); /*0x4bf13d*/
  }
  return result; /*0x4bf12e*/
}
