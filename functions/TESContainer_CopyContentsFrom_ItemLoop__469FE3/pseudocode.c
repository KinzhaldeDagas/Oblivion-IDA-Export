int __userpurge TESContainer_CopyContentsFrom_::ItemLoop@<eax>(TESContainer *a1@<edi>, int **a2@<esi>, int a3)
{
  if ( *a2 ) /*0x469fe3*/
    TESContainer_AddValidatedForm(a1, (TESObject *)(*a2)[1], **a2, 0); /*0x469ff4*/
  return TESContainer_CopyContentsFrom_::ItemLoop_next((int)a2, a1, a3);
}
