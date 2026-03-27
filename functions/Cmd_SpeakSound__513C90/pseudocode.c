char __usercall Cmd_SpeakSound@<al>(
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *arg8,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        int a8,
        UInt32 *a9)
{
  int v11; // eax
  Actor *v13; // eax
  Actor *v14; // esi
  int v16; // [esp+1Ch] [ebp+0h] BYREF
  unsigned int v17; // [esp+20h] [ebp+4h] BYREF
  UInt32 *a3; // [esp+24h] [ebp+8h]
  BSStringT v19; // [esp+28h] [ebp+Ch] BYREF
  TESObjectREFR *a4; // [esp+30h] [ebp+14h] BYREF
  char ArgList[1024]; // [esp+34h] [ebp+18h] BYREF
  unsigned int v22; // [esp+440h] [ebp+424h]

  a3 = a9;
  a4 = arg8;
  v19.m_data = 0;
  v19.m_dataLen = 0;
  v19.m_bufLen = 0;
  v22 = 0;
  v17 = 0;
  v16 = 0x32;
  if ( !Script_ExtractArgs(a1, arg4, a9, arg8, a5, a6, l, ArgList, &v17, &v16) )
    goto LABEL_17;
  v11 = 0;
  while ( ArgList[v11++] )
    ;
  if ( arg8
    && (v13 = (Actor *)OblivionDynamicCast(
                         arg8,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0),
        (v14 = v13) != 0)
    && v13->members.super.process
    && !Actor::GetProcessLevel(v13) )
  {
    if ( v17 > 6 )
      v17 = 0;
    if ( v16 >= 0 )
    {
      if ( v16 > 0x64 )
        v16 = 0x64;
    }
    else
    {
      v16 = 0;
    }
    BSStringT_Static_Format(&v19, "%s", ArgList);
    Actor::InitDialogue(v14, v19.m_data, (int **)&a4, v17, v16, 0, 0, 0, 0, 1);
    *(float *)&a3 = st7_0;
    ((void (__thiscall *)(LowProcess *, int))v14->members.super.process->Unk_80)(v14->members.super.process, 1);
    ((void (__thiscall *)(LowProcess *, UInt32 *))v14->members.super.process->Unk_82)(v14->members.super.process, a3);
    if ( IsConsoleMode )
      Interface_ConsolePrint("The NPC will speak the sound now.");
    v22 = 0xFFFFFFFF;
    BSStringT_Clear((unsigned int *)&v19);
    return 1;
  }
  else
  {
LABEL_17:
    FormHeapFree(0);
    return 0;
  }
}
