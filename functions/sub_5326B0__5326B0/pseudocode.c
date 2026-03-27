bool __thiscall sub_5326B0(_DWORD *this, float *a2, float *a3, __m128 *a4)
{
  _DWORD *v4; // esi
  int v5; // ebx
  bool result; // al
  double v7; // rt0
  int v8; // edi
  int v9; // edi
  NiAVObject *v10; // eax
  PlayerCharacter *v11; // eax
  MobileObject *v12; // esi
  bhkCharacterProxy *CharProxy; // eax
  bool v14; // [esp+1Bh] [ebp-1F9h]
  float v15[4]; // [esp+24h] [ebp-1F0h] BYREF
  float v16[4]; // [esp+34h] [ebp-1E0h] BYREF
  float v17; // [esp+44h] [ebp-1D0h]
  float v18; // [esp+48h] [ebp-1CCh]
  int v19[4]; // [esp+54h] [ebp-1C0h] BYREF
  char *v20; // [esp+64h] [ebp-1B0h]
  int v21; // [esp+68h] [ebp-1ACh]
  unsigned int v22; // [esp+6Ch] [ebp-1A8h]
  char v23; // [esp+74h] [ebp-1A0h] BYREF
  unsigned int v24; // [esp+210h] [ebp-4h]

  v4 = (_DWORD *)*this;
  v5 = 0;
  result = 0;
  if ( *this )
  {
    *(float *)&v19[1] = flt_A55910;
    v19[0] = (int)&hkAllCdPointCollector::`vftable';
    v20 = &v23;
    v22 = 0x80000008;
    v21 = 0;
    v17 = flt_A5590C;
    v18 = v17;
    v24 = 0;
    v7 = hkFactor;
    v15[0] = *a2 * v7;
    v15[1] = a2[1] * v7;
    v15[2] = a2[2] * v7;
    v16[0] = *a3 * v7;
    v16[1] = a3[1] * v7;
    v16[2] = v7 * a3[2];
    v8 = v4[2];
    if ( v8 )
    {
      sub_89F570(v4);
      (*(void (__thiscall **)(int, float *, float *, int *, _DWORD))(*(_DWORD *)v8 + 0x30))(v8, v15, v16, v19, 0);
      sub_89F570(v4);
    }
    v14 = v21 > 0;
    if ( v21 > 0 )
    {
      sub_8AF890(v19);
      v9 = 0;
      while ( v5 < v21 )
      {
        if ( (*(_BYTE *)(*(_DWORD *)&v20[v9 + 0x28] + 0x1C) & 0x3F) != 0x14
          || (v10 = sub_8AFCE0(*(_DWORD *)&v20[v9 + 0x28])) == 0
          || (v11 = sub_4DC270((int)v10), (v12 = (MobileObject *)v11) == 0)
          || !v11->vtbl->super.super.super.IsMobileObject((TESObjectREFR *)v11)
          || (CharProxy = MobileObject_GetCharProxy(v12)) == 0
          || (*((_DWORD *)CharProxy + 0x7D) & 0x800) == 0 )
        {
          sub_532210(a4, (int)&v20[0x30 * v5]);
          sub_43F3E0(a3, a4);
          break;
        }
        ++v5;
        v9 += 0x30;
      }
    }
    v24 = 0xFFFFFFFF;
    hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v19);
    return v14;
  }
  return result;
}
