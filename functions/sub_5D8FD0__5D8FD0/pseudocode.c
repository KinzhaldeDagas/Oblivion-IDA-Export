double __usercall sub_5D8FD0@<st0>(double result@<st0>, int a2, int a3)
{
  const unsigned __int8 *v3; // eax
  const unsigned __int8 *v4; // ecx

  if ( (unk_B3B734 & 0x7F) != 0 ) /*0x5d8ff2*/
  {
    if ( (unk_B3B734 & 0x7F) == 1 ) /*0x5d8ffc*/
    {
      (**(void (__thiscall ***)(int, PlayerCharacter *))(a2 + 0x24))(a2 + 0x24, reference); /*0x5d9068*/
      Double_To_SInt32(result); /*0x5d906a*/
      result = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(a3 + 0x24))(a3 + 0x24, reference); /*0x5d9084*/
      Double_To_SInt32(result); /*0x5d9086*/
    }
    else if ( (unk_B3B734 & 0x7F) == 2 ) /*0x5d9001*/
    {
      (**(void (__thiscall ***)(int, PlayerCharacter *))(a2 + 0x24))(a2 + 0x24, reference); /*0x5d901a*/
      Double_To_SInt32(result * flt_B37ED0[0x44]); /*0x5d9022*/
      result = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(a3 + 0x24))(a3 + 0x24, reference); /*0x5d903c*/
      Double_To_SInt32(result); /*0x5d9044*/
    }
  }
  else
  {
    v3 = *(const unsigned __int8 **)(a3 + 0x1C); /*0x5d90ab*/
    if ( !v3 ) /*0x5d90b0*/
      v3 = (const unsigned __int8 *)EmptyString; /*0x5d90b2*/
    v4 = *(const unsigned __int8 **)(a2 + 0x1C); /*0x5d90bb*/
    if ( !v4 ) /*0x5d90c0*/
      v4 = (const unsigned __int8 *)EmptyString; /*0x5d90c2*/
    _mbscmp(v4, v3); /*0x5d90c9*/
  }
  return result; /*0x5d9006*/
}
