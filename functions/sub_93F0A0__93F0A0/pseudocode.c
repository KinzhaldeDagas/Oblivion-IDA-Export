void __thiscall sub_93F0A0(int this, float a2, int a3, int a4)
{
  if ( *(float *)(this + 0x18) == a2 ) /*0x93f0b3*/
  {
    *(_DWORD *)(this + 0x18) = a3; /*0x93f0b8*/
  }
  else
  {
    *(_DWORD *)(this + 0x18) = 0xBF800000; /*0x93f0c4*/
    *(_OWORD *)(this + 0x20) = 0; /*0x93f0cb*/
  }
}
