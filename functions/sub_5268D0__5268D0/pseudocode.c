void __userpurge sub_5268D0(
        BSExtraDataVtbl *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        char *a6)
{
  int *v6; // ebx
  Actor *v9; // eax
  Actor *v10; // ebp
  LowProcess *process; // ecx
  TESPackage *v12; // eax
  UInt32 packageFlags; // eax
  bool v14; // bl
  LowProcess *v15; // ecx
  char v16; // [esp+10h] [ebp-4h]
  char v17; // [esp+18h] [ebp+4h]

  v6 = (int *)a6;
  sub_47AB90(a6, a2, a3, a4, a1[0x1D].Destructor, (int)a1[5].Destructor & 1);
  v9 = (Actor *)OblivionDynamicCast(
                  a5,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  v10 = v9;
  if ( v9 )
  {
    process = v9->members.super.process;
    if ( process )
      ((void (__thiscall *)(LowProcess *, int))process->SetUnk16C)(process, 1);
  }
  if ( !a5->member.niNode )
  {
    v16 = 1;
    v17 = 1;
    v12 = sub_5E0380(v10);
    if ( v12 )
    {
      packageFlags = v12->members.packageFlags;
      v16 = (packageFlags & 0x100000) == 0;
      v17 = (packageFlags & 0x200000) == 0;
    }
    v14 = 1;
    if ( (SaveLoad_CurrentSavegame->flags & 2) != 0 )
      v14 = (sub_4533F0(SaveLoad_CurrentSavegame, (int)a5, 1) & 0x8000000) == 0;
    if ( (!a5->vtbl->IsDead(a5, 0) || (sub_4533F0(SaveLoad_CurrentSavegame, (int)a5, 1) & 0x40) == 0) && v14 )
      sub_5227A0(a1, a2, a3, a4, a5, v16, v17, 0, 0);
    v6 = (int *)a6;
  }
  if ( !bUSeMultithreadedFaceGen || !useFaceGenHeads )
    sub_525A70((int)a1, a4, (TESChildCELL *)a5, v6);
  sub_524280((int)a1, a2, a3, a4, a5, (char *)v6);
  if ( v6 != (int *)sub_6600D0(TESDataHandler_g_PlayerRef, 1) )
    sub_524510(a5, 0);
  if ( v10 )
  {
    v15 = v10->members.super.process;
    if ( v15 )
      ((void (__thiscall *)(LowProcess *, _DWORD))v15->SetUnk16C)(v15, 0);
  }
}
