void __cdecl sub_A255E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14BBC); /*0xa255ea*/
  if ( off_B14BC0 ) /*0xa255f6*/
  {
    if ( *off_B14BC0 == 0x53 ) /*0xa255fb*/
      FormHeapFree((unsigned int)off_B14BC0); /*0xa255fe*/
  }
}
