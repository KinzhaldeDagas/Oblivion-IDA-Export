VarInfoEntry **__thiscall sub_4FB430(Script *this)
{
  VarInfoEntry **result; // eax
  int v2; // ecx

  result = (VarInfoEntry **)&this->refList;
  if ( this != (Script *)0xFFFFFFC0 )
  {
    do
    {
      if ( !result[1] && !*result )
        break;
      v2 = (int)*result;
      if ( *result )
      {
        if ( *(_DWORD *)(v2 + 0xC) )
          *(_DWORD *)(v2 + 8) = 0;
      }
      result = (VarInfoEntry **)result[1];
    }
    while ( result );
  }
  return result;
}
