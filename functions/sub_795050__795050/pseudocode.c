char __thiscall sub_795050(_DWORD *this, char *a2)
{
  int v4; // eax

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( (unsigned int)a2 > 0xFFFFFFF )
    sub_790B90((int)this);
  v4 = sub_794550(a2);
  *(this + 1) = v4;
  *(this + 2) = v4;
  *(this + 3) = v4 + 0x10 * (_DWORD)a2;
  return 1;
}
