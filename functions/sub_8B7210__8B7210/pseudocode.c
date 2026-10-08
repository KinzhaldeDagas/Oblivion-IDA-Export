_OWORD *__thiscall sub_8B7210(int *this, float *a2)
{
  _OWORD *result; // eax
  _OWORD *v4; // ebx
  int v5; // edi
  _BYTE v6[76]; // [esp+10h] [ebp-50h] BYREF

  result = (_OWORD *)sub_5398E0((int)v6, a2); /*0x8b7232*/
  v4 = result; /*0x8b723c*/
  if ( this ) /*0x8b723e*/
  {
    v5 = *(this + 2); /*0x8b7240*/
    if ( v5 ) /*0x8b7245*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x8b7249*/
      sub_8ABA40(v5, v4); /*0x8b7251*/
      return (_OWORD *)bhkRefObject_UpdateHavokObject(this); /*0x8b7258*/
    }
  }
  return result; /*0x8b725d*/
}
