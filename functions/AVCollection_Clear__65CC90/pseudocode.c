int __thiscall AVCollection_Clear(_DWORD *this)
{
  int result; // eax
  int v3; // esi

  AVCollection_ClearArrayAndList(this);
  result = *(this + 2);
  if ( result )
    *(float *)(result + 4) = 0.0;
  v3 = *(this + 3);
  if ( v3 )
    *(float *)(v3 + 4) = 0.0;
  return result;
}
