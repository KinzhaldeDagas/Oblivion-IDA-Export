double __userpurge ContainerEntryExtraData_CalcRoundedArmorRating@<st0>(
        int a1@<ecx>,
        float a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int *a5)
{
  int v6; // edi
  int v7; // ebx
  signed int ArmorSkillAV; // eax
  double v9; // st7
  double v10; // st7
  double v11; // st7
  float v13; // [esp+1Ch] [ebp-14h]
  float v15; // [esp+20h] [ebp-10h]
  float v16; // [esp+24h] [ebp-Ch]
  int HealthForForm; // [esp+2Ch] [ebp-4h]
  float v18; // [esp+2Ch] [ebp-4h]
  float v19; // [esp+2Ch] [ebp-4h]
  float v20; // [esp+2Ch] [ebp-4h]

  if ( *(_BYTE *)(*(_DWORD *)(a1 + 8) + 4) == 0x14 ) /*0x488cc7*/
  {
    (*(void (__thiscall **)(int *, int, int, int))(*a5 + 0x288))(a5, 7, a3, a4); /*0x488ce0*/
    v6 = *(_DWORD *)(a1 + 8); /*0x488ce6*/
    v7 = *a5; /*0x488ce9*/
    ArmorSkillAV = TESObjectARMO_GetArmorSkillAV((_BYTE *)v6);// Paired Medium boundary 1/7: classify this armor and fetch its selected skill AV; the same path calls Calc_ArmorRating at 0x488D9D after actor skill/health/condition collection. /*0x488ced*/
    v15 = ((double (__thiscall *)(int *, signed int))*(_DWORD *)(v7 + 0x288))(a5, ArmorSkillAV); /*0x488cfd*/
    HealthForForm = TESHealthForm_GetHealthForForm((void *)v6); /*0x488d0c*/
    v9 = (double)HealthForForm; /*0x488d10*/
    if ( HealthForForm < 0 ) /*0x488d14*/
      v9 = v9 + flt_A2FC78; /*0x488d16*/
    v18 = v9; /*0x488d1c*/
    if ( 0.0 == v18 ) /*0x488d2b*/
      v10 = 0.0; /*0x488d2d*/
    else
      v10 = ContainerEntryExtraData_GetHealth((void **)a1, 0) / v18; /*0x488d3a*/
    v16 = (double)*(unsigned __int16 *)(v6 + 0xE4) / fCostant_100; /*0x488d56*/
    v19 = v10; /*0x488d5a*/
    v13 = Calc_ArmorRating((int)v16, v15, a2, v19);// Paired Medium boundary 1/7: Calc_ArmorRating consumer for the armor classified at 0x488CED. Used by Character_GetArmorRating through ContainerEntryExtraData_CalcRoundedArmorRating. /*0x488da2*/
  }
  v20 = (float)Double_To_SInt32(v13); /*0x488dc0*/
  v11 = v20; /*0x488dcc*/
  if ( v20 - v13 < dbl_A2FC68 ) /*0x488dd9*/
    return (float)(v11 + dbl_A2F928); /*0x488ddb*/
  return (float)v11; /*0x488de9*/
}
