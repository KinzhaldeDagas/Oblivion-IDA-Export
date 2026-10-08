_OWORD *__thiscall sub_89DF00(_OWORD *this, int a2)
{
  *this = *(_OWORD *)a2; /*0x89df09*/
  *(this + 1) = *(_OWORD *)(a2 + 0x10); /*0x89df10*/
  *(this + 2) = *(_OWORD *)(a2 + 0x20); /*0x89df18*/
  *(this + 3) = *(_OWORD *)(a2 + 0x30); /*0x89df20*/
  *(this + 4) = *(_OWORD *)(a2 + 0x40); /*0x89df28*/
  *(this + 5) = *(_OWORD *)(a2 + 0x50); /*0x89df30*/
  *(this + 6) = *(_OWORD *)(a2 + 0x60); /*0x89df38*/
  *(this + 7) = *(_OWORD *)(a2 + 0x70); /*0x89df40*/
  *(this + 8) = *(_OWORD *)(a2 + 0x80); /*0x89df4b*/
  *(this + 9) = *(_OWORD *)(a2 + 0x90); /*0x89df59*/
  *((_QWORD *)this + 0x14) = *(_QWORD *)(a2 + 0xA0); /*0x89df66*/
  *((_QWORD *)this + 0x15) = *(_QWORD *)(a2 + 0xA8); /*0x89df7e*/
  return this; /*0x89dfa0*/
}
