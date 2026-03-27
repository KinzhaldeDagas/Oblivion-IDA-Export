int __userpurge TESContainer_CopyContentsFrom_::ItemLoop_next@<eax>(int a1@<esi>, TESContainer *a2@<edi>, int a3)
{
  int **v3; // esi

  v3 = *(int ***)(a1 + 4);
  if ( v3 )
    return TESContainer_CopyContentsFrom_::ItemLoop(a2, v3, a3);
  else
    return TESContainer_CopyContentsFrom_::Done_(a3);
}
