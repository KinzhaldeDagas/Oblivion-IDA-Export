_OWORD *__thiscall sub_8B7210(int *this, float *a2)
{
  _OWORD *result; // eax
  _OWORD *v4; // ebx
  int v5; // edi
  _BYTE v6[76]; // [esp+10h] [ebp-50h] BYREF

  result = (_OWORD *)sub_5398E0((int)v6, a2);
  v4 = result;
  if ( this )
  {
    v5 = *(this + 2);
    if ( v5 )
    {
      sub_89F570(this);
      sub_8ABA40(v5, v4);
      return (_OWORD *)sub_89F570(this);
    }
  }
  return result;
}
