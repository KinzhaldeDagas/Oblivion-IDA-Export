BOOL __thiscall sub_54E820(_DWORD *this, unsigned int a2)
{
  int v2; // ecx
  bool v3; // c0
  bool v4; // c3
  float *v5; // ecx
  BOOL result; // eax

  result = 0; /*0x54e846*/
  if ( a2 < *(this + 4) ) /*0x54e827*/
  {
    v2 = *(this + 3); /*0x54e829*/
    v3 = *(float *)(v2 + 4 * a2) > 0.0; /*0x54e82e*/
    v4 = 0.0 == *(float *)(v2 + 4 * a2); /*0x54e82e*/
    v5 = (float *)(v2 + 4 * a2); /*0x54e831*/
    if ( (v3 || v4) && *v5 <= 1.0 ) /*0x54e844*/
      return 1; /*0x54e827*/
  }
  return result; /*0x54e84b*/
}
