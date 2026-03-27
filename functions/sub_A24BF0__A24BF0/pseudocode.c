void __cdecl sub_A24BF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&a33J);
  if ( off_B14144 )
  {
    if ( *off_B14144 == 0x53 )
      FormHeapFree((unsigned int)off_B14144);
  }
}
