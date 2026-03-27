void __cdecl sub_A183E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&Global_DebugSaveBuffer);
  if ( off_B05BB0[0] )
  {
    if ( *off_B05BB0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B05BB0[0]);
  }
}
