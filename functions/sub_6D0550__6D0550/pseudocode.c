unsigned int __thiscall sub_6D0550(int *this, signed int a2)
{
  signed int v2; // esi
  unsigned int result; // eax
  int (__cdecl *v5)(int, signed int *, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_715F40(this, a2);
  result = *(_DWORD *)(v2 + 0xD8);
  if ( result >= 0xA010068 && result < 0xA01006D )
  {
    v6 = *(_DWORD *)(v2 + 0x21C);
    v5 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v6 + 4);
    v7 = 1;
    result = v5(v6, &a2, 1, &v7, 1);
    if ( (_BYTE)a2 )
      *((_WORD *)this + 4) |= 0x20u;
    else
      *((_WORD *)this + 4) &= ~0x20u;
  }
  return result;
}
