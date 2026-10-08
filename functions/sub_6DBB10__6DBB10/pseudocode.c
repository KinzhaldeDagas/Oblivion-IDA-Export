double __thiscall sub_6DBB10(int this)
{
  int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // ebx
  float *v5; // eax
  unsigned int v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+18h] [ebp-4h]

  if ( *(float *)(this + 0x24) < 0.0 )
  {
    v2 = *(_DWORD *)(this + 0x18); /*0x6dbb26*/
    v3 = 0; /*0x6dbb2c*/
    if ( v2 ) /*0x6dbb30*/
    {
      v4 = *(_DWORD *)(v2 + 8); /*0x6dbb32*/
      v7 = v4; /*0x6dbb35*/
    }
    else
    {
      v7 = 0; /*0x6dbb3b*/
      v4 = 0; /*0x6dbb3f*/
    }
    FormHeapFree(*(_DWORD *)(this + 0x20)); /*0x6dbb45*/
    v5 = (float *)FormHeapAlloc((unsigned __int64)v4 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v4);
    *(_DWORD *)(this + 0x20) = v5; /*0x6dbb6c*/
    *v5 = 0.0; /*0x6dbb6f*/
    if ( v4 != 1 ) /*0x6dbb71*/
    {
      do /*0x6dbb9b*/
      {
        v8 = sub_6DB6F0((_DWORD *)this, v3, v3 + 1, 1.0); /*0x6dbb85*/
        *(float *)(*(_DWORD *)(this + 0x20) + 4 * v3 + 4) = *(float *)(*(_DWORD *)(this + 0x20) + 4 * v3) + v8; /*0x6dbb93*/
        ++v3; /*0x6dbb97*/
      }
      while ( v3 < v4 - 1 ); /*0x6dbb9b*/
      v4 = v7; /*0x6dbb9d*/
    }
    *(float *)(this + 0x24) = *(float *)(*(_DWORD *)(this + 0x20) + 4 * v4 - 4); /*0x6dbbaa*/
  }
  return *(float *)(this + 0x24); /*0x6dbbb1*/
}
