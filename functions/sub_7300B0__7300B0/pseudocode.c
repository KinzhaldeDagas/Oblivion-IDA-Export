double __thiscall sub_7300B0(_DWORD *this, unsigned int a2)
{
  if ( a2 >= *(this + 3) )
    return 0.0;
  else
    return *(float *)(*(this + 4) + 4 * a2);
}
