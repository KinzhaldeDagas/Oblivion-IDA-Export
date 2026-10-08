int __usercall sub_5EE1B0@<eax>(Actor *a1@<ecx>, double a2@<st0>)
{
  ActorVtbl *vtbl; // ebx
  ExtraRefractionProperty *RefractionProperty; // eax
  bool v6; // c0
  double v7; // st7
  double v8; // st7
  bool v9; // c0
  bool v10; // c3
  double v11; // st6
  double v12; // st7
  char v13; // bl
  float *process; // ecx
  float v15; // [esp+24h] [ebp-10h]
  float v16; // [esp+24h] [ebp-10h]
  float v17; // [esp+28h] [ebp-Ch]
  float v18; // [esp+2Ch] [ebp-8h]
  float v19; // [esp+30h] [ebp-4h]

  if ( OB_RendererGlobalState_010201A0[0xA5] /*0x5ee1dc*/
    && OB_ShaderPassControl_010201A0[0]
    && *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2
    && a1 != (Actor *)0xFFFFFFBC
    && ExtraDataList_GetRefractionPropertyExtra(&a1->members.super.super.baseExtraList) )
  {
    vtbl = a1->vtbl; /*0x5ee1e5*/
    RefractionProperty = ExtraDataList_GetRefractionPropertyExtra(&a1->members.super.super.baseExtraList); /*0x5ee1e9*/
    return ((int (__usercall *)@<eax>(Actor *@<ecx>, int, _DWORD, double@<st0>))vtbl->SetTransparency)( /*0x5ee1ff*/
             a1,
             1,
             RefractionProperty->refractionAmount,
             a2);
  }
  else
  {
    a1->vtbl->GetAV_F(a1, kActorVal_Chameleon); /*0x5ee214*/
    if ( 1.0 - a2 / fCostant_100 < dbl_A2FC68 /*0x5ee250*/
      || (v6 = 1.0 - ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 0x2E) / fCostant_100 > 1.0,
          v7 = 1.0,
          !v6) )
    {
      v8 = 1.0 - ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 0x2E) / fCostant_100; /*0x5ee26a*/
      v9 = v8 > 0.0; /*0x5ee26e*/
      v10 = 0.0 == v8; /*0x5ee26e*/
      v7 = 0.0; /*0x5ee272*/
      if ( v9 || v10 ) /*0x5ee274*/
        v7 = 1.0 - ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 0x2E) / fCostant_100; /*0x5ee291*/
    }
    v19 = v7; /*0x5ee295*/
    v11 = 1.0; /*0x5ee2b8*/
    if ( (double)a1->vtbl->GetActorValue(a1, kActorVal_Invisibility) <= 0.0 ) /*0x5ee2ba*/
    {
      v12 = 1.0; /*0x5ee2c6*/
      v13 = 0; /*0x5ee2c8*/
    }
    else
    {
      v11 = 0.0; /*0x5ee2bc*/
      v12 = 1.0; /*0x5ee2bc*/
      v13 = 1; /*0x5ee2be*/
    }
    v15 = v11; /*0x5ee2c0*/
    v17 = v12; /*0x5ee2d2*/
    v18 = v12; /*0x5ee2d6*/
    if ( a1->members.super.process ) /*0x5ee2ce*/
    {
      if ( !a1->members.super.process->GetProcessLevel(a1->members.super.process) ) /*0x5ee2e4*/
      {
        v18 = ((double (__thiscall *)(LowProcess *))a1->members.super.process->Unk_10B)(a1->members.super.process); /*0x5ee2f7*/
        process = (float *)a1->members.super.process; /*0x5ee2fb*/
        v17 = process[0xB0]; /*0x5ee30c*/
        if ( (*(int (**)(void))(*(_DWORD *)process + 0x47C))() == 2 ) /*0x5ee315*/
          v15 = 1.0; /*0x5ee319*/
      }
    }
    v16 = v15 * v19 * v17 * v18; /*0x5ee333*/
    if ( a1 == (Actor *)reference ) /*0x5ee337*/
    {
      if ( v13 ) /*0x5ee33b*/
      {
        if ( flt_B37ED0[0x4C] > (double)v16 ) /*0x5ee350*/
          v16 = flt_B37ED0[0x4C]; /*0x5ee352*/
      }
      v16 = flt_B14E50 * v16; /*0x5ee364*/
    }
    if ( a1 == (Actor *)unk_B3BB00 ) /*0x5ee36e*/
      v16 = flt_B14E54; /*0x5ee376*/
    return ((int (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_C9)(a1, LODWORD(v16)); /*0x5ee38c*/
  }
}
