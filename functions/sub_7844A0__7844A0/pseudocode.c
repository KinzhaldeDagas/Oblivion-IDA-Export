int __thiscall sub_7844A0(_DWORD *this, int a2, float a3)
{
  unsigned int v4; // edi
  int v5; // eax
  int v6; // ebx
  double v7; // st7
  char v8; // cl
  unsigned int v9; // ebx
  int v10; // eax
  _DWORD *v11; // eax
  float *v12; // eax
  _DWORD *v13; // eax
  float *v15; // [esp-Ch] [ebp-64h]
  float *v16; // [esp-8h] [ebp-60h]
  float *v17; // [esp-4h] [ebp-5Ch]
  int v18; // [esp+18h] [ebp-40h]
  int v19; // [esp+1Ch] [ebp-3Ch]
  int v20; // [esp+1Ch] [ebp-3Ch]
  int v21; // [esp+20h] [ebp-38h]
  float v22; // [esp+2Ch] [ebp-2Ch]
  int v23; // [esp+30h] [ebp-28h]
  int v24[6]; // [esp+34h] [ebp-24h] BYREF
  int v25; // [esp+54h] [ebp-4h]
  float v26; // [esp+60h] [ebp+8h]

  v4 = 0;
  v25 = 0;
  sub_78E570((float *)a2, 2);
  v5 = *(this + 4);
  v25 = 0;
  if ( v5 )
  {
    v6 = (*(this + 5) - v5) / 0x18;
    v23 = v6;
    if ( v6 > 1 )
    {
      if ( a3 < dbl_A2FC68 )
        a3 = 0.0;
      if ( a3 > dbl_A2F928 )
        a3 = 1.0;
      v21 = v6 - 1;
      v26 = (double)(v6 - 1) * a3;
      v7 = v26;
      v19 = Double_To_SInt32(v26);
      v8 = 0;
      v18 = 0;
      v22 = v26 - (double)v19;
      if ( v6 > 0 )
      {
        v20 = 0;
        v9 = 2;
        do
        {
          if ( v8 )
            return a2;
          if ( v4 == v21 )
          {
            v10 = *(this + 4);
            if ( !v10 || v4 >= (*(this + 5) - v10) / 0x18 )
            {
              _invalid_parameter_noinfo();
              v7 = v26;
            }
            v11 = (_DWORD *)(v20 + *(this + 4));
            *(_DWORD *)a2 = *v11;
            *(_DWORD *)(a2 + 4) = v11[1];
            *(_DWORD *)(a2 + 8) = v11[2];
            *(_DWORD *)(a2 + 0xC) = v11[3];
            *(_DWORD *)(a2 + 0x10) = v11[4];
            *(_DWORD *)(a2 + 0x14) = v11[5];
          }
          else
          {
            if ( (double)v18 > v7 || (double)(int)(v4 + 1) <= v7 )
              goto LABEL_19;
            v17 = (float *)sub_784000(this + 0x13, v9 + 1);
            v16 = (float *)sub_784000(this + 0x13, v9);
            v15 = (float *)sub_784000(this + 0x13, v9 - 1);
            v12 = (float *)sub_784000(this + 0x13, v9 - 2);
            v13 = sub_783E70(v24, v12, v15, v16, v17, v22);
            *(_DWORD *)a2 = *v13;
            *(_DWORD *)(a2 + 4) = v13[1];
            *(_DWORD *)(a2 + 8) = v13[2];
            *(_DWORD *)(a2 + 0xC) = v13[3];
            *(_DWORD *)(a2 + 0x10) = v13[4];
            *(_DWORD *)(a2 + 0x14) = v13[5];
            TESTexture::ClearComponentReferences(v24);
            v7 = v26;
            v4 = v18;
          }
          v8 = 1;
LABEL_19:
          v20 += 0x18;
          ++v4;
          v9 += 3;
          v18 = v4;
        }
        while ( (int)v4 < v23 );
      }
    }
  }
  return a2;
}
