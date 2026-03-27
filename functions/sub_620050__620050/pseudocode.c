int *__cdecl sub_620050(int *a2, int *a3, int *arg8, char a4)
{
  int v4; // ecx
  double v5; // st7
  int v6; // eax
  float *v7; // eax
  int (__thiscall *v8)(int *, _BYTE *); // edx
  double v9; // st7
  int v10; // eax
  int v11; // eax
  int (__thiscall *v12)(int *, _BYTE *); // edx
  double v13; // st7
  int v14; // eax
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int v19; // eax
  double v20; // st7
  int v21; // eax
  char v23; // [esp+10h] [ebp-88h]
  char v24; // [esp+10h] [ebp-88h]
  float v25; // [esp+1Ch] [ebp-7Ch]
  float v26; // [esp+1Ch] [ebp-7Ch]
  float DistanceBetween; // [esp+20h] [ebp-78h]
  float v28; // [esp+20h] [ebp-78h]
  double v29; // [esp+24h] [ebp-74h] BYREF
  float v30; // [esp+2Ch] [ebp-6Ch]
  double v31; // [esp+30h] [ebp-68h]
  _BYTE v32[12]; // [esp+38h] [ebp-60h] BYREF
  _BYTE v33[12]; // [esp+44h] [ebp-54h] BYREF
  _BYTE v34[12]; // [esp+50h] [ebp-48h] BYREF
  _BYTE v35[12]; // [esp+5Ch] [ebp-3Ch] BYREF
  _BYTE v36[12]; // [esp+68h] [ebp-30h] BYREF
  _BYTE v37[12]; // [esp+74h] [ebp-24h] BYREF
  _BYTE v38[12]; // [esp+80h] [ebp-18h] BYREF
  _BYTE v39[12]; // [esp+8Ch] [ebp-Ch] BYREF

  DistanceBetween = TESObjectREFR_GetDistanceBetween_(a2, (TESObjectREFR *)a2, (TESObjectREFR *)a3, 0, v23);
  v30 = sub_61DDF0((MobileObject *)a2, (int)a3, (float *)&v29, 2);
  if ( !arg8 )
    return 0;
  v4 = arg8[0x16];
  if ( !v4 )
    return 0;
  if ( arg8 == a2 )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4) )
    return 0;
  if ( a4 && !(*(unsigned __int8 (__thiscall **)(int *, int))(*arg8 + 0x334))(arg8, 1) )
    return 0;
  v25 = TESObjectREFR_GetDistanceBetween_(a2, (TESObjectREFR *)a2, (TESObjectREFR *)arg8, 0, v24);
  if ( DistanceBetween <= (double)v25 )
    return 0;
  v28 = sub_61DDF0((MobileObject *)a2, (int)arg8, (float *)&v29, 2);
  v5 = *(float *)(*(int (__thiscall **)(int *, _BYTE *))(*arg8 + 0x15C))(arg8, v32);
  v6 = *arg8;
  v29 = v5;
  v7 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(v6 + 0x158))(arg8, v33);
  v8 = *(int (__thiscall **)(int *, _BYTE *))(*arg8 + 0x15C);
  v31 = v29 - *v7;
  v9 = *(float *)(v8(arg8, v34) + 4);
  v10 = *arg8;
  v29 = v9;
  v11 = (*(int (__thiscall **)(int *, _BYTE *))(v10 + 0x158))(arg8, v35);
  v12 = *(int (__thiscall **)(int *, _BYTE *))(*arg8 + 0x15C);
  if ( v29 - *(float *)(v11 + 4) >= v31 )
  {
    v17 = *(float *)(v12(arg8, v38) + 4);
    v18 = *arg8;
    v31 = v17;
    v19 = (*(int (__thiscall **)(int *, _BYTE *))(v18 + 0x158))(arg8, v39);
    v16 = v31 - *(float *)(v19 + 4);
  }
  else
  {
    v13 = *(float *)v12(arg8, v36);
    v14 = *arg8;
    v31 = v13;
    v15 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(v14 + 0x158))(arg8, v37);
    v16 = v31 - *v15;
  }
  if ( v25 == 0.0 )
  {
    v20 = flt_A70EA8;
  }
  else
  {
    *(float *)&v29 = v16;
    *(float *)&v29 = (*(float *)&v29 + *(float *)&v29) / v25;
    *(float *)&v29 = atan(*(float *)&v29);
    v20 = *(float *)&v29;
  }
  v26 = v20;
  v30 = v30 - v28;
  v30 = fabs(v30);
  if ( v26 < (double)v30 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*arg8 + 0x334))(arg8, 1) )
  {
    v21 = (*(int (__thiscall **)(int *))(*arg8 + 0x330))(arg8);
    if ( v21 )
    {
      if ( !*(_BYTE *)(v21 + 0x15A) )
        sub_612CF0(v21);
    }
  }
  return arg8;
}
