__int16 __thiscall sub_64AD50(int this, int a2, char a3, int a4)
{
  __int16 result; // ax

  *(_DWORD *)(this + 0x120) = a2; /*0x64ad58*/
  *(_BYTE *)(this + 0x124) = a3; /*0x64ad62*/
  *(_BYTE *)(this + 0x136) = *(_BYTE *)(a4 + 0xE); /*0x64ad6c*/
  *(_DWORD *)(this + 0x128) = *(_DWORD *)a4; /*0x64ad74*/
  *(_DWORD *)(this + 0x12C) = *(_DWORD *)(a4 + 4); /*0x64ad7d*/
  *(_DWORD *)(this + 0x130) = *(_DWORD *)(a4 + 8); /*0x64ad86*/
  result = *(_WORD *)(a4 + 0xC); /*0x64ad8c*/
  *(_WORD *)(this + 0x134) = result; /*0x64ad90*/
  return result; /*0x64ad97*/
}
