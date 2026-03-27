char __usercall Cmd_RemoveMe@<al>(
        double st5_0@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  ExtraDataList *v11; // ebp
  Actor *v12; // ebx
  int v13; // eax
  int ***ContainerExtraDataForRef; // ebx
  int v15; // eax
  PlayerCharacterVtbl *vtbl; // ebx
  int v17; // eax
  double v18; // st7
  int v19; // edx
  double v20; // st7
  UInt16 v22[2]; // [esp+Ch] [ebp-4h] BYREF

  v11 = 0;
  *(_DWORD *)v22 = 0;
  if ( !Script_ExtractArgs(a1, arg4, a3, a4, a7, a8, l, v22) )
    return 0;
  if ( a4 && a7 )
  {
    v12 = (Actor *)OblivionDynamicCast(
                     a7,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    if ( v12 )
    {
      v13 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a4->vtbl->GetBaseForm)(
              a4,
              st7_0,
              a2);
      if ( Actor_IsObjectEquipped((TESObjectREFR *)v12, v13) )
      {
        Actor_GetActorBaseForm(v12, 0);
        ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a7);
        if ( ContainerExtraDataForRef )
        {
          v15 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a4->vtbl->GetBaseForm)(
                  a4,
                  st7_0,
                  a2);
          v11 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, v15, 0);
        }
      }
    }
    vtbl = (PlayerCharacterVtbl *)a7->vtbl;
    v17 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, ExtraDataList *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, double@<st0>, double@<st1>))a4->vtbl->GetBaseForm)(
            a4,
            v11,
            1,
            0,
            0,
            *(_DWORD *)v22,
            0,
            0,
            1,
            0,
            st7_0,
            a2);
    v18 = ((double (__thiscall *)(TESObjectREFR *, int))vtbl->super.super.super.RemoveItem)(a7, v17);
    v20 = sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, v18, v19, (PlayerCharacter *)a4);
    if ( a7 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      sub_57A3B0((char)v11, st5_0, a2, v20, 0);
    return 0;
  }
  return 1;
}
