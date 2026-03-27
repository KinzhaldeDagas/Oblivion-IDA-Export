BOOL __usercall GetLcidFromLanguage@<eax>(int a1@<esi>)
{
  BOOL v1; // eax
  int PrimaryLen; // eax
  BOOL result; // eax
  int v4; // [esp-4h] [ebp-4h]

  v1 = strlen((const char *)*(_DWORD *)a1) == 3;
  *(_DWORD *)(a1 + 0x10) = v1;
  if ( v1 )
    PrimaryLen = 2;
  else
    PrimaryLen = GetPrimaryLen(v4, *(char **)a1);
  *(_DWORD *)(a1 + 0xC) = PrimaryLen;
  result = EnumSystemLocalesA((LOCALE_ENUMPROCA)LanguageEnumProc, 1u);
  if ( (*(_BYTE *)(a1 + 8) & 4) == 0 )
    *(_DWORD *)(a1 + 8) = 0;
  return result;
}
