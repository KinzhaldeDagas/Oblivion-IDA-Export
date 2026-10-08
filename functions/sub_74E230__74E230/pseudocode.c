int __thiscall sub_74E230(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x38u); /*0x74e236*/
  v4 = (int)v3; /*0x74e23b*/
  if ( v3 ) /*0x74e242*/
  {
    sub_752BF0(v3); /*0x74e246*/
    *(float *)(v4 + 0x18) = 0.0; /*0x74e24d*/
    *(_DWORD *)v4 = &NiPSysRotationModifier::`vftable'; /*0x74e250*/
    *(float *)(v4 + 0x1C) = 0.0; /*0x74e256*/
    *(float *)(v4 + 0x20) = 0.0; /*0x74e259*/
    *(float *)(v4 + 0x24) = 0.0; /*0x74e25c*/
    *(float *)(v4 + 0x28) = stru_B258D0.x; /*0x74e264*/
    *(float *)(v4 + 0x2C) = stru_B258D0.y; /*0x74e271*/
    *(float *)(v4 + 0x30) = stru_B258D0.z; /*0x74e27e*/
    *(_BYTE *)(v4 + 0x34) = 1; /*0x74e281*/
    *(_BYTE *)(v4 + 0x35) = 0; /*0x74e285*/
    sub_74E160(this, v4, a2); /*0x74e289*/
    return v4; /*0x74e28f*/
  }
  else
  {
    sub_74E160(this, 0, a2); /*0x74e29f*/
    return 0; /*0x74e2a5*/
  }
}
