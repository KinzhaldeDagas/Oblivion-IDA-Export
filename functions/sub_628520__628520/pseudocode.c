char __userpurge sub_628520@<al>(int *this@<ecx>, double a2@<st1>, double a3@<st2>, double a4@<st0>, Actor *a5, int a6)
{
  TESPackage *v7; // edi
  char v8; // al
  bool v9; // zf
  int v10; // eax

  v7 = (TESPackage *)(*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>))(*this + 0x184))(this, a4); /*0x62852e*/
  if ( !v7 ) /*0x628532*/
    return 0; /*0x628532*/
  (*(void (__thiscall **)(int *, Actor *))(*this + 0x194))(this, a5); /*0x628544*/
  sub_566DC0(v7, kTerrainLODQuadRayDirectionZ, a2, a3, a5, 0, kTerrainLODQuadRayDirectionZ); /*0x628555*/
  v9 = v8 == 0; /*0x62855a*/
  v10 = *this; /*0x62855c*/
  if ( !v9 ) /*0x628561*/
  {
    (*(void (__thiscall **)(int *, int))(v10 + 0xBC))(this, 1); /*0x62856b*/
    return 0; /*0x628571*/
  }
  (*(void (__thiscall **)(int *, _DWORD))(v10 + 0x17C))(this, 0); /*0x62857c*/
  return 1; /*0x62856d*/
}
