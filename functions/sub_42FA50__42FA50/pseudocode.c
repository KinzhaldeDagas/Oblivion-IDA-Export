LONG *__thiscall sub_42FA50(LONG *this, int a2, int a3, LONG lMaximumCount, int a5, LONG a6)
{
  LONG v8; // [esp-Ch] [ebp-14h]
  LONG v9; // [esp-Ch] [ebp-14h]
  LONG v10; // [esp-Ch] [ebp-14h]

  sub_47CEA0(this); /*0x42fa54*/
  *(this + 7) = a2; /*0x42fa67*/
  *this = (LONG)&BackgroundLoaderThread::`vftable'; /*0x42fa6e*/
  *(this + 8) = a3; /*0x42fa76*/
  v8 = *(this + 8); /*0x42fa7d*/
  *(this + 9) = lMaximumCount; /*0x42fa80*/
  *(this + 0xA) = (LONG)CreateSemaphoreA(0, v8, lMaximumCount, 0); /*0x42fa85*/
  *(this + 0xB) = a5; /*0x42fa8c*/
  v9 = *(this + 0xB); /*0x42fa99*/
  *(this + 0xC) = a6; /*0x42fa9c*/
  *(this + 0xD) = (LONG)CreateSemaphoreA(0, v9, a6, 0); /*0x42faa1*/
  *(this + 0xE) = 1; /*0x42faab*/
  v10 = *(this + 0xE); /*0x42fab2*/
  *(this + 0xF) = 1; /*0x42fab5*/
  *(this + 0x10) = (LONG)CreateSemaphoreA(0, v10, 1, 0); /*0x42faba*/
  return this; /*0x42fabd*/
}
