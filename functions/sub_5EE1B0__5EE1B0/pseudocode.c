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

  if ( ImageSpaceEffectEnabled
    && enableRefraction
    && ShaderPackage >= 2
    && a1 != (Actor *)0xFFFFFFBC
    && ExtraDataList::GetRefractionProperty(&a1->members.super.super.baseExtraList) )
  {
    vtbl = a1->vtbl;
    RefractionProperty = ExtraDataList::GetRefractionProperty(&a1->members.super.super.baseExtraList);
    return ((int (__usercall *)@<eax>(Actor *@<ecx>, int, _DWORD, double@<st0>))vtbl->SetTransparency)(
             a1,
             1,
             RefractionProperty->refractionAmount,
             a2);
  }
  else
  {
    a1->vtbl->GetAV_F(a1, kActorVal_Chameleon);
    if ( 1.0 - a2 / fCostant_100 < dbl_A2FC68
      || (v6 = 1.0 - ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 0x2E) / fCostant_100 > 1.0,
          v7 = 1.0,
          !v6) )
    {
      v8 = 1.0 - ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 0x2E) / fCostant_100;
      v9 = v8 > 0.0;
      v10 = 0.0 == v8;
      v7 = 0.0;
      if ( v9 || v10 )
        v7 = 1.0 - ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 0x2E) / fCostant_100;
    }
    v19 = v7;
    v11 = 1.0;
    if ( (double)a1->vtbl->GetActorValue(a1, kActorVal_Invisibility) <= 0.0 )
    {
      v12 = 1.0;
      v13 = 0;
    }
    else
    {
      v11 = 0.0;
      v12 = 1.0;
      v13 = 1;
    }
    v15 = v11;
    v17 = v12;
    v18 = v12;
    if ( a1->members.super.process )
    {
      if ( !a1->members.super.process->GetProcessLevel(a1->members.super.process) )
      {
        v18 = ((double (__thiscall *)(LowProcess *))a1->members.super.process->Unk_10B)(a1->members.super.process);
        process = (float *)a1->members.super.process;
        v17 = process[0xB0];
        if ( (*(int (**)(void))(*(_DWORD *)process + 0x47C))() == 2 )
          v15 = 1.0;
      }
    }
    v16 = v15 * v19 * v17 * v18;
    if ( a1 == (Actor *)TESDataHandler_g_PlayerRef )
    {
      if ( v13 )
      {
        if ( fMagicPlayerMinimumInvisibility > (double)v16 )
          v16 = fMagicPlayerMinimumInvisibility;
      }
      v16 = flt_B14E50 * v16;
    }
    if ( a1 == (Actor *)dword_B3BB00 )
      v16 = flt_B14E54;
    return ((int (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_C9)(a1, LODWORD(v16));
  }
}
