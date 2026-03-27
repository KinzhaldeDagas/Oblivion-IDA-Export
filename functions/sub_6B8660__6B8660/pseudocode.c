UnkBohBoh *sub_6B8660()
{
  UnkBohBoh *result; // eax

  result = dword_B3C218;
  if ( !dword_B3C218 )
  {
    result = (UnkBohBoh *)FormHeapAlloc(0x10u);
    if ( result )
    {
      result->unk04 = 0;
      result->unk08 = 0;
      result->unk00 = 0;
      result->unk10 = 0;
      dword_B3C218 = result;
    }
    else
    {
      dword_B3C218 = 0;
      return 0;
    }
  }
  return result;
}
