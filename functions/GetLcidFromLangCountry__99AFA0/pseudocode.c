int __usercall GetLcidFromLangCountry@<eax>(int a1@<esi>)
{
  int v1; // eax
  bool v2; // zf
  int PrimaryLen; // eax
  int result; // eax
  const char *v5; // [esp-8h] [ebp-8h]
  int v6; // [esp-4h] [ebp-4h]

  v5 = *(const char **)(a1 + 4);
  *(_DWORD *)(a1 + 0x10) = strlen((const char *)*(_DWORD *)a1) == 3;
  v1 = strlen(v5);
  *(_DWORD *)(a1 + 0x18) = 0;
  v2 = *(_DWORD *)(a1 + 0x10) == 0;
  *(_DWORD *)(a1 + 0x14) = v1 == 3;
  if ( v2 )
    PrimaryLen = GetPrimaryLen(v6, *(char **)a1);
  else
    PrimaryLen = 2;
  *(_DWORD *)(a1 + 0xC) = PrimaryLen;
  EnumSystemLocalesA((LOCALE_ENUMPROCA)LangCountryEnumProc, 1u);
  result = *(_DWORD *)(a1 + 8);
  if ( (result & 0x100) == 0 || (result & 0x200) == 0 || (result & 7) == 0 )
    *(_DWORD *)(a1 + 8) = 0;
  return result;
}
