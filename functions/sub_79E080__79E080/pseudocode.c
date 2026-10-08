// st_vector<SFrondTexture> uninitialized-fill thunk: placement-copy-constructs count values and returns destination+count.
OB_SFrondTexture_010201A0 *__thiscall OB_stVector_SFrondTexture_UninitializedFillNThunk_010201A0(
        OB_stVector16_010201A0 *this,
        OB_SFrondTexture_010201A0 *destination,
        unsigned int count,
        const OB_SFrondTexture_010201A0 *value)
{
  OB_SFrondTexture_UninitializedFillN_010201A0(destination, count, value); /*0x79e0a2*/
  return &destination[count]; /*0x79e0b1*/
}
