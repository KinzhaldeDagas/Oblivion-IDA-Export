int __thiscall sub_539E00(float *this, float a2, float a3, int a4, NiAVObject *a5)
{
  double v6; // st7
  bhkRefObject *v7; // eax
  bhkRefObject *v8; // edi
  float v9; // eax
  double v10; // st7
  int hkObject; // edi
  bhkRefObject *v12; // eax
  bhkRefObject *v13; // eax
  NiAVObject *v14; // eax
  NiAVObject *v15; // esi
  NiTimeController *v16; // eax
  NiTimeController *v17; // eax
  NiTimeControllerVtbl *vtbl; // edx
  int result; // eax
  int v20; // ecx
  float v21; // [esp+0h] [ebp-1DCh]
  int v22; // [esp+24h] [ebp-1B8h]
  int v23[3]; // [esp+34h] [ebp-1A8h] BYREF
  int v24[3]; // [esp+40h] [ebp-19Ch] BYREF
  int v25[4]; // [esp+4Ch] [ebp-190h] BYREF
  __int128 v26; // [esp+5Ch] [ebp-180h]
  __int128 v27; // [esp+6Ch] [ebp-170h]
  __int128 v28; // [esp+7Ch] [ebp-160h]
  __int128 v29; // [esp+8Ch] [ebp-150h]
  __int128 v30; // [esp+9Ch] [ebp-140h]
  __int128 v31; // [esp+ACh] [ebp-130h]
  __int128 v32; // [esp+BCh] [ebp-120h]
  __int128 v33; // [esp+CCh] [ebp-110h]
  float v34[5]; // [esp+DCh] [ebp-100h] BYREF
  int v35; // [esp+F0h] [ebp-ECh]
  int v36; // [esp+FCh] [ebp-E0h]
  float v37; // [esp+100h] [ebp-DCh]
  __int128 v38; // [esp+14Ch] [ebp-90h]
  __int128 v39; // [esp+15Ch] [ebp-80h]
  __int128 v40; // [esp+16Ch] [ebp-70h]
  __int128 v41; // [esp+17Ch] [ebp-60h]
  float v42; // [esp+18Ch] [ebp-50h]
  float v43; // [esp+194h] [ebp-48h]
  char v44; // [esp+1ACh] [ebp-30h]
  int v45; // [esp+1D8h] [ebp-4h]

  *(this + 5) = 1.0;
  v6 = flt_A56670;
  *((_WORD *)this + 6) |= 0x41u;
  if ( v6 < a2 )
    a2 = v6;
  *(float *)v24 = 0.0;
  *(float *)&v22 = a2 - a3;
  v24[1] = v22;
  *(float *)&v24[2] = 0.0;
  *(float *)v23 = 0.0;
  *(float *)&v23[1] = a3;
  *(float *)&v23[2] = 0.0;
  v7 = (bhkRefObject *)FormHeapAlloc(0x14u);
  v45 = 0;
  if ( v7 )
    v8 = sub_8B6A40(v7, (int)v24, (int)v23, a3);
  else
    v8 = 0;
  v45 = 0xFFFFFFFF;
  sub_8A5790(v34);
  v45 = 1;
  v34[0] = 0.0;
  v36 = 0;
  if ( v8 )
    v9 = *(float *)&v8->hkObject;
  else
    v9 = 0.0;
  v10 = fConstant_2;
  v42 = v10;
  v43 = v10;
  v30 = 0;
  v31 = 0;
  *(float *)v25 = 0.0;
  v32 = 0;
  *(float *)&v25[1] = 0.0;
  v34[1] = v9;
  v37 = v9;
  *(float *)&v30 = 1.0;
  v26 = 0;
  *((float *)&v31 + 1) = 1.0;
  v27 = 0;
  *((float *)&v32 + 2) = 1.0;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  if ( v8 )
    hkObject = (int)v8->hkObject;
  else
    hkObject = 0;
  v21 = v10;
  sub_8B6550(hkObject, hkObject, v21, (int)v25);
  v41 = v26;
  v38 = v27;
  v39 = v28;
  v40 = v29;
  v44 = 6;
  v12 = (bhkRefObject *)FormHeapAlloc(0x1Cu);
  LOBYTE(v45) = 2;
  if ( v12 )
    v13 = sub_533290(v12, (int)v34);
  else
    v13 = 0;
  LOBYTE(v45) = 1;
  sub_897670(this, (int)v13);
  sub_539B80((Atmosphere *)this, a5);
  v14 = sub_452A60((Atmosphere *)this);
  v15 = v14;
  if ( v14 )
  {
    v16 = (NiTimeController *)sub_700010(v14, (int)dword_BA7F3C);
    if ( !v16 )
    {
      v17 = (NiTimeController *)FormHeapAlloc(0x64u);
      LOBYTE(v45) = 3;
      if ( v17 )
        v16 = sub_8AA810(v17);
      else
        v16 = 0;
      LOBYTE(v45) = 1;
    }
    vtbl = v16->vtbl;
    v16->members.flags |= 8u;
    vtbl->SetTarget(v16, (NiObjectNET *)v15);
  }
  result = v35;
  v45 = 0xFFFFFFFF;
  if ( v35 >= 0 )
  {
    v20 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v20 )
      v20 = dword_BA7D9C;
    return sub_8A75D0(v20, (_DWORD *)LODWORD(v34[3]), 8 * v35, 0x14);
  }
  return result;
}
