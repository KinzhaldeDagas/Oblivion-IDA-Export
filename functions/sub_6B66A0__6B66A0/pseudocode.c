float *__thiscall sub_6B66A0(float *this, int *a2)
{
  bool v3; // zf
  float *v4; // eax
  float *result; // eax

  sub_6B4820((int)this); /*0x6b66a3*/
  sub_6B5840(this, a2); /*0x6b66af*/
  v3 = *((_DWORD *)this + 0x400) == (_DWORD)this; /*0x6b66c0*/
  *((_DWORD *)this + 0x401) = ((unsigned __int8)*((_DWORD *)this + 0x401) + 1) & 0xF; /*0x6b66c6*/
  v4 = this + 0x200; /*0x6b66cc*/
  if ( !v3 ) /*0x6b66d2*/
    v4 = this; /*0x6b66d4*/
  *((_DWORD *)this + 0x400) = v4; /*0x6b66d6*/
  for ( result = this + 0x422; result > this + 0x402; *result = 0.0 ) /*0x6b66eb*/
    result += 0xFFFFFFFF; /*0x6b66ef*/
  return result; /*0x6b66ea*/
}
