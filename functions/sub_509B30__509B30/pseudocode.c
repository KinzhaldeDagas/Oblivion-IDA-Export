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
  int *v11; // edi
  ScriptEventList *v12; // ebx
  int *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // edx
  const char *v19; // eax
  bool v20; // zf
  int v21; // edx
  double v22; // st7
  int v23; // eax
  const char *v24; // eax
  unsigned __int64 v25; // st7
  const char *v26; // eax
  const char *v27; // [esp-4h] [ebp-4Ch]
  int v28; // [esp+0h] [ebp-48h]
  const char *v29; // [esp+0h] [ebp-48h]
  const char *v30; // [esp+0h] [ebp-48h]
  double v31; // [esp+0h] [ebp-48h]
  int v32; // [esp+4h] [ebp-44h]
  int v33; // [esp+4h] [ebp-44h]
  UInt16 v34[2]; // [esp+34h] [ebp-14h] BYREF
  int *v35; // [esp+38h] [ebp-10h]
  int v36; // [esp+3Ch] [ebp-Ch] BYREF
  double v37; // [esp+40h] [ebp-8h] BYREF

  *(_DWORD *)v34 = 0;
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v34) )
  {
    if ( *(_DWORD *)v34 )
    {
      v11 = *(int **)(*(_DWORD *)v34 + 0x1C);
      if ( v11 )
      {
        v12 = *(ScriptEventList **)(*(_DWORD *)v34 + 0x58);
        v13 = v11 + 0x12;
        if ( v11[0x13] || *v13 )
        {
          if ( v12 )
          {
            while ( v13 )
            {
              v17 = *v13;
              if ( !*v13 )
                break;
              v18 = *(_DWORD *)v17;
              v35 = (int *)v13[1];
              if ( sub_4FA1B0(v12, v18) )
              {
                v28 = *(_DWORD *)v17;
                v36 = 0;
                v37 = sub_4FA110(v12, v28, 0);
                sub_4F9FC0(&v36, &v37);
                v19 = (const char *)(*(int (__thiscall **)(int *, _DWORD, int))(*v11 + 0xD4))(
                                      v11,
                                      *(_DWORD *)(v17 + 0x18),
                                      v36);
                Interface_ConsolePrint("%s->%s = (%08X)", v19, v29, v32);
                v13 = v35;
              }
              else
              {
                v20 = *(_BYTE *)(v17 + 0x10) == 0;
                v21 = *(_DWORD *)v17;
                v36 = *(_DWORD *)(v17 + 0x18);
                if ( v20 )
                {
                  *(double *)&v25 = sub_4FA110(v12, v21, 0);
                  v26 = (const char *)(*(int (__thiscall **)(int *, int, _DWORD, _DWORD))(*v11 + 0xD4))(
                                        v11,
                                        v36,
                                        v25,
                                        HIDWORD(v25));
                  Interface_ConsolePrint("%s->%s = %0.4f", v26, v27, v31);
                }
                else
                {
                  v22 = sub_4FA110(v12, v21, 0);
                  v23 = Double_To_SInt32(v22);
                  v24 = (const char *)(*(int (__thiscall **)(int *, int, int))(*v11 + 0xD4))(v11, v36, v23);
                  Interface_ConsolePrint("%s->%s = %d", v24, v30, v33);
                }
                v13 = v35;
              }
            }
          }
        }
        else
        {
          v14 = (const char *)(*(int (**)(void))(**(_DWORD **)v34 + 0xD4))();
          Interface_ConsolePrint("No script variables on quest %s", v14);
        }
      }
      Interface_ConsolePrint("--- Quest state -----------------------------");
      v15 = (const char *)&off_A3DAE8;
      if ( (*(_BYTE *)(*(_DWORD *)v34 + 0x3C) & 1) == 0 )
        v15 = "No";
      Interface_ConsolePrint("Running?       %s", v15);
      v16 = sub_529750(*(unsigned __int8 **)v34);
      Interface_ConsolePrint("Current stage: %d", v16);
      Interface_ConsolePrint("Priority:      %d", *(unsigned __int8 *)(*(_DWORD *)v34 + 0x3D));
    }
  }
}
