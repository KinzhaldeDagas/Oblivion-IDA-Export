int __thiscall sub_6D6A90(int this, float a2)
{
  if ( *(_BYTE *)(this + 0x1C) || a2 != *(float *)(this + 8) ) /*0x6d6aa6*/
  {
    *(float *)(this + 8) = a2; /*0x6d6ab8*/
    *(_BYTE *)(this + 0x1C) = 1; /*0x6d6abb*/
    return 1; /*0x6d6ab3*/
  }
  else
  {
    *(float *)(this + 8) = a2; /*0x6d6aaa*/
    *(_BYTE *)(this + 0x1C) = 0; /*0x6d6aad*/
    return 0; /*0x6d6aa8*/
  }
}
