signed int __thiscall Player_GetAttributeLevelingBonus(_DWORD *this, unsigned int a2)
{
  signed int result; // eax
  signed int v3; // eax

  result = 1;
  if ( a2 <= 7 )
  {
    v3 = sub_664970(this, a2);
    return sub_5480A0(v3);
  }
  return result;
}
