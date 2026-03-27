__int16 __thiscall sub_64AD50(int this, int a2, char a3, int a4)
{
  __int16 result; // ax

  *(_DWORD *)(this + 0x120) = a2;
  *(_BYTE *)(this + 0x124) = a3;
  *(_BYTE *)(this + 0x136) = *(_BYTE *)(a4 + 0xE);
  *(_DWORD *)(this + 0x128) = *(_DWORD *)a4;
  *(_DWORD *)(this + 0x12C) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(this + 0x130) = *(_DWORD *)(a4 + 8);
  result = *(_WORD *)(a4 + 0xC);
  *(_WORD *)(this + 0x134) = result;
  return result;
}
