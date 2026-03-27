char __thiscall sub_724ED0(float **this, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // edx
  int v5; // eax
  float *v6; // ecx
  float *v7; // esi
  int v8; // ebx

  v2 = (unsigned int)*(this + 8);
  if ( v2 != *(_DWORD *)(a2 + 0x20) )
    return 0;
  v4 = 0;
  if ( !v2 )
    return 1;
  v5 = *(_DWORD *)(a2 + 0x24);
  v6 = *(this + 9);
  v7 = (float *)(v5 + 4);
  v8 = v5 - (_DWORD)v6;
  while ( *v6 == *(float *)((char *)v6 + v8) && v6[1] == *v7 )
  {
    ++v4;
    v7 += 4;
    v6 += 4;
    if ( v4 >= v2 )
      return 1;
  }
  return 0;
}
