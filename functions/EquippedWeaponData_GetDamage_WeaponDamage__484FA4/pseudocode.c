void __usercall EquippedWeaponData_GetDamage_::WeaponDamage(
        int a1@<ebx>,
        int a2@<ebp>,
        Actor *a3@<esi>,
        double a4@<st0>,
        int a5@<edi>,
        int a6,
        int a7,
        float a8,
        double a9,
        float a10,
        float a11,
        int a12,
        float a13,
        float a14,
        float a15)
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

  a3->vtbl->GetAV_F(a3, kActorVal_Luck); /*0x484fb0*/
  v28 = a4; /*0x484fb2*/
  FatigueFraction = Actor_GetFatigueFraction(a3, a1, a5); /*0x484fbd*/
  v15 = *(_DWORD *)(a1 + 8); /*0x484fc1*/
  GetAV_F = a3->vtbl->GetAV_F; /*0x484fcd*/
  if ( *(_BYTE *)(v15 + 0x90) == 5 )            // Weapon damage calculation selects Agility only for native weapon type Bow (5); other weapon types follow their own governing-attribute path. /*0x484fd5*/
    ((void (__cdecl *)(int))GetAV_F)(3); /*0x484fd9*/
  else
    ((void (__cdecl *)(_DWORD))GetAV_F)(0); /*0x484fdd*/
  vtbl = a3->vtbl; /*0x484fe4*/
  WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV((char *)v15);// BladeSkillsRestored schema-4 owner decode: ECX is TESObjectWEAP and ESI is the Actor owner. Call returns at 0x484FED; the paired Calc_WeaponDamage returns at 0x485080. Patch must pass ESI and bind the resolved player/NPC sidecar level to this exact formula pair. /*0x484fe8*/
  v29 = ((double (__thiscall *)(Actor *, int, int))vtbl->GetAV_F)(a3, WeaponSkillAV, a2); /*0x484ff8*/
  v19 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(v15 + 0x88) + 0x10))(v15 + 0x88); /*0x485011*/
  Health = ContainerEntryExtraData_GetHealth((void **)a1, 0); /*0x48501a*/
  HealthForForm = TESHealthForm_GetHealthForForm((void *)v15); /*0x485028*/
  v20 = (double)HealthForForm; /*0x48502c*/
  if ( HealthForForm < 0 ) /*0x485030*/
    v20 = v20 + flt_A2FC78; /*0x485032*/
  v26 = Health / v20; /*0x485041*/
  v23 = Double_To_SInt32(a14); /*0x48506a*/
  v22 = Double_To_SInt32(v28); /*0x485074*/
  v21 = Double_To_SInt32(v29); /*0x485075*/
  Calc_WeaponDamage(v21, v22, v23, FatigueFraction, v19, v26, a15, 0.0); /*0x48507b*/
  JUMPOUT(0x485121); /*0x485121*/
}
