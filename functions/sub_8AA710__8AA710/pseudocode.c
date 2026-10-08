_DWORD *__thiscall sub_8AA710(_DWORD *this, unsigned int a2, NiPoint3 *a3)
{
  double v3; // st7
  bool v6; // al
  int v7; // edx
  NiPoint3 *v8; // ecx
  _DWORD *result; // eax
  NiPoint3 other; // [esp+4h] [ebp-Ch] BYREF
  float v11; // [esp+14h] [ebp+4h]

  other.x = kTerrainLODQuadRayDirectionZ; /*0x8aa71e*/
  v3 = 0.0 / fCostant_100; /*0x8aa725*/
  if ( a2 < *(this + 3) ) /*0x8aa735*/
  {
    v11 = v3; /*0x8aa75f*/
    other.z = v11; /*0x8aa76c*/
    other.y = v11; /*0x8aa776*/
    v6 = NiPoint3__NotEqual(a3, &other); /*0x8aa77a*/
    v7 = *(this + 1); /*0x8aa785*/
    other.x = kTerrainLODQuadRayDirectionZ; /*0x8aa788*/
    other.z = v11; /*0x8aa795*/
    v8 = (NiPoint3 *)(v7 + 0xC * a2); /*0x8aa7a1*/
    other.y = v11; /*0x8aa7a4*/
    if ( v6 ) /*0x8aa7a9*/
    {
      if ( sub_8AA350(&v8->x, &other.x) ) /*0x8aa7ab*/
        ++*(this + 4); /*0x8aa7b4*/
    }
    else if ( NiPoint3__NotEqual(v8, &other) ) /*0x8aa7ba*/
    {
      --*(this + 4); /*0x8aa7c3*/
    }
  }
  else
  {
    other.z = v3; /*0x8aa737*/
    other.y = other.z; /*0x8aa747*/
    *(this + 3) = a2 + 1; /*0x8aa74d*/
    if ( NiPoint3__NotEqual(a3, &other) ) /*0x8aa750*/
      ++*(this + 4); /*0x8aa759*/
  }
  result = (_DWORD *)(*(this + 1) + 0xC * a2); /*0x8aa7cf*/
  *result = LODWORD(a3->x); /*0x8aa7d2*/
  result[1] = LODWORD(a3->y); /*0x8aa7d8*/
  result[2] = LODWORD(a3->z); /*0x8aa7df*/
  return result; /*0x8aa7e2*/
}
