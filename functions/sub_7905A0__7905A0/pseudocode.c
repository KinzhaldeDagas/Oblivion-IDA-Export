// Oblivion 1.2.0.416: checked-template thunk to the shared 24-byte copy-backward adapter; used by both vector<stVec> and branch-flare insert-fill paths.
unsigned __int8 *__cdecl OB_stVector24_CopyBackwardRangeThunk_010201A0(
        const unsigned __int8 *first,
        const unsigned __int8 *last,
        unsigned __int8 *destinationEnd)
{
  return OB_stVector24_CopyBackwardRangeAdapter_010201A0(first, last, destinationEnd); /*0x7905ca*/
}
