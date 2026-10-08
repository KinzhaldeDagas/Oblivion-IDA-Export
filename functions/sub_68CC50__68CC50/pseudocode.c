void __thiscall sub_68CC50(float **this, float a2)
{
  float *v3; // ecx
  float *v4; // eax
  float v5; // edx
  float v6; // esi
  float v7; // ecx
  float *v8; // esi
  double v9; // st7
  __int16 v10; // fps
  double v11; // st7
  __int16 v12; // fps
  float *v13; // ebx
  float *SafeFloatPointer; // eax
  float v15; // [esp+Ch] [ebp-54h]
  float v16; // [esp+1Ch] [ebp-44h]
  float v17; // [esp+20h] [ebp-40h]
  float v18; // [esp+20h] [ebp-40h]
  float v19; // [esp+28h] [ebp-38h]
  float v20; // [esp+2Ch] [ebp-34h]
  float v21; // [esp+30h] [ebp-30h] BYREF
  float v22; // [esp+34h] [ebp-2Ch]
  float v23; // [esp+38h] [ebp-28h]
  float v24[9]; // [esp+3Ch] [ebp-24h] BYREF

  v3 = *(this + 0x10); /*0x68cc56*/
  if ( v3 ) /*0x68cc5b*/
  {
    if ( *(this + 0x11) ) /*0x68cc61*/
    {
      v4 = *(this + 0xF); /*0x68cc6b*/
      if ( v4 ) /*0x68cc70*/
      {
        if ( *(this + 0x12) ) /*0x68cc76*/
        {
          if ( !unk_B3C0A4 ) /*0x68cc80*/
          {
            v5 = v3[0x22]; /*0x68cc8d*/
            v6 = v3[0x23]; /*0x68cc94*/
            v7 = v3[0x24]; /*0x68cc9a*/
            v4[0x15] = v5; /*0x68cca0*/
            v4[0x16] = v6; /*0x68cca3*/
            v4[0x17] = v7; /*0x68cca6*/
            v19 = v6; /*0x68cca9*/
            v8 = *(this + 0x11); /*0x68ccad*/
            v9 = v8[0x22]; /*0x68ccb0*/
            v8 += 0x22; /*0x68ccb6*/
            v20 = v7; /*0x68ccc4*/
            v21 = v9 - v5; /*0x68ccc9*/
            v22 = v8[1] - v19; /*0x68ccd8*/
            v23 = 0.0; /*0x68ccde*/
            v16 = NiPoint3_Length(&v21); /*0x68cce7*/
            v17 = v8[2] - v20; /*0x68ccf2*/
            sub_98598A(v16, v17, v10); /*0x68ccfe*/
            v15 = -v17; /*0x68cd10*/
            v11 = v21; /*0x68cd19*/
            sub_98598A(v22, v21, v12); /*0x68cd21*/
            v18 = v11; /*0x68cd26*/
            sub_7118E0(v24, v18, 0.0, v15); /*0x68cd36*/
            qmemcpy(*(this + 0xF) + 0xC, v24, 0x24u); /*0x68cd4a*/
            v13 = *(this + 0x12); /*0x68cd4c*/
            SafeFloatPointer = GameSetting_GetSafeFloatPointer(&flt_B37ED0[0xE4]); /*0x68cd54*/
            sub_7F3300(v13, a2, v16, *SafeFloatPointer, 0); /*0x68cd75*/
          }
        }
      }
    }
  }
}
