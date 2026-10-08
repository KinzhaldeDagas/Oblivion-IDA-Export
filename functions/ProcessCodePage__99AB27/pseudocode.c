int __usercall ProcessCodePage@<eax>(char *Str@<ecx>, int a2@<edi>)
{
  CHAR *v2; // esi
  int result; // eax
  CHAR LCData[8]; // [esp+4h] [ebp-Ch] BYREF

  v2 = Str; /*0x99ab38*/
  if ( Str && *Str && strcmp(Str, off_AB07C0) ) /*0x99ab49*/
  {
    if ( strcmp(v2, off_AB07BC) ) /*0x99ab5a*/
      return atol(v2); /*0x99ab63*/
    result = GetLocaleInfoA(*(_DWORD *)(a2 + 0x1C), 0xBu, LCData, 8); /*0x99ab6d*/
  }
  else
  {
    result = GetLocaleInfoA(*(_DWORD *)(a2 + 0x1C), 0x1004u, LCData, 8); /*0x99ab7d*/
  }
  if ( !result ) /*0x99ab85*/
    return result; /*0x99ab85*/
  v2 = LCData; /*0x99ab87*/
  return atol(v2); /*0x99ab91*/
}
