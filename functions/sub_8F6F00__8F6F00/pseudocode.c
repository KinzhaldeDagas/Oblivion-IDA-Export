int __thiscall sub_8F6F00(int this, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // eax
  _DWORD v7[6]; // [esp+4h] [ebp-18h] BYREF

  *(_OWORD *)(this + 0x10) = 0;
  *(_OWORD *)(this + 0x20) = 0;
  v4 = *(_DWORD *)(*(_DWORD *)a2 + 0xC);
  v7[1] = a2;
  v7[2] = v4;
  v7[3] = a4;
  v5 = *(_DWORD *)(this + 8);
  v7[0] = a3;
  v7[4] = v5;
  return sub_934DA0(this + 0x30, v7);
}
