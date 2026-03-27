double __thiscall sub_8C5070(_DWORD *this)
{
  int v1; // eax

  if ( this && (v1 = *(this + 2)) != 0 )
    return *(float *)(v1 + 0x20);
  else
    return (float)1.0;
}
