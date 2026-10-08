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

  if ( a1 ) /*0x56b30f*/
  {
    v4 = arg4; /*0x56b315*/
    if ( arg4 ) /*0x56b31b*/
    {
      v5 = *arg4; /*0x56b321*/
      v26 = 0; /*0x56b329*/
      if ( v5 < 0x171 ) /*0x56b32d*/
        v26 = *(unsigned __int16 *)(0x28 * v5 + 0xB0C8D2); /*0x56b33a*/
      v6 = 0; /*0x56b347*/
      a2 = (int)TESForm_GetOverrideFile(a1, 0xFFFFFFFF); /*0x56b34d*/
      *(_DWORD *)ArgList = 0; /*0x56b351*/
      if ( v26 ) /*0x56b355*/
      {
        v24 = 0; /*0x56b35e*/
        v35 = (unsigned int *)(arg4 + 2); /*0x56b362*/
        do /*0x56b370*/
        {
          v7 = *v4; /*0x56b370*/
          if ( v7 < 0x171 ) /*0x56b378*/
          {
            if ( v6 < Script_CommandList[v7].numParams /*0x56b3a5*/
              && *(_BYTE *)(8 * Script_CommandList[v7].params[v24].typeID + 0xB0A54D) )
            {
              *(_DWORD *)ArgList = *v35; /*0x56b3ba*/
              if ( *(_DWORD *)ArgList ) /*0x56b3be*/
              {
                TESForm_ResolveFormID((UInt32 *)ArgList, (Data *)a2); /*0x56b3ce*/
                v8 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x56b3d8*/
                *v35 = (unsigned int)v8; /*0x56b3e6*/
                if ( v8 ) /*0x56b3e8*/
                {
                  if ( *(_DWORD *)(8 * *(_DWORD *)(*(_DWORD *)(0x28 * *v4 + 0xB0C8D4) + v24 * 0xC + 4) + 0xB0A548) == 0xB ) /*0x56b464*/
                  {
                    v10 = OblivionDynamicCast( /*0x56b477*/
                            v8,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &MagicItem `RTTI Type Descriptor',
                            0);
                    *v35 = (unsigned int)v10; /*0x56b485*/
                    if ( !v10 ) /*0x56b487*/
                    {
                      v30[0] = 0; /*0x56b48d*/
                      v30[1] = 0; /*0x56b491*/
                      GetDescription = a1->vtbl->GetDescription; /*0x56b49e*/
                      v34 = 1; /*0x56b4a8*/
                      GetDescription(a1, (BSStringT *)v30); /*0x56b4b0*/
                      PrintError( /*0x56b4c1*/
                        "Unable to find Function Info MagicItem in TESConditionItem Parameter Init for %s.",
                        *(const char **)ArgList);
                      v34 = 0xFFFFFFFF; /*0x56b4cd*/
                      BSStringT_Clear(v30); /*0x56b4d5*/
                    }
                  }
                }
                else
                {
                  v28 = 0; /*0x56b3ea*/
                  v29 = 0; /*0x56b3ee*/
                  v9 = a1->vtbl->GetDescription; /*0x56b3fb*/
                  v34 = 0; /*0x56b405*/
                  v9(a1, (BSStringT *)&v28); /*0x56b409*/
                  PrintError( /*0x56b41a*/
                    "Unable to find Function Info TESForm (%08X) in TESConditionItem Parameter Init for %s.",
                    *(_DWORD *)ArgList,
                    v28);
                  v34 = 0xFFFFFFFF; /*0x56b424*/
                  FormHeapFree((unsigned int)v28); /*0x56b42c*/
                  v28 = 0; /*0x56b434*/
                  v29 = 0; /*0x56b43d*/
                }
              }
            }
            else
            {
              v12 = 0x14 * v7; /*0x56b4ef*/
              numParams = Script_CommandList[v12 / 0x14].numParams; /*0x56b4f1*/
              v14 = 2 * v12; /*0x56b4f9*/
              if ( v6 >= numParams || (*(ParamInfo **)((char *)&Script_CommandList[0].params + v14))[v24].typeID != 0x16 ) /*0x56b512*/
                goto LABEL_30; /*0x56b512*/
              if ( !a3 ) /*0x56b51c*/
                goto LABEL_24; /*0x56b51c*/
              if ( v6 ) /*0x56b524*/
              {
                v15 = sub_56B220(v6 - 1, v4); /*0x56b534*/
                if ( v15 ) /*0x56b53b*/
                {
                  if ( !sub_4FA890(v15, *v35) ) /*0x56b546*/
                  {
                    *(_DWORD *)v31 = 0; /*0x56b54f*/
                    v32 = 0; /*0x56b553*/
                    v16 = a1->vtbl->GetDescription; /*0x56b560*/
                    v34 = 2; /*0x56b56a*/
                    v16(a1, (BSStringT *)v31); /*0x56b572*/
                    v17 = *(const char **)v31; /*0x56b57c*/
                    v18 = (const char *)(*(int (__thiscall **)(int *))(*v15 + 0xD4))(v15); /*0x56b582*/
                    PrintError( /*0x56b58b*/
                      "TESConditionItem Parameter for %s contains unconverted script variable data -- unable to change be"
                      "cause script '%s' is uncompiled.",
                      v17,
                      v18);
                    v34 = 0xFFFFFFFF; /*0x56b597*/
                    BSStringT_Clear((unsigned int *)v31); /*0x56b59f*/
                    v6 = *(_DWORD *)ArgList; /*0x56b5a4*/
                  }
                }
                v4 = arg4; /*0x56b5a8*/
LABEL_24:
                if ( v6 ) /*0x56b5ae*/
                {
                  if ( !a3 ) /*0x56b5b8*/
                  {
                    v19 = (char *)sub_56B220(v6 - 1, v4); /*0x56b5c3*/
                    v20 = v19; /*0x56b5c8*/
                    if ( v19 ) /*0x56b5cf*/
                    {
                      if ( !sub_4FA840(v19, *v35) ) /*0x56b5da*/
                      {
                        v33[0] = 0; /*0x56b5e3*/
                        v33[1] = 0; /*0x56b5e7*/
                        v21 = a1->vtbl->GetDescription; /*0x56b5f4*/
                        v34 = 3; /*0x56b5fe*/
                        v21(a1, (BSStringT *)v33); /*0x56b606*/
                        v22 = (const char *)(*(int (__thiscall **)(char *, unsigned int))(*(_DWORD *)v20 + 0xD4))( /*0x56b617*/
                                              v20,
                                              v33[0]);
                        PrintError( /*0x56b626*/
                          "Unable to find variableID %d on script '%s' in TESConditionItem Parameter Init for %s.",
                          *v35,
                          v22,
                          v23);
                        v34 = 0xFFFFFFFF; /*0x56b632*/
                        BSStringT_Clear(v33); /*0x56b63a*/
                      }
                    }
                    v4 = arg4; /*0x56b63f*/
                  }
                }
              }
            }
          }
LABEL_30:
          ++v24; /*0x56b643*/
          ++v35; /*0x56b648*/
          *(_DWORD *)ArgList = ++v6; /*0x56b654*/
        }
        while ( v6 < v26 ); /*0x56b370*/
      }
    }
  }
}
