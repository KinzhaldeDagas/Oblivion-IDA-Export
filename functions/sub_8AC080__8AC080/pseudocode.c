void __thiscall sub_8AC080(float *this, _OWORD *a2)
{
  int v3; // ecx
  float v4; // [esp+0h] [ebp-4h]

  v3 = *((_DWORD *)this + 0xC);
  if ( v3 )
  {
    v4 = *(this + 0x17) + *(this + 0x16);
    sub_8ABAC0(v3, a2, v4);
  }
}
