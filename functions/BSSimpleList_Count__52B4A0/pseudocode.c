int __fastcall BSSimpleList_Count(_DWORD *a1)
{
  int result; // eax

  for ( result = 0; a1; a1 = (_DWORD *)a1[1] )
  {
    if ( *a1 )
      ++result;
  }
  return result;
}
