BSShaderPPLightingProperty::TextureEffectData *__thiscall sub_4ACB20(float *this, int a2, int a3)
{
  BSShaderPPLightingProperty::TextureEffectData *v4; // eax
  BSShaderPPLightingProperty::TextureEffectData *v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // ebx
  double v9; // rt0
  int v10; // ebx
  BSShaderPPLightingProperty::TextureEffectData *result; // eax
  int v12; // [esp+14h] [ebp-30h]
  float v13; // [esp+18h] [ebp-2Ch]
  float v14; // [esp+18h] [ebp-2Ch]
  float v15; // [esp+1Ch] [ebp-28h]
  float v16; // [esp+1Ch] [ebp-28h]
  float v17; // [esp+20h] [ebp-24h]
  float v18; // [esp+20h] [ebp-24h]
  float v19; // [esp+24h] [ebp-20h]
  float v20; // [esp+28h] [ebp-1Ch]
  float v21; // [esp+28h] [ebp-1Ch]
  float v22; // [esp+2Ch] [ebp-18h]
  float v23; // [esp+2Ch] [ebp-18h]
  float v24; // [esp+30h] [ebp-14h]
  float v25; // [esp+30h] [ebp-14h]

  v4 = (BSShaderPPLightingProperty::TextureEffectData *)FormHeapAlloc(0x6Cu);
  v5 = 0;
  if ( v4 )
    v5 = BSShaderPPLightingProperty::TextureEffectData::TextureEffectData(v4);
  v6 = *((_DWORD *)v5 + 2);
  v7 = *((_DWORD *)this + 0x14);
  v8 = *((_DWORD *)this + 0xA);
  v12 = v7;
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    v7 = v12;
    *((_DWORD *)v5 + 2) = 0;
  }
  v20 = (float)(unsigned __int8)v8;
  v22 = (float)BYTE1(v8);
  v24 = (float)BYTE2(v8);
  v9 = dbl_A3DDD8;
  v13 = v20 / v9;
  *((float *)v5 + 0xB) = v13;
  v15 = v22 / v9;
  *((float *)v5 + 0xC) = v15;
  v17 = v24 / v9;
  *((float *)v5 + 0xD) = v17;
  v19 = (float)0.0 / v9;
  *((float *)v5 + 0xE) = v19;
  v21 = (float)(unsigned __int8)v7;
  v23 = (float)BYTE1(v7);
  v25 = (float)BYTE2(v7);
  v14 = v21 / v9;
  v16 = v23 / v9;
  v18 = v25 / v9;
  *((float *)v5 + 0x13) = 0.0;
  *((float *)v5 + 0x14) = 0.0;
  *((float *)v5 + 0xF) = v14;
  *((float *)v5 + 0x10) = v16;
  *((float *)v5 + 0x11) = v18;
  *((float *)v5 + 0x12) = v19;
  *((float *)v5 + 0x15) = *(this + 0x13);
  *((float *)v5 + 0x16) = *(float *)(a2 + 0x2C) + *(float *)(a2 + 0x2C);
  *((float *)v5 + 0x17) = *(this + 7);
  *((float *)v5 + 0x18) = *(this + 0x1D);
  *((float *)v5 + 0x19) = *(this + 8);
  *((float *)v5 + 0x1A) = *(this + 9);
  v10 = *((_DWORD *)v5 + 2);
  if ( v10 != a3 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *((_DWORD *)v5 + 2) = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  result = v5;
  if ( (*(_BYTE *)(this + 6) & 0x10) != 0 )
  {
    *((float *)v5 + 0xF) = *((float *)v5 + 0xF) - 1.0;
    *((float *)v5 + 0x10) = *((float *)v5 + 0x10) - 1.0;
    *((float *)v5 + 0x11) = *((float *)v5 + 0x11) - 1.0;
  }
  return result;
}
