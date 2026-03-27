int __thiscall sub_590F30(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax

  if ( a2 == 0xFAD || a2 == 0xFAC )
  {
    v4 = *(this + 0xB);
    if ( (v4 & 1) == 0 )
      *(this + 0xB) = v4 | 1;
  }
  if ( a2 == 0xFCB || a2 == 0xFCA )
  {
    v5 = *(this + 0xB);
    if ( (v5 & 0x10) == 0 )
      *(this + 0xB) = v5 | 0x10;
  }
  return 0;
}
