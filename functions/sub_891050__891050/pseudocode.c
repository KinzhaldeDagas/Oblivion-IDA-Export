int __thiscall sub_891050(_DWORD *this, _BYTE *a2)
{
  hkVector4 *v3; // eax
  hkVector4 *v4; // eax
  bool v5; // zf

  if ( *(this + 3) )
  {
    *a2 = 0;
  }
  else
  {
    v3 = (hkVector4 *)FormHeapAlloc(0xB0u);
    if ( v3 )
      v4 = sub_890C00(v3, 1);
    else
      v4 = 0;
    v5 = *(this + 2) == 0;
    *(this + 3) = v4;
    if ( !v5 )
      sub_8B9A00(this, (int)v4);
    *a2 = 1;
  }
  return *(this + 3);
}
