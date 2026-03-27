void __thiscall sub_7C6FF0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax

  v3 = sub_7C6230(this, a2);
  if ( (*(_BYTE *)(a2 + 0x18) & 1) != 0 )
  {
    sub_7D21F0(v3);
  }
  else if ( v3 )
  {
    sub_7C5F60(this, (int)v3);
  }
}
