char __thiscall sub_96EF70(float *this, float *a2)
{
  int v3; // esi
  float *v4; // ebx
  float *v5; // ebp
  float *v6; // edx
  int v7; // ecx

  if ( *a2 != *this || a2[1] != *(this + 1) || a2[2] != *(this + 2) )
    return 0;
  v3 = 0;
  v4 = this + 3;
  v5 = a2 + 0xC;
  v6 = a2 + 4;
  v7 = (char *)this - (char *)a2;
  while ( v6[0xFFFFFFFF] == *v4
       && *v6 == *(float *)((char *)v6 + v7)
       && v6[1] == v4[2]
       && *v5 == *(float *)((char *)v5 + v7) )
  {
    ++v3;
    ++v5;
    v6 += 3;
    v4 += 3;
    if ( v3 >= 3 )
      return 1;
  }
  return 0;
}
