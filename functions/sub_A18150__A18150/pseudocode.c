void __cdecl sub_A18150()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B05574);
  if ( off_B05578[0] )
  {
    if ( *off_B05578[0] == 0x53 )
      FormHeapFree((unsigned int)off_B05578[0]);
  }
}
