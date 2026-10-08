// Vector-context checked trampoline for exception-safe uninitialized SFrondGuide range copy. The vector owner is used by checked-iterator machinery; constructed records are 0x30 bytes.
OB_SFrondGuide_010201A0 *__thiscall OB_stVector_SFrondGuide_UninitializedCopyThunk_010201A0(
        OB_stVector16_010201A0 *this,
        const OB_SFrondGuide_010201A0 *first,
        const OB_SFrondGuide_010201A0 *last,
        OB_SFrondGuide_010201A0 *destinationFirst)
{
  return OB_SFrondGuide_UninitializedCopy_010201A0(first, last, destinationFirst); /*0x79ea96*/
}
