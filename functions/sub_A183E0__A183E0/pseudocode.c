void __cdecl sub_A183E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&Global_DebugSaveBuffer); /*0xa183ea*/
  if ( off_B05BB0[0] ) /*0xa183f6*/
  {
    if ( *off_B05BB0[0] == 0x53 ) /*0xa183fb*/
      FormHeapFree((unsigned int)off_B05BB0[0]); /*0xa183fe*/
  }
}
