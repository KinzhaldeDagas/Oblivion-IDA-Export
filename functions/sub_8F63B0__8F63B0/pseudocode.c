int __thiscall sub_8F63B0(int this, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // eax
  _DWORD v7[6]; // [esp+4h] [ebp-18h] BYREF

  *(_OWORD *)(this + 0x10) = 0; /*0x8f63bf*/
  *(_OWORD *)(this + 0x20) = 0; /*0x8f63c3*/
  v4 = *(_DWORD *)(*(_DWORD *)a3 + 0xC); /*0x8f63c9*/
  v7[1] = a3; /*0x8f63cc*/
  v7[2] = v4; /*0x8f63d7*/
  v7[3] = a4; /*0x8f63db*/
  v5 = *(_DWORD *)(this + 8); /*0x8f63df*/
  v7[0] = a2; /*0x8f63eb*/
  v7[4] = v5; /*0x8f63ef*/
  return sub_934DA0(this + 0x30, v7); /*0x8f63fc*/
}
