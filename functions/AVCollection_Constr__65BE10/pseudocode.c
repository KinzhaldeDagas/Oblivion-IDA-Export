_DWORD *__thiscall AVCollection_Constr(_DWORD *this)
{
  int v2; // eax
  int v3; // eax

  *this = 0;
  *(this + 1) = 0;
  v2 = FormHeapAlloc(8u);
  if ( v2 )
  {
    *(_BYTE *)v2 = 0xA;
    *(float *)(v2 + 4) = 0.0;
  }
  else
  {
    v2 = 0;
  }
  *(this + 3) = v2;
  v3 = FormHeapAlloc(8u);
  if ( v3 )
  {
    *(_BYTE *)v3 = 9;
    *(float *)(v3 + 4) = 0.0;
    *(this + 2) = v3;
  }
  else
  {
    *(this + 2) = 0;
  }
  *(this + 4) = 0;
  return this;
}
