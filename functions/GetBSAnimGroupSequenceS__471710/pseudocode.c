// AnimSequenceSingle selector virtual (vtable +0x10). Ignores the selector byte and returns the sole BSAnimGroupSequence pointer.
BSAnimGroupSequence *__thiscall AnimSequenceSingle_GetSequenceBySelector(
        AnimSequenceSingle *this,
        signed __int8 selector)
{
  return this->sequence; /*0x471713*/
}
