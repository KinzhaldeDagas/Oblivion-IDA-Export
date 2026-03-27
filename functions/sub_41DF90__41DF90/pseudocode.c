int __cdecl sub_41DF90(ExtraDataList *a1, BSExtraData *a2)
{
  ExtraDataList **v2; // esi
  int result; // eax

  if ( a1 )
  {
    if ( a2 )
    {
      v2 = *((ExtraDataList ***)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      if ( a1 != v2[2] )
      {
        _memset(v2 + 4, 0, 0x174);
        v2[2] = a1;
      }
      result = a2->members.type;
      v2[result + 4] = (ExtraDataList *)a2;
    }
  }
  return result;
}
