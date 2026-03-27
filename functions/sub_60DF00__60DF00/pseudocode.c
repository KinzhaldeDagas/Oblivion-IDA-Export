int __cdecl sub_60DF00(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
    return BSSimpleList_Remove(&dword_B3B800, a1);
  return result;
}
