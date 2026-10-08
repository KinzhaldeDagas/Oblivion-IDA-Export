int __thiscall sub_72FF40(int this, _DWORD *a2, float a3, _DWORD *a4, _DWORD *a5, int a6)
{
  int v7; // edx

  *(_DWORD *)this = *a2; /*0x72ff4d*/
  v7 = a2[1]; /*0x72ff4f*/
  *(float *)(this + 8) = a3; /*0x72ff52*/
  *(_DWORD *)(this + 4) = v7; /*0x72ff59*/
  *(_DWORD *)(this + 0xC) = *a4; /*0x72ff5e*/
  *(_DWORD *)(this + 0x10) = a4[1]; /*0x72ff68*/
  *(_DWORD *)(this + 0x14) = *a5; /*0x72ff6d*/
  *(_DWORD *)(this + 0x18) = a5[1]; /*0x72ff79*/
  *(_DWORD *)(this + 0x44) = a6; /*0x72ff7c*/
  sub_72FDF0((float *)this); /*0x72ff7f*/
  return this; /*0x72ff87*/
}
