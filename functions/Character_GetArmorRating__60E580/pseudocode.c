// Character_GetArmorRating authority and cached-rating boundary (Character +0x108). Native Light Master behavior is retained for true Light sets; Medium mastery must be layered only after blocking Medium at the native Light purity call and must invalidate this cache when runtime classification changes.
double __usercall Character_GetArmorRating@<st0>(int a1@<ecx>, unsigned int *a2@<edi>)
{
  double result; // st7
  bool v4; // c0
  bool v5; // c3
  int v6; // ebx
  ExtraDataList *****ContainerChanges; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // esi
  _BYTE *v12; // eax
  unsigned int *EquippedInstance; // eax
  int v14; // edx
  _BYTE *v15; // esi
  bool v16; // cl
  int v17; // eax
  unsigned int *v18; // [esp-Ch] [ebp-64h]
  float v19; // [esp+4h] [ebp-54h]
  float v20; // [esp+8h] [ebp-50h]
  float v21; // [esp+Ch] [ebp-4Ch]
  int v22[16]; // [esp+18h] [ebp-40h]

  result = 0.0; /*0x60e583*/
  v4 = *(float *)(a1 + 0x108) > 0.0; /*0x60e589*/
  v5 = 0.0 == *(float *)(a1 + 0x108); /*0x60e589*/
  v6 = 0; /*0x60e58f*/
  v22[0] = 0; /*0x60e591*/
  if ( v4 || v5 ) /*0x60e597*/
  {
    Character_GetArmorRating_::CalcLightArmorPerk(0, a1, (int)a2); /*0x60e70e*/
  }
  else
  {
    *(float *)(a1 + 0x108) = 0.0; /*0x60e5a0*/
    v21 = 0.0; /*0x60e5a9*/
    v20 = 0.0; /*0x60e5ad*/
    ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44)); /*0x60e5b1*/
    if ( ContainerChanges ) /*0x60e5bc*/
    {
      v8 = 0; /*0x60e5c3*/
      while ( 1 ) /*0x60e5d7*/
      {
        if ( v8 == 0xD ) /*0x60e5d7*/
        {
          v9 = *(_DWORD *)(a1 + 0x58); /*0x60e5d9*/
          if ( v9 ) /*0x60e5de*/
          {
            v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0xF8))(v9, 1); /*0x60e5ee*/
            v11 = v10; /*0x60e5f0*/
            if ( v10 ) /*0x60e5f4*/
            {
              v12 = OblivionDynamicCast( /*0x60e60c*/
                      *(void **)(v10 + 8),
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectARMO `RTTI Type Descriptor',
                      0);
              if ( v12 ) /*0x60e616*/
              {
                if ( TESObjectARMO_ISHeavyArmor(v12) ) /*0x60e61e*/
                  v19 = ContainerEntryExtraData_CalcRoundedArmorRating(v11, *(float *)&v6, (int)a2, v11, (int *)a1) /*0x60e645*/
                      + v19;
                else
                  v20 = ContainerEntryExtraData_CalcRoundedArmorRating(v11, *(float *)&v6, (int)a2, v11, (int *)a1) /*0x60e633*/
                      + v20;
              }
            }
          }
        }
        else
        {
          EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, v8, 0); /*0x60e653*/
          a2 = EquippedInstance; /*0x60e658*/
          if ( EquippedInstance ) /*0x60e65c*/
          {
            v15 = OblivionDynamicCast( /*0x60e679*/
                    (void *)EquippedInstance[2],
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESObjectARMO `RTTI Type Descriptor',
                    0);
            if ( v15 ) /*0x60e680*/
            {
              v16 = 0; /*0x60e682*/
              if ( v6 && (v17 = 0, v6 > 0) ) /*0x60e68c*/
              {
                while ( !v16 ) /*0x60e692*/
                {
                  v16 = v22[v17++] == (_DWORD)v15; /*0x60e698*/
                  if ( v17 >= v6 ) /*0x60e6a0*/
                  {
                    if ( v16 ) /*0x60e6a4*/
                      break; /*0x60e6a4*/
                    goto LABEL_19; /*0x60e6a4*/
                  }
                }
              }
              else
              {
LABEL_19:
                if ( TESObjectARMO_ISHeavyArmor(v15) ) /*0x60e6a8*/
                  v20 = ContainerEntryExtraData_CalcRoundedArmorRating( /*0x60e6cc*/
                          (int)a2,
                          *(float *)&v6,
                          (int)a2,
                          (int)v15,
                          (int *)a1)
                      + v20;
                else
                  v21 = ContainerEntryExtraData_CalcRoundedArmorRating( /*0x60e6bd*/
                          (int)a2,
                          *(float *)&v6,
                          (int)a2,
                          (int)v15,
                          (int *)a1)
                      + v21;
                v22[v6++] = (int)v15; /*0x60e6d0*/
              }
            }
            ContainerEntryExtraData_DestroyDataTable(a2, v14); /*0x60e6d7*/
            FormHeapFree((unsigned int)a2); /*0x60e6df*/
          }
        }
        v8 = ++LODWORD(v21); /*0x60e6eb*/
        if ( SLODWORD(v21) >= 0x10 ) /*0x60e6f5*/
          break; /*0x60e6f5*/
        ContainerChanges = 0; /*0x60e5d0*/
      }
      a2 = v18; /*0x60e6fb*/
    }
    *(float *)(a1 + 0x108) = v19 + v20; /*0x60e705*/
    return Character_GetArmorRating_::CalcLightArmorPerk(v6, a1, (int)a2); /*0x60e70b*/
  }
  return result;
}
