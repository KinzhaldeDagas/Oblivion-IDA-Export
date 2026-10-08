int __thiscall sub_94D1F0(int this, int a2, int a3, int a4, int a5, _OWORD *a6, _OWORD *a7, __int128 *a8)
{
  __int128 v8; // xmm0

  *(_OWORD *)(this + 0x80) = *a6; /*0x94d1ff*/
  *(_OWORD *)(this + 0x60) = *a7; /*0x94d20d*/
  v8 = *a8; /*0x94d211*/
  *(_DWORD *)(this + 0x90) = a3; /*0x94d218*/
  *(_DWORD *)(this + 0x94) = a4; /*0x94d222*/
  *(_OWORD *)(this + 0x70) = v8; /*0x94d22c*/
  *(_DWORD *)(this + 0x98) = a2; /*0x94d230*/
  *(_DWORD *)(this + 0x9C) = a5; /*0x94d236*/
  return a5; /*0x94d23c*/
}
