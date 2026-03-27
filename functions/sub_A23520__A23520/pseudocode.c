void __cdecl sub_A23520()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B1210C);
  if ( off_B12110 )
  {
    if ( *off_B12110 == 0x53 )
      FormHeapFree((unsigned int)off_B12110);
  }
}
