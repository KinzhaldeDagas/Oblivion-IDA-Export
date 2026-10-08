unsigned int __thiscall sub_54A0B0(void *this)
{
  unsigned int v1; // ebx
  int v3; // esi
  double v4; // st7
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  v6 = 0.0; /*0x54a0b7*/
  v1 = 0xFFFFFFFF; /*0x54a0bc*/
  v3 = 0xFFFFFFFF; /*0x54a0c1*/
  do /*0x54a10b*/
  {
    v7 = ((double (__thiscall *)(void *, int))*(_DWORD *)(*(_DWORD *)this + 0x54))(this, v3); /*0x54a0ce*/
    v4 = v7; /*0x54a0dc*/
    if ( v7 > 0.0 && v4 <= 1.0 && v6 < v4 ) /*0x54a0f9*/
    {
      v6 = v7; /*0x54a0fb*/
      v1 = v3; /*0x54a0ff*/
    }
    ++v3; /*0x54a105*/
  }
  while ( v3 < 0xD ); /*0x54a10b*/
  return v1; /*0x54a10e*/
}
