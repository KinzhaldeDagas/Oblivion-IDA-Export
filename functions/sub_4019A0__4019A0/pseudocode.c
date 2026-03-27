void __thiscall sub_4019A0(_DWORD *this)
{
  _DWORD *i; // esi
  unsigned int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  unsigned int v6; // edx
  int v7; // eax

  for ( i = (_DWORD *)*(this + 9); i; *(this + 9) = i )
  {
    if ( (i[1] & 0x40000000) == 0 )
      break;
    v2 = i[1] & 0xFFFFFFF;
    if ( (_DWORD *)((char *)i + v2 + 8) != (_DWORD *)(*(this + 4) + *(this + 6)) )
      break;
    v3 = v2 / *(this + 1) - 1;
    if ( v3 < *(this + 0xC) )
      v4 = (_DWORD *)(*(this + 0xD) + 8 * v3);
    else
      v4 = this + 0xF;
    sub_401690(this, v4, i);
    v5 = i[1];
    --*(this + 7);
    v6 = 0xFFFFFFF8 - (v5 & 0xFFFFFFF);
    v7 = *(this + 8);
    *(this + 4) += v6;
    if ( v7 == *(this + 9) )
    {
      *(this + 9) = 0;
      *(this + 8) = 0;
      return;
    }
    i = (_DWORD *)*i;
  }
}
