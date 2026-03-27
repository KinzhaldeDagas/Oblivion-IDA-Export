int __thiscall sub_523440(_WORD *this, int a2)
{
  __int16 v2; // dx
  _WORD *v3; // eax
  int v4; // ecx
  int v6; // [esp+8h] [ebp-4h]

  HIWORD(v6) = 0;
  v2 = 0;
  v3 = this + 0x92;
  v4 = 2;
  do
  {
    v2 += 4 * (*v3 * v3[0xFFFFFFFE] + v3[0xFFFFFFF4] * v3[0xFFFFFFF2]);
    v3 += 0x18;
    --v4;
  }
  while ( v4 );
  LOWORD(v6) = v2;
  return v6 + 0x15;
}
