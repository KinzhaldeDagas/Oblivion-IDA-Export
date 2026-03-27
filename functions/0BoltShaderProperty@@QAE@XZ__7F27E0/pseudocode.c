BoltShaderProperty *__thiscall BoltShaderProperty::BoltShaderProperty(BoltShaderProperty *this)
{
  int v2; // eax
  int v3; // eax
  double v4; // st6
  double v5; // st6
  double v6; // st6
  int v7; // edi
  int v8; // eax
  float *v9; // edi
  int v10; // ebp
  float v12; // [esp+1Ch] [ebp-14h]

  BSShaderProperty::BSShaderProperty((BSShaderProperty *)this);
  *(_DWORD *)this = &BoltShaderProperty::`vftable';
  *((float *)this + 0x58) = 0.0;
  *((float *)this + 0x59) = 0.0;
  *((float *)this + 0x5A) = 0.0;
  *((float *)this + 0x5B) = 0.0;
  *((float *)this + 0x5C) = 0.0;
  *((float *)this + 0x5D) = 0.0;
  *((float *)this + 0x5E) = 0.0;
  *((float *)this + 0x5F) = 0.0;
  *((float *)this + 0x24) = 0.0;
  *((_DWORD *)this + 0x23) = 0;
  *((float *)this + 0x63) = 0.0;
  *((_DWORD *)this + 0x64) = 0;
  *((float *)this + 0x1F) = 0.0;
  *((_DWORD *)this + 0x21) = 0;
  *((_DWORD *)this + 0x22) = 0;
  v12 = *((float *)this + 0x4E);
  *((float *)this + 0x1C) = 0.0;
  *((float *)this + 0x1D) = v12;
  *((_BYTE *)this + 0x180) = 0;
  *((_BYTE *)this + 0x182) = 1;
  *((_BYTE *)this + 0x183) = 1;
  *((float *)this + 0x1E) = 0.0;
  *((_DWORD *)this + 0x20) = 4;
  v2 = sub_7F3760();
  *((float *)this + 0x54) = 1.0;
  *((_DWORD *)this + 0x53) = v2;
  *((float *)this + 0x55) = 1.0;
  v3 = dword_B2DC90;
  *((float *)this + 0x57) = 1.0;
  v4 = flt_A2FF44;
  *((_DWORD *)this + 0x56) = v3;
  *((float *)this + 0x4E) = v4;
  *((_DWORD *)this + 0x4D) = 1;
  v5 = flt_A2FE7C;
  *((_DWORD *)this + 0x65) = 0;
  *((float *)this + 0x4F) = v5;
  v6 = *(float *)&dword_A46C30;
  *((float *)this + 0x50) = *(float *)&dword_A46C30;
  *((float *)this + 0x51) = v6;
  *((float *)this + 0x52) = 1.0;
  *((_DWORD *)this + 0x58) = dword_B25AE0;
  *((_DWORD *)this + 0x59) = dword_B25AE4;
  *((_DWORD *)this + 0x5A) = dword_B25AE8;
  *((_DWORD *)this + 0x5B) = dword_B25AEC;
  *((_DWORD *)this + 0x5C) = dword_B25AE0;
  *((_DWORD *)this + 0x5D) = dword_B25AE4;
  *((_DWORD *)this + 0x5E) = dword_B25AE8;
  *((_DWORD *)this + 0x5F) = dword_B25AEC;
  *((_BYTE *)this + 0x181) = 1;
  sub_7F3790();
  *((_DWORD *)this + 0x61) = 0;
  v7 = sub_7F3760();
  v8 = FormHeapAlloc((unsigned __int64)(unsigned int)v7 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v7);
  *((_DWORD *)this + 0x1B) = v8;
  _memset(v8, 0, 0x10 * v7);
  v9 = (float *)((char *)this + 0x94);
  v10 = 0x28;
  do
  {
    ++v9;
    --v10;
    v9[0xFFFFFFFF] = (double)rand() / dbl_A3D5A8;
  }
  while ( v10 );
  ++dword_B468E8;
  *((float *)this + 0x66) = 1.0;
  *((_DWORD *)this + 0x65) = 0;
  return this;
}
