int __thiscall sub_789120(int this, int a2, unsigned int a3, int a4, int a5, int a6, int a7, unsigned int a8)
{
  *(_DWORD *)(this + 0x14) = 0;
  *(_DWORD *)(this + 0x18) = 0xF;
  *(_BYTE *)(this + 4) = 0;
  sub_414420(this, &a2, 0, 0xFFFFFFFF);
  if ( a8 >= 0x10 )
    FormHeapFree(a3);
  return this;
}
