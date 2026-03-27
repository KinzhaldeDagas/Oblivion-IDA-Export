void __userpurge sub_699900(int a1@<ecx>, int a2@<ebx>, double a3@<st0>, Actor *a4, __int128 a5, float a6)
{
  double v10; // st7
  ActorVtbl *vtbl; // eax
  float *v12; // eax
  double v13; // st7
  int Area; // eax
  int v15; // eax
  double v16; // st7
  int v17; // eax
  int *v18; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  float v22; // ecx
  float v23; // eax
  int v24; // edx
  int v25; // eax
  float *v26; // eax
  float *v27; // eax
  void (__thiscall *Unk_E6)(Actor *); // edx
  char *Name; // eax
  int v30; // [esp+1Ch] [ebp-80h]
  int v31; // [esp+24h] [ebp-78h]
  float FatigueFraction; // [esp+2Ch] [ebp-70h]
  float v33; // [esp+2Ch] [ebp-70h]
  float v34; // [esp+2Ch] [ebp-70h]
  float v35[4]; // [esp+34h] [ebp-68h] BYREF
  double v36; // [esp+44h] [ebp-58h] BYREF
  float v37; // [esp+4Ch] [ebp-50h]
  _BYTE v38[12]; // [esp+50h] [ebp-4Ch] BYREF
  NiPoint3 v39; // [esp+5Ch] [ebp-40h] BYREF
  NiTransform v40; // [esp+68h] [ebp-34h] BYREF
  float v41; // [esp+A0h] [ebp+4h]
  float v42; // [esp+A0h] [ebp+4h]
  float v43; // [esp+A0h] [ebp+4h]
  float v44; // [esp+A0h] [ebp+4h]

  v10 = *(float *)(((int (__usercall *)@<eax>(Actor *@<ecx>, _BYTE *, double@<st0>))a4->vtbl->super.super.Unk_57)(
                     a4,
                     v38,
                     a3)
                 + 8);
  vtbl = a4->vtbl;
  *(double *)&v35[1] = v10;
  v41 = v10 - *(float *)(((int (__thiscall *)(Actor *, double *))vtbl->super.super.Unk_56)(a4, &v36) + 8);
  v12 = a4->vtbl->super.super.GetPos((TESObjectREFR *)a4);
  v13 = v41 * dbl_A31C70;
  v39.x = *v12;
  v39.y = v12[1];
  v39.z = v13 + v12[2];
  *(float *)v38 = v39.x - *(float *)&a5;
  *(float *)&v38[4] = v39.y - *((float *)&a5 + 1);
  *(float *)&v38[8] = v39.z - *((float *)&a5 + 2);
  v36 = *(float *)&v38[4];
  *(double *)&v35[1] = *(float *)v38;
  *(double *)v38 = *(float *)&v38[8];
  FatigueFraction = Actor_GetFatigueFraction(a4, a2, a1);
  v33 = COERCE_FLOAT(((int (__thiscall *)(Actor *, int, _DWORD))a4->vtbl->GetActorValue)(a4, 7, LODWORD(FatigueFraction)));
  v31 = ((int (__thiscall *)(Actor *))a4->vtbl->GetActorValue)(a4);
  v42 = *(double *)&v35[1] * *(double *)&v35[1] + v36 * v36 + *(double *)v38 * *(double *)v38;
  v43 = sqrt(v42);
  Area = EffectItem_GetArea((_DWORD *)HIDWORD(a5));
  v30 = Double_To_SInt32((double)Area * fMagicUnitsPerFoot);
  v15 = Double_To_SInt32(a6);
  v44 = Calc_MagicExplosionSize_(v15, v30, v43, v31, 3, v33);
  v16 = v44;
  if ( flt_B37E98 < (double)v44 )
  {
    v44 = flt_B37E98;
    v16 = v44;
  }
  if ( flt_B37E90 >= v16 )
  {
    if ( v16 <= 0.0 )
      return;
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x20))(a1);
    if ( v17 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x190))(v17) )
      {
        v18 = (int *)(a1 - 0x5C);
        if ( v18 )
        {
          v19 = dword_B258DC;
          v20 = HIDWORD(qword_B258E0);
          *(_DWORD *)&v38[4] = qword_B258E0;
          v21 = *((_DWORD *)&Vector3_InitValue_ + 1);
          *(_DWORD *)v38 = v19;
          v22 = Vector3_InitValue_;
          *(_DWORD *)&v38[8] = v20;
          v23 = dword_B3F9B0;
          HIDWORD(v36) = v21;
          v24 = *v18;
          *(float *)&v36 = v22;
          v37 = v23;
          v25 = (*(int (__thiscall **)(int *))(v24 + 0x154))(v18);
          if ( v25 )
          {
            sub_718A80((float *)(v25 + 0x64), (float *)&v40);
            v26 = sub_53D4B0(&v40, &v35[1], (NiPoint3 *)&a5);
            *(float *)v38 = *v26;
            *(_QWORD *)&v38[4] = *(_QWORD *)(v26 + 1);
            v27 = sub_53D4B0(&v40, &v35[1], &v39);
            v36 = *(double *)v27;
            v37 = v27[2];
          }
          Unk_E6 = a4->vtbl->Unk_E6;
          *((float *)&a5 + 3) = v44 + v44;
          ((void (__thiscall *)(Actor *, int *, _DWORD, _DWORD, double *, _BYTE *))Unk_E6)(
            a4,
            v18,
            HIDWORD(a5),
            0.0,
            &v36,
            v38);
        }
      }
    }
  }
  else
  {
    v34 = v16;
    ((void (__thiscall *)(LowProcess *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD))a4->members.super.process->KnockbackActor)(
      a4->members.super.process,
      a4,
      a5,
      DWORD1(a5),
      DWORD2(a5),
      LODWORD(v34));
  }
  if ( v44 > 0.0 )
  {
    if ( byte_B3B908 )
    {
      Name = TESObjectREFR_GetName((TESObjectREFR *)a4);
      Interface_ConsolePrint("An explosion of %.1f magnitude hits %.20s!", v44, Name);
    }
  }
}
