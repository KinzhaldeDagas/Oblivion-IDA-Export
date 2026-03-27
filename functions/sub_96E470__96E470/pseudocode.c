NiCollisionData *__thiscall sub_96E470(_DWORD *this, _DWORD **a2)
{
  NiCollisionData *v3; // eax
  int *v4; // esi

  v3 = (NiCollisionData *)FormHeapAlloc(0x50u);
  if ( v3 )
  {
    v4 = (int *)NiCollisionData::NiCollisionData(v3);
    sub_96E140(this, v4, a2);
    return (NiCollisionData *)v4;
  }
  else
  {
    sub_96E140(this, 0, a2);
    return 0;
  }
}
