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

  BSShaderProperty::BSShaderProperty((BSShaderProperty *)this); /*0x7f280d*/
  *(_DWORD *)this = &BoltShaderProperty::`vftable'; /*0x7f2814*/
  *((float *)this + 0x58) = 0.0; /*0x7f281a*/
  *((float *)this + 0x59) = 0.0; /*0x7f2820*/
  *((float *)this + 0x5A) = 0.0; /*0x7f2828*/
  *((float *)this + 0x5B) = 0.0; /*0x7f2832*/
  *((float *)this + 0x5C) = 0.0; /*0x7f2838*/
  *((float *)this + 0x5D) = 0.0; /*0x7f283e*/
  *((float *)this + 0x5E) = 0.0; /*0x7f2844*/
  *((float *)this + 0x5F) = 0.0; /*0x7f284a*/
  *((float *)this + 0x24) = 0.0; /*0x7f2850*/
  *((_DWORD *)this + 0x23) = 0; /*0x7f2856*/
  *((float *)this + 0x63) = 0.0; /*0x7f285c*/
  *((_DWORD *)this + 0x64) = 0; /*0x7f2862*/
  *((float *)this + 0x1F) = 0.0; /*0x7f2868*/
  *((_DWORD *)this + 0x21) = 0; /*0x7f286b*/
  *((_DWORD *)this + 0x22) = 0; /*0x7f2875*/
  v12 = *((float *)this + 0x4E); /*0x7f2885*/
  *((float *)this + 0x1C) = 0.0; /*0x7f2889*/
  *((float *)this + 0x1D) = v12; /*0x7f2890*/
  *((_BYTE *)this + 0x180) = 0; /*0x7f289b*/
  *((_BYTE *)this + 0x182) = 1; /*0x7f28a1*/
  *((_BYTE *)this + 0x183) = 1; /*0x7f28a8*/
  *((float *)this + 0x1E) = 0.0; /*0x7f28af*/
  *((_DWORD *)this + 0x20) = 4; /*0x7f28b2*/
  v2 = sub_7F3760(); /*0x7f28bc*/
  *((float *)this + 0x54) = 1.0; /*0x7f28c3*/
  *((_DWORD *)this + 0x53) = v2; /*0x7f28c9*/
  *((float *)this + 0x55) = 1.0; /*0x7f28cf*/
  v3 = dword_B2DC90; /*0x7f28d5*/
  *((float *)this + 0x57) = 1.0; /*0x7f28da*/
  v4 = flt_A2FF44; /*0x7f28e0*/
  *((_DWORD *)this + 0x56) = v3; /*0x7f28e6*/
  *((float *)this + 0x4E) = v4; /*0x7f28ec*/
  *((_DWORD *)this + 0x4D) = 1; /*0x7f28f2*/
  v5 = flt_A2FE7C; /*0x7f28fc*/
  *((_DWORD *)this + 0x65) = 0; /*0x7f2902*/
  *((float *)this + 0x4F) = v5; /*0x7f2908*/
  v6 = *(float *)&dword_A46C30; /*0x7f290e*/
  *((float *)this + 0x50) = *(float *)&dword_A46C30; /*0x7f2914*/
  *((float *)this + 0x51) = v6; /*0x7f291a*/
  *((float *)this + 0x52) = 1.0; /*0x7f2920*/
  *((_DWORD *)this + 0x58) = dword_B25AE0; /*0x7f292c*/
  *((_DWORD *)this + 0x59) = dword_B25AE4; /*0x7f2938*/
  *((_DWORD *)this + 0x5A) = dword_B25AE8; /*0x7f2943*/
  *((_DWORD *)this + 0x5B) = dword_B25AEC; /*0x7f294f*/
  *((_DWORD *)this + 0x5C) = dword_B25AE0; /*0x7f295b*/
  *((_DWORD *)this + 0x5D) = dword_B25AE4; /*0x7f2966*/
  *((_DWORD *)this + 0x5E) = dword_B25AE8; /*0x7f2972*/
  *((_DWORD *)this + 0x5F) = dword_B25AEC; /*0x7f297e*/
  *((_BYTE *)this + 0x181) = 1; /*0x7f2984*/
  sub_7F3790(); /*0x7f298b*/
  *((_DWORD *)this + 0x61) = 0; /*0x7f2990*/
  v7 = sub_7F3760(); /*0x7f29a2*/
  v8 = FormHeapAlloc((unsigned __int64)(unsigned int)v7 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v7);
  *((_DWORD *)this + 0x1B) = v8; /*0x7f29b9*/
  _memset(v8, 0, 0x10 * v7); /*0x7f29bc*/
  v9 = (float *)((char *)this + 0x94); /*0x7f29c4*/
  v10 = 0x28; /*0x7f29ca*/
  do /*0x7f29ec*/
  {
    ++v9; /*0x7f29dd*/
    --v10; /*0x7f29e0*/
    v9[0xFFFFFFFF] = (double)rand() / dbl_A3D5A8; /*0x7f29e9*/
  }
  while ( v10 ); /*0x7f29ec*/
  ++unk_B468E8; /*0x7f29f0*/
  *((float *)this + 0x66) = 1.0; /*0x7f29f7*/
  *((_DWORD *)this + 0x65) = 0; /*0x7f29fd*/
  return this; /*0x7f2a05*/
}
