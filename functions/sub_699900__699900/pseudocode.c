void __userpurge sub_699900(int a1@<ecx>, int a2@<ebx>, double a3@<st0>, TESObjectREFR *a4, __int128 a5, float a6)
{
  double v8; // st7
  ActorVtbl *vtbl; // eax
  float *v10; // eax
  double v11; // st7
  int Area; // eax
  int v13; // eax
  double v14; // st7
  int v15; // eax
  int *v16; // edi
  float x; // ecx
  float z; // eax
  float y; // edx
  float v20; // ecx
  float v21; // eax
  int v22; // edx
  int v23; // eax
  float *v24; // eax
  float *v25; // eax
  void (__thiscall *Unk_12)(Actor *); // edx
  char *Name; // eax
  int v28; // [esp+1Ch] [ebp-80h]
  SInt32 v29; // [esp+24h] [ebp-78h]
  float FatigueFraction; // [esp+2Ch] [ebp-70h]
  float v31; // [esp+2Ch] [ebp-70h]
  float v32; // [esp+2Ch] [ebp-70h]
  float v33[4]; // [esp+34h] [ebp-68h] BYREF
  double v34; // [esp+44h] [ebp-58h] BYREF
  float v35; // [esp+4Ch] [ebp-50h]
  _BYTE v36[12]; // [esp+50h] [ebp-4Ch] BYREF
  NiPoint3 v37; // [esp+5Ch] [ebp-40h] BYREF
  NiTransform v38; // [esp+68h] [ebp-34h] BYREF
  float v39; // [esp+A0h] [ebp+4h]
  float v40; // [esp+A0h] [ebp+4h]
  float v41; // [esp+A0h] [ebp+4h]
  float v42; // [esp+A0h] [ebp+4h]

  v8 = *(float *)(((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, _BYTE *, double@<st0>))a4->vtbl->Unk_57)( /*0x69991c*/
                    a4,
                    v36,
                    a3)
                + 8);
  vtbl = (ActorVtbl *)a4->vtbl; /*0x69991f*/
  *(double *)&v33[1] = v8; /*0x699921*/
  v39 = v8 - *(float *)(((int (__thiscall *)(TESObjectREFR *, double *))vtbl->super.super.Unk_56)(a4, &v34) + 8); /*0x699945*/
  v10 = a4->vtbl->GetPos(a4); /*0x699949*/
  v11 = v39 * dbl_A31C70; /*0x699951*/
  v37.x = *v10; /*0x699957*/
  v37.y = v10[1]; /*0x69995e*/
  v37.z = v11 + v10[2]; /*0x69996f*/
  *(float *)v36 = v37.x - *(float *)&a5; /*0x69997b*/
  *(float *)&v36[4] = v37.y - *((float *)&a5 + 1); /*0x699987*/
  *(float *)&v36[8] = v37.z - *((float *)&a5 + 2); /*0x699993*/
  v34 = *(float *)&v36[4]; /*0x69999b*/
  *(double *)&v33[1] = *(float *)v36; /*0x6999a3*/
  *(double *)v36 = *(float *)&v36[8]; /*0x6999ab*/
  FatigueFraction = Actor_GetFatigueFraction((Actor *)a4, a2, a1); /*0x6999bd*/
  v31 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *, int, _DWORD))a4->vtbl[1].Unk_37)(a4, 7, LODWORD(FatigueFraction))); /*0x6999c8*/
  v29 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4); /*0x6999db*/
  v40 = *(double *)&v33[1] * *(double *)&v33[1] + v34 * v34 + *(double *)v36 * *(double *)v36; /*0x6999ec*/
  v41 = sqrt(v40); /*0x6999f9*/
  Area = EffectItem_GetArea((_DWORD *)HIDWORD(a5)); /*0x699a0c*/
  v28 = Double_To_SInt32((double)Area * MEMORY[0xB37DB8][0]); /*0x699a31*/
  v13 = Double_To_SInt32(a6); /*0x699a32*/
  v42 = Calc_MagicExplosionSize_(v13, v28, v41, v29, 3, v31); /*0x699a3d*/
  v14 = v42; /*0x699a44*/
  if ( unk_B37E98 < (double)v42 ) /*0x699a5b*/
  {
    v42 = unk_B37E98; /*0x699a5f*/
    v14 = v42; /*0x699a63*/
  }
  if ( unk_B37E90 >= v14 ) /*0x699a78*/
  {
    if ( v14 <= 0.0 ) /*0x699ab9*/
      return; /*0x699ab9*/
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x20))(a1); /*0x699ac6*/
    if ( v15 ) /*0x699aca*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 0x190))(v15) ) /*0x699ada*/
      {
        v16 = (int *)(a1 - 0x5C); /*0x699ae4*/
        if ( v16 ) /*0x699ae7*/
        {
          x = stru_B258DC.x; /*0x699af3*/
          z = stru_B258DC.z; /*0x699af9*/
          *(float *)&v36[4] = stru_B258DC.y; /*0x699afe*/
          y = g_zeroNiPoint3.y; /*0x699b02*/
          *(float *)v36 = x; /*0x699b08*/
          v20 = g_zeroNiPoint3.x; /*0x699b0c*/
          *(float *)&v36[8] = z; /*0x699b12*/
          v21 = g_zeroNiPoint3.z; /*0x699b16*/
          *((float *)&v34 + 1) = y; /*0x699b1b*/
          v22 = *v16; /*0x699b1f*/
          *(float *)&v34 = v20; /*0x699b21*/
          v35 = v21; /*0x699b25*/
          v23 = (*(int (__thiscall **)(int *))(v22 + 0x154))(v16); /*0x699b31*/
          if ( v23 ) /*0x699b35*/
          {
            sub_718A80((float *)(v23 + 0x64), &v38); /*0x699b3f*/
            v24 = NiTransform_TransformPoint(&v38, &v33[1], (NiPoint3 *)&a5); /*0x699b52*/
            *(float *)v36 = *v24; /*0x699b59*/
            *(_QWORD *)&v36[4] = *(_QWORD *)(v24 + 1); /*0x699b60*/
            v25 = NiTransform_TransformPoint(&v38, &v33[1], &v37); /*0x699b79*/
            v34 = *(double *)v25; /*0x699b80*/
            v35 = v25[2]; /*0x699b8e*/
          }
          Unk_12 = (void (__thiscall *)(Actor *))a4->vtbl[2].super.Unk_12; /*0x699b96*/
          *((float *)&a5 + 3) = v42 + v42; /*0x699bb8*/
          ((void (__thiscall *)(TESObjectREFR *, int *, _DWORD, _DWORD, double *, _BYTE *))Unk_12)( /*0x699bca*/
            a4,
            v16,
            HIDWORD(a5),
            0.0,
            &v34,
            v36);
        }
      }
    }
  }
  else
  {
    v32 = v14; /*0x699a88*/
    (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD))a4[1].vtbl->super.super.InitializeComponent /*0x699aa9*/
     + 0xBC))(
      a4[1].vtbl,
      a4,
      a5,
      DWORD1(a5),
      DWORD2(a5),
      LODWORD(v32));
  }
  if ( v42 > 0.0 ) /*0x699bd7*/
  {
    if ( unk_B3B908 ) /*0x699bd9*/
    {
      Name = TESObjectREFR_GetName(a4); /*0x699be4*/
      Interface_ConsolePrint("An explosion of %.1f magnitude hits %.20s!", v42, Name); /*0x699bf9*/
    }
  }
}
