double __thiscall sub_54EA70(_DWORD *this, unsigned int a2)
{
  if ( a2 >= *(this + 4) )
    return (float)0.0;
  else
    return *(float *)(*(this + 3) + 4 * a2);
}
