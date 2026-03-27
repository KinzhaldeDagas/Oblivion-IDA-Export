__int16 __fastcall sub_6B7520(_DWORD *a1, int a2, int a3)
{
  __int16 result; // ax
  int v4; // edx

  result = 0;
  if ( a1 )
  {
    do
    {
      v4 = a1[1];
      if ( !v4 && !*a1 )
        break;
      if ( a3 == *a1 )
        return result;
      a1 = (_DWORD *)a1[1];
      ++result;
    }
    while ( v4 );
  }
  PrintError("When trying to get a dialogue item index, the dialogue item was not found in the dialogue items list.");
  return 0;
}
