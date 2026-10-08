_DWORD *__thiscall sub_8A7560(int this, signed int a2, int a3)
{
  int v3; // edx
  _DWORD *result; // eax

  if ( a2 > 0x2000 || !*(_DWORD *)(this + 0x30) ) /*0x8a756c*/
    return (*(_DWORD *(__thiscall **)(_DWORD, signed int, int))(**(_DWORD **)(this + 0x10) + 0x10))( /*0x8a75c2*/
             *(_DWORD *)(this + 0x10),
             a2,
             a3);
  if ( a2 > 0x200 ) /*0x8a7578*/
    v3 = *(_DWORD *)(this + 4 * ((a2 - 1) >> 0xA) + 0x304); /*0x8a7588*/
  else
    v3 = *(char *)(a2 + this + 0x100); /*0x8a757a*/
  result = *(_DWORD **)(this + 4 * v3 + 0x34); /*0x8a758f*/
  if ( !result ) /*0x8a7595*/
    return (*(_DWORD *(__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 0x10) + 0x18))( /*0x8a75b0*/
             *(_DWORD *)(this + 0x10),
             v3,
             a3);
  --*(_DWORD *)(this + 4 * v3 + 0x78); /*0x8a7597*/
  *(_DWORD *)(this + 4 * v3 + 0x34) = *result; /*0x8a759d*/
  return result; /*0x8a75a1*/
}
