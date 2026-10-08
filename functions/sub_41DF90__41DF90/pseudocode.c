int __cdecl sub_41DF90(ExtraDataList *a1, BSExtraData *a2)
{
  ExtraDataList **v2; // esi
  int result; // eax

  if ( a1 ) /*0x41df97*/
  {
    if ( a2 ) /*0x41dfa0*/
    {
      v2 = *((ExtraDataList ***)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x41dfaf*/
      if ( a1 != v2[2] ) /*0x41dfb8*/
      {
        _memset((int)(v2 + 4), 0, 0x174u); /*0x41dfc8*/
        v2[2] = a1; /*0x41dfd0*/
      }
      result = a2->members.type; /*0x41dfd6*/
      v2[result + 4] = (ExtraDataList *)a2; /*0x41dfda*/
    }
  }
  return result; /*0x41dfe3*/
}
