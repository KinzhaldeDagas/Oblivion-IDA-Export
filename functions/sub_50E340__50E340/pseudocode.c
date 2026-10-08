// MoonSugarEffect decode: SetActorRefraction command; actor/process path uses refraction plus chameleon transparency ownership.
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
  float ba; // [esp+28h] [ebp-10h]
  float bb; // [esp+28h] [ebp-10h]
  float v28[2]; // [esp+2Ch] [ebp-Ch] BYREF
  float v29; // [esp+34h] [ebp-4h]
  float retaddr; // [esp+38h] [ebp+0h]
  float a1a; // [esp+3Ch] [ebp+4h]
  float a1b; // [esp+3Ch] [ebp+4h]
  float a1c; // [esp+3Ch] [ebp+4h]

  v28[0] = 0.0; /*0x50e34d*/
  v10 = a5; /*0x50e351*/
  result = Script_ExtractArgs(a1, a4, a3, a5, a6, a7, l, v28); /*0x50e371*/
  if ( result ) /*0x50e37b*/
  {
    if ( !a5 ) /*0x50e384*/
      v10 = (TESObjectREFR *)reference; /*0x50e386*/
    v12 = flt_A31C80; /*0x50e38c*/
    v13 = v28[0]; /*0x50e392*/
    if ( v28[0] < v12 && v13 <= 0.0 ) /*0x50e3a8*/
    {
      v28[0] = 0.0; /*0x50e3bf*/
    }
    else if ( v13 >= v12 ) /*0x50e3b3*/
    {
      v28[0] = flt_A31C80; /*0x50e3b5*/
    }
    v14 = (Actor *)OblivionDynamicCast( /*0x50e3d7*/
                     v10,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    v15 = v14; /*0x50e3dc*/
    if ( v14 ) /*0x50e3e3*/
    {
      process = v14->members.super.process; /*0x50e3e9*/
      if ( process ) /*0x50e3ee*/
      {
        ((void (__stdcall *)(_DWORD))process->Unk_10E)(LODWORD(v28[0])); /*0x50e404*/
        if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] ) /*0x50e406*/
        {
          if ( OB_ShaderPassControl_010201A0.refractionPassEnabled ) /*0x50e413*/
          {
            if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x50e427*/
            {
              a1a = ((double (__thiscall *)(Actor *, int, int, int))v15->vtbl->GetAV_F)(v15, 0x2F, a2, edi0); /*0x50e43b*/
              ba = v15->vtbl->GetAV_F(v15, kActorVal_Chameleon); /*0x50e450*/
              bb = Min_Float(0.0, ba); /*0x50e45e*/
              retaddr = Float_Min(1.0, bb); /*0x50e46c*/
              if ( a1a > 0.0 && v15 == (Actor *)reference ) /*0x50e486*/
              {
                ((void (__thiscall *)(Actor *, _DWORD))v15->vtbl->Unk_C9)(v15, 1.0); /*0x50e49a*/
                v15->vtbl->SetTransparency(v15, 1, flt_A757CC); /*0x50e4b2*/
              }
              else
              {
                vtbl = v15->vtbl; /*0x50e4bd*/
                if ( retaddr <= 0.0 ) /*0x50e4c7*/
                {
                  SetTransparency = vtbl->SetTransparency; /*0x50e540*/
                  if ( v29 <= 0.0 ) /*0x50e546*/
                  {
                    v19 = ((double (__cdecl *)(_DWORD, _DWORD))SetTransparency)(0, 0.0); /*0x50e55a*/
                    sub_5EE1B0(v15, v19); /*0x50e55e*/
                  }
                  else
                  {
                    ((void (__cdecl *)(int, _DWORD))SetTransparency)(1, LODWORD(v29)); /*0x50e54f*/
                  }
                }
                else
                {
                  ((void (__thiscall *)(Actor *, _DWORD))vtbl->Unk_C9)(v15, 1.0); /*0x50e4d6*/
                  a1b = 1.0 - retaddr / fCostant_100; /*0x50e4e9*/
                  ChameleonMaxRefraction = Magic_GetChameleonMaxRefraction(); /*0x50e506*/
                  ChameleonMinRefraction = Magic_GetChameleonMinRefraction(); /*0x50e50f*/
                  a1c = sub_410EB0(ChameleonMinRefraction, ChameleonMaxRefraction, 0.0, 1.0, a1b); /*0x50e519*/
                  ((void (__thiscall *)(Actor *, int, _DWORD))v15->vtbl->SetTransparency)(v15, 1, LODWORD(a1c)); /*0x50e531*/
                }
              }
            }
          }
        }
        if ( MEMORY[0xB361AC] ) /*0x50e563*/
        {
          v23 = v28[0]; /*0x50e575*/
          Name = TESObjectREFR_GetName(v10); /*0x50e578*/
          Interface_ConsolePrint("%s refraction has been set to %f", Name, v23); /*0x50e583*/
        }
      }
    }
    return 1; /*0x50e58c*/
  }
  return result; /*0x50e37e*/
}
