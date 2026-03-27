LONG *__thiscall sub_42FA50(LONG *this, int a2, int a3, LONG lMaximumCount, int a5, LONG a6)
{
  LONG v8; // [esp-Ch] [ebp-14h]
  LONG v9; // [esp-Ch] [ebp-14h]
  LONG v10; // [esp-Ch] [ebp-14h]

  sub_47CEA0(this);
  *(this + 7) = a2;
  *this = (LONG)&BackgroundLoaderThread::`vftable';
  *(this + 8) = a3;
  v8 = *(this + 8);
  *(this + 9) = lMaximumCount;
  *(this + 0xA) = (LONG)CreateSemaphoreA(0, v8, lMaximumCount, 0);
  *(this + 0xB) = a5;
  v9 = *(this + 0xB);
  *(this + 0xC) = a6;
  *(this + 0xD) = (LONG)CreateSemaphoreA(0, v9, a6, 0);
  *(this + 0xE) = 1;
  v10 = *(this + 0xE);
  *(this + 0xF) = 1;
  *(this + 0x10) = (LONG)CreateSemaphoreA(0, v10, 1, 0);
  return this;
}
