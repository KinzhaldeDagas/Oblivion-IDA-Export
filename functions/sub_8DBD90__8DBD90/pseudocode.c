char *__thiscall sub_8DBD90(char *this, int a2, _WORD *a3, int a4)
{
  char *v5; // edi
  char *v6; // ebx

  v5 = this + 0x74;
  v6 = this + 0x10;
  *((_WORD *)this + 3) = 1;
  *(_DWORD *)this = &off_A9A430;
  sub_925DA0((_WORD *)this + 8, (int)(this + 0x74));
  sub_8D99A0(v5, a3, a4, (int)v6, 1, 0);
  *((_WORD *)this + 7) = 0;
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x3C) = 0;
  *((_DWORD *)this + 2) = a2;
  sub_8D9A10(
    (int)v5,
    *(_WORD *)(0x3C
             * *(char *)(*(_DWORD *)(a2 + 0x7C)
                       + *(unsigned __int16 *)(a4 + 0x2E)
                       + 8 * (unsigned __int16)a3[0x17]
                       + 0x19D4)
             + *(_DWORD *)(a2 + 0x7C)
             + 0x1A4C));
  return this;
}
