int __thiscall sub_556720(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax
  bool v3; // zf
  int result; // eax
  _BYTE FileInformation[32]; // [esp+4h] [ebp-24h] BYREF
  int v6; // [esp+24h] [ebp-4h]

  v1 = *(this + 3); /*0x556720*/
  if ( !v1 ) /*0x55672b*/
    return 0; /*0x55672b*/
  LOWORD(v2) = *(_WORD *)(v1 + 4); /*0x55672d*/
  v2 = (_WORD)v2 == 0xFFFF ? strlen(*(const char **)v1) : (unsigned __int16)v2;
  if ( !v2 ) /*0x556753*/
    return 0; /*0x556753*/
  v3 = !GetFileAttributesExA(*(LPCSTR *)v1, GetFileExInfoStandard, FileInformation); /*0x556765*/
  result = v6; /*0x556767*/
  if ( v3 ) /*0x55676b*/
    return 0; /*0x55676d*/
  return result; /*0x55676f*/
}
