void __thiscall sub_88D2B0(_BYTE *this, _WORD *a2, char a3)
{
  bool v3; // zf
  int v4; // [esp+0h] [ebp-1Ch] BYREF
  char v5; // [esp+4h] [ebp-18h]
  int v6; // [esp+8h] [ebp-14h]
  BOOL v7; // [esp+Ch] [ebp-10h]

  if ( *(this + 0x1A) != a3 ) /*0x88d2ba*/
    *(this + 0x1A) = a3; /*0x88d2bc*/
  if ( a2 ) /*0x88d2c5*/
  {
    v3 = *(this + 0x1A) == 0; /*0x88d2c9*/
    v4 = 0; /*0x88d2cc*/
    v5 = 1; /*0x88d2d6*/
    v6 = 6; /*0x88d2db*/
    v7 = !v3; /*0x88d2e3*/
    if ( off_B2E318[0] ) /*0x88d2e7*/
      sub_88A7D0(a2, (int)&v4, (void (__cdecl *)(int, int))off_B2E318[0]); /*0x88d2f7*/
  }
}
