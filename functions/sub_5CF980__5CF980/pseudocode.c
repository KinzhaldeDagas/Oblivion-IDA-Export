void __thiscall sub_5CF980(int this, int a2, int a3)
{
  bool v4; // zf

  *(_BYTE *)(this + 0x50) = 2; /*0x5cf983*/
  sub_57BD80(); /*0x5cf987*/
  v4 = *(_DWORD *)(this + 0x48) == 0; /*0x5cf98c*/
  *(_DWORD *)(this + 0x3C) = 0; /*0x5cf990*/
  if ( !v4 ) /*0x5cf997*/
    sub_5CEF60((_DWORD **)this, 0); /*0x5cf99d*/
}
