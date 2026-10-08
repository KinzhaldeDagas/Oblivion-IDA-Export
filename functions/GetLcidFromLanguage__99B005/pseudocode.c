BOOL __usercall GetLcidFromLanguage@<eax>(int a1@<esi>)
{
  BOOL v1; // eax
  int PrimaryLen; // eax
  BOOL result; // eax
  int v4; // [esp-4h] [ebp-4h]

  v1 = strlen((const char *)*(_DWORD *)a1) == 3; /*0x99b013*/
  *(_DWORD *)(a1 + 0x10) = v1; /*0x99b015*/
  if ( v1 ) /*0x99b018*/
    PrimaryLen = 2; /*0x99b01c*/
  else
    PrimaryLen = GetPrimaryLen(v4, *(char **)a1); /*0x99b021*/
  *(_DWORD *)(a1 + 0xC) = PrimaryLen; /*0x99b02d*/
  result = EnumSystemLocalesA((LOCALE_ENUMPROCA)LanguageEnumProc, 1u); /*0x99b030*/
  if ( (*(_BYTE *)(a1 + 8) & 4) == 0 ) /*0x99b03a*/
    *(_DWORD *)(a1 + 8) = 0; /*0x99b03c*/
  return result; /*0x99b040*/
}
