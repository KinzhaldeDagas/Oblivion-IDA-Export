void __cdecl sub_A17FB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B05244);
  if ( off_B05248 )
  {
    if ( *off_B05248 == 0x53 )
      FormHeapFree((unsigned int)off_B05248);
  }
}
