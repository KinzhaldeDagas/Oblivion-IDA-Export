double __thiscall sub_8C6210(_DWORD *this)
{
  int v1; // eax

  if ( this && (v1 = *(this + 2)) != 0 )
    return *(float *)(v1 + 0x10);
  else
    return (float)1.0;
}
