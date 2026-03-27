__int16 __thiscall sub_675CC0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // ecx
  __int16 result; // ax
  int v5; // edx

  v3 = (_DWORD *)*(this + a2 + 0xA);
  result = 0;
  if ( v3 )
  {
    do
    {
      v5 = v3[1];
      if ( !v5 && !*v3 )
        break;
      if ( a3 == *v3 )
        return result;
      v3 = (_DWORD *)v3[1];
      ++result;
    }
    while ( v5 );
  }
  PrintError("When trying to get a crime index, the crime was not found in the crime lists.");
  return 0;
}
