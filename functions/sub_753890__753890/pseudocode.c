void __thiscall sub_753890(float *this, float a2, int a3)
{
  int v4; // ecx
  unsigned __int16 i; // si
  int v6; // eax
  float v7; // edx
  int v8; // eax
  float v9; // ecx
  double v10; // st7
  float v11; // edx
  double v12; // st7
  float v13; // [esp+18h] [ebp-120h]
  float v14; // [esp+18h] [ebp-120h]
  float v15; // [esp+18h] [ebp-120h]
  float v17; // [esp+20h] [ebp-118h]
  NiPoint3 pos; // [esp+28h] [ebp-110h] BYREF
  float v19[3]; // [esp+34h] [ebp-104h] BYREF
  float *v20; // [esp+40h] [ebp-F8h]
  float v21[3]; // [esp+44h] [ebp-F4h] BYREF
  NiPoint3 v22; // [esp+50h] [ebp-E8h] BYREF
  NiPoint3 v23; // [esp+5Ch] [ebp-DCh] BYREF
  NiTransform out; // [esp+68h] [ebp-D0h] BYREF
  NiTransform local; // [esp+9Ch] [ebp-9Ch] BYREF
  float v26[13]; // [esp+D0h] [ebp-68h] BYREF
  NiTransform parent; // [esp+104h] [ebp-34h] BYREF

  if ( 0.0 != *(this + 7) ) /*0x7538af*/
  {
    if ( *(_WORD *)(a3 + 0x48) ) /*0x7538b8*/
    {
      if ( !sub_8AA350(this + 0xC, &g_zeroNiPoint3.x) ) /*0x7538cb*/
      {
        v4 = *((_DWORD *)this + 6); /*0x7538d8*/
        if ( v4 ) /*0x7538dd*/
        {
          if ( 0.0 == *(this + 8) ) /*0x7538ed*/
          {
            if ( *((_BYTE *)this + 0x24) ) /*0x7538ef*/
              sub_753400(this, a2, a3); /*0x7538ff*/
            else
              sub_753610(this, a2, a3); /*0x75390d*/
          }
          else
          {
            qmemcpy(&local, (const void *)(v4 + 0x64), sizeof(local)); /*0x75392e*/
            qmemcpy(v26, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v26)); /*0x753942*/
            sub_718A80(v26, &parent); /*0x753953*/
            NiTransform_Compose(&parent, &out, &local); /*0x75396c*/
            pos = out.pos; /*0x753986*/
            sub_7101F0(&out, (NiTransform *)&v23, (NiPoint3 *)this + 4); /*0x7539a3*/
            Vector3_NormalizeInPlace(&v23.x); /*0x7539ac*/
            for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i ) /*0x7539b5*/
            {
              v20 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i); /*0x7539d5*/
              v17 = a2 - v20[5]; /*0x7539dc*/
              if ( 0.0 != v17 ) /*0x7539eb*/
              {
                v6 = *(_DWORD *)(a3 + 0x1C); /*0x7539f1*/
                v7 = *(float *)(v6 + 0xC * i); /*0x7539f7*/
                v8 = v6 + 0xC * i; /*0x7539fa*/
                v9 = *(float *)(v8 + 4); /*0x7539fd*/
                v19[0] = v7; /*0x753a00*/
                v10 = v7 - pos.x; /*0x753a08*/
                v11 = *(float *)(v8 + 8); /*0x753a0c*/
                v19[1] = v9; /*0x753a0f*/
                v19[2] = v11; /*0x753a13*/
                v21[0] = v10; /*0x753a17*/
                v21[1] = v9 - pos.y; /*0x753a27*/
                v21[2] = v11 - pos.z; /*0x753a33*/
                v13 = NiPoint3_Length(v21); /*0x753a3c*/
                if ( v13 != 0.0 && (!*((_BYTE *)this + 0x24) || *(this + 0xA) >= (double)v13) ) /*0x753a69*/
                {
                  sub_753280(&v22, &pos.x, &v23, v19); /*0x753a89*/
                  v12 = v17 * *(this + 7); /*0x753a9c*/
                  if ( 0.0 == *(this + 8) ) /*0x753a9f*/
                  {
                    v14 = v12; /*0x753aa1*/
                  }
                  else
                  {
                    v15 = pow(v13, *(this + 8)); /*0x753abb*/
                    v14 = v12 / v15; /*0x753ac7*/
                  }
                  NiPoint3::MutliplyByValue(&v22, v14); /*0x753ad7*/
                  sub_4121D0(v20, &v22.x); /*0x753ae5*/
                }
              }
            }
          }
        }
      }
    }
  }
}
