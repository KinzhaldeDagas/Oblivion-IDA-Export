void __cdecl sub_A1C640()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B11918);
  if ( off_B1191C )
  {
    if ( *off_B1191C == 0x53 )
      FormHeapFree((unsigned int)off_B1191C);
  }
}
