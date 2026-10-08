_BYTE *__thiscall sub_5E14E0(int this, _BYTE *a2)
{
  _BYTE *result; // eax

  result = a2; /*0x5e14e0*/
  *(_BYTE *)(this + 0x61) = *a2; /*0x5e14e6*/
  if ( !*a2 ) /*0x5e14e9*/
    *(_DWORD *)(this + 0x64) = 0; /*0x5e14ee*/
  return result; /*0x5e14f5*/
}
