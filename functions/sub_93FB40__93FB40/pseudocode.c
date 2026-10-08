_OWORD *__thiscall sub_93FB40(_OWORD *this, int a2)
{
  *this = *(_OWORD *)a2; /*0x93fb49*/
  *(this + 1) = *(_OWORD *)(a2 + 0x10); /*0x93fb50*/
  *((_QWORD *)this + 4) = *(_QWORD *)(a2 + 0x20); /*0x93fb57*/
  *((_QWORD *)this + 5) = *(_QWORD *)(a2 + 0x28); /*0x93fb63*/
  *((_DWORD *)this + 0xC) = *(_DWORD *)(a2 + 0x30); /*0x93fb6f*/
  return this; /*0x93fb72*/
}
