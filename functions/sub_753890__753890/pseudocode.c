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
  float scale; // [esp+28h] [ebp-110h] BYREF
  float v19; // [esp+2Ch] [ebp-10Ch]
  float v20; // [esp+30h] [ebp-108h]
  float v21[3]; // [esp+34h] [ebp-104h] BYREF
  float *v22; // [esp+40h] [ebp-F8h]
  float v23[3]; // [esp+44h] [ebp-F4h] BYREF
  NiPoint3 v24; // [esp+50h] [ebp-E8h] BYREF
  NiTransform v25; // [esp+5Ch] [ebp-DCh] BYREF
  float v26; // [esp+90h] [ebp-A8h]
  float v27; // [esp+94h] [ebp-A4h]
  NiTransform v28; // [esp+9Ch] [ebp-9Ch] BYREF
  float v29[13]; // [esp+D0h] [ebp-68h] BYREF
  NiTransform v30; // [esp+104h] [ebp-34h] BYREF

  if ( 0.0 != *(this + 7) )
  {
    if ( *(_WORD *)(a3 + 0x48) )
    {
      if ( !sub_8AA350(this + 0xC, &Vector3_InitValue_) )
      {
        v4 = *((_DWORD *)this + 6);
        if ( v4 )
        {
          if ( 0.0 == *(this + 8) )
          {
            if ( *((_BYTE *)this + 0x24) )
              sub_753400(this, a2, a3);
            else
              sub_753610(this, a2, a3);
          }
          else
          {
            qmemcpy(&v28, (const void *)(v4 + 0x64), sizeof(v28));
            qmemcpy(v29, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v29));
            sub_718A80(v29, &v30);
            sub_53D7A0(&v30, (NiTransform *)v25.rot.data[1], &v28);
            v20 = v27;
            scale = v25.scale;
            v19 = v26;
            sub_7101F0((NiTransform *)v25.rot.data[1], &v25, (NiPoint3 *)this + 4);
            sub_43F350((float *)&v25);
            for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i )
            {
              v22 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i);
              v17 = a2 - v22[5];
              if ( 0.0 != v17 )
              {
                v6 = *(_DWORD *)(a3 + 0x1C);
                v7 = *(float *)(v6 + 0xC * i);
                v8 = v6 + 0xC * i;
                v9 = *(float *)(v8 + 4);
                v21[0] = v7;
                v10 = v7 - scale;
                v11 = *(float *)(v8 + 8);
                v21[1] = v9;
                v21[2] = v11;
                v23[0] = v10;
                v23[1] = v9 - v19;
                v23[2] = v11 - v20;
                v13 = sub_404C90(v23);
                if ( v13 != 0.0 && (!*((_BYTE *)this + 0x24) || *(this + 0xA) >= (double)v13) )
                {
                  sub_753280(&v24.x, &scale, (float *)&v25, v21);
                  v12 = v17 * *(this + 7);
                  if ( 0.0 == *(this + 8) )
                  {
                    v14 = v12;
                  }
                  else
                  {
                    v15 = pow(v13, *(this + 8));
                    v14 = v12 / v15;
                  }
                  NiPoint3::MutliplyByValue(&v24, v14);
                  sub_4121D0(v22, &v24.x);
                }
              }
            }
          }
        }
      }
    }
  }
}
