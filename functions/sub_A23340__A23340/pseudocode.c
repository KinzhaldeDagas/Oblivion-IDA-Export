void __cdecl sub_A23340()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bFixFaceNormals);
  if ( off_B120C0 )
  {
    if ( *off_B120C0 == 0x53 )
      FormHeapFree((unsigned int)off_B120C0);
  }
}
