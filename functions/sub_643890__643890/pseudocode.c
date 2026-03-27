TESForm::FormFlags __thiscall sub_643890(_DWORD *this, Actor *a2)
{
  TESForm::FormFlags result; // eax

  if ( a2 )
    result = Actor::SetCompressedFlag(a2, 1);
  *(this + 0xB) = a2;
  return result;
}
