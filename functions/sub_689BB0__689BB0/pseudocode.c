// Copies only reference-type TravelPath nodes into an output BSSimpleList. Fast-travel helper uses this to process teleport refs/current-mount path side effects; it intentionally skips the final destination vector node.
void __fastcall sub_689BB0(char *this, int edx0, _DWORD *a3)
{
  char *i; // esi
  const TravelPathNode *v5; // edi
  TESObjectREFR *Reference; // eax

  if ( a3 ) /*0x689bba*/
  {
    BSSimpleList_Clear(a3); /*0x689bbe*/
    for ( i = this + 4; i; i = *((char **)i + 1) ) /*0x689bc6*/
    {
      if ( !*((_DWORD *)i + 1) && !*(_DWORD *)i ) /*0x689bd6*/
        break; /*0x689bd9*/
      v5 = *(const TravelPathNode **)i; /*0x689bdb*/
      if ( !DName::status(*(char **)i) ) /*0x689bdf*/
      {
        Reference = TravelPathNode_GetReference(v5); /*0x689bea*/
        BSSimpleList_PushBack(a3, (int)Reference); /*0x689bf2*/
      }
    }
  }
}
