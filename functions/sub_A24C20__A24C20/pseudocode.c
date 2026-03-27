void __cdecl sub_A24C20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aOgsJ);
  if ( off_B1414C )
  {
    if ( *off_B1414C == 0x53 )
      FormHeapFree((unsigned int)off_B1414C);
  }
}
