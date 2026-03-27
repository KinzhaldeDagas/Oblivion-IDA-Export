void __cdecl sub_56B2E0(TESForm *a1, unsigned __int16 *arg4, char a3)
{
  unsigned __int16 *v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // eax
  TESForm *v8; // eax
  void (__thiscall *v9)(TESForm *, BSStringT *); // edx
  void *v10; // eax
  void (__thiscall *GetDescription)(TESForm *, BSStringT *); // edx
  unsigned int v12; // eax
  unsigned int numParams; // ecx
  int v14; // eax
  int *v15; // esi
  void (__thiscall *v16)(TESForm *, BSStringT *); // edx
  const char *v17; // edi
  const char *v18; // eax
  char *v19; // eax
  char *v20; // esi
  void (__thiscall *v21)(TESForm *, BSStringT *); // edx
  const char *v22; // eax
  const char *v23; // [esp-4h] [ebp-54h]
  int v24; // [esp+14h] [ebp-3Ch]
  char ArgList[4]; // [esp+18h] [ebp-38h] BYREF
  unsigned int v26; // [esp+1Ch] [ebp-34h]
  int a2; // [esp+20h] [ebp-30h]
  const char *v28; // [esp+24h] [ebp-2Ch] BYREF
  int v29; // [esp+28h] [ebp-28h]
  unsigned int v30[2]; // [esp+2Ch] [ebp-24h] BYREF
  char v31[4]; // [esp+34h] [ebp-1Ch] BYREF
  int v32; // [esp+38h] [ebp-18h]
  unsigned int v33[2]; // [esp+3Ch] [ebp-14h] BYREF
  int v34; // [esp+4Ch] [ebp-4h]
  unsigned int *v35; // [esp+54h] [ebp+4h]

  if ( a1 )
  {
    v4 = arg4;
    if ( arg4 )
    {
      v5 = *arg4;
      v26 = 0;
      if ( v5 < 0x171 )
        v26 = *(unsigned __int16 *)(0x28 * v5 + 0xB0C8D2);
      v6 = 0;
      a2 = (int)TESForm_GetOverrideFile(a1, 0xFFFFFFFF);
      *(_DWORD *)ArgList = 0;
      if ( v26 )
      {
        v24 = 0;
        v35 = (unsigned int *)(arg4 + 2);
        do
        {
          v7 = *v4;
          if ( v7 < 0x171 )
          {
            if ( v6 < Script_CommandList_[v7].numParams
              && *(_BYTE *)(8 * Script_CommandList_[v7].params[v24].typeID + 0xB0A54D) )
            {
              *(_DWORD *)ArgList = *v35;
              if ( *(_DWORD *)ArgList )
              {
                TESForm_ResolveFormID((UInt32 *)ArgList, (Data *)a2);
                v8 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
                *v35 = (unsigned int)v8;
                if ( v8 )
                {
                  if ( *(_DWORD *)(8 * *(_DWORD *)(*(_DWORD *)(0x28 * *v4 + 0xB0C8D4) + v24 * 0xC + 4) + 0xB0A548) == 0xB )
                  {
                    v10 = OblivionDynamicCast(
                            v8,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &MagicItem `RTTI Type Descriptor',
                            0);
                    *v35 = (unsigned int)v10;
                    if ( !v10 )
                    {
                      v30[0] = 0;
                      v30[1] = 0;
                      GetDescription = a1->vtbl->GetDescription;
                      v34 = 1;
                      GetDescription(a1, (BSStringT *)v30);
                      PrintError(
                        "Unable to find Function Info MagicItem in TESConditionItem Parameter Init for %s.",
                        *(const char **)ArgList);
                      v34 = 0xFFFFFFFF;
                      BSStringT_Clear(v30);
                    }
                  }
                }
                else
                {
                  v28 = 0;
                  v29 = 0;
                  v9 = a1->vtbl->GetDescription;
                  v34 = 0;
                  v9(a1, (BSStringT *)&v28);
                  PrintError(
                    "Unable to find Function Info TESForm (%08X) in TESConditionItem Parameter Init for %s.",
                    *(_DWORD *)ArgList,
                    v28);
                  v34 = 0xFFFFFFFF;
                  FormHeapFree((unsigned int)v28);
                  v28 = 0;
                  v29 = 0;
                }
              }
            }
            else
            {
              v12 = 0x14 * v7;
              numParams = Script_CommandList_[v12 / 0x14].numParams;
              v14 = 2 * v12;
              if ( v6 >= numParams
                || (*(ParamInfo **)((char *)&Script_CommandList_[0].params + v14))[v24].typeID != 0x16 )
              {
                goto LABEL_30;
              }
              if ( !a3 )
                goto LABEL_24;
              if ( v6 )
              {
                v15 = sub_56B220(v6 - 1, v4);
                if ( v15 )
                {
                  if ( !sub_4FA890(v15, *v35) )
                  {
                    *(_DWORD *)v31 = 0;
                    v32 = 0;
                    v16 = a1->vtbl->GetDescription;
                    v34 = 2;
                    v16(a1, (BSStringT *)v31);
                    v17 = *(const char **)v31;
                    v18 = (const char *)(*(int (__thiscall **)(int *))(*v15 + 0xD4))(v15);
                    PrintError(
                      "TESConditionItem Parameter for %s contains unconverted script variable data -- unable to change be"
                      "cause script '%s' is uncompiled.",
                      v17,
                      v18);
                    v34 = 0xFFFFFFFF;
                    BSStringT_Clear((unsigned int *)v31);
                    v6 = *(_DWORD *)ArgList;
                  }
                }
                v4 = arg4;
LABEL_24:
                if ( v6 )
                {
                  if ( !a3 )
                  {
                    v19 = (char *)sub_56B220(v6 - 1, v4);
                    v20 = v19;
                    if ( v19 )
                    {
                      if ( !sub_4FA840(v19, *v35) )
                      {
                        v33[0] = 0;
                        v33[1] = 0;
                        v21 = a1->vtbl->GetDescription;
                        v34 = 3;
                        v21(a1, (BSStringT *)v33);
                        v22 = (const char *)(*(int (__thiscall **)(char *, unsigned int))(*(_DWORD *)v20 + 0xD4))(
                                              v20,
                                              v33[0]);
                        PrintError(
                          "Unable to find variableID %d on script '%s' in TESConditionItem Parameter Init for %s.",
                          *v35,
                          v22,
                          v23);
                        v34 = 0xFFFFFFFF;
                        BSStringT_Clear(v33);
                      }
                    }
                    v4 = arg4;
                  }
                }
              }
            }
          }
LABEL_30:
          ++v24;
          ++v35;
          *(_DWORD *)ArgList = ++v6;
        }
        while ( v6 < v26 );
      }
    }
  }
}
