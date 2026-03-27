_DWORD *__thiscall sub_6FFE60(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer **v2; // esi
  _DWORD *result; // eax

  if ( a2 )
  {
    v2 = this + 3;
    sub_6C61E0(a2, (int)*(this + 3));
    return NiSmartPointer_Set__(v2, a2);
  }
  return result;
}
