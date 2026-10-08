char __thiscall sub_73E8F0(float *this, int a2)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  float *v6; // ecx
  int v7; // ebx

  if ( !sub_72A0A0(this + 2, (float *)(a2 + 8)) || !sub_72A0A0(this + 6, (float *)(a2 + 0x18)) ) /*0x73e916*/
    return 0; /*0x73e90c*/
  v4 = *((_DWORD *)this + 0xA); /*0x73e920*/
  if ( v4 == *(_DWORD *)(a2 + 0x28) ) /*0x73e926*/
  {
    v5 = 0; /*0x73e928*/
    if ( !v4 ) /*0x73e92c*/
      return 1; /*0x73e953*/
    v6 = *((float **)this + 0xB); /*0x73e92e*/
    v7 = *(_DWORD *)(a2 + 0x2C) - (_DWORD)v6; /*0x73e934*/
    while ( *v6 == *(float *)((char *)v6 + v7) ) /*0x73e942*/
    {
      ++v5; /*0x73e944*/
      ++v6; /*0x73e947*/
      if ( v5 >= v4 ) /*0x73e94c*/
        return 1; /*0x73e94c*/
    }
  }
  return 0; /*0x73e908*/
}
