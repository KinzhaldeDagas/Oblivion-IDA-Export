unsigned __int16 __thiscall sub_719DC0(int this, _WORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int16 result; // ax

  *a2 = *(_WORD *)(this + 0x44);
  *a3 = *(_DWORD *)(this + 0x48);
  *a4 = *(_DWORD *)(this + 0x4C);
  result = *(_WORD *)(this + 0x40) + 2 * *(_WORD *)(this + 0x44);
  *a5 = result;
  return result;
}
