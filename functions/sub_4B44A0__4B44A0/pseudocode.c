UInt32 __usercall sub_4B44A0@<eax>(TESForm *this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  int v4; // eax
  size_t v6; // [esp-4h] [ebp-Ch]
  int Src; // [esp+4h] [ebp-4h] BYREF

  TESForm_InitializeFormRecord(this, a2); /*0x4b44a4*/
  TESModel_Save(this + 1, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4b44bb*/
  v4 = *((_DWORD *)this + 0xC); /*0x4b44c0*/
  if ( v4 ) /*0x4b44c5*/
  {
    LODWORD(v6) = 4; /*0x4b44ca*/
    Src = *(_DWORD *)(v4 + 0xC); /*0x4b44d3*/
    TESForm_SaveGenericComponents(this, a3, &Src, v6); /*0x4b44d7*/
  }
  return TESForm_FinalizeFormRecord(this); /*0x4b44de*/
}
