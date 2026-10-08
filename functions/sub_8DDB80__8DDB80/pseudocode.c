int __thiscall sub_8DDB80(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // edx
  int result; // eax

  *(this + 3) -= a3[1]; /*0x8ddb88*/
  v3 = *(this + 6); /*0x8ddb93*/
  *(this + 4) -= a3[2]; /*0x8ddb96*/
  result = a3[3]; /*0x8ddb99*/
  *(this + 6) = v3 - result; /*0x8ddb9e*/
  return result; /*0x8ddba1*/
}
