// st_vector<SFrondTexture> uninitialized-copy thunk: deep-copy-constructs [first,last) into raw destination storage and returns destination end.
OB_SFrondTexture_010201A0 *__thiscall OB_stVector_SFrondTexture_UninitializedCopyThunk_010201A0(
        OB_stVector16_010201A0 *this,
        const OB_SFrondTexture_010201A0 *first,
        const OB_SFrondTexture_010201A0 *last,
        OB_SFrondTexture_010201A0 *destinationFirst)
{
  return OB_SFrondTexture_UninitializedCopy_010201A0(first, last, destinationFirst); /*0x79e116*/
}
