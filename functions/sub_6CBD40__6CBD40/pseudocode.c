int __thiscall sub_6CBD40(NiRenderer *this, unsigned int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  float v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  _DWORD v10[8]; // [esp+4h] [ebp-20h] BYREF

  result = sub_6CD720(this, a2); /*0x6cbd49*/
  if ( *(_DWORD *)(a2 + 0xD8) < 0xA01006Eu ) /*0x6cbd58*/
  {
    v3 = dword_B24260; /*0x6cbd5a*/
    v4 = dword_B24264; /*0x6cbd65*/
    *(float *)&v10[7] = flt_A79E10; /*0x6cbd6b*/
    v5 = dword_B24268; /*0x6cbd6f*/
    v10[0] = v3; /*0x6cbd75*/
    v6 = flt_B3CBA4; /*0x6cbd79*/
    v10[1] = v4; /*0x6cbd7e*/
    v7 = flt_B3CBA8; /*0x6cbd82*/
    v10[2] = v5; /*0x6cbd88*/
    v8 = flt_B3CBAC; /*0x6cbd8c*/
    *(float *)&v10[3] = v6; /*0x6cbd92*/
    v9 = flt_B3CBB0; /*0x6cbd96*/
    *(float *)&v10[4] = v7; /*0x6cbd9b*/
    *(float *)&v10[5] = v8; /*0x6cbda4*/
    *(float *)&v10[6] = v9; /*0x6cbda8*/
    return sub_6CB990((char *)v10, a2); /*0x6cbdac*/
  }
  return result; /*0x6cbdb1*/
}
