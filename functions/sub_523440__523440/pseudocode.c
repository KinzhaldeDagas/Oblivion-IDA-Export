int __thiscall sub_523440(_WORD *this, int a2)
{
  __int16 v2; // dx
  _WORD *v3; // eax
  int v4; // ecx
  int v6; // [esp+8h] [ebp-4h]

  HIWORD(v6) = 0; /*0x523441*/
  v2 = 0; /*0x523448*/
  v3 = this + 0x92; /*0x52344d*/
  v4 = 2; /*0x523453*/
  do /*0x523483*/
  {
    v2 += 4 * (*v3 * v3[0xFFFFFFFE] + v3[0xFFFFFFF4] * v3[0xFFFFFFF2]); /*0x52347a*/
    v3 += 0x18; /*0x52347d*/
    --v4; /*0x523480*/
  }
  while ( v4 ); /*0x523483*/
  LOWORD(v6) = v2; /*0x523485*/
  return v6 + 0x15; /*0x52348e*/
}
