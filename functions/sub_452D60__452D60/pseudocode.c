//
// Verified: manager+18 bit1000 blocks operation; missing entry false. Clears selected flags only when +4 buffer is null. Then removes/frees entry if +0 is zero (including nonnull +4 buffer). Existing entry returns true even if unchanged. ClearFormModifier 4533D0 and LoadForm 463A6E anchor role. Probable homolog Fallout 825EDED8, but Oblivion lacks its created-form exemption and checks zero flags outside the null-buffer branch. Unknown original method spelling.
// Verified: manager+18 bit1000 blocks operation; missing entry false. Clears selected flags only when +4 buffer is null. Then removes/frees entry if +0 is zero (including nonnull +4 buffer). Existing entry returns true even if unchanged. ClearFormModifier 4533D0 and LoadForm 463A6E anchor role. Probable homolog Fallout 825EDED8, but Oblivion lacks its created-form exemption and checks zero flags outside the null-buffer branch. Unknown original method spelling.
// Verified cross-build divergence from PPC disassembly: Fallout 825EDED8 returns true on lookup miss/non-null buffer, false when remaining flags nonzero or created-form exemption retains entry; Oblivion returns false on guard/miss and true for any found entry. Do not transfer return contract.
bool __thiscall ChangesMap_RemoveFormChangeFlags(ChangesMap *self, TESForm *form, unsigned int flags)
{
  UInt32 refID; // eax
  unsigned int v6; // esi
  _DWORD *v7; // [esp+4h] [ebp-4h] BYREF

  if ( (g_TESSaveLoadGame->flags & 0x1000) != 0 ) /*0x452d72*/
    return 0; /*0x452d74*/
  refID = form->member.refID; /*0x452d80*/
  v7 = 0; /*0x452d8c*/
  NiTMap_GetAt(self, refID, &v7); /*0x452d94*/
  v6 = (unsigned int)v7; /*0x452d99*/
  if ( !v7 ) /*0x452d9f*/
    return 0; /*0x452de5*/
  if ( !v7[1] ) /*0x452da1*/
    *v7 &= ~flags; /*0x452dad*/
  if ( !*(_DWORD *)v6 ) /*0x452daf*/
  {
    NiTMap_RemoveAt(self, form->member.refID); /*0x452dba*/
    if ( *(_DWORD *)(v6 + 4) ) /*0x452dbf*/
      MemoryHeap_Free_checked(*(void **)(v6 + 4)); /*0x452dcc*/
    FormHeapFree(v6); /*0x452dd2*/
  }
  return 1; /*0x452d76*/
}
