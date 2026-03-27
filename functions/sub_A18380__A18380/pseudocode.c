void __cdecl sub_A18380()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B05B9C);
  if ( off_B05BA0 )
  {
    if ( *off_B05BA0 == 0x53 )
      FormHeapFree((unsigned int)off_B05BA0);
  }
}
