signed int __stdcall TESForm_ModifiedFormSize(char a1)
{
  signed int result; // eax

  result = 0;
  if ( (a1 & 1) != 0 )
    return 4;
  return result;
}
