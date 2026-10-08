// AnimSequenceSingle remove-if-matching sequence pointer; clears held pointer and returns true when the single entry becomes empty.
char __thiscall sub_4706B0(_DWORD *this, int a2)
{
  if ( *(this + 1) != a2 ) /*0x4706b7*/
    return 0; /*0x4706c7*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 4))(this, 0); /*0x4706c0*/
  return 1; /*0x4706c4*/
}
