void __cdecl sub_A18990()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bDisableWarning_MESSAGES);
  if ( off_B06B1C )
  {
    if ( *off_B06B1C == 0x53 )
      FormHeapFree((unsigned int)off_B06B1C);
  }
}
