float *__thiscall sub_6E3070(_DWORD *this, int a2)
{
  float *v3; // eax

  v3 = (float *)FormHeapAlloc(0x18u);
  if ( v3 )
    return sub_6D29E0(v3, *(float *)(*(this + 0x11) + 0xC));
  else
    return 0;
}
