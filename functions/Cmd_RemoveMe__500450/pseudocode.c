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
  TESObjectREFRVtbl *vtbl; // ebx
  int v17; // eax
  double v18; // st7
  UInt16 v20[2]; // [esp+Ch] [ebp-4h] BYREF

  v11 = 0; /*0x50047b*/
  *(_DWORD *)v20 = 0; /*0x50047e*/
  if ( !Script_ExtractArgs(a1, arg4, a3, a4, a7, a8, l, v20) ) /*0x50048c*/
    return 0; /*0x50048c*/
  if ( a4 && a7 ) /*0x50049c*/
  {
    v12 = (Actor *)OblivionDynamicCast( /*0x5004b5*/
                     a7,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    if ( v12 ) /*0x5004bc*/
    {
      v13 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a4->vtbl->GetBaseForm)( /*0x5004c8*/
              a4,
              st7_0,
              a2,
              st5_0);
      if ( Actor_IsObjectEquipped((TESObjectREFR *)v12, v13) ) /*0x5004cd*/
      {
        Actor_GetActorBaseForm(v12, 0); /*0x5004d9*/
        ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a7); /*0x5004f0*/
        if ( ContainerExtraDataForRef ) /*0x5004f7*/
        {
          v15 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a4->vtbl->GetBaseForm)( /*0x500505*/
                  a4,
                  st7_0,
                  a2,
                  st5_0);
          v11 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, v15, 0); /*0x50050f*/
        }
      }
    }
    vtbl = a7->vtbl; /*0x500517*/
    v17 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, ExtraDataList *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, double@<st0>, double@<st1>, double@<st2>))a4->vtbl->GetBaseForm)( /*0x500531*/
            a4,
            v11,
            1,
            0,
            0,
            *(_DWORD *)v20,
            0,
            0,
            1,
            0,
            st7_0,
            a2,
            st5_0);
    v18 = ((double (__thiscall *)(TESObjectREFR *, int))vtbl->RemoveItem)(a7, v17); /*0x50053c*/
    sub_665260((TESObjectREFR *)reference, v18, (PlayerCharacter *)a4); /*0x500545*/
    if ( a7 == (TESObjectREFR *)reference ) /*0x500551*/
      sub_57A3B0(st5_0, a2, 0); /*0x500555*/
    return 0; /*0x500563*/
  }
  return 1; /*0x50055d*/
}
