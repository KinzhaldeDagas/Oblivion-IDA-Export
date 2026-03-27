int __thiscall sub_71FD00(int this, _WORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int result; // eax

  *a2 = *(_WORD *)(this + 0x40);
  *a3 = 0;
  *a4 = *(_DWORD *)(this + 0x48);
  result = *(unsigned __int16 *)(this + 0x40);
  *a5 = 3 * result;
  return result;
}
