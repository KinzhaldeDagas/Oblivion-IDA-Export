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
  int v9; // ebp
  Actor *v10; // esi
  LowProcess *process; // ecx
  LowProcess *v12; // ecx
  void *v13; // eax
  UInt16 v14[2]; // [esp+8h] [ebp-10h] BYREF
  TESTopic *v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h] BYREF
  BOOL v17; // [esp+14h] [ebp-4h]

  *a7 = 0.0;
  *(_DWORD *)v14 = 0;
  v15 = 0;
  v16 = 0;
  LOBYTE(v17) = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v14, &v15, &v16);
  if ( result )
  {
    if ( v16 > 0 )
      LOBYTE(v17) = 1;
    v9 = dword_B36798;
    dword_B36798 = 0x7FFFFFFF;
    v10 = (Actor *)OblivionDynamicCast(
                     a4,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    if ( v10 && *(_DWORD *)v14 )
    {
      process = v10->members.super.process;
      if ( process )
      {
        process->Unk_127(process);
        ((void (__thiscall *)(LowProcess *, _DWORD))v10->members.super.process->Unk_120)(
          v10->members.super.process,
          *(_DWORD *)v14);
        v12 = v10->members.super.process;
        v10->members.unk0E4 = *(Actor **)v14;
        v12->SayTopic(v12, v10, v15, v17, 0, 0);
        v13 = OblivionDynamicCast(
                v10->members.super.process,
                0,
                (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                &HighProcess `RTTI Type Descriptor',
                0);
        if ( v13 )
        {
          *a7 = ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)v13 + 0x208))(v13);
          dword_B36798 = v9;
          return 1;
        }
      }
    }
    else if ( a4 )
    {
      ((void (__thiscall *)(TESObjectREFR *, TESTopic *, _DWORD, _DWORD, _DWORD, int))a4->vtbl->Unk_37)(
        a4,
        v15,
        *(_DWORD *)v14,
        0,
        0,
        1);
    }
    dword_B36798 = v9;
    return 1;
  }
  return result;
}
