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
  int v9; // eax
  Actor *v11; // eax
  Actor *v12; // esi
  int v14; // [esp+1Ch] [ebp+0h] BYREF
  unsigned int v15; // [esp+20h] [ebp+4h] BYREF
  UInt32 *a3; // [esp+24h] [ebp+8h]
  BSStringT v17; // [esp+28h] [ebp+Ch] BYREF
  TESObjectREFR *a4; // [esp+30h] [ebp+14h] BYREF
  char ArgList[1024]; // [esp+34h] [ebp+18h] BYREF
  unsigned int v20; // [esp+440h] [ebp+424h]

  a3 = a9; /*0x513cf5*/
  a4 = arg8; /*0x513cfb*/
  v17.m_data = 0; /*0x513d06*/
  v17.m_dataLen = 0; /*0x513d0a*/
  v17.m_bufLen = 0; /*0x513d0f*/
  v20 = 0; /*0x513d32*/
  v15 = 0; /*0x513d39*/
  v14 = 0x32; /*0x513d3d*/
  if ( !Script_ExtractArgs(a1, arg4, a9, arg8, a5, a6, l, ArgList, &v15, &v14) ) /*0x513d45*/
    goto LABEL_17; /*0x513d45*/
  v9 = 0; /*0x513d55*/
  while ( ArgList[v9++] ) /*0x513d60*/
    ; /*0x513d57*/
  if ( arg8 /*0x513d94*/
    && (v11 = (Actor *)OblivionDynamicCast(
                         arg8,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0),
        (v12 = v11) != 0)
    && v11->members.super.process
    && !Actor::GetProcessLevel(v11) )
  {
    if ( v15 > 6 ) /*0x513da7*/
      v15 = 0; /*0x513dae*/
    if ( v14 >= 0 ) /*0x513db8*/
    {
      if ( v14 > 0x64 ) /*0x513dc3*/
        v14 = 0x64; /*0x513dc5*/
    }
    else
    {
      v14 = 0; /*0x513dba*/
    }
    BSStringT_Static_Format(&v17, "%s", ArgList); /*0x513ddc*/
    Actor::InitDialogue(v12, v17.m_data, (int **)&a4, v15, v14, 0, 0, 0, 0, 1); /*0x513e00*/
    *(float *)&a3 = st7_0; /*0x513e05*/
    ((void (__thiscall *)(LowProcess *, int))v12->members.super.process->Unk_80)(v12->members.super.process, 1); /*0x513e16*/
    ((void (__thiscall *)(LowProcess *, UInt32 *))v12->members.super.process->Unk_82)(v12->members.super.process, a3); /*0x513e2d*/
    if ( MEMORY[0xB361AC] ) /*0x513e2f*/
      Interface_ConsolePrint("The NPC will speak the sound now."); /*0x513e3c*/
    v20 = 0xFFFFFFFF; /*0x513e48*/
    BSStringT_Clear((unsigned int *)&v17); /*0x513e53*/
    return 1; /*0x513e58*/
  }
  else
  {
LABEL_17:
    FormHeapFree(0); /*0x513e5d*/
    return 0; /*0x513e65*/
  }
}
