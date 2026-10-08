EntryData *__thiscall ProcessLists_SortActorDistanceCandidatesAndTrim(EntryData *this)
{
  EntryData *v1; // esi
  EntryData *result; // eax
  unsigned int v3; // ecx
  int *i; // eax

  v1 = this + 8; /*0x67a231*/
  BSSimpleList_SortViaArrayAndRebuild(this + 8, (int (__cdecl *)(tListVoid *, tListVoid *))CompareActorDistanceToPlayer); /*0x67a23b*/
LABEL_2:
  while ( 1 ) /*0x67a240*/
  {
    result = v1; /*0x67a240*/
    v3 = 0; /*0x67a242*/
    if ( !v1 ) /*0x67a246*/
      return result; /*0x67a285*/
    do /*0x67a255*/
    {
      if ( result->extendData ) /*0x67a248*/
        ++v3; /*0x67a24d*/
      result = (EntryData *)result->countDelta; /*0x67a250*/
    }
    while ( result ); /*0x67a255*/
    if ( v3 <= g_uMaxShadowActorCandidates ) /*0x67a25d*/
      return result; /*0x67a285*/
    for ( i = (int *)v1; *i; i = (int *)i[1] ) /*0x67a25f*/
    {
      if ( !i[1] ) /*0x67a26f*/
      {
        BSSimpleList_Remove((int *)v1, *i); /*0x67a27e*/
        goto LABEL_2; /*0x67a283*/
      }
    }
  }
}
