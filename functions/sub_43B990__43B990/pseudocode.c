IOTask **__stdcall sub_43B990(IOTask **a1, TESForm *form, unsigned __int8 a3, volatile LONG *a4, TESObjectREFR *a5)
{
  int *v5; // eax
  int *v6; // ebx
  int LODMult; // edi
  TESForm *baseForm; // ecx
  char v9; // al

  sub_435580(form, a5); /*0x43b9a6*/
  v6 = v5; /*0x43b9ac*/
  LODMult = TESForm_GetLODMult(form); /*0x43b9b8*/
  if ( a5 ) /*0x43b9ba*/
  {                                             // Probable visible-distant behavior: when the reference's TESForm +0x08 bit 0x8000 is set, the generic bound-object queue promotes its LOD multiplier to 6. The flag check is local and verified; its visible-distant name is corroborated by Fallout's named getter.
    if ( TESObjectREFR_HasVisibleDistantFlag(a5) ) /*0x43b9be*/
      LODMult = 6; /*0x43b9c7*/
    baseForm = a5->member.baseForm; /*0x43b9cc*/
    if ( baseForm ) /*0x43b9d1*/
      v9 = ((unsigned __int8 (__thiscall *)(TESForm *))baseForm->vtbl[1].Unk_06)(baseForm) == 0; /*0x43b9e4*/
    else
      v9 = 1; /*0x43b9f1*/
  }
  else
  {
    v9 = 0; /*0x43b9f5*/
  }
  sub_43B280((int **)MEMORY[0xB33A1C], a1, v6, a3, a4, LODMult, v9, 1, 0); /*0x43ba13*/
  return a1; /*0x43ba18*/
}
