void __thiscall sub_787480(int *this)
{
  int v2; // ebx
  float *v3; // edi
  float *v4; // eax
  double v5; // st7
  int v6; // eax
  double v7; // rt0
  float v8; // ebp
  int v9; // [esp+4h] [ebp-3Ch]
  float v10; // [esp+18h] [ebp-28h]
  float v11; // [esp+1Ch] [ebp-24h] BYREF
  float v12; // [esp+20h] [ebp-20h]
  float v13; // [esp+24h] [ebp-1Ch]
  float v14; // [esp+28h] [ebp-18h] BYREF
  float v15; // [esp+2Ch] [ebp-14h]
  float v16; // [esp+30h] [ebp-10h]
  float v17; // [esp+34h] [ebp-Ch]
  float v18; // [esp+38h] [ebp-8h]
  float v19; // [esp+3Ch] [ebp-4h]

  v2 = *(this + 1);
  if ( v2 )
  {
    if ( *(this + 0x18) )
    {
      v3 = (float *)*(this + 0x14);
      if ( v3 )
      {
        v4 = (float *)*(this + 0x10);
        v14 = *v4;
        v15 = v4[1];
        v16 = v4[2];
        v11 = v4[3];
        v12 = v4[4];
        v13 = v4[5];
        v5 = sub_786E50(&v14, &v11);
        v6 = *(this + 0x13);
        v7 = dbl_A2FAA0;
        v10 = v5 * v7;
        v17 = v11 + v14;
        v18 = v15 + v12;
        v19 = v13 + v16;
        v11 = v17 * v7;
        v8 = v11;
        v12 = v18 * v7;
        v13 = v7 * v19;
        if ( v6 )
        {
          sub_7A51C0(v3, v2, v11, v12, v13, v10, v6 + 0x34);
          v9 = *(this + 0x13) + 0x34;
        }
        else
        {
          sub_7A51C0(v3, v2, v11, v12, v13, v10, 0);
          v9 = 0;
        }
        sub_7A51C0((float *)*(this + 0x14), *(this + 0x18), v8, v12, v13, v10, v9);
      }
    }
  }
}
