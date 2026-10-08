// TES4 authoritative: stores metadata key/value on proxy metadata object at proxy+0x364 (dword 0xD9). For key 0x3E8, actor setup stores the owning MobileObject pointer here.
void __thiscall sub_8910F0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx

  v3 = (_DWORD *)*(this + 0xD9); /*0x8910f1*/
  if ( v3 ) /*0x8910f9*/
  {
    if ( !sub_890A10(v3, a2) ) /*0x891103*/
    {
      v4 = (_DWORD *)v3[2];                     // TES4 authoritative: metadata map pointer is metadata+8; insertion uses 0x8BC750(key, valueLow, valueHigh). /*0x89110c*/
      if ( v4 ) /*0x891116*/
        sub_8BC750(v4, a2, a3, a3 >> 0x1F); /*0x89111b*/
    }
  }
}
