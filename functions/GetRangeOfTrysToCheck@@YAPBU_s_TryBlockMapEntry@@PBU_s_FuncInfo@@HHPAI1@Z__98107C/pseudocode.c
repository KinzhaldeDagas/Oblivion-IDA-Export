TryBlockMapEntry *__cdecl _GetRangeOfTrysToCheck(
        const struct _s_FuncInfo *a1,
        int a2,
        int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int nTryBlocks; // esi
  unsigned int v7; // ebx
  TryBlockMapEntry *v8; // eax
  unsigned int v9; // esi
  TryBlockMapEntry *pTryBlockMap; // [esp+Ch] [ebp-4h]
  const struct _s_FuncInfo *v12; // [esp+18h] [ebp+8h]

  nTryBlocks = a1->nTryBlocks; /*0x981089*/
  pTryBlockMap = a1->pTryBlockMap; /*0x98108c*/
  v7 = nTryBlocks; /*0x98108f*/
LABEL_8:
  v12 = (const struct _s_FuncInfo *)nTryBlocks; /*0x9810c0*/
  while ( a2 >= 0 ) /*0x9810c7*/
  {
    if ( nTryBlocks == 0xFFFFFFFF ) /*0x981096*/
      _inconsistency(); /*0x981098*/
    v8 = &pTryBlockMap[--nTryBlocks]; /*0x9810a6*/
    if ( v8->tryHigh < a3 && a3 <= v8->catchHigh || nTryBlocks == 0xFFFFFFFF ) /*0x9810b8*/
    {
      --a2; /*0x9810ba*/
      v7 = (unsigned int)v12; /*0x9810bd*/
      goto LABEL_8; /*0x9810bd*/
    }
  }
  v9 = nTryBlocks + 1; /*0x9810cc*/
  *a4 = v9; /*0x9810cd*/
  *a5 = v7; /*0x9810d2*/
  if ( v7 > a1->nTryBlocks || v9 > v7 ) /*0x9810db*/
    _inconsistency(); /*0x9810dd*/
  return &pTryBlockMap[v9]; /*0x9810ea*/
}
