void __thiscall sub_88D2B0(_BYTE *this, _WORD *a2, char a3)
{
  bool v3; // zf
  int v4; // [esp+0h] [ebp-1Ch] BYREF
  char v5; // [esp+4h] [ebp-18h]
  int v6; // [esp+8h] [ebp-14h]
  BOOL v7; // [esp+Ch] [ebp-10h]

  if ( *(this + 0x1A) != a3 )
    *(this + 0x1A) = a3;
  if ( a2 )
  {
    v3 = *(this + 0x1A) == 0;
    v4 = 0;
    v5 = 1;
    v6 = 6;
    v7 = !v3;
    if ( off_B2E318[0] )
      sub_88A7D0(a2, (int)&v4, (void (__cdecl *)(int, int))off_B2E318[0]);
  }
}
