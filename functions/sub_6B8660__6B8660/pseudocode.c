MenuTopicManagerView *__cdecl MenuTopicManager::GetSingleton()
{
  UnkBohBoh *result; // eax

  result = unk_B3C218; /*0x6b8660*/
  if ( !unk_B3C218 ) /*0x6b8660*/
  {
    result = (UnkBohBoh *)FormHeapAlloc(0x10u); /*0x6b866b*/
    if ( result ) /*0x6b8675*/
    {
      result->unk04 = 0; /*0x6b8677*/
      result->unk08 = 0; /*0x6b867e*/
      result->unk00 = 0; /*0x6b8685*/
      result->unk10 = 0; /*0x6b868b*/
      unk_B3C218 = result; /*0x6b8692*/
    }
    else
    {
      unk_B3C218 = 0; /*0x6b869a*/
      return 0; /*0x6b8698*/
    }
  }
  return (MenuTopicManagerView *)result; /*0x6b8697*/
}
