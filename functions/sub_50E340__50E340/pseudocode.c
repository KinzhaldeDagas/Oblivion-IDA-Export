bool __usercall sub_50E340@<al>(
        int edi0@<edi>,
        int a2@<esi>,
        ParamInfo *a1,
        UInt8 *a4,
        TESObjectREFR *a5,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a3)
{
  TESObjectREFR *v10; // edi
  bool result; // al
  double v12; // st7
  double v13; // st6
  Actor *v14; // eax
  Actor *v15; // esi
  LowProcess *process; // ecx
  ActorVtbl *vtbl; // edx
  void (__thiscall *SetTransparency)(Actor *, bool, float); // eax
  double v19; // st7
  char *Name; // eax
  float ChameleonMinRefraction; // [esp+18h] [ebp-20h]
  float ChameleonMaxRefraction; // [esp+1Ch] [ebp-1Ch]
  double v23; // [esp+1Ch] [ebp-1Ch]
  float v26; // [esp+28h] [ebp-10h]
  float v27; // [esp+28h] [ebp-10h]
  float v28[2]; // [esp+2Ch] [ebp-Ch] BYREF
  float v29; // [esp+34h] [ebp-4h]
  float retaddr; // [esp+38h] [ebp+0h]
  float a1a; // [esp+3Ch] [ebp+4h]
  float a1b; // [esp+3Ch] [ebp+4h]
  float a1c; // [esp+3Ch] [ebp+4h]

  v28[0] = 0.0;
  v10 = a5;
  result = Script_ExtractArgs(a1, a4, a3, a5, a6, a7, l, v28);
  if ( result )
  {
    if ( !a5 )
      v10 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    v12 = flt_A31C80;
    v13 = v28[0];
    if ( v28[0] < v12 && v13 <= 0.0 )
    {
      v28[0] = 0.0;
    }
    else if ( v13 >= v12 )
    {
      v28[0] = flt_A31C80;
    }
    v14 = (Actor *)OblivionDynamicCast(
                     v10,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    v15 = v14;
    if ( v14 )
    {
      process = v14->members.super.process;
      if ( process )
      {
        ((void (__stdcall *)(_DWORD))process->Unk_10E)(LODWORD(v28[0]));
        if ( ImageSpaceEffectEnabled )
        {
          if ( enableRefraction )
          {
            if ( ShaderPackage >= 2 )
            {
              a1a = ((double (__thiscall *)(Actor *, int, int, int))v15->vtbl->GetAV_F)(v15, 0x2F, a2, edi0);
              v26 = v15->vtbl->GetAV_F(v15, kActorVal_Chameleon);
              v27 = Min_Float(0.0, v26);
              retaddr = sub_4AC760(1.0, v27);
              if ( a1a > 0.0 && v15 == (Actor *)TESDataHandler_g_PlayerRef )
              {
                ((void (__thiscall *)(Actor *, _DWORD))v15->vtbl->Unk_C9)(v15, 1.0);
                v15->vtbl->SetTransparency(v15, 1, flt_A757CC);
              }
              else
              {
                vtbl = v15->vtbl;
                if ( retaddr <= 0.0 )
                {
                  SetTransparency = vtbl->SetTransparency;
                  if ( v29 <= 0.0 )
                  {
                    v19 = ((double (__cdecl *)(_DWORD, _DWORD))SetTransparency)(0, 0.0);
                    sub_5EE1B0(v15, v19);
                  }
                  else
                  {
                    ((void (__cdecl *)(int, _DWORD))SetTransparency)(1, LODWORD(v29));
                  }
                }
                else
                {
                  ((void (__thiscall *)(Actor *, _DWORD))vtbl->Unk_C9)(v15, 1.0);
                  a1b = 1.0 - retaddr / fCostant_100;
                  ChameleonMaxRefraction = Magic_GetChameleonMaxRefraction();
                  ChameleonMinRefraction = Magic_GetChameleonMinRefraction();
                  a1c = sub_410EB0(ChameleonMinRefraction, ChameleonMaxRefraction, 0.0, 1.0, a1b);
                  ((void (__thiscall *)(Actor *, int, _DWORD))v15->vtbl->SetTransparency)(v15, 1, LODWORD(a1c));
                }
              }
            }
          }
        }
        if ( IsConsoleMode )
        {
          v23 = v28[0];
          Name = TESObjectREFR_GetName(v10);
          Interface_ConsolePrint("%s refraction has been set to %f", Name, v23);
        }
      }
    }
    return 1;
  }
  return result;
}
