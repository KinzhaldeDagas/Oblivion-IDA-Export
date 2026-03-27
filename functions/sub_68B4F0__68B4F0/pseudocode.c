char __userpurge sub_68B4F0@<al>(int *a1@<ecx>, double a2@<st1>, float ***a3)
{
  float *v6; // eax
  float *v7; // eax
  double v8; // st7
  float *v9; // eax
  float *v10; // eax
  int *v11; // esi
  char *v12; // eax
  float *v13; // eax
  char *v14; // edi
  float *v15; // eax
  float *v17; // [esp-4h] [ebp-20h]
  float *v18; // [esp-4h] [ebp-20h]
  float v19; // [esp+10h] [ebp-Ch] BYREF
  float v20; // [esp+14h] [ebp-8h]
  float v21; // [esp+18h] [ebp-4h]
  float v22; // [esp+20h] [ebp+4h]

  if ( !a3 )
    return 0;
  if ( !sub_68A110(a1) )
    return 0;
  v22 = flt_B3A460;
  sub_68A160((float ***)a1);
  if ( !sub_43F840(TES, v6) )
  {
    v7 = (float *)((int (__thiscall *)(float ***))(*a3)[0x5D])(a3);
    if ( sub_43F840(TES, v7) )
      v22 = 0.0;
  }
  v8 = v22;
  sub_68A160((float ***)a1);
  v17 = v9;
  v10 = (float *)((int (__thiscall *)(float ***))(*a3)[0x5D])(a3);
  if ( sub_480520(v10, v17, v22) >= 0 )
    return 0;
  v19 = flt_A32048;
  v11 = a1 + 5;
  v20 = 0.0;
  v21 = 0.0;
  v12 = (char *)sub_42B410((BSExtraData *)(a1 + 5));
  if ( v12 )
  {
    v13 = (float *)sub_6899C0(v12);
    v19 = *v13;
    v20 = v13[1];
    v21 = v13[2];
  }
  sub_68ABA0(a1, 0.0, a2, v8, (TESObjectREFR *)a3);
  if ( v19 == dbl_A3A5B0 || !sub_68BE10(a1 + 5, (int)&v19, 5) )
  {
    v14 = (char *)sub_42B410((BSExtraData *)(a1 + 5));
    if ( v14 )
    {
      v18 = (float *)((int (__usercall *)@<eax>(float ***@<ecx>, double@<st0>, double@<st1>))(*a3)[0x5D])(a3, v8, a2);
      v15 = (float *)sub_6899C0(v14);
      if ( sub_8AA350(v15, v18) )
        sub_68BE80(v11, v14, 0);
    }
  }
  return 1;
}
