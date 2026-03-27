signed int __stdcall TESValueForm_ModifiedSize(char a1)
{
  signed int result; // eax

  result = 0;
  if ( (a1 & 8) != 0 )
    return 4;
  return result;
}
