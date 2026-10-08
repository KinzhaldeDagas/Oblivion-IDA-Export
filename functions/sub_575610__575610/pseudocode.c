int __thiscall sub_575610(int this, int a2, int a3, int a4, int a5, char a6)
{
  *(_DWORD *)this = 0; /*0x57563b*/
  *(_WORD *)(this + 4) = 0; /*0x57563d*/
  *(_WORD *)(this + 6) = 0; /*0x575641*/
  *(_DWORD *)(this + 0x20) = 0; /*0x57564f*/
  *(_DWORD *)(this + 0x24) = 0; /*0x575652*/
  BSStringT_Set((BSStringT *)this, EmptyString, 0); /*0x575655*/
  *(_DWORD *)(this + 8) = a2; /*0x575666*/
  *(_DWORD *)(this + 0xC) = a3; /*0x57566d*/
  *(_DWORD *)(this + 0x14) = a5; /*0x575674*/
  *(_DWORD *)(this + 0x10) = a4; /*0x575677*/
  *(_DWORD *)(this + 0x18) = 0; /*0x57567a*/
  *(_BYTE *)(this + 0x1C) = a6; /*0x57567d*/
  return this; /*0x575682*/
}
