int __thiscall sub_77B1A0(_DWORD *this, int a2, int a3)
{
  unsigned __int16 v3; // ax

  v3 = *(_WORD *)(2 * a3 + 0xB427E0);
  if ( v3 >= 8u )
    return 0;
  else
    return *(this + 0x10 * a2 + 2 * v3 + 0x248);
}
