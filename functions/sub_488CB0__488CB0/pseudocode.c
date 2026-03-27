double __userpurge sub_488CB0@<st0>(int a1@<ecx>, float a2@<ebx>, int a3@<edi>, int a4@<esi>, int *a5)
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

  if ( *(_BYTE *)(*(_DWORD *)(a1 + 8) + 4) == 0x14 )
  {
    (*(void (__thiscall **)(int *, int, int, int))(*a5 + 0x288))(a5, 7, a3, a4);
    v6 = *(_DWORD *)(a1 + 8);
    v7 = *a5;
    ArmorSkillAV = TESObjectARMO_GetArmorSkillAV((_BYTE *)v6);
    v15 = ((double (__thiscall *)(int *, signed int))*(_DWORD *)(v7 + 0x288))(a5, ArmorSkillAV);
    HealthForForm = TESHealthForm_GetHealthForForm((void *)v6);
    v9 = (double)HealthForForm;
    if ( HealthForForm < 0 )
      v9 = v9 + flt_A2FC78;
    v18 = v9;
    if ( 0.0 == v18 )
      v10 = 0.0;
    else
      v10 = ContainerEntryExtraData_GetHealth((void **)a1, 0) / v18;
    v16 = (double)*(unsigned __int16 *)(v6 + 0xE4) / fCostant_100;
    v19 = v10;
    v13 = Calc_ArmorRating((unsigned __int16)(int)v16, v15, a2, v19);
  }
  v20 = (float)Double_To_SInt32(v13);
  v11 = v20;
  if ( v20 - v13 < dbl_A2FC68 )
    return (float)(v11 + dbl_A2F928);
  return (float)v11;
}
