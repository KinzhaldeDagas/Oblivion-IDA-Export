char __userpurge sub_6284B0@<al>(int *this@<ecx>, double a2@<st1>, double a3@<st2>, double a4@<st0>, Actor *a5, int a6)
{
  TESPackage *v7; // edi
  char v8; // al
  bool v9; // zf
  int v10; // eax

  v7 = (TESPackage *)(*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>))(*this + 0x184))(this, a4); /*0x6284be*/
  if ( v7 ) /*0x6284c2*/
  {
    (*(void (__thiscall **)(int *, Actor *))(*this + 0x194))(this, a5); /*0x6284d4*/
    sub_566DC0(v7, kTerrainLODQuadRayDirectionZ, a2, a3, a5, 0, kTerrainLODQuadRayDirectionZ); /*0x6284e5*/
    v9 = v8 == 0; /*0x6284ea*/
    v10 = *this; /*0x6284ec*/
    if ( !v9 ) /*0x6284f1*/
    {
      (*(void (__thiscall **)(int *, int))(v10 + 0xBC))(this, 1); /*0x6284fb*/
      return 0; /*0x628501*/
    }
    (*(void (__thiscall **)(int *, _DWORD))(v10 + 0x17C))(this, 0); /*0x62850c*/
  }
  return 0; /*0x6284fd*/
}
