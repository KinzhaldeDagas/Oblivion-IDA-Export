int __userpurge sub_633DF0@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        PlayerCharacter *a6)
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

  v6 = a1;
  if ( Actor_GetSkillMasteryLevel((int *)a6, a2, (int)a6, 0x12) < 0 )
  {
    v7 = 0;
    v16[0] = 0xD;
    v16[1] = 1;
    v16[2] = 0;
    v16[3] = 4;
    v16[4] = 2;
    v16[5] = 5;
    v16[6] = 3;
    ArmorCoverage = Actor_GetArmorCoverage(a6, 1);
    while ( ArmorCoverage >= iPerkHeavyArmorSinkSum && v7 < 7 )
    {
      sub_5E4330(a6, v16[v7]);
      v10 = v9;
      if ( v9 )
      {
        v11 = v9[2];
        v12 = 0;
        if ( v11 )
        {
          if ( *(_BYTE *)(v11 + 4) == 0x14 )
            v12 = (_BYTE *)v10[2];
        }
        if ( TESObjectARMO_ISHeavyArmor(v12) == 1 )
          a5 = Actor_UnequipItem(a6, a5, a3, a4, (char)v12, 1, 0, 0, 0, 0);
        ContainerEntryExtraData_DestroyDataTable(v10, v13);
        FormHeapFree((unsigned int)v10);
        v6 = a1;
      }
      ArmorCoverage = Actor_GetArmorCoverage(a6, 1);
      ++v7;
    }
    *(_BYTE *)(v6 + 0x290) = 1;
    *(float *)(v6 + 0x28C) = flt_B36C88;
  }
  return (*(int (__thiscall **)(int, PlayerCharacter *, int))(*(_DWORD *)v6 + 0x188))(v6, a6, 1);
}
