VarInfoEntry **__thiscall sub_4FB430(Script *this)
{
  VarInfoEntry **result; // eax
  int v2; // ecx

  result = (VarInfoEntry **)&this->refList; /*0x4fb430*/
  if ( this != (Script *)0xFFFFFFC0 ) /*0x4fb437*/
  {
    do /*0x4fb45c*/
    {
      if ( !result[1] && !*result ) /*0x4fb445*/
        break; /*0x4fb447*/
      v2 = (int)*result; /*0x4fb449*/
      if ( *result ) /*0x4fb449*/
      {
        if ( *(_DWORD *)(v2 + 0xC) ) /*0x4fb44f*/
          *(_DWORD *)(v2 + 8) = 0; /*0x4fb454*/
      }
      result = (VarInfoEntry **)result[1]; /*0x4fb457*/
    }
    while ( result ); /*0x4fb45c*/
  }
  return result; /*0x4fb45e*/
}
