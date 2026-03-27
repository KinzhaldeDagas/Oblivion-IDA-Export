char __thiscall sub_730090(_DWORD *this, unsigned int a2, float a3)
{
  if ( a2 >= *(this + 3) )
    return 0;
  *(float *)(*(this + 4) + 4 * a2) = a3;
  return 1;
}
