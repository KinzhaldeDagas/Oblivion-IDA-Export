_OWORD *__thiscall sub_93FB40(_OWORD *this, int a2)
{
  *this = *(_OWORD *)a2;
  *(this + 1) = *(_OWORD *)(a2 + 0x10);
  *((_QWORD *)this + 4) = *(_QWORD *)(a2 + 0x20);
  *((_QWORD *)this + 5) = *(_QWORD *)(a2 + 0x28);
  *((_DWORD *)this + 0xC) = *(_DWORD *)(a2 + 0x30);
  return this;
}
