// AnimSequenceSingle inverse-selector virtual (vtable +0x14). Always returns 0xFF; single entries need no variant index and restore still resolves them through the common selector ABI.
unsigned __int8 __thiscall AnimSequenceSingle_GetSelectorForSequence(
        AnimSequenceSingle *this,
        BSAnimGroupSequence *sequence)
{
  return 0xFF; /*0x471722*/
}
