int __thiscall sub_8A7220(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int result; // eax

  v3 = a2; /*0x8a7220*/
  v4 = a2 & 0xF; /*0x8a7226*/
  *(this + 0xA) = 0xFFFFFFFF; /*0x8a7229*/
  if ( (a2 & 0xF) != 0 ) /*0x8a7230*/
  {
    v5 = a2 - v4 + 0x10; /*0x8a7234*/
    *(this + 8) = v5; /*0x8a7237*/
    v3 = v5 - v4; /*0x8a723a*/
  }
  else
  {
    *(this + 8) = a2; /*0x8a724c*/
  }
  result = a3 + v3; /*0x8a7240*/
  *(this + 0xB) = result; /*0x8a7242*/
  return result; /*0x8a7245*/
}
