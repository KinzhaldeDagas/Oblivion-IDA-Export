void __userpurge sub_62B070(int a1@<ecx>, int a2@<ebp>, Actor *a3, int a4)
{
  int v5; // esi
  int (__thiscall *v6)(int); // edx
  Actor *XTarget; // edi
  _DWORD *v8; // ecx
  void *v9; // eax
  EffectSetting *FXEffect; // eax
  double projSpeed; // st7
  ActorVtbl *vtbl; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  float *v14; // eax
  float v15; // edx
  float v16; // ecx
  float v17; // eax
  ActorVtbl *v19; // edx
  int v20; // eax
  float v21; // ecx
  float v22; // edx
  float v23; // eax
  double v24; // st7
  float *v25; // ebp
  float *v26; // eax
  double v27; // st7
  ObjectType v28; // eax
  void *v29; // ebx
  _DWORD *v30; // ebp
  int v31; // eax
  int v33; // [esp+24h] [ebp-30h] BYREF
  float v34; // [esp+28h] [ebp-2Ch]
  int v35; // [esp+2Ch] [ebp-28h]
  float v36; // [esp+30h] [ebp-24h]
  float v37; // [esp+34h] [ebp-20h]
  float v38; // [esp+38h] [ebp-1Ch]
  float v39; // [esp+3Ch] [ebp-18h]
  float v40; // [esp+40h] [ebp-14h]
  float v41; // [esp+44h] [ebp-10h]
  float v42; // [esp+48h] [ebp-Ch] BYREF
  float v43; // [esp+4Ch] [ebp-8h]
  float v44; // [esp+50h] [ebp-4h]
  float v45; // [esp+58h] [ebp+4h]
  float v46; // [esp+58h] [ebp+4h]
  float v47; // [esp+58h] [ebp+4h]
  float v48; // [esp+58h] [ebp+4h]
  float v49; // [esp+58h] [ebp+4h]
  float v50; // [esp+58h] [ebp+4h]
  float v51; // [esp+58h] [ebp+4h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x184))(a1); /*0x62b082*/
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x3B8); /*0x62b086*/
  v35 = v5; /*0x62b08e*/
  XTarget = (Actor *)v6(a1); /*0x62b094*/
  if ( XTarget || (v8 = *(_DWORD **)(v5 + 0x24)) != 0 && (XTarget = (Actor *)sub_5697E0(v8)) != 0 ) /*0x62b0ae*/
  {
    if ( XTarget->vtbl->super.super.GetBaseForm((TESObjectREFR *)XTarget) == (TESForm *)MEMORY[0xB35EB0] ) /*0x62b0c6*/
      XTarget = (Actor *)ExtraDataList_GetXTarget(&XTarget->members.super.super.baseExtraList); /*0x62b0d0*/
    if ( XTarget ) /*0x62b0d4*/
    {
      v9 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x2A8))(a1); /*0x62b0e4*/
      if ( v9 && (FXEffect = MagicItem_GetFXEffect(v9, 2u)) != 0 ) /*0x62b0f5*/
        projSpeed = FXEffect->projSpeed; /*0x62b0f7*/
      else
        projSpeed = 1.0; /*0x62b0fc*/
      vtbl = XTarget->vtbl; /*0x62b0fe*/
      *(float *)&v33 = projSpeed; /*0x62b100*/
      GetPos = vtbl->super.super.GetPos; /*0x62b108*/
      *(float *)&v33 = *(float *)&v33 * flt_B37ED0[6]; /*0x62b116*/
      v14 = GetPos((TESObjectREFR *)XTarget); /*0x62b11a*/
      v15 = v14[1]; /*0x62b11c*/
      v16 = *v14; /*0x62b11f*/
      v17 = v14[2]; /*0x62b121*/
      v40 = v15; /*0x62b128*/
      v19 = a3->vtbl; /*0x62b12c*/
      v39 = v16; /*0x62b12e*/
      v41 = v17; /*0x62b132*/
      v20 = (int)v19->super.super.GetPos((TESObjectREFR *)a3); /*0x62b13e*/
      v21 = *(float *)v20; /*0x62b140*/
      v22 = *(float *)(v20 + 4); /*0x62b142*/
      v23 = *(float *)(v20 + 8); /*0x62b145*/
      v36 = v21; /*0x62b148*/
      v37 = v22; /*0x62b14e*/
      v38 = Actor_GetScaledCollisionHeight(a3) * dbl_A31C70 + v23; /*0x62b165*/
      v42 = v39 - v36; /*0x62b171*/
      v43 = v40 - v37; /*0x62b17d*/
      v44 = v41 - v38; /*0x62b189*/
      v45 = v43 * v43 + v42 * v42 + 0.0 * 0.0; /*0x62b1a3*/
      v46 = sqrt(v45); /*0x62b1b0*/
      v34 = Combat_CalculateBallisticPitch(v46, v44, *(float *)&v33, 0.0); /*0x62b1e1*/
      sub_613410(v46, v34, *(float *)&v33); /*0x62b1ff*/
      XTarget->vtbl->super.super.GetPos((TESObjectREFR *)XTarget); /*0x62b213*/
      v47 = -v34; /*0x62b21d*/
      v48 = v47 - Actor_GetAimPitch(a3); /*0x62b22a*/
      v24 = v48; /*0x62b238*/
      if ( v48 != 0.0 ) /*0x62b23d*/
      {
        if ( v24 > dbl_A491E0 ) /*0x62b24a*/
        {
          if ( v24 > dbl_A3D5B8 ) /*0x62b263*/
            v48 = v24 + dbl_A3D5B0; /*0x62b26b*/
        }
        else
        {
          v48 = dbl_A3D5B0 - v24; /*0x62b252*/
        }
      }
      v49 = Actor_GetAimPitch(a3) + v48; /*0x62b281*/
      sub_65A650((TESObjectREFR *)a3, v49); /*0x62b28c*/
      if ( !((int (__thiscall *)(LowProcess *))a3->members.super.process->GetSitSleepState)(a3->members.super.process) ) /*0x62b29c*/
      {
        v25 = a3->vtbl->super.super.GetPos((TESObjectREFR *)a3); /*0x62b2b5*/
        v26 = XTarget->vtbl->super.super.GetPos((TESObjectREFR *)XTarget); /*0x62b2bf*/
        v50 = v26[1] - v25[1]; /*0x62b2cc*/
        v34 = v26[2] - v25[2]; /*0x62b2d6*/
        v42 = *v26 - *v25; /*0x62b2df*/
        v43 = v50; /*0x62b2e7*/
        v44 = v34; /*0x62b2ef*/
        v51 = Vector3_CalculateHeadingRadiansXY(&v42); /*0x62b2f8*/
        *(float *)&v33 = 0.0; /*0x62b306*/
        sub_683D80((int)a3, v51, (float *)&v33); /*0x62b313*/
        v34 = fabs(v51); /*0x62b325*/
        v27 = v34; /*0x62b329*/
        v34 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x62b339*/
        if ( v34 >= v27 ) /*0x62b348*/
        {
          sub_5E05F0(a3, 0x30); /*0x62b36b*/
          (*(void (__thiscall **)(int, Actor *, int, int))(*(_DWORD *)a1 + 0x188))(a1, a3, 1, a2); /*0x62b37d*/
          if ( XTarget->vtbl->super.super.IsActor((TESObjectREFR *)XTarget) && XTarget != a3 ) /*0x62b391*/
            sub_5F8000(XTarget); /*0x62b395*/
          ((void (__thiscall *)(Actor *, int))a3->vtbl->super.Unk_7A)(a3, a4); /*0x62b3ac*/
          v28.form = sub_569E70(*(TargetData **)(v35 + 0x28)).form; /*0x62b3c3*/
          v29 = OblivionDynamicCast( /*0x62b3d0*/
                  v28.form,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &MagicItem `RTTI Type Descriptor',
                  0);
          v30 = (_DWORD *)((int (__thiscall *)(Actor *))a3->vtbl->super.super.Unk_48)(a3); /*0x62b3e1*/
          v31 = (int)XTarget->vtbl->super.super.GetMagicTarget((TESObjectREFR *)XTarget); /*0x62b3eb*/
          MagicCaster_CastMagicItem(v30, (int)v29, v31, 0); /*0x62b3f3*/
          sub_5F25F0((PlayerCharacter *)a3, (int)v29, (int)XTarget, SLODWORD(flt_A34A80), 0); /*0x62b406*/
        }
        else
        {
          sub_685530(a3, v51, 1); /*0x62b355*/
        }
      }
    }
  }
}
