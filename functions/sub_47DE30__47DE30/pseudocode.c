double __thiscall sub_47DE30(_DWORD *this)
{
  int v1; // eax

  if ( !this )
    return (float)0.0;
  v1 = *(this + 2);
  if ( !v1 )
    return (float)0.0;
  return (float)sub_89DA90((float *)*(_DWORD *)(v1 + 0x50));
}
