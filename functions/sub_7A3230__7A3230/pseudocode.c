char __thiscall sub_7A3230(_DWORD *this, char *a2)
{
  int v4; // eax

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( (unsigned int)a2 > 0x30C30C3 )
    sub_790B90((int)this);
  v4 = sub_7A2560(a2);
  *(this + 1) = v4;
  *(this + 2) = v4;
  *(this + 3) = v4 + 0x54 * (_DWORD)a2;
  return 1;
}
