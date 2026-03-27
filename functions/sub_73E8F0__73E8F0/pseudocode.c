char __thiscall sub_73E8F0(float *this, int a2)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  float *v6; // ecx
  int v7; // ebx

  if ( !sub_72A0A0(this + 2, (float *)(a2 + 8)) || !sub_72A0A0(this + 6, (float *)(a2 + 0x18)) )
    return 0;
  v4 = *((_DWORD *)this + 0xA);
  if ( v4 == *(_DWORD *)(a2 + 0x28) )
  {
    v5 = 0;
    if ( !v4 )
      return 1;
    v6 = *((float **)this + 0xB);
    v7 = *(_DWORD *)(a2 + 0x2C) - (_DWORD)v6;
    while ( *v6 == *(float *)((char *)v6 + v7) )
    {
      ++v5;
      ++v6;
      if ( v5 >= v4 )
        return 1;
    }
  }
  return 0;
}
