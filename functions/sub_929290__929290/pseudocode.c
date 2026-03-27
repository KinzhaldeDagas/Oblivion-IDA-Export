double __thiscall sub_929290(_DWORD *this, unsigned int a2)
{
  int v3; // eax
  int v4; // ecx
  int v6; // [esp+4h] [ebp-4h]

  v3 = sub_8ECB30(a2);
  v4 = *(this + 9) - 1;
  v6 = v3;
  if ( v3 >= v4 )
    return (*(float *)(*(this + 0xB) + 4 * v4) - *(float *)(4 * v4 + *(this + 0xB) - 4))
         * (*(float *)&a2 - (double)(*(this + 9) - 1))
         + *(float *)(*(this + 0xB) + 4 * v4);
  if ( v3 < 0 )
  {
    v3 = 0;
    v6 = 0;
  }
  return (*(float *)(*(this + 0xB) + 4 * v3 + 4) - *(float *)(*(this + 0xB) + 4 * v3)) * (*(float *)&a2 - (double)v6)
       + *(float *)(*(this + 0xB) + 4 * v3);
}
