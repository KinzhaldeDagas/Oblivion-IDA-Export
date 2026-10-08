// COMDAT-folded Oblivion PosGen Mean/Variance override. Both virtual slots return ExtReal Missing { value = 0, code = 4 }.
OB_ExtReal_010201A0 *__stdcall OB_PosGen_MeanOrVarianceMissing_010201A0(OB_ExtReal_010201A0 *result)
{
  result->value = 0.0; /*0x7a6db6*/
  result->code = OB_ExtReal_Missing_010201A0; /*0x7a6db8*/
  return result; /*0x7a6dbf*/
}
