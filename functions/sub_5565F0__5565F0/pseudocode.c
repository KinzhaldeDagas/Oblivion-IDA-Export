int __thiscall sub_5565F0(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax
  bool v3; // zf
  int result; // eax
  _BYTE FileInformation[32]; // [esp+4h] [ebp-24h] BYREF
  int v6; // [esp+24h] [ebp-4h]

  v1 = *(this + 2); /*0x5565f0*/
  if ( !v1 ) /*0x5565fb*/
    return 0; /*0x5565fb*/
  LOWORD(v2) = *(_WORD *)(v1 + 4); /*0x5565fd*/
  v2 = (_WORD)v2 == 0xFFFF ? strlen(*(const char **)v1) : (unsigned __int16)v2;
  if ( !v2 ) /*0x556623*/
    return 0; /*0x556623*/
  v3 = !GetFileAttributesExA(*(LPCSTR *)v1, GetFileExInfoStandard, FileInformation); /*0x556635*/
  result = v6; /*0x556637*/
  if ( v3 ) /*0x55663b*/
    return 0; /*0x55663d*/
  return result; /*0x55663f*/
}
