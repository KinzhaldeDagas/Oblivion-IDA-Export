_DWORD *__thiscall sub_536BC0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(this + 6);
  if ( !result )
    goto LABEL_5;
  do
  {
    if ( result[2] == a3 )
      break;
    result = (_DWORD *)result[1];
  }
  while ( result );
  if ( !result )
  {
LABEL_5:
    result = (_DWORD *)FormHeapAlloc(0x14u);
    if ( result )
    {
      result[2] = a3;
      *result = 0;
      result[1] = 0;
      result[3] = a2;
      result[4] = 0;
      result[1] = *(this + 6);
      *(this + 6) = result;
    }
    else
    {
      *(_DWORD *)4 = *(this + 6);
      *(this + 6) = 0;
      return 0;
    }
  }
  return result;
}
