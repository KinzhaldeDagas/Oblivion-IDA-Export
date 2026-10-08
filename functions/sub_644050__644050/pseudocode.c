double __userpurge sub_644050@<st0>(TESPackage **this@<ecx>, double a2@<st2>, double result@<st0>, Actor *a4)
{
  TESPackage *v6; // ecx
  char v7; // al

  v6 = *(this + 2); /*0x644053*/
  if ( !v6 /*0x644073*/
    || (result = sub_566DC0(v6, result, kTerrainLODQuadRayDirectionZ, a2, a4, 0, kTerrainLODQuadRayDirectionZ), v7) )
  {
    if ( ((*(this + 2))->members.packageFlags & 4) != 0 ) /*0x644097*/
      (*(void (__thiscall **)(TESPackage **, Actor *, int))&(*this)[6].members.type)(this, a4, 1); /*0x6440a6*/
  }
  else
  {
    (*(void (__thiscall **)(TESPackage **, Actor *, unsigned int))&(*this)[6].members.type)(this, a4, 0xFFFFFFFF); /*0x644082*/
  }
  return result; /*0x644084*/
}
