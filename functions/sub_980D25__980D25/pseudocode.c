void *__thiscall sub_980D25(void *this)
{
  int v1; // edx
  void *result; // eax
  int v3; // ecx

  v1 = *(_DWORD *)&byte_BA9BB4[0x9C]; /*0x980d25*/
  result = this; /*0x980d2c*/
  v3 = *(_DWORD *)&byte_BA9BB4[0x5C]; /*0x980d2e*/
  *(_DWORD *)&byte_BA9BB4[0xA0] = &byte_BA9BB4[0x5C]; /*0x980d39*/
  *(_DWORD *)&byte_BA9BB4[*(_DWORD *)(v3 + 4) + 0x88] = v1; /*0x980d42*/
  *(_DWORD *)&byte_BA9BB4[*(_DWORD *)(*(_DWORD *)&byte_BA9BB4[0x5C] + 4) + 0x6C] |= 2u; /*0x980d53*/
  return result; /*0x980d57*/
}
