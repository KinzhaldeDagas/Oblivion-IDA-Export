int __fastcall BSSimpleList_Count(_DWORD *a1)
{
  int result; // eax

  for ( result = 0; a1; a1 = (_DWORD *)a1[1] ) /*0x52b4a4*/
  {
    if ( *a1 ) /*0x52b4a6*/
      ++result; /*0x52b4ab*/
  }
  return result; /*0x52b4b5*/
}
