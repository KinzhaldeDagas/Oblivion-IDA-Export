double __thiscall sub_5377E0(_DWORD *this, int a2, int a3)
{
  unsigned int v3; // eax

  v3 = a2 + a3 * *(this + 8);
  if ( v3 >= *(this + 8) * *(this + 8) )
    return flt_A3B888;
  else
    return *(float *)(*(this + 6) + 4 * v3);
}
