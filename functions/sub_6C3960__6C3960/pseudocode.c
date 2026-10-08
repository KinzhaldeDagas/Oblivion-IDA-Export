void __thiscall sub_6C3960(float *this, float a2, float a3, int a4, int a5, float a6, int a7, int a8, float a9)
{
  int v10; // ecx
  _DWORD *v11; // ecx
  int v12; // [esp+8h] [ebp-10h] BYREF
  float v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  if ( -flt_A7DEB4 != a6 ) /*0x6c3979*/
  {
    v13 = a6; /*0x6c3987*/
    v12 = a5; /*0x6c398f*/
    v14 = a7; /*0x6c399b*/
    v15 = a8; /*0x6c399f*/
    sub_471430((_DWORD *)this + 3, (float *)&v12); /*0x6c39a3*/
    v10 = *((_DWORD *)this + 0xB); /*0x6c39a8*/
    if ( v10 ) /*0x6c39ad*/
      NiTransformData_SetRotationKeys(v10, 0, 0, 0); /*0x6c39b5*/
  }
  if ( -flt_A7DEB4 != a9 ) /*0x6c39cf*/
    sub_6C3910(this, a9); /*0x6c39d7*/
  if ( -flt_A7DEB4 != a2 ) /*0x6c39f3*/
  {
    v12 = LODWORD(a2); /*0x6c3a01*/
    v14 = a4; /*0x6c3a09*/
    v13 = a3; /*0x6c3a11*/
    sub_471390((_DWORD *)this + 3, (float *)&v12); /*0x6c3a15*/
    v11 = *((_DWORD **)this + 0xB); /*0x6c3a1a*/
    if ( v11 ) /*0x6c3a1f*/
      NiTransformData_SetTranslationKeys(v11, 0, 0, 0); /*0x6c3a27*/
  }
}
