int __thiscall sub_943650(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = this + 1; /*0x943656*/
  *v2 = *a2; /*0x943659*/
  v2[1] = a2[1]; /*0x94365e*/
  v2[2] = a2[2]; /*0x943664*/
  v2[3] = a2[3]; /*0x94366a*/
  result = a2[4]; /*0x94366d*/
  v2[4] = result; /*0x943670*/
  return result; /*0x943673*/
}
