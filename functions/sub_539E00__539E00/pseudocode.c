int __thiscall sub_539E00(float *this, float a2, float a3, int a4, NiAVObject *a5)
{
  double v6; // st7
  bhkRefObject *v7; // eax
  bhkRefObject *v8; // edi
  float v9; // eax
  double v10; // st7
  float *hkObject; // edi
  bhkRefObject *v12; // eax
  bhkRefObject *v13; // eax
  NiAVObject *PointerAtOffset08; // eax
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

  *(this + 5) = 1.0; /*0x539e46*/
  v6 = flt_A56670; /*0x539e49*/
  *((_WORD *)this + 6) |= 0x41u; /*0x539e4f*/
  if ( v6 < a2 ) /*0x539e60*/
    a2 = v6; /*0x539e62*/
  *(float *)v24 = 0.0; /*0x539e7b*/
  *(float *)&v22 = a2 - a3; /*0x539e85*/
  v24[1] = v22; /*0x539e8f*/
  *(float *)&v24[2] = 0.0; /*0x539ea7*/
  *(float *)v23 = 0.0; /*0x539eb7*/
  *(float *)&v23[1] = a3; /*0x539ebb*/
  *(float *)&v23[2] = 0.0; /*0x539ebf*/
  v7 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x539ec3*/
  v45 = 0; /*0x539ed1*/
  if ( v7 ) /*0x539edc*/
    v8 = sub_8B6A40(v7, (float *)v24, (float *)v23, a3); /*0x539ef6*/
  else
    v8 = 0; /*0x539efa*/
  v45 = 0xFFFFFFFF; /*0x539f03*/
  sub_8A5790(v34); /*0x539f0e*/
  v45 = 1; /*0x539f15*/
  v34[0] = 0.0; /*0x539f20*/
  v36 = 0; /*0x539f2b*/
  if ( v8 ) /*0x539f36*/
    v9 = *(float *)&v8->hkObject; /*0x539f38*/
  else
    v9 = 0.0; /*0x539f3d*/
  v10 = fConstant_2; /*0x539f41*/
  v42 = v10; /*0x539f47*/
  v43 = v10; /*0x539f51*/
  v30 = 0; /*0x539f58*/
  v31 = 0; /*0x539f62*/
  *(float *)v25 = 0.0; /*0x539f6a*/
  v32 = 0; /*0x539f6e*/
  *(float *)&v25[1] = 0.0; /*0x539f76*/
  v34[1] = v9; /*0x539f7a*/
  v37 = v9; /*0x539f83*/
  *(float *)&v30 = 1.0; /*0x539f8a*/
  v26 = 0; /*0x539f91*/
  *((float *)&v31 + 1) = 1.0; /*0x539f96*/
  v27 = 0; /*0x539f9d*/
  *((float *)&v32 + 2) = 1.0; /*0x539fa2*/
  v28 = 0; /*0x539fa9*/
  v29 = 0; /*0x539fae*/
  v33 = 0; /*0x539fb6*/
  if ( v8 ) /*0x539fbe*/
    hkObject = (float *)v8->hkObject; /*0x539fc0*/
  else
    hkObject = 0; /*0x539fc5*/
  v21 = v10; /*0x539fcd*/
  sub_8B6550((int)hkObject, hkObject, v21, (int)v25); /*0x539fd1*/
  v41 = v26; /*0x539fdb*/
  v38 = v27; /*0x539fe8*/
  v39 = v28; /*0x539ff8*/
  v40 = v29; /*0x53a00a*/
  v44 = 6; /*0x53a012*/
  v12 = (bhkRefObject *)FormHeapAlloc(0x1Cu); /*0x53a01a*/
  LOBYTE(v45) = 2; /*0x53a028*/
  if ( v12 ) /*0x53a030*/
    v13 = sub_533290(v12, (int)v34); /*0x53a03c*/
  else
    v13 = 0; /*0x53a043*/
  LOBYTE(v45) = 1; /*0x53a048*/
  sub_897670((Ni2DBuffer **)this, (Ni2DBuffer *)v13); /*0x53a050*/
  sub_539B80((Atmosphere *)this, a5); /*0x53a05c*/
  PointerAtOffset08 = Shared_GetPointerAtOffset08((Atmosphere *)this); /*0x53a063*/
  v15 = PointerAtOffset08; /*0x53a068*/
  if ( PointerAtOffset08 ) /*0x53a06c*/
  {
    v16 = (NiTimeController *)sub_700010(PointerAtOffset08, (int)&MEMORY[0xBA7F3C]); /*0x53a075*/
    if ( !v16 ) /*0x53a07c*/
    {
      v17 = (NiTimeController *)FormHeapAlloc(0x64u); /*0x53a080*/
      LOBYTE(v45) = 3; /*0x53a08e*/
      if ( v17 ) /*0x53a096*/
        v16 = sub_8AA810(v17); /*0x53a09a*/
      else
        v16 = 0; /*0x53a0a1*/
      LOBYTE(v45) = 1; /*0x53a0a3*/
    }
    vtbl = v16->vtbl; /*0x53a0ab*/
    v16->members.flags |= 8u; /*0x53a0ad*/
    vtbl->SetTarget(v16, (NiObjectNET *)v15); /*0x53a0b8*/
  }
  result = v35; /*0x53a0ba*/
  v45 = 0xFFFFFFFF; /*0x53a0c3*/
  if ( v35 >= 0 ) /*0x53a0ce*/
  {
    v20 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x53a0e0*/
    if ( !v20 ) /*0x53a0e8*/
      v20 = unk_BA7D9C; /*0x53a0ea*/
    return sub_8A75D0(v20, (_DWORD *)LODWORD(v34[3]), 8 * v35, 0x14); /*0x53a106*/
  }
  return result; /*0x53a10b*/
}
