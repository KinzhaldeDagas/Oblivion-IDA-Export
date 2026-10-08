int __thiscall sub_6F2D30(int this, OB_stString28_010201A0 *source)
{
  *(_DWORD *)(this + 0x18) = 0xF; /*0x6f2d61*/
  *(_DWORD *)(this + 0x14) = 0; /*0x6f2d68*/
  *(_BYTE *)(this + 4) = 0; /*0x6f2d70*/
  OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)this, source, 0, 0xFFFFFFFF); /*0x6f2d74*/
  sub_6F22C0((OB_stVector4_010201A0 *)(this + 0x1C), (int)&source[1]); /*0x6f2d88*/
  return this; /*0x6f2d8f*/
}
