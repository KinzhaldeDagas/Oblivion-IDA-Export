_WORD *__cdecl sub_534070(int a1)
{
  _WORD *result; // eax
  void (__thiscall ***v2)(_DWORD, int); // ecx

  result = (_WORD *)unk_BA7FB4; /*0x534070*/
  if ( !unk_BA7FB4 ) /*0x534077*/
    goto LABEL_5; /*0x534077*/
  v2 = (void (__thiscall ***)(_DWORD, int))unk_BA7FB4; /*0x53407e*/
  if ( result[2] ) /*0x534079*/
  {
    --result[3]; /*0x534082*/
    result += 3; /*0x534087*/
    if ( !*result ) /*0x53408a*/
    {
      (**v2)(v2, 1); /*0x534096*/
LABEL_5:
      unk_BA7FB4 = a1; /*0x534098*/
      return (_WORD *)a1; /*0x5340a1*/
    }
    unk_BA7FB4 = a1; /*0x5340a6*/
  }
  else
  {
    unk_BA7FB4 = a1; /*0x5340b1*/
  }
  return result; /*0x5340a1*/
}
