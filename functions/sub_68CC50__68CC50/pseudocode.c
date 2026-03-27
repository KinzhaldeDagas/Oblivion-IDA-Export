void __thiscall sub_68CC50(float **this, float a2)
{
  float *v3; // ecx
  float *v4; // eax
  float v5; // edx
  float v6; // esi
  float v7; // ecx
  float *v8; // esi
  double v9; // st7
  void *v10; // ecx
  double v11; // st7
  void *v12; // ecx
  void *v13; // ebx
  int *SafeFloatPointer; // eax
  float v15; // [esp+Ch] [ebp-54h]
  float v16; // [esp+1Ch] [ebp-44h]
  float v17; // [esp+20h] [ebp-40h]
  float v18; // [esp+20h] [ebp-40h]
  float v19; // [esp+28h] [ebp-38h]
  float v20; // [esp+2Ch] [ebp-34h]
  float v21[3]; // [esp+30h] [ebp-30h] BYREF
  float v22[9]; // [esp+3Ch] [ebp-24h] BYREF

  v3 = *(this + 0x10);
  if ( v3 )
  {
    if ( *(this + 0x11) )
    {
      v4 = *(this + 0xF);
      if ( v4 )
      {
        if ( *(this + 0x12) )
        {
          if ( !byte_B3C0A4 )
          {
            v5 = v3[0x22];
            v6 = v3[0x23];
            v7 = v3[0x24];
            v4[0x15] = v5;
            v4[0x16] = v6;
            v4[0x17] = v7;
            v19 = v6;
            v8 = *(this + 0x11);
            v9 = v8[0x22];
            v8 += 0x22;
            v20 = v7;
            v21[0] = v9 - v5;
            v21[1] = v8[1] - v19;
            v21[2] = 0.0;
            v16 = sub_404C90(v21);
            v17 = v8[2] - v20;
            sub_98598A(v10);
            v15 = -v17;
            v11 = v21[0];
            sub_98598A(v12);
            v18 = v11;
            sub_7118E0(v22, v18, 0.0, v15);
            qmemcpy(*(this + 0xF) + 0xC, v22, 0x24u);
            v13 = *(this + 0x12);
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&fAbsorbMoveSpeed);
            sub_7F3300(v13, a2, v16, *(float *)SafeFloatPointer, 0);
          }
        }
      }
    }
  }
}
