double __cdecl sub_61DDF0(MobileObject *a1, int a2, float *a3, int a4)
{
  char v5; // bl
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  _DWORD **v9; // eax
  int FXEffect; // eax
  double v11; // st7
  void *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  double v16; // st7
  void *v17; // eax
  float *v18; // eax
  double v19; // st7
  double result; // st7
  float *v21; // edi
  float *v22; // eax
  double v23; // st6
  float v24; // [esp+20h] [ebp-14h]
  float v25; // [esp+20h] [ebp-14h]
  float v26; // [esp+20h] [ebp-14h]
  int v27[2]; // [esp+28h] [ebp-Ch] BYREF
  float v28; // [esp+30h] [ebp-4h]
  int v29; // [esp+38h] [ebp+4h]
  float v30; // [esp+38h] [ebp+4h]
  float v31; // [esp+38h] [ebp+4h]
  float v32; // [esp+38h] [ebp+4h]
  float v33; // [esp+38h] [ebp+4h]
  float v34; // [esp+38h] [ebp+4h]
  float v35; // [esp+38h] [ebp+4h]
  int v36; // [esp+38h] [ebp+4h]
  int v39; // [esp+40h] [ebp+Ch]
  float v40; // [esp+40h] [ebp+Ch]

  *a3 = 0.0;
  if ( !a1 || !a2 || !((int (__thiscall *)(MobileObject *))a1->vtbl[1].super.SetTemplateForm)(a1) )
    return 0.0;
  v5 = 0;
  v6 = (int)a1->process->GetEquippedAmmoData(a1->process, 1);
  if ( a1->process->Unk_4E(a1->process) )
    v7 = (int)a1->process->GetEquippedWeaponData(a1->process, 1);
  else
    v7 = 0;
  ((void (__thiscall *)(MobileObject *))a1->vtbl[1].super.SetTemplateForm)(a1);
  v8 = *(_DWORD *)(((int (__thiscall *)(MobileObject *))a1->vtbl[1].super.SetTemplateForm)(a1) + 0x70);
  if ( v8 == 2 || v8 == 4 )
  {
    v24 = 0.0;
    *(float *)&v29 = 0.0;
    if ( *(_DWORD *)(((int (__thiscall *)(MobileObject *))a1->vtbl[1].super.SetTemplateForm)(a1) + 0x70) == 4 )
    {
      v9 = *(_DWORD ***)(((int (__thiscall *)(MobileObject *))a1->vtbl[1].super.SetTemplateForm)(a1) + 0x80);
      if ( v9 && (FXEffect = MagicItem_GetFXEffect(*v9, 2)) != 0 )
        v11 = *(float *)(FXEffect + 0x74);
      else
        v11 = 1.0;
      v30 = v11;
      v5 = 1;
      v24 = v30 * *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B37EE8);
      *(float *)&v29 = 0.0;
    }
    if ( v7 )
    {
      v12 = *(void **)(v7 + 8);
      if ( v12 )
      {
        v13 = OblivionDynamicCast(
                v12,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESEnchantableForm `RTTI Type Descriptor',
                0);
        if ( v13 )
          v14 = v13[1];
        else
          v14 = 0;
        if ( v14 && (v15 = MagicItem_GetFXEffect((_DWORD *)(v14 + 0x18), 2)) != 0 )
          v16 = *(float *)(v15 + 0x74);
        else
          v16 = 1.0;
        v31 = v16;
        v25 = v31 * *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B37EE8);
        sub_6199F0((int)v27, (int)a1, a2, v25, 0.0, a4);
        goto LABEL_33;
      }
    }
    if ( v6 )
    {
      v17 = *(void **)(v6 + 8);
      if ( v17 )
      {
        v18 = (float *)OblivionDynamicCast(
                         v17,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &TESAmmo `RTTI Type Descriptor',
                         0);
        if ( v18 )
          v19 = v18[0x1F];
        else
          v19 = 1.0;
        v32 = v19;
        v26 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B37040) * v32;
        v33 = sub_608280(a1);
        sub_6199F0((int)v27, (int)a1, a2, v26, v33, a4);
        goto LABEL_33;
      }
    }
    if ( v5 )
    {
      sub_6199F0((int)v27, (int)a1, a2, v24, *(float *)&v29, a4);
LABEL_33:
      v34 = v28;
      *a3 = *(float *)v27;
      return v34;
    }
  }
  v21 = a1->vtbl->super.GetPos(a1);
  v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2);
  *(float *)&v39 = v22[1] - v21[1];
  v35 = v22[2] - v21[2];
  *(float *)v27 = *v22 - *v21;
  v27[1] = v39;
  v28 = v35;
  sub_43F350((float *)v27);
  v40 = sub_683CB0((float *)v27);
  *(float *)&v36 = v40 - ((double (__thiscall *)(MobileObject *))a1->vtbl->GetZRotation)(a1);
  v23 = *(float *)&v36;
  if ( *(float *)&v36 == 0.0 )
    return *(float *)&v36;
  result = *(float *)&v36;
  if ( v23 >= 0.0 )
  {
    if ( v23 > dbl_A3D5B8 )
      return (float)(dbl_A3D5B0 - v23);
  }
  else if ( v23 <= dbl_A491E0 )
  {
    return (float)(v23 + dbl_A3D5B0);
  }
  return result;
}
