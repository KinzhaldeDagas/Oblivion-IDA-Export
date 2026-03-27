_OWORD *__thiscall sub_89DF00(_OWORD *this, int a2)
{
  *this = *(_OWORD *)a2;
  *(this + 1) = *(_OWORD *)(a2 + 0x10);
  *(this + 2) = *(_OWORD *)(a2 + 0x20);
  *(this + 3) = *(_OWORD *)(a2 + 0x30);
  *(this + 4) = *(_OWORD *)(a2 + 0x40);
  *(this + 5) = *(_OWORD *)(a2 + 0x50);
  *(this + 6) = *(_OWORD *)(a2 + 0x60);
  *(this + 7) = *(_OWORD *)(a2 + 0x70);
  *(this + 8) = *(_OWORD *)(a2 + 0x80);
  *(this + 9) = *(_OWORD *)(a2 + 0x90);
  *((_QWORD *)this + 0x14) = *(_QWORD *)(a2 + 0xA0);
  *((_QWORD *)this + 0x15) = *(_QWORD *)(a2 + 0xA8);
  return this;
}
