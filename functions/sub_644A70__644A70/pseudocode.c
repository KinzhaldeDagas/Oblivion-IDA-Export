void __userpurge sub_644A70(TESObjectREFR **this@<ecx>, double a2@<st1>, double a3@<st2>, double a4@<st0>, Actor *a5)
{
  TESPackage *v7; // ebx
  Atmosphere *target; // ecx
  TESObjectREFR *v9; // eax
  float PointerAtOffset08; // [esp+1Ch] [ebp+4h]

  v7 = (TESPackage *)((int (__usercall *)@<eax>(TESObjectREFR **@<ecx>, double@<st0>))LODWORD((*this)[4].member.rot.y))( /*0x644a87*/
                       this,
                       a4);
  if ( !*(this + 0xB) ) /*0x644a7f*/
    ((void (__thiscall *)(TESObjectREFR **, Actor *))LODWORD((*this)[0xF].member.pos[1]))(this, a5); /*0x644a96*/
  ((void (__thiscall *)(TESObjectREFR **, Actor *))LODWORD((*this)[0xF].member.pos[2]))(this, a5); /*0x644aa3*/
  target = (Atmosphere *)v7->members.target; /*0x644aa7*/
  PointerAtOffset08 = 0.0; /*0x644aaa*/
  if ( target ) /*0x644ab0*/
    PointerAtOffset08 = (float)(int)Shared_GetPointerAtOffset08(target); /*0x644abf*/
  v9 = *(this + 0xB); /*0x644ac3*/
  if ( !v9 || (a2 = PointerAtOffset08, PointerAtOffset08 >= TesObjectREF_GetDistance((TESObjectREFR *)a5, v9, 0)) ) /*0x644adf*/
  {
    if ( !*(this + 0xB) ) /*0x644ae1*/
      sub_566DC0(v7, kTerrainLODQuadRayDirectionZ, a2, a3, a5, 0, kTerrainLODQuadRayDirectionZ); /*0x644af6*/
  }
}
