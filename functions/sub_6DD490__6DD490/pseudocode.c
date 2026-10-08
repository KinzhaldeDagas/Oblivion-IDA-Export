double __thiscall sub_6DD490(int this)
{
  int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // ebx
  float *v5; // eax
  unsigned int v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+18h] [ebp-4h]

  if ( *(float *)(this + 0x54) < 0.0 )
  {
    v2 = *(_DWORD *)(this + 0x48); /*0x6dd4a6*/
    v3 = 0; /*0x6dd4ac*/
    if ( v2 ) /*0x6dd4b0*/
    {
      v4 = *(_DWORD *)(v2 + 8); /*0x6dd4b2*/
      v7 = v4; /*0x6dd4b5*/
    }
    else
    {
      v7 = 0; /*0x6dd4bb*/
      v4 = 0; /*0x6dd4bf*/
    }
    FormHeapFree(*(_DWORD *)(this + 0x50)); /*0x6dd4c5*/
    v5 = (float *)FormHeapAlloc((unsigned __int64)v4 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v4);
    *(_DWORD *)(this + 0x50) = v5; /*0x6dd4ec*/
    *v5 = 0.0; /*0x6dd4ef*/
    if ( v4 != 1 ) /*0x6dd4f1*/
    {
      do /*0x6dd51b*/
      {
        v8 = sub_6DD180((_DWORD *)this, v3, v3 + 1, 1.0); /*0x6dd505*/
        *(float *)(*(_DWORD *)(this + 0x50) + 4 * v3 + 4) = *(float *)(*(_DWORD *)(this + 0x50) + 4 * v3) + v8; /*0x6dd513*/
        ++v3; /*0x6dd517*/
      }
      while ( v3 < v4 - 1 ); /*0x6dd51b*/
      v4 = v7; /*0x6dd51d*/
    }
    *(float *)(this + 0x54) = *(float *)(*(_DWORD *)(this + 0x50) + 4 * v4 - 4); /*0x6dd52a*/
  }
  return *(float *)(this + 0x54); /*0x6dd531*/
}
