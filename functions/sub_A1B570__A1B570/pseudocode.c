void __cdecl sub_A1B570()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bOutQuadInLinearAttenuation);
  if ( off_B08184 )
  {
    if ( *off_B08184 == 0x53 )
      FormHeapFree((unsigned int)off_B08184);
  }
}
