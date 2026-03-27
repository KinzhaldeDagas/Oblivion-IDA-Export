_BYTE *__thiscall sub_954830(_DWORD *this, _BYTE *a2, int a3, _DWORD *a4)
{
  _BYTE *result; // eax

  if ( *(int *)(a3 + 8) < 0x16 )
  {
    result = a2;
LABEL_3:
    *result = 1;
    return result;
  }
  result = a2;
  if ( *a4 > *(this + 5) )
    goto LABEL_3;
  *a2 = 0;
  return result;
}
