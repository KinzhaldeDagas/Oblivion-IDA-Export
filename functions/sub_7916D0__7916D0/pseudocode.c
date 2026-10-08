// Pushes one 0x18-byte OB_CBranchFlareEntry. Constructs directly at end when capacity remains; otherwise routes through the checked insertion/reallocation helper. CBranch::ComputeFlareEntries is the authoritative caller.
void __thiscall OB_stVectorBranchFlareEntry_PushBack_010201A0(
        OB_stVectorBranchFlareEntry_010201A0 *this,
        const OB_CBranchFlareEntry_010201A0 *value)
{
  OB_CBranchFlareEntry_010201A0 *begin; // edi
  unsigned int v4; // ecx
  OB_CBranchFlareEntry_010201A0 *end; // edi
  OB_CBranchFlareEntry_010201A0 *v6; // ebx
  unsigned int *resultIterator; // [esp+8h] [ebp-8h] BYREF

  begin = this->begin; /*0x7916d7*/
  if ( begin ) /*0x7916dc*/
    v4 = this->end - begin; /*0x7916f6*/
  else
    v4 = 0; /*0x7916de*/
  if ( begin && v4 < this->capacityEnd - begin ) /*0x791714*/
  {
    end = this->end; /*0x79171e*/
    LOBYTE(resultIterator) = 0; /*0x791721*/
    OB_stVector24_UninitializedFillN_010201A0((unsigned __int8 *)end, 1u, (const unsigned __int8 *)value); /*0x791731*/
    this->end = end + 1; /*0x79173c*/
  }
  else
  {
    v6 = this->end; /*0x791748*/
    if ( begin > v6 ) /*0x79174d*/
      _invalid_parameter_noinfo((int)v6, (int)begin, (int)this); /*0x79174f*/
    OB_CBranch_flareVectorInsertRealloc_010201A0( /*0x791762*/
      (OB_stVector16_010201A0 *)this,
      &resultIterator,
      (OB_stVector16_010201A0 *)this,
      v6,
      value);
  }
}
