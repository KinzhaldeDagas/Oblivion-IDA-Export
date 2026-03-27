unsigned int __thiscall sub_54A0B0(void *this)
{
  unsigned int v1; // ebx
  int v3; // esi
  double v4; // st7
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  v6 = 0.0;
  v1 = 0xFFFFFFFF;
  v3 = 0xFFFFFFFF;
  do
  {
    v7 = ((double (__thiscall *)(void *, int))*(_DWORD *)(*(_DWORD *)this + 0x54))(this, v3);
    v4 = v7;
    if ( v7 > 0.0 && v4 <= 1.0 && v6 < v4 )
    {
      v6 = v7;
      v1 = v3;
    }
    ++v3;
  }
  while ( v3 < 0xD );
  return v1;
}
