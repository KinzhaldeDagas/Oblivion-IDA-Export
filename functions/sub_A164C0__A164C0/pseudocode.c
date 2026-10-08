void __cdecl sub_A164C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02C44); /*0xa164ca*/
  if ( off_B02C48 ) /*0xa164d6*/
  {
    if ( *off_B02C48 == 0x53 ) /*0xa164db*/
      FormHeapFree((unsigned int)off_B02C48); /*0xa164de*/
  }
}
