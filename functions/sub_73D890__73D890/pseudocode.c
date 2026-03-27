_DWORD *__thiscall sub_73D890(unsigned __int16 *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = sub_70B530(this, a2);
  if ( a2[0x36] < 0x14000004u )
    return (_DWORD *)sub_7124A0(a2);
  return result;
}
