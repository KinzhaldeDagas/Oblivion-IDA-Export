int __thiscall sub_556720(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax
  bool v3; // zf
  int result; // eax
  _BYTE FileInformation[32]; // [esp+4h] [ebp-24h] BYREF
  int v6; // [esp+24h] [ebp-4h]

  v1 = *(this + 3);
  if ( !v1 )
    return 0;
  LOWORD(v2) = *(_WORD *)(v1 + 4);
  v2 = (_WORD)v2 == 0xFFFF ? strlen(*(const char **)v1) : (unsigned __int16)v2;
  if ( !v2 )
    return 0;
  v3 = !GetFileAttributesExA(*(LPCSTR *)v1, GetFileExInfoStandard, FileInformation);
  result = v6;
  if ( v3 )
    return 0;
  return result;
}
