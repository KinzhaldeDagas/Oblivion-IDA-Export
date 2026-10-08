int __thiscall sub_6E4640(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  char v6; // dl

  result = *(this + 3); /*0x6e4644*/
  if ( result ) /*0x6e464c*/
    result = (*(int (__cdecl **)(int))(4 * *(this + 4) + 0xB3D310))(result); /*0x6e4659*/
  if ( a2 && a3 ) /*0x6e466c*/
  {
    v6 = unk_B3D3FA[a4]; /*0x6e4672*/
    *(this + 3) = a2; /*0x6e4678*/
    *((_BYTE *)this + 0x14) = v6; /*0x6e467c*/
    *(this + 2) = a3; /*0x6e467f*/
    *(this + 4) = a4; /*0x6e4682*/
    return a4; /*0x6e466e*/
  }
  else
  {
    *(this + 2) = 0; /*0x6e468b*/
    *(this + 3) = 0; /*0x6e468e*/
    *(this + 4) = 0; /*0x6e4691*/
    *((_BYTE *)this + 0x14) = 0; /*0x6e4694*/
  }
  return result; /*0x6e467b*/
}
