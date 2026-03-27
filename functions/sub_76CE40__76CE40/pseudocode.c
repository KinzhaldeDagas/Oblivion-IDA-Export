NiD3DPass *__thiscall sub_76CE40(NiTArray_NiD3DPass *this, NiD3DPass *a2, NiD3DPass **a3)
{
  NiD3DPass *result; // eax
  int v5; // ecx
  NiD3DPass *data; // edx
  NiD3DPass **v7; // esi
  NiD3DPass *v8; // ecx
  bool v9; // zf

  if ( (dword_B42578 & 1) == 0 )
  {
    dword_B42578 |= 1u;
    dword_B42574 = 0;
    atexit(sub_A26DC0);
  }
  result = a2;
  if ( (unsigned int)a2 < this->end )
  {
    v5 = dword_B42574;
    data = this->data;
    if ( *a3 == (NiD3DPass *)dword_B42574 )
    {
      if ( *((_DWORD *)&data->__vftable + (_DWORD)a2) != v5 )
        --this->numObjs;
    }
    else if ( *((_DWORD *)&data->__vftable + (_DWORD)a2) == v5 )
    {
      ++this->numObjs;
    }
  }
  else
  {
    this->end = (_WORD)a2 + 1;
    if ( *a3 != (NiD3DPass *)dword_B42574 )
      ++this->numObjs;
  }
  v7 = (NiD3DPass **)(&this->data->__vftable + (_DWORD)a2);
  v8 = *v7;
  if ( *v7 != *a3 )
  {
    if ( v8 )
    {
      v9 = v8->RefCount-- == 1;
      if ( v9 )
        sub_7604D0(v8);
    }
    result = *a3;
    v9 = *a3 == 0;
    *v7 = *a3;
    if ( !v9 )
      ++result->RefCount;
  }
  return result;
}
