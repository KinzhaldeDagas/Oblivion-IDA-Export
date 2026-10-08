// Vector-context checked uninitialized_fill_n wrapper for compact SFrondGuide. Exception-safe construction is delegated to 0x79E190; returns destination+count.
OB_SFrondGuide_010201A0 *__thiscall OB_stVector_SFrondGuide_UninitializedFillNThunk_010201A0(
        OB_stVector16_010201A0 *this,
        OB_SFrondGuide_010201A0 *destination,
        unsigned int count,
        const OB_SFrondGuide_010201A0 *value)
{
  OB_SFrondGuide_UninitializedFillN_010201A0(destination, count, value); /*0x79eae2*/
  return &destination[count]; /*0x79eaf2*/
}
