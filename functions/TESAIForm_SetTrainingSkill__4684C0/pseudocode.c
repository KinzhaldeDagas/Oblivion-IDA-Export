char __thiscall TESAIForm_SetTrainingSkill(_BYTE *this, int a2)
{
  char result; // al

  result = a2;
  if ( (unsigned int)(a2 - 0xC) <= 0x14 )
  {
    *(this + 0xC) = a2 - 0xC;
    return a2 - 0xC;
  }
  return result;
}
