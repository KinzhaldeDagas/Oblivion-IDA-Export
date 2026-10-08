bool __thiscall sub_4CA6F0(int this)
{
  char v1; // al
  _BYTE *v3; // ecx

  v1 = *(_BYTE *)(this + 0x24); /*0x4ca6f0*/
  if ( (v1 & 1) != 0 ) /*0x4ca6f5*/
    return (v1 & 8) != 0; /*0x4ca6fa*/
  v3 = *(_BYTE **)(this + 0x50); /*0x4ca6fd*/
  return v3 && sub_4EF150(v3); /*0x4ca704*/
}
