// positive sp value has been detected, the output may be wrong!
int __usercall EffectItem_BuildDisplayString_::CheckNameQualifier@<eax>(int a1@<esi>)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 0x1C);
  if ( (*(_DWORD *)(v1 + 0x58) & 0x1180000) == 0 || (*(_BYTE *)(v1 + 0x5B) & 1) != 0 )
    return ((int (*)(void))EffectItem_BuildDisplayString_::QualifyLockName)();
  if ( (*(_DWORD *)(v1 + 0x58) & 0x100000) != 0 || (*(_DWORD *)(v1 + 0x58) & 0x80000) != 0 )
    return ((int (*)(void))EffectItem_BuildDisplayString_::QualifySkillAttrName)();
  return ((int (*)(void))EffectItem_BuildDisplayString_::QualifyAVName)();
}
