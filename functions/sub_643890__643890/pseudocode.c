TESForm::FormFlags __thiscall sub_643890(_DWORD *this, Actor *a2)
{
  TESForm::FormFlags result; // eax

  if ( a2 ) /*0x64389a*/
    result = Actor::SetCompressedFlag(a2, 1); /*0x6438a0*/
  *(this + 0xB) = a2; /*0x6438a5*/
  return result; /*0x6438a8*/
}
