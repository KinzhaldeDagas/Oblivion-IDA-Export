int __thiscall sub_8F6F00(int this, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // eax
  _DWORD v7[6]; // [esp+4h] [ebp-18h] BYREF

  *(_OWORD *)(this + 0x10) = 0; /*0x8f6f0f*/
  *(_OWORD *)(this + 0x20) = 0; /*0x8f6f13*/
  v4 = *(_DWORD *)(*(_DWORD *)a2 + 0xC); /*0x8f6f19*/
  v7[1] = a2; /*0x8f6f1c*/
  v7[2] = v4; /*0x8f6f27*/
  v7[3] = a4; /*0x8f6f2b*/
  v5 = *(_DWORD *)(this + 8); /*0x8f6f2f*/
  v7[0] = a3; /*0x8f6f3b*/
  v7[4] = v5; /*0x8f6f3f*/
  return sub_934DA0(this + 0x30, v7); /*0x8f6f4c*/
}
