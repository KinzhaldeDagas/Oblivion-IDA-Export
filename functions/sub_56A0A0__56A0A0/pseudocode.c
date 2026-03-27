unsigned __int8 *__thiscall sub_56A0A0(unsigned __int8 *this, unsigned __int8 *a2)
{
  unsigned __int8 *result; // eax
  int v3; // ecx

  result = this;
  v3 = *a2;
  if ( *result != v3 )
  {
    *result = v3;
    if ( !(_BYTE)v3 || (unsigned int)(unsigned __int8)v3 - 1 <= 1 )
      *((_DWORD *)result + 1) = 0;
  }
  *((_DWORD *)result + 2) = *((_DWORD *)a2 + 2);
  if ( *result <= 1u )
  {
    *((_DWORD *)result + 1) = *((_DWORD *)a2 + 1);
  }
  else if ( *result == 2 )
  {
    *((_DWORD *)result + 1) = *((_DWORD *)a2 + 1);
  }
  return result;
}
