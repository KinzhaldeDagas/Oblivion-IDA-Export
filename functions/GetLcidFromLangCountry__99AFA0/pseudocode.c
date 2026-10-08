int __usercall GetLcidFromLangCountry@<eax>(int a1@<esi>)
{
  int v1; // eax
  bool v2; // zf
  int PrimaryLen; // eax
  int result; // eax
  const char *v5; // [esp-8h] [ebp-8h]
  int v6; // [esp-4h] [ebp-4h]

  v5 = *(const char **)(a1 + 4); /*0x99afa7*/
  *(_DWORD *)(a1 + 0x10) = strlen((const char *)*(_DWORD *)a1) == 3; /*0x99afb2*/
  v1 = strlen(v5); /*0x99afb5*/
  *(_DWORD *)(a1 + 0x18) = 0; /*0x99afc1*/
  v2 = *(_DWORD *)(a1 + 0x10) == 0; /*0x99afc6*/
  *(_DWORD *)(a1 + 0x14) = v1 == 3; /*0x99afcc*/
  if ( v2 ) /*0x99afcf*/
    PrimaryLen = GetPrimaryLen(v6, *(char **)a1); /*0x99afd8*/
  else
    PrimaryLen = 2; /*0x99afd3*/
  *(_DWORD *)(a1 + 0xC) = PrimaryLen; /*0x99afe4*/
  EnumSystemLocalesA((LOCALE_ENUMPROCA)LangCountryEnumProc, 1u); /*0x99afe7*/
  result = *(_DWORD *)(a1 + 8); /*0x99afed*/
  if ( (result & 0x100) == 0 || (result & 0x200) == 0 || (result & 7) == 0 ) /*0x99affe*/
    *(_DWORD *)(a1 + 8) = 0; /*0x99b000*/
  return result; /*0x99b004*/
}
