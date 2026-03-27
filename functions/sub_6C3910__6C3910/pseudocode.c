char __thiscall sub_6C3910(float *this, float a2)
{
  int v3; // eax
  _DWORD *v4; // ecx

  v3 = _isnan(a2);
  if ( !v3 )
  {
    v3 = _finite(a2);
    if ( v3 )
      *(this + 0xA) = a2;
  }
  v4 = *((_DWORD **)this + 0xB);
  if ( v4 )
    LOBYTE(v3) = sub_6E1F60(v4, 0, 0, 0);
  return v3;
}
