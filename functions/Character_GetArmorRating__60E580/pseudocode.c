double __usercall Character_GetArmorRating@<st0>(
        int a1@<ecx>,
        unsigned int *a2@<edi>,
        int a3,
        int a4,
        float a5,
        float a6)
{
  double result; // st7
  bool v8; // c0
  bool v9; // c3
  float v10; // ebx
  ExtraDataList *****ContainerChanges; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  _BYTE *v16; // eax
  unsigned int *EquippedInstance; // eax
  int v18; // edx
  _BYTE *v19; // esi
  bool v20; // cl
  int v21; // eax
  float v22; // [esp+4h] [ebp-54h]
  float v23; // [esp+8h] [ebp-50h]
  float v24; // [esp+Ch] [ebp-4Ch]
  int v25[16]; // [esp+18h] [ebp-40h]

  result = 0.0;
  v8 = *(float *)(a1 + 0x108) > 0.0;
  v9 = 0.0 == *(float *)(a1 + 0x108);
  v10 = 0.0;
  v25[0] = 0;
  if ( v8 || v9 )
  {
    Character_GetArmorRating_::CalcLightArmorPerk(a3, a4, a5, a6);
  }
  else
  {
    *(float *)(a1 + 0x108) = 0.0;
    v24 = 0.0;
    v23 = 0.0;
    ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44));
    if ( ContainerChanges )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 == 0xD )
        {
          v13 = *(_DWORD *)(a1 + 0x58);
          if ( v13 )
          {
            v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v13 + 0xF8))(v13, 1);
            v15 = v14;
            if ( v14 )
            {
              v16 = OblivionDynamicCast(
                      *(void **)(v14 + 8),
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectARMO `RTTI Type Descriptor',
                      0);
              if ( v16 )
              {
                if ( TESObjectARMO_ISHeavyArmor(v16) )
                  v22 = sub_488CB0(v15, v10, (int)a2, v15, (int *)a1) + v22;
                else
                  v23 = sub_488CB0(v15, v10, (int)a2, v15, (int *)a1) + v23;
              }
            }
          }
        }
        else
        {
          EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, v12, 0);
          a2 = EquippedInstance;
          if ( EquippedInstance )
          {
            v19 = OblivionDynamicCast(
                    (void *)EquippedInstance[2],
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESObjectARMO `RTTI Type Descriptor',
                    0);
            if ( v19 )
            {
              v20 = 0;
              if ( v10 == 0.0 || (v21 = 0, SLODWORD(v10) <= 0) )
              {
LABEL_19:
                if ( TESObjectARMO_ISHeavyArmor(v19) )
                  v23 = sub_488CB0((int)a2, v10, (int)a2, (int)v19, (int *)a1) + v23;
                else
                  v24 = sub_488CB0((int)a2, v10, (int)a2, (int)v19, (int *)a1) + v24;
                v25[LODWORD(v10)++] = (int)v19;
              }
              else
              {
                while ( !v20 )
                {
                  v20 = v25[v21++] == (_DWORD)v19;
                  if ( v21 >= SLODWORD(v10) )
                  {
                    if ( v20 )
                      break;
                    goto LABEL_19;
                  }
                }
              }
            }
            ContainerEntryExtraData_DestroyDataTable(a2, v18);
            FormHeapFree((unsigned int)a2);
          }
        }
        v12 = ++LODWORD(v24);
        if ( SLODWORD(v24) >= 0x10 )
          break;
        ContainerChanges = 0;
      }
    }
    result = v22 + v23;
    *(float *)(a1 + 0x108) = result;
    Character_GetArmorRating_::CalcLightArmorPerk(a3, a4, a5, a6);
  }
  return result;
}
