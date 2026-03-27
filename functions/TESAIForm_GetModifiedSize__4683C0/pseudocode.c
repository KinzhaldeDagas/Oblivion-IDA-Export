signed int __stdcall TESAIForm_GetModifiedSize(__int16 a1)
{
  signed int result; // eax

  result = 0;
  if ( (a1 & 0x100) != 0 )
    return 4;
  return result;
}
