void __userpurge sub_62B070(int a1@<ecx>, int a2@<ebp>, Concurrency::details::SchedulerBase *a3, int a4)
{
  int v5; // esi
  int (__thiscall *v6)(int); // edx
  Actor *ExtraXTarget; // edi
  _DWORD *v8; // ecx
  _DWORD *v9; // eax
  int FXEffect; // eax
  double v11; // st7
  ActorVtbl *vtbl; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  float *v14; // eax
  float v15; // edx
  float v16; // ecx
  float v17; // eax
  int v19; // edx
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

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x184))(a1);
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x3B8);
  v35 = v5;
  ExtraXTarget = (Actor *)v6(a1);
  if ( ExtraXTarget || (v8 = *(_DWORD **)(v5 + 0x24)) != 0 && (ExtraXTarget = (Actor *)sub_5697E0(v8)) != 0 )
  {
    if ( ExtraXTarget->vtbl->super.super.GetBaseForm((TESObjectREFR *)ExtraXTarget) == (TESForm *)TESDataHandler_g_XMarkerHeading )
      ExtraXTarget = (Actor *)ExtraDataList::GetExtraXTarget(&ExtraXTarget->members.super.super.baseExtraList);
    if ( ExtraXTarget )
    {
      v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x2A8))(a1);
      if ( v9 && (FXEffect = MagicItem_GetFXEffect(v9, 2)) != 0 )
        v11 = *(float *)(FXEffect + 0x74);
      else
        v11 = 1.0;
      vtbl = ExtraXTarget->vtbl;
      *(float *)&v33 = v11;
      GetPos = vtbl->super.super.GetPos;
      *(float *)&v33 = *(float *)&v33 * flt_B37EE8;
      v14 = GetPos((TESObjectREFR *)ExtraXTarget);
      v15 = v14[1];
      v16 = *v14;
      v17 = v14[2];
      v40 = v15;
      v19 = *(_DWORD *)a3;
      v39 = v16;
      v41 = v17;
      v20 = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(v19 + 0x174))(a3);
      v21 = *(float *)v20;
      v22 = *(float *)(v20 + 4);
      v23 = *(float *)(v20 + 8);
      v36 = v21;
      v37 = v22;
      v38 = sub_5E0660(a3) * dbl_A31C70 + v23;
      v42 = v39 - v36;
      v43 = v40 - v37;
      v44 = v41 - v38;
      v45 = v43 * v43 + v42 * v42 + 0.0 * 0.0;
      v46 = sqrt(v45);
      v34 = sub_6132D0(v46, v44, *(float *)&v33, 0.0);
      sub_613410(v46, v34, *(float *)&v33);
      ExtraXTarget->vtbl->super.super.GetPos((TESObjectREFR *)ExtraXTarget);
      v47 = -v34;
      v48 = v47 - sub_4A9720((Actor *)a3);
      v24 = v48;
      if ( v48 != 0.0 )
      {
        if ( v24 > dbl_A491E0 )
        {
          if ( v24 > dbl_A3D5B8 )
            v48 = v24 + dbl_A3D5B0;
        }
        else
        {
          v48 = dbl_A3D5B0 - v24;
        }
      }
      v49 = sub_4A9720((Actor *)a3) + v48;
      sub_65A650((TESObjectREFR *)a3, v49);
      if ( !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)a3 + 0x16) + 0x36C))(*((_DWORD *)a3 + 0x16)) )
      {
        v25 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a3 + 0x174))(a3);
        v26 = ExtraXTarget->vtbl->super.super.GetPos((TESObjectREFR *)ExtraXTarget);
        v50 = v26[1] - v25[1];
        v34 = v26[2] - v25[2];
        v42 = *v26 - *v25;
        v43 = v50;
        v44 = v34;
        v51 = sub_683CB0(&v42);
        *(float *)&v33 = 0.0;
        sub_683D80((int)a3, v51, (int)&v33);
        v34 = fabs(v51);
        v27 = v34;
        v34 = (double)iActorKeepTurnDegree * dbl_A31C78;
        if ( v34 >= v27 )
        {
          sub_5E05F0((Actor *)a3, 0x30);
          (*(void (__thiscall **)(int, Concurrency::details::SchedulerBase *, int, int))(*(_DWORD *)a1 + 0x188))(
            a1,
            a3,
            1,
            a2);
          if ( ExtraXTarget->vtbl->super.super.IsActor((TESObjectREFR *)ExtraXTarget) && ExtraXTarget != (Actor *)a3 )
            sub_5F8000(ExtraXTarget);
          (*(void (__thiscall **)(Concurrency::details::SchedulerBase *, int))(*(_DWORD *)a3 + 0x1E8))(a3, a4);
          v28.form = sub_569E70(*(TargetData **)(v35 + 0x28)).form;
          v29 = OblivionDynamicCast(
                  v28.form,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &MagicItem `RTTI Type Descriptor',
                  0);
          v30 = (_DWORD *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a3 + 0x120))(a3);
          v31 = (int)ExtraXTarget->vtbl->super.super.GetMagicTarget((TESObjectREFR *)ExtraXTarget);
          MagicCaster_CastMagicItem(v30, (int)v29, v31, 0);
          sub_5F25F0((PlayerCharacter *)a3, (int)v29, (int)ExtraXTarget, flt_A34A80, 0.0);
        }
        else
        {
          sub_685530((Actor *)a3, v51, 1);
        }
      }
    }
  }
}
