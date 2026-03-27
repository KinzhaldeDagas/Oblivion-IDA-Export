double __thiscall sub_7871A0(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 0xD);
  if ( v1 )
    return *(float *)(v1 + 0x10);
  else
    return *(float *)(*this + 0x14);
}
