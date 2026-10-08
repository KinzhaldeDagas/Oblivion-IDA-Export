bool __cdecl Cmd_SayTo(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  bool result; // al
  float v9; // ebp
  Actor *v10; // esi
  LowProcess *process; // ecx
  LowProcess *v12; // ecx
  void *v13; // eax
  UInt16 v14[2]; // [esp+8h] [ebp-10h] BYREF
  TESTopic *v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h] BYREF
  BOOL v17; // [esp+14h] [ebp-4h]

  *a7 = 0.0; /*0x511aba*/
  *(_DWORD *)v14 = 0; /*0x511af1*/
  v15 = 0; /*0x511af5*/
  v16 = 0; /*0x511af9*/
  LOBYTE(v17) = 0; /*0x511afd*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v14, &v15, &v16); /*0x511b01*/
  if ( result ) /*0x511b0b*/
  {
    if ( v16 > 0 ) /*0x511b17*/
      LOBYTE(v17) = 1; /*0x511b19*/
    v9 = flt_B36778[8]; /*0x511b1f*/
    flt_B36778[8] = NAN; /*0x511b33*/
    v10 = (Actor *)OblivionDynamicCast( /*0x511b42*/
                     a4,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    if ( v10 && *(_DWORD *)v14 ) /*0x511b55*/
    {
      process = v10->members.super.process; /*0x511b5b*/
      if ( process ) /*0x511b60*/
      {
        process->Unk_127(process); /*0x511b6e*/
        ((void (__thiscall *)(LowProcess *, _DWORD))v10->members.super.process->Unk_120)( /*0x511b80*/
          v10->members.super.process,
          *(_DWORD *)v14);
        v12 = v10->members.super.process; /*0x511b86*/
        v10->members.unk0E4 = *(Actor **)v14; /*0x511b8a*/
        v12->SayTopic(v12, v10, v15, v17, 0, 0); /*0x511ba4*/
        v13 = OblivionDynamicCast( /*0x511bb6*/
                v10->members.super.process,
                0,
                (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                &HighProcess `RTTI Type Descriptor',
                0);
        if ( v13 ) /*0x511bc0*/
        {
          *a7 = ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)v13 + 0x208))(v13); /*0x511bd3*/
          flt_B36778[8] = v9; /*0x511bd5*/
          return 1; /*0x511be3*/
        }
      }
    }
    else if ( a4 ) /*0x511be6*/
    {
      ((void (__thiscall *)(TESObjectREFR *, TESTopic *, _DWORD, _DWORD, _DWORD, int))a4->vtbl->Unk_37)( /*0x511bfc*/
        a4,
        v15,
        *(_DWORD *)v14,
        0,
        0,
        1);
    }
    flt_B36778[8] = v9; /*0x511c01*/
    return 1; /*0x511c09*/
  }
  return result; /*0x511b0d*/
}
