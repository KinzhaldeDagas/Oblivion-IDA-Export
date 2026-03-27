int __thiscall sub_8B8F50(int this, int a2)
{
  if ( a2 )
  {
    *(_OWORD *)(this + 0x30) = *(_OWORD *)(a2 + 0x30);
    *(_OWORD *)(this + 0x20) = *(_OWORD *)(a2 + 0x40);
    *(hkVector4 *)(a2 + 0x30) = stru_BA7A40;
    *(_OWORD *)(a2 + 0x40) = 0;
    *(float *)(a2 + 0x4C) = 1.0;
    sub_8A2F50((_DWORD *)this, a2 + 0x30);
    sub_8A2F80((_DWORD *)this, a2 + 0x40);
  }
  return sub_89D720((void *)this, a2);
}
