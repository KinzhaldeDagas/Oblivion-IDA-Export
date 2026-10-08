// stdcall cleanup thunk for one st_vector<SFrondGuide> element; used by exception unwind in the outer guide-LOD vector helpers.
void __stdcall OB_stVector_SFrondGuide_DestroyThunk_010201A0(OB_stVector_SFrondGuide_010201A0 *value)
{
  OB_SFrondGuide_010201A0 *begin; // eax

  begin = value->begin; /*0x7a0b05*/
  if ( begin ) /*0x7a0b0a*/
  {
    OB_SFrondGuide_DestroyRange_010201A0(begin, value->end); /*0x7a0b17*/
    FormHeapFree((unsigned int)value->begin); /*0x7a0b20*/
  }
  value->begin = 0; /*0x7a0b28*/
  value->end = 0; /*0x7a0b2f*/
  value->capacityEnd = 0; /*0x7a0b36*/
}
