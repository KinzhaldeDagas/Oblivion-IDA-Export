int __thiscall sub_904AE0(_DWORD *this, int a2, __m128 **a3, int a4, int a5)
{
  _DWORD v6[3]; // [esp+0h] [ebp-Ch] BYREF

  v6[2] = a5; /*0x904ae7*/
  v6[1] = 0x7F7FFFFF; /*0x904afe*/
  v6[0] = &off_A9B4E0; /*0x904b06*/
  return sub_9044F0(this, a3, a2, a4, (int)v6); /*0x904b13*/
}
