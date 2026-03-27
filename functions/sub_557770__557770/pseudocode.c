float *__thiscall sub_557770(float *this, float *a2)
{
  _DWORD *v3; // esi
  int v4; // ebx
  unsigned int v5; // ebp

  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 2) = a2[2];
  *(this + 3) = a2[3];
  v3 = this + 4;
  v4 = (char *)a2 - (char *)this;
  v5 = 3;
  do
  {
    sub_5575C0(v3, v5, (unsigned int)this, (_DWORD *)((char *)v3 + v4));
    v3 += 4;
    --v5;
  }
  while ( v5 );
  return this;
}
