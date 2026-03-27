void __thiscall sub_6FF0A0(float *this, float a2, int a3)
{
  float *v4; // edi
  float *v5; // ebp
  double v6; // st7
  float v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // edi
  int v11; // ebx
  double v12; // st6
  float *v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st4
  float v18; // [esp+8h] [ebp-38h]
  float v19; // [esp+Ch] [ebp-34h]
  float v20; // [esp+Ch] [ebp-34h]
  float v21; // [esp+10h] [ebp-30h]
  float v22; // [esp+14h] [ebp-2Ch]
  float v23; // [esp+18h] [ebp-28h]
  float v24; // [esp+1Ch] [ebp-24h]
  float v25; // [esp+20h] [ebp-20h]
  float v26; // [esp+28h] [ebp-18h] BYREF
  float v27; // [esp+2Ch] [ebp-14h]
  float v28; // [esp+30h] [ebp-10h]
  float v29; // [esp+34h] [ebp-Ch]
  float v30; // [esp+38h] [ebp-8h]
  float v31; // [esp+3Ch] [ebp-4h]

  if ( *(_WORD *)(a3 + 0x48) )
  {
    v4 = *(float **)(*((_DWORD *)this + 4) + 0x1C);
    if ( v4 )
    {
      v5 = this + 9;
      v6 = a2;
      if ( sub_8AA350(this + 9, &Vector3_InitValue_) )
      {
        *(this + 0xC) = Vector3_InitValue_;
        *(this + 0xD) = *(&Vector3_InitValue_ + 1);
        v7 = dword_B3F9B0;
        *(this + 7) = a2;
        *(this + 0xE) = v7;
        *v5 = v4[0x22];
        *(this + 0xA) = v4[0x23];
        *(this + 0xB) = v4[0x24];
      }
      v8 = v4[0x22];
      v9 = v4[0x23];
      v10 = v4[0x24];
      v11 = *(unsigned __int16 *)(a3 + 0x48);
      v18 = v6 - *(this + 7);
      v24 = v8;
      v25 = v9;
      v12 = v18;
      if ( v18 != 0.0 )
      {
        v26 = v8 - *v5;
        v27 = v9 - *(this + 0xA);
        v28 = v10 - *(this + 0xB);
        v19 = *(this + 8);
        v29 = v26 * v19;
        v30 = v27 * v19;
        v31 = v19 * v28;
        v20 = 1.0 / v12;
        v21 = v29 * v20;
        v22 = v30 * v20;
        v23 = v20 * v31;
        v26 = v21 - *(this + 0xC);
        v27 = v22 - *(this + 0xD);
        v28 = v23 - *(this + 0xE);
        if ( sub_8AA390(&v26, &Vector3_InitValue_) )
        {
          v13 = *(float **)(a3 + 0x5C);
          if ( v11 )
          {
            v14 = v26;
            v15 = v27;
            v16 = v28;
            do
            {
              --v11;
              v17 = *v13 + v14;
              v13 += 7;
              v13[0xFFFFFFF9] = v17;
              v13[0xFFFFFFFA] = v13[0xFFFFFFFA] + v15;
              v13[0xFFFFFFFB] = v13[0xFFFFFFFB] + v16;
            }
            while ( v11 );
          }
        }
        v6 = a2;
        v12 = v18;
        *(this + 0xC) = v21;
        *(this + 0xD) = v22;
        *(this + 0xE) = v23;
      }
      *(this + 6) = v12;
      *v5 = v24;
      *(this + 7) = v6;
      *(this + 0xA) = v25;
      *(this + 0xB) = v10;
    }
    else
    {
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 0x54))(this);
    }
  }
}
