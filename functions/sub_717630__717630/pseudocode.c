int __thiscall sub_717630(_DWORD *this, __int16 a2, _DWORD *a3, _DWORD *a4, int *a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int result; // eax

  v5 = *(this + 0x2D); /*0x717630*/
  v6 = *(_DWORD *)(v5 + 0x1C); /*0x717636*/
  v7 = *(_DWORD *)(v5 + 0x48); /*0x717639*/
  *a3 = v6 + 0xC * *(unsigned __int16 *)(v7 + 2 * (unsigned __int16)(3 * a2)); /*0x717659*/
  *a4 = v6 + 0xC * *(unsigned __int16 *)(v7 + 2 * (unsigned __int16)(3 * a2 + 1)); /*0x717675*/
  result = v6 + 0xC * *(unsigned __int16 *)(v7 + 2 * (unsigned __int16)(3 * a2 + 2)); /*0x71767e*/
  *a5 = result; /*0x717686*/
  return result; /*0x717685*/
}
