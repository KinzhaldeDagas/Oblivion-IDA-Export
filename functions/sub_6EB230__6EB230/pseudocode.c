char __thiscall sub_6EB230(float *this, float a2, int a3, _DWORD *a4)
{
  char v5; // cl
  char result; // al

  v5 = *((_BYTE *)this + 0xE);
  result = 0;
  if ( v5 == 1 )
  {
    result = sub_6EAF50((int)this, a2, a3, a4);
    *(this + 2) = a2;
  }
  else
  {
    if ( v5 )
    {
      sub_6CD0F0((int)this);
      result = sub_6EB000((int)this, a2, a3, a4);
    }
    *(this + 2) = a2;
  }
  return result;
}
