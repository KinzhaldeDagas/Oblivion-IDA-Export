void *__thiscall sub_916310(__m128 *this, int a2)
{
  int v3; // esi
  void *result; // eax
  int i; // ebx
  unsigned int v6; // ebp
  int *v7; // [esp+10h] [ebp+4h]

  v3 = a2 + 8;
  *(float *)(a2 + 4) = *((float *)this + 8);
  sub_8C6BE0((_DWORD *)(a2 + 8));
  result = sub_47DCD0((float *)(a2 + 0x20), this + 1);
  for ( i = 0; i < *((_DWORD *)this + 0xC); ++i )
  {
    v6 = *(_DWORD *)(v3 + 0xC);
    v7 = (int *)(*((_DWORD *)this + 0xA) + 8 * i);
    if ( v6 >= *(_DWORD *)(v3 + 8) )
      sub_8C69C0((int **)v3, v6 + *(_DWORD *)(v3 + 0x14));
    result = sub_8C68D0((_DWORD *)v3, v6, v7);
  }
  return result;
}
