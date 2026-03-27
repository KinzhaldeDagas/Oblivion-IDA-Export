void __cdecl sub_A17F80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B0523C);
  if ( off_B05240 )
  {
    if ( *off_B05240 == 0x53 )
      FormHeapFree((unsigned int)off_B05240);
  }
}
