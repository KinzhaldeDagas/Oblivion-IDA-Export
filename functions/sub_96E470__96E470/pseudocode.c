NiCollisionData *__thiscall sub_96E470(_DWORD *this, _DWORD **a2)
{
  NiCollisionData *v3; // eax
  int *v4; // esi

  v3 = (NiCollisionData *)FormHeapAlloc(0x50u); /*0x96e476*/
  if ( v3 ) /*0x96e480*/
  {
    v4 = (int *)NiCollisionData::NiCollisionData(v3); /*0x96e489*/
    sub_96E140(this, v4, a2); /*0x96e493*/
    return (NiCollisionData *)v4; /*0x96e499*/
  }
  else
  {
    sub_96E140(this, 0, a2); /*0x96e4a9*/
    return 0; /*0x96e4af*/
  }
}
