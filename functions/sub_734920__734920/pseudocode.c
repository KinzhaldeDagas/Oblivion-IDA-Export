void __thiscall sub_734920(int this, unsigned __int8 *a2, _BYTE *a3)
{
  unsigned int i; // ebp
  _BYTE *v6; // edx
  _BYTE *v7; // eax

  for ( i = 0; i < *(unsigned __int16 *)(this + 0x10E); a2 += 2 )
  {
    v6 = (_BYTE *)(*(_DWORD *)(this + 0x16C) + 4 * (*a2 + (a2[1] << 8) - *(unsigned __int16 *)(this + 0x104)));
    *a3 = *v6;
    v7 = a3 + 1;
    *v7++ = v6[1];
    *v7 = v6[2];
    ++i;
    a3 = v7 + 1;
  }
}
