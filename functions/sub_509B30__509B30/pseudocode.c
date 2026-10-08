void __cdecl sub_509B30(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  int *v8; // edi
  ScriptEventList *v9; // ebx
  int *v10; // eax
  const char *v11; // eax
  const char *v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // edx
  const char *v16; // eax
  bool v17; // zf
  UInt32 v18; // edx
  double v19; // st7
  int v20; // eax
  const char *v21; // eax
  unsigned __int64 v22; // st7
  const char *v23; // eax
  const char *v24; // [esp-4h] [ebp-4Ch]
  UInt32 v25; // [esp+0h] [ebp-48h]
  const char *v26; // [esp+0h] [ebp-48h]
  const char *v27; // [esp+0h] [ebp-48h]
  double v28; // [esp+0h] [ebp-48h]
  int v29; // [esp+4h] [ebp-44h]
  int v30; // [esp+4h] [ebp-44h]
  UInt16 v31[2]; // [esp+34h] [ebp-14h] BYREF
  int *v32; // [esp+38h] [ebp-10h]
  int v33; // [esp+3Ch] [ebp-Ch] BYREF
  double VariableValue; // [esp+40h] [ebp-8h] BYREF

  *(_DWORD *)v31 = 0; /*0x509b5d*/
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v31) )
  {
    if ( *(_DWORD *)v31 )
    {
      v8 = *(int **)(*(_DWORD *)v31 + 0x1C); /*0x509b84*/
      if ( v8 ) /*0x509b89*/
      {
        v9 = *(ScriptEventList **)(*(_DWORD *)v31 + 0x58); /*0x509b8f*/
        v10 = v8 + 0x12; /*0x509b92*/
        if ( v8[0x13] || *v10 ) /*0x509b97*/
        {
          if ( v9 ) /*0x509c18*/
          {
            while ( v10 ) /*0x509c22*/
            {
              v14 = *v10; /*0x509c24*/
              if ( !*v10 ) /*0x509c24*/
                break; /*0x509c24*/
              v15 = *(_DWORD *)v14; /*0x509c2d*/
              v32 = (int *)v10[1]; /*0x509c2f*/
              if ( sub_4FA1B0(v9, v15) ) /*0x509c36*/
              {
                v25 = *(_DWORD *)v14; /*0x509c43*/
                v33 = 0; /*0x509c46*/
                VariableValue = ScriptEventList::GetVariableValue(v9, v25, 0); /*0x509c53*/
                sub_4F9FC0(&v33, &VariableValue); /*0x509c61*/
                v16 = (const char *)(*(int (__thiscall **)(int *, _DWORD, int))(*v8 + 0xD4))( /*0x509c7c*/
                                      v8,
                                      *(_DWORD *)(v14 + 0x18),
                                      v33);
                Interface_ConsolePrint("%s->%s = (%08X)", v16, v26, v29); /*0x509c84*/
                v10 = v32; /*0x509c89*/
              }
              else
              {
                v17 = *(_BYTE *)(v14 + 0x10) == 0; /*0x509c92*/
                v18 = *(_DWORD *)v14; /*0x509c99*/
                v33 = *(_DWORD *)(v14 + 0x18); /*0x509c9b*/
                if ( v17 ) /*0x509ca2*/
                {
                  *(double *)&v22 = ScriptEventList::GetVariableValue(v9, v18, 0); /*0x509cd7*/
                  v23 = (const char *)(*(int (__thiscall **)(int *, int, _DWORD, _DWORD))(*v8 + 0xD4))( /*0x509cf1*/
                                        v8,
                                        v33,
                                        v22,
                                        HIDWORD(v22));
                  Interface_ConsolePrint("%s->%s = %0.4f", v23, v24, v28); /*0x509cf9*/
                }
                else
                {
                  v19 = ScriptEventList::GetVariableValue(v9, v18, 0); /*0x509ca4*/
                  v20 = Double_To_SInt32(v19); /*0x509ca9*/
                  v21 = (const char *)(*(int (__thiscall **)(int *, int, int))(*v8 + 0xD4))(v8, v33, v20); /*0x509cbe*/
                  Interface_ConsolePrint("%s->%s = %d", v21, v27, v30); /*0x509cc6*/
                }
                v10 = v32; /*0x509ccb*/
              }
            }
          }
        }
        else
        {
          v11 = (const char *)(*(int (**)(void))(**(_DWORD **)v31 + 0xD4))(); /*0x509ba4*/
          Interface_ConsolePrint("No script variables on quest %s", v11); /*0x509bac*/
        }
      }
      Interface_ConsolePrint("--- Quest state -----------------------------"); /*0x509bb9*/
      v12 = (const char *)&off_A3DAE8; /*0x509bc9*/
      if ( (*(_BYTE *)(*(_DWORD *)v31 + 0x3C) & 1) == 0 ) /*0x509bce*/
        v12 = "No"; /*0x509bd0*/
      Interface_ConsolePrint("Running?       %s", v12); /*0x509bdb*/
      LOBYTE(v13) = TESQuest::GetCurrentStage(*(TESQuest **)v31); /*0x509be7*/
      Interface_ConsolePrint("Current stage: %d", v13);
      Interface_ConsolePrint("Priority:      %d", *(unsigned __int8 *)(*(_DWORD *)v31 + 0x3D));
    }
  }
}
