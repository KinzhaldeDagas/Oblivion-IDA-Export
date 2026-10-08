int __userpurge sub_633DF0@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, Actor *a5)
{
  int v6; // esi
  int v7; // ebx
  signed int ArmorCoverage; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // ebp
  unsigned int v11; // eax
  _BYTE *v12; // esi
  int v13; // edx
  _DWORD v16[7]; // [esp+Ch] [ebp-1Ch]

  v6 = a1; /*0x633df9*/
  if ( Actor_GetSkillMasteryLevel(a5, kSkillAV_HeavyArmor) < kSkillMastery_Novice ) /*0x633e0a*/
  {
    v7 = 0; /*0x633e12*/
    v16[0] = 0xD; /*0x633e18*/
    v16[1] = 1; /*0x633e20*/
    v16[2] = 0; /*0x633e28*/
    v16[3] = 4; /*0x633e2c*/
    v16[4] = 2; /*0x633e34*/
    v16[5] = 5; /*0x633e3c*/
    v16[6] = 3; /*0x633e44*/
    ArmorCoverage = Actor_GetArmorCoverage(a5, 1); /*0x633e4c*/
    while ( ArmorCoverage >= (int)MEMORY[0xB374C8].value && v7 < 7 ) /*0x633e5c*/
    {
      sub_5E4330(a5, v16[v7]); /*0x633e65*/
      v10 = v9; /*0x633e6a*/
      if ( v9 ) /*0x633e6e*/
      {
        v11 = v9[2]; /*0x633e70*/
        v12 = 0; /*0x633e73*/
        if ( v11 ) /*0x633e77*/
        {
          if ( *(_BYTE *)(v11 + 4) == 0x14 ) /*0x633e7d*/
            v12 = (_BYTE *)v10[2]; /*0x633e7f*/
        }
        if ( TESObjectARMO_ISHeavyArmor(v12) == 1 ) /*0x633e8a*/
          a4 = Actor_UnequipItem(a5, a4, a2, a3, (__int16)v12, 1, 0, 0, 0, 0); /*0x633e99*/
        ContainerEntryExtraData_DestroyDataTable(v10, v13); /*0x633ea0*/
        FormHeapFree((unsigned int)v10); /*0x633ea6*/
        v6 = a1; /*0x633eab*/
      }
      ArmorCoverage = Actor_GetArmorCoverage(a5, 1); /*0x633eb6*/
      ++v7; /*0x633ebb*/
    }
    *(_BYTE *)(v6 + 0x290) = 1; /*0x633ec0*/
    *(float *)(v6 + 0x28C) = unk_B36C88[0]; /*0x633ece*/
  }
  return (*(int (__usercall **)@<eax>(int@<ecx>, Actor *, int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v6 + 0x188))( /*0x633ee4*/
           v6,
           a5,
           1,
           a4,
           a3,
           a2);
}
