float *__thiscall sub_6E4140(_DWORD *this, int a2)
{
  float *v3; // eax

  v3 = (float *)FormHeapAlloc(0x24u);
  if ( v3 )
    return sub_6E38D0(
             v3,
             *(_DWORD *)(*(this + 0x11) + 0xC),
             *(_DWORD *)(*(this + 0x11) + 0x10),
             *(_DWORD *)(*(this + 0x11) + 0x14),
             *(_DWORD *)(*(this + 0x11) + 0x18));
  else
    return 0;
}
