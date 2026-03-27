void __thiscall sub_7860D0(unsigned int *this, float *a2, float *a3, int a4)
{
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  _DWORD *v15; // eax
  float v16; // [esp+0h] [ebp-88h]
  float v17; // [esp+4h] [ebp-84h]
  _DWORD v18[6]; // [esp+1Ch] [ebp-6Ch] BYREF
  _DWORD v19[6]; // [esp+34h] [ebp-54h] BYREF
  int v20[6]; // [esp+4Ch] [ebp-3Ch] BYREF
  int v21[6]; // [esp+64h] [ebp-24h] BYREF
  unsigned int v22; // [esp+84h] [ebp-4h]
  float *v23; // [esp+8Ch] [ebp+4h]
  int v24; // [esp+8Ch] [ebp+4h]

  sub_78E5A0(v19, *a2, a2[1]);
  v17 = a3[1];
  v5 = *a3;
  v22 = 0;
  v16 = v5;
  sub_78E5A0(v18, v16, v17);
  LOBYTE(v22) = 1;
  sub_78E6A0(v18);
  v6 = *(this + 4);
  if ( v6 )
  {
    if ( (int)(*(this + 5) - v6) / 0x18 )
    {
      v7 = *(this + 4);
      if ( v7 )
        v8 = (int)(*(this + 5) - v7) / 0x18;
      else
        v8 = 0;
      v9 = *(this + 0xC);
      v10 = v8 - 1;
      if ( !v9 || v10 >= (int)(*(this + 0xD) - v9) >> 2 )
        _invalid_parameter_noinfo();
      v11 = *(this + 8);
      v23 = (float *)(*(this + 0xC) + 4 * v10);
      if ( !v11 || v10 >= (int)(*(this + 9) - v11) / 0x18 )
        _invalid_parameter_noinfo();
      v24 = sub_78E8A0((_DWORD *)(0x18 * v10 + *(this + 8)), (int)v21, *v23);
      v12 = *(this + 4);
      LOBYTE(v22) = 2;
      if ( !v12 || v10 >= (int)(*(this + 5) - v12) / 0x18 )
        _invalid_parameter_noinfo();
      v13 = (_DWORD *)sub_78E6E0((_DWORD *)(0x18 * v10 + *(this + 4)), (int)v20, v24);
      LOBYTE(v22) = 3;
      sub_785E90(this + 0x13, v13);
      LOBYTE(v22) = 2;
      TESTexture::ClearComponentReferences(v20);
      LOBYTE(v22) = 1;
      TESTexture::ClearComponentReferences(v21);
      v14 = sub_78E8A0(v18, (int)v20, *(float *)&a4);
      LOBYTE(v22) = 4;
      v15 = (_DWORD *)sub_78E7C0(v19, (int)v21, v14);
      LOBYTE(v22) = 5;
      sub_785E90(this + 0x13, v15);
      LOBYTE(v22) = 4;
      TESTexture::ClearComponentReferences(v21);
      LOBYTE(v22) = 1;
      TESTexture::ClearComponentReferences(v20);
    }
  }
  sub_785E90(this + 3, v19);
  sub_785E90(this + 0x13, v19);
  sub_785E90(this + 7, v18);
  sub_785F30(this + 0xB, &a4);
  LOBYTE(v22) = 0;
  TESTexture::ClearComponentReferences(v18);
  v22 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(v19);
}
