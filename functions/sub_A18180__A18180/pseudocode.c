void __cdecl sub_A18180()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B0557C);
  if ( off_B05580 )
  {
    if ( *off_B05580 == 0x53 )
      FormHeapFree((unsigned int)off_B05580);
  }
}
