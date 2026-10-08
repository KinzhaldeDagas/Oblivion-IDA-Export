int __thiscall sub_8A75D0(int this, _DWORD *a2, signed int a3, int a4)
{
  int v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // esi

  if ( a3 > 0x2000 ) /*0x8a75da*/
    return (*(int (__thiscall **)(_DWORD, _DWORD *, signed int, int))(**(_DWORD **)(this + 0x10) + 0x14))( /*0x8a75da*/
             *(_DWORD *)(this + 0x10),
             a2,
             a3,
             a4);
  v4 = *(_DWORD *)(this + 0x30); /*0x8a75dc*/
  if ( !v4 ) /*0x8a75e1*/
    return (*(int (__thiscall **)(_DWORD, _DWORD *, signed int, int))(**(_DWORD **)(this + 0x10) + 0x14))( /*0x8a7645*/
             *(_DWORD *)(this + 0x10),
             a2,
             a3,
             a4);
  if ( a3 > 0x200 ) /*0x8a75e8*/
    result = *(_DWORD *)(this + 4 * ((a3 - 1) >> 0xA) + 0x304); /*0x8a75f8*/
  else
    result = *(char *)(a3 + this + 0x100); /*0x8a75ea*/
  v6 = *(_DWORD *)(this + 4 * result + 0x78); /*0x8a75ff*/
  if ( v6 >= v4 ) /*0x8a7605*/
    return (*(int (__thiscall **)(_DWORD, _DWORD *, int, int))(**(_DWORD **)(this + 0x10) + 0x1C))( /*0x8a762e*/
             *(_DWORD *)(this + 0x10),
             a2,
             result,
             a4);
  v7 = *(_DWORD *)(this + 4 * result + 0x34); /*0x8a7607*/
  *(_DWORD *)(this + 4 * result + 0x78) = v6 + 1; /*0x8a760c*/
  *a2 = v7; /*0x8a7614*/
  *(_DWORD *)(this + 4 * result + 0x34) = a2; /*0x8a7616*/
  return result; /*0x8a761a*/
}
