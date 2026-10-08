void __cdecl sub_A17FB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B05244); /*0xa17fba*/
  if ( off_B05248 ) /*0xa17fc6*/
  {
    if ( *off_B05248 == 0x53 ) /*0xa17fcb*/
      FormHeapFree((unsigned int)off_B05248); /*0xa17fce*/
  }
}
