int __thiscall sub_943680(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = this + 6; /*0x943686*/
  *v2 = *a2; /*0x943689*/
  v2[1] = a2[1]; /*0x94368e*/
  v2[2] = a2[2]; /*0x943694*/
  v2[3] = a2[3]; /*0x94369a*/
  v2[4] = a2[4]; /*0x9436a0*/
  result = a2[5]; /*0x9436a3*/
  v2[5] = result; /*0x9436a6*/
  return result; /*0x9436a9*/
}
