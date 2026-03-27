char __thiscall sub_79AD20(_DWORD *this, int a2)
{
  _DWORD *v4; // eax

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( (unsigned int)a2 > 0x5555555 )
    sub_790B90(a2);
  v4 = sub_799FA0((char *)a2);
  *(this + 1) = v4;
  *(this + 2) = v4;
  *(this + 3) = &v4[0xC * a2];
  return 1;
}
