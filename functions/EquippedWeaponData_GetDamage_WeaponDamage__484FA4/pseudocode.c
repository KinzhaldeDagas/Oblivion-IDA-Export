void __usercall EquippedWeaponData_GetDamage_::WeaponDamage(
        int a1@<ebx>,
        int a2@<ebp>,
        Actor *a3@<esi>,
        double a4@<st0>,
        int a5,
        int a6,
        float a7,
        double a8,
        float a9,
        float a10,
        int a11,
        float a12,
        float a13,
        float a14)
{
  int v15; // edi
  float (__thiscall *GetAV_F)(Actor *, AVCode); // edx
  ActorVtbl *vtbl; // ebp
  int WeaponSkillAV; // eax
  int v19; // ebp
  double v20; // st7
  int v21; // eax
  int v22; // [esp+4h] [ebp-20h]
  int v23; // [esp+8h] [ebp-1Ch]
  int HealthForForm; // [esp+30h] [ebp+Ch]
  float v26; // [esp+30h] [ebp+Ch]
  float FatigueFraction; // [esp+34h] [ebp+10h]
  float v28; // [esp+38h] [ebp+14h]
  float v29; // [esp+3Ch] [ebp+18h]
  double Health; // [esp+40h] [ebp+1Ch]

  a3->vtbl->GetAV_F(a3, kActorVal_Luck);
  v28 = a4;
  FatigueFraction = Actor_GetFatigueFraction(a3);
  v15 = *(_DWORD *)(a1 + 8);
  GetAV_F = a3->vtbl->GetAV_F;
  if ( *(_BYTE *)(v15 + 0x90) == 5 )
    ((void (__cdecl *)(int))GetAV_F)(3);
  else
    ((void (__cdecl *)(_DWORD))GetAV_F)(0);
  vtbl = a3->vtbl;
  WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV((char *)v15);
  v29 = ((double (__thiscall *)(Actor *, int, int))vtbl->GetAV_F)(a3, WeaponSkillAV, a2);
  v19 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(v15 + 0x88) + 0x10))(v15 + 0x88);
  Health = ContainerEntryExtraData_GetHealth((void **)a1, 0);
  HealthForForm = TESHealthForm_GetHealthForForm((void *)v15);
  v20 = (double)HealthForForm;
  if ( HealthForForm < 0 )
    v20 = v20 + flt_A2FC78;
  v26 = Health / v20;
  v23 = Double_To_SInt32(a13);
  v22 = Double_To_SInt32(v28);
  v21 = Double_To_SInt32(v29);
  Calc_WeaponDamage(v21, v22, v23, FatigueFraction, v19, v26, a14, 0.0);
  JUMPOUT(0x485121);
}
