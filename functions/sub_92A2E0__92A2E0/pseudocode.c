bool *__thiscall sub_92A2E0(_DWORD *this, bool *a2, unsigned int a3, unsigned int a4)
{
  bool *result; // eax

  if ( ((a4 ^ a3) & 0xFFFF0000) != 0 || (a3 & 0xFFFF0000) == 0 )
  {
    *a2 = ((1 << (a4 & 0x1F)) & *(this + (a3 & 0x1F) + 7)) != 0;
    return a2;
  }
  else
  {
    if ( ((a3 ^ (a4 >> 5)) & 0x3E0) == 0 )
    {
      result = a2;
LABEL_5:
      *result = 0;
      return result;
    }
    result = a2;
    if ( (((unsigned __int16)a4 ^ (unsigned __int16)(a3 >> 5)) & 0x3E0) == 0 )
      goto LABEL_5;
    *a2 = 1;
  }
  return result;
}
