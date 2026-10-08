void __cdecl sub_A167F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CB8); /*0xa167fa*/
  if ( off_B02CBC ) /*0xa16806*/
  {
    if ( *off_B02CBC == 0x53 ) /*0xa1680b*/
      FormHeapFree((unsigned int)off_B02CBC); /*0xa1680e*/
  }
}
