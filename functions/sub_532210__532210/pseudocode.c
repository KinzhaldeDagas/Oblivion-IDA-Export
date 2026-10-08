_OWORD *__thiscall hkpCdPoint_CopyHitEntry30(_OWORD *this, int a2)
{
  *this = *(_OWORD *)a2; /*0x53221e*/
  *(this + 1) = *(_OWORD *)(a2 + 0x10); /*0x532225*/
  *((_QWORD *)this + 4) = *(_QWORD *)(a2 + 0x20); /*0x53222c*/
  *((_QWORD *)this + 5) = *(_QWORD *)(a2 + 0x28); /*0x532238*/
  return this; /*0x532243*/
}
