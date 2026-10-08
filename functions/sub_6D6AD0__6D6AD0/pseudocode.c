int __thiscall sub_6D6AD0(int this, float *a2)
{
  int result; // eax

  if ( !*(_BYTE *)(this + 0x1C) && *a2 == *(float *)(this + 0xC) && a2[1] == *(float *)(this + 0x10) ) /*0x6d6af5*/
  {
    *(_BYTE *)(this + 0x1C) = 0; /*0x6d6af9*/
    result = *(_DWORD *)a2; /*0x6d6afc*/
    *(float *)(this + 0xC) = *a2; /*0x6d6afe*/
    *(float *)(this + 0x10) = a2[1]; /*0x6d6b04*/
  }
  else
  {
    *(_BYTE *)(this + 0x1C) = 1; /*0x6d6b0f*/
    result = *(_DWORD *)a2; /*0x6d6b12*/
    *(float *)(this + 0xC) = *a2; /*0x6d6b14*/
    *(float *)(this + 0x10) = a2[1]; /*0x6d6b1a*/
  }
  return result; /*0x6d6b07*/
}
