float *__thiscall sub_6B66A0(float *this, int *a2)
{
  bool v3; // zf
  float *v4; // eax
  float *result; // eax

  sub_6B4820((int)this);
  sub_6B5840(this, a2);
  v3 = *((_DWORD *)this + 0x400) == (_DWORD)this;
  *((_DWORD *)this + 0x401) = ((unsigned __int8)*((_DWORD *)this + 0x401) + 1) & 0xF;
  v4 = this + 0x200;
  if ( !v3 )
    v4 = this;
  *((_DWORD *)this + 0x400) = v4;
  for ( result = this + 0x422; result > this + 0x402; *result = 0.0 )
    result += 0xFFFFFFFF;
  return result;
}
