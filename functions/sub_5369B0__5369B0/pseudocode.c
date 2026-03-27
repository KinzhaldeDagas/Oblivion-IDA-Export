_DWORD *__thiscall sub_5369B0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  for ( result = this; result; result = (_DWORD *)result[1] )
  {
    if ( result[3] == a2 )
      break;
  }
  return result;
}
