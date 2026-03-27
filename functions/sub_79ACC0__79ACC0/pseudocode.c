char __thiscall sub_79ACC0(_DWORD *this, int a2)
{
  int v4; // eax

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( (unsigned int)a2 > 0x4924924 )
    sub_790B90(a2);
  v4 = sub_799F30((char *)a2);
  *(this + 1) = v4;
  *(this + 2) = v4;
  *(this + 3) = v4 + 0x38 * a2;
  return 1;
}
