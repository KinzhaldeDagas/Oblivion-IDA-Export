void __thiscall sub_6FF0A0(float *this, float a2, int a3)
{
  float *v4; // edi
  float *v5; // ebp
  double v6; // st7
  float z; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // edi
  int v11; // ebx
  double v12; // st6
  float *v13; // eax
  double x; // st7
  double y; // st6
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
  NiPoint3 v26; // [esp+28h] [ebp-18h] BYREF
  float v27; // [esp+34h] [ebp-Ch]
  float v28; // [esp+38h] [ebp-8h]
  float v29; // [esp+3Ch] [ebp-4h]

  if ( *(_WORD *)(a3 + 0x48) ) /*0x6ff0a8*/
  {
    v4 = *(float **)(*((_DWORD *)this + 4) + 0x1C); /*0x6ff0ba*/
    if ( v4 ) /*0x6ff0bf*/
    {
      v5 = this + 9; /*0x6ff0d2*/
      v6 = a2; /*0x6ff0e1*/
      if ( sub_8AA350(this + 9, &g_zeroNiPoint3.x) ) /*0x6ff0dc*/
      {
        *(this + 0xC) = g_zeroNiPoint3.x; /*0x6ff0ef*/
        *(this + 0xD) = g_zeroNiPoint3.y; /*0x6ff0f8*/
        z = g_zeroNiPoint3.z; /*0x6ff0fb*/
        *(this + 7) = a2; /*0x6ff100*/
        *(this + 0xE) = z; /*0x6ff103*/
        *v5 = v4[0x22]; /*0x6ff10c*/
        *(this + 0xA) = v4[0x23]; /*0x6ff115*/
        *(this + 0xB) = v4[0x24]; /*0x6ff11e*/
      }
      v8 = v4[0x22]; /*0x6ff121*/
      v9 = v4[0x23]; /*0x6ff12c*/
      v10 = v4[0x24]; /*0x6ff132*/
      v11 = *(unsigned __int16 *)(a3 + 0x48); /*0x6ff138*/
      v18 = v6 - *(this + 7); /*0x6ff13c*/
      v24 = v8; /*0x6ff140*/
      v25 = v9; /*0x6ff146*/
      v12 = v18; /*0x6ff156*/
      if ( v18 != 0.0 ) /*0x6ff15b*/
      {
        v26.x = v8 - *v5; /*0x6ff173*/
        v26.y = v9 - *(this + 0xA); /*0x6ff17e*/
        v26.z = v10 - *(this + 0xB); /*0x6ff189*/
        v19 = *(this + 8); /*0x6ff190*/
        v27 = v26.x * v19; /*0x6ff19e*/
        v28 = v26.y * v19; /*0x6ff1a8*/
        v29 = v19 * v26.z; /*0x6ff1b0*/
        v20 = 1.0 / v12; /*0x6ff1b8*/
        v21 = v27 * v20; /*0x6ff1c6*/
        v22 = v28 * v20; /*0x6ff1d0*/
        v23 = v20 * v29; /*0x6ff1d8*/
        v26.x = v21 - *(this + 0xC); /*0x6ff1e3*/
        v26.y = v22 - *(this + 0xD); /*0x6ff1ee*/
        v26.z = v23 - *(this + 0xE); /*0x6ff1f9*/
        if ( NiPoint3__NotEqual(&v26, &g_zeroNiPoint3) ) /*0x6ff1fd*/
        {
          v13 = *(float **)(a3 + 0x5C); /*0x6ff20c*/
          if ( v11 ) /*0x6ff20f*/
          {
            x = v26.x; /*0x6ff211*/
            y = v26.y; /*0x6ff215*/
            v16 = v26.z; /*0x6ff219*/
            do /*0x6ff23c*/
            {
              --v11; /*0x6ff21f*/
              v17 = *v13 + x; /*0x6ff222*/
              v13 += 7; /*0x6ff224*/
              v13[0xFFFFFFF9] = v17; /*0x6ff229*/
              v13[0xFFFFFFFA] = v13[0xFFFFFFFA] + y; /*0x6ff231*/
              v13[0xFFFFFFFB] = v13[0xFFFFFFFB] + v16; /*0x6ff239*/
            }
            while ( v11 ); /*0x6ff23c*/
          }
        }
        v6 = a2; /*0x6ff248*/
        v12 = v18; /*0x6ff250*/
        *(this + 0xC) = v21; /*0x6ff258*/
        *(this + 0xD) = v22; /*0x6ff25b*/
        *(this + 0xE) = v23; /*0x6ff25e*/
      }
      *(this + 6) = v12; /*0x6ff265*/
      *v5 = v24; /*0x6ff26c*/
      *(this + 7) = v6; /*0x6ff26f*/
      *(this + 0xA) = v25; /*0x6ff272*/
      *(this + 0xB) = v10; /*0x6ff275*/
    }
    else
    {
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 0x54))(this); /*0x6ff0c6*/
    }
  }
}
