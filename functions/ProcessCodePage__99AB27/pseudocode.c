int __usercall ProcessCodePage@<eax>(char *Str@<ecx>, int a2@<edi>)
{
  CHAR *v2; // esi
  int result; // eax
  CHAR LCData[8]; // [esp+4h] [ebp-Ch] BYREF

  v2 = Str;
  if ( Str && *Str && strcmp(Str, off_AB07C0) )
  {
    if ( strcmp(v2, off_AB07BC) )
      return atol(v2);
    result = GetLocaleInfoA(*(_DWORD *)(a2 + 0x1C), 0xBu, LCData, 8);
  }
  else
  {
    result = GetLocaleInfoA(*(_DWORD *)(a2 + 0x1C), 0x1004u, LCData, 8);
  }
  if ( !result )
    return result;
  v2 = LCData;
  return atol(v2);
}
