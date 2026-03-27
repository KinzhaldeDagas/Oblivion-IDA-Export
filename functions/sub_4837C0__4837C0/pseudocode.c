bool __thiscall sub_4837C0(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  double v4; // st7
  __int64 v5; // rax
  __int64 v6; // rax
  bool result; // al
  float v8; // [esp+10h] [ebp+8h]

  v3 = *(this + 4) + 0x10 * (a3 + a2 * *(this + 3));
  v4 = (double)(int)(dword_B3441C + ((unsigned int)uGridsToLoad >> 1));
  if ( (int)(dword_B3441C + ((unsigned int)uGridsToLoad >> 1)) < 0 )
    v4 = v4 + flt_A2FC78;
  v8 = v4;
  v5 = *(_DWORD *)(v3 + 8) - *(this + 1);
  result = 0;
  if ( v8 >= (double)(int)((HIDWORD(v5) ^ v5) - HIDWORD(v5)) )
  {
    v6 = *(_DWORD *)(v3 + 0xC) - *(this + 2);
    if ( (double)(int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) <= v8 )
      return 1;
  }
  return result;
}
