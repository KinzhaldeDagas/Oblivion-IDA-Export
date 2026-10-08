int __thiscall sub_8B8F50(int this, int a2)
{
  if ( a2 ) /*0x8b8f61*/
  {
    *(_OWORD *)(this + 0x30) = *(_OWORD *)(a2 + 0x30); /*0x8b8f6c*/
    *(_OWORD *)(this + 0x20) = *(_OWORD *)(a2 + 0x40); /*0x8b8f77*/
    *(hkVector4 *)(a2 + 0x30) = unk_BA7A40; /*0x8b8f82*/
    *(_OWORD *)(a2 + 0x40) = 0; /*0x8b8f88*/
    *(float *)(a2 + 0x4C) = 1.0; /*0x8b8f8b*/
    sub_8A2F50((_DWORD *)this, a2 + 0x30); /*0x8b8f8f*/
    sub_8A2F80((_DWORD *)this, a2 + 0x40); /*0x8b8f97*/
  }
  return sub_89D720((void *)this, a2); /*0x8b8fa4*/
}
