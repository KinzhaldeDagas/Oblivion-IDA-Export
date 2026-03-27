double __thiscall sub_8A2D20(_DWORD *this)
{
  int v1; // esi
  int v2; // eax

  if ( !this )
    return (float)0.0;
  v1 = *(this + 2);
  if ( !v1 )
    return (float)0.0;
  v2 = sub_8A98D0((_DWORD **)*(this + 2));
  if ( !v2 )
    v2 = *(_DWORD *)(v1 + 0x50);
  return *(float *)(v2 + 0xB8);
}
