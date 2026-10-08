bool __thiscall sub_4CA6C0(int this)
{
  char v1; // al
  bool v2; // dl
  char v3; // al
  _BYTE *v5; // ecx

  v1 = *(_BYTE *)(this + 0x24); /*0x4ca6c0*/
  v2 = (v1 & 4) != 0; /*0x4ca6c9*/
  v3 = v1 & 1; /*0x4ca6cb*/
  if ( v3 ) /*0x4ca6cd*/
    v2 = !v2; /*0x4ca6d1*/
  if ( v2 ) /*0x4ca6d6*/
    return 1; /*0x4ca6d8*/
  if ( v3 ) /*0x4ca6dd*/
    return 0; /*0x4ca6dd*/
  v5 = *(_BYTE **)(this + 0x50); /*0x4ca6df*/
  if ( !v5 ) /*0x4ca6e4*/
    return 0; /*0x4ca6eb*/
  return sub_4EF140(v5); /*0x4ca6da*/
}
