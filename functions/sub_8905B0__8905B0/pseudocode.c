_WORD *sub_8905B0()
{
  _WORD *result; // eax
  _WORD *(__thiscall ***v1)(_DWORD, int); // ecx

  result = (_WORD *)unk_BA7A54; /*0x8905b0*/
  if ( unk_BA7A54 ) /*0x8905b0*/
  {
    v1 = (_WORD *(__thiscall ***)(_DWORD, int))unk_BA7A54; /*0x8905be*/
    if ( result[2] ) /*0x8905b9*/
    {
      --result[3]; /*0x8905c2*/
      result += 3; /*0x8905c7*/
      if ( !*result ) /*0x8905ca*/
        return (**v1)(v1, 1); /*0x8905d6*/
    }
  }
  return result; /*0x8905d8*/
}
