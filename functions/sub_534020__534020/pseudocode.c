_WORD *__cdecl sub_534020(int a1)
{
  _WORD *result; // eax
  void (__thiscall ***v2)(_DWORD, int); // ecx

  result = (_WORD *)unk_BA7FB0; /*0x534020*/
  if ( !unk_BA7FB0 ) /*0x534027*/
    goto LABEL_5; /*0x534027*/
  v2 = (void (__thiscall ***)(_DWORD, int))unk_BA7FB0; /*0x53402e*/
  if ( result[2] ) /*0x534029*/
  {
    --result[3]; /*0x534032*/
    result += 3; /*0x534037*/
    if ( !*result ) /*0x53403a*/
    {
      (**v2)(v2, 1); /*0x534046*/
LABEL_5:
      unk_BA7FB0 = a1; /*0x534048*/
      return (_WORD *)a1; /*0x534051*/
    }
    unk_BA7FB0 = a1; /*0x534056*/
  }
  else
  {
    unk_BA7FB0 = a1; /*0x534061*/
  }
  return result; /*0x534051*/
}
