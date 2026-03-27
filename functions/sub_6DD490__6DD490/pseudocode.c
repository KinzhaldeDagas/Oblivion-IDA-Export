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
    v2 = *(_DWORD *)(this + 0x48);
    v3 = 0;
    if ( v2 )
    {
      v4 = *(_DWORD *)(v2 + 8);
      v7 = v4;
    }
    else
    {
      v7 = 0;
      v4 = 0;
    }
    FormHeapFree(*(_DWORD *)(this + 0x50));
    v5 = (float *)FormHeapAlloc((unsigned __int64)v4 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v4);
    *(_DWORD *)(this + 0x50) = v5;
    *v5 = 0.0;
    if ( v4 != 1 )
    {
      do
      {
        v8 = sub_6DD180((_DWORD *)this, v3, v3 + 1, 1.0);
        *(float *)(*(_DWORD *)(this + 0x50) + 4 * v3 + 4) = *(float *)(*(_DWORD *)(this + 0x50) + 4 * v3) + v8;
        ++v3;
      }
      while ( v3 < v4 - 1 );
      v4 = v7;
    }
    *(float *)(this + 0x54) = *(float *)(*(_DWORD *)(this + 0x50) + 4 * v4 - 4);
  }
  return *(float *)(this + 0x54);
}
