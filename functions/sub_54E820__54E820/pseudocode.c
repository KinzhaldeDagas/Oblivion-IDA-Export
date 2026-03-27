BOOL __thiscall sub_54E820(_DWORD *this, unsigned int a2)
{
  int v2; // ecx
  bool v3; // c0
  bool v4; // c3
  float *v5; // ecx
  BOOL result; // eax

  result = 0;
  if ( a2 < *(this + 4) )
  {
    v2 = *(this + 3);
    v3 = *(float *)(v2 + 4 * a2) > 0.0;
    v4 = 0.0 == *(float *)(v2 + 4 * a2);
    v5 = (float *)(v2 + 4 * a2);
    if ( (v3 || v4) && *v5 <= 1.0 )
      return 1;
  }
  return result;
}
