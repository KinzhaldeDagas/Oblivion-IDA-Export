double __thiscall sub_4710B0(_DWORD *this, int a2)
{
  float v5; // [esp+4h] [ebp-4h]
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]

  v5 = 1.0; /*0x4710b8*/
  if ( !a2 ) /*0x4710c1*/
    return v5; /*0x4710c1*/
  v6 = sub_88F1B0(a2, 0); /*0x4710cb*/
  if ( v6 < 1.0 ) /*0x4710e1*/
    v5 = v6; /*0x4710e3*/
  if ( a2 == *(this + 2) ) /*0x4710ee*/
    return v5; /*0x4710ee*/
  v7 = sub_4710B0(this, *(_DWORD *)(a2 + 0x1C)); /*0x4710fb*/
  if ( v5 > (double)v7 ) /*0x47110e*/
    return v7; /*0x47111d*/
  return v5; /*0x47111b*/
}
