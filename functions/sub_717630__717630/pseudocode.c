int __thiscall sub_717630(_DWORD *this, __int16 a2, _DWORD *a3, _DWORD *a4, int *a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int result; // eax

  v5 = *(this + 0x2D);
  v6 = *(_DWORD *)(v5 + 0x1C);
  v7 = *(_DWORD *)(v5 + 0x48);
  *a3 = v6 + 0xC * *(unsigned __int16 *)(v7 + 2 * (unsigned __int16)(3 * a2));
  *a4 = v6 + 0xC * *(unsigned __int16 *)(v7 + 2 * (unsigned __int16)(3 * a2 + 1));
  result = v6 + 0xC * *(unsigned __int16 *)(v7 + 2 * (unsigned __int16)(3 * a2 + 2));
  *a5 = result;
  return result;
}
