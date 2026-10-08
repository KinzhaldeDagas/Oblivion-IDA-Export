UInt32 __thiscall sub_4E8BF0(TESForm *this, TESForm *a2)
{
  int v3; // ecx

  if ( (_BYTE)a2 ) /*0x4e8bfa*/
  {
    v3 = *((_DWORD *)this + 0xB); /*0x4e8bfc*/
    if ( v3 ) /*0x4e8c01*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x90))(v3, 1); /*0x4e8c0d*/
  }
  return TESForm_SetFromActiveFile(this, (bool)a2); /*0x4e8c17*/
}
