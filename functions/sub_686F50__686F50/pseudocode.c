char __cdecl sub_686F50(MobileObject *a1, char *a2, TeleportData *a3, char a4, char a5)
{
  NiPoint3 *v6; // eax
  TESObjectREFRVtbl *process; // ecx
  char v8; // bl
  int v9; // eax
  NiPoint3 *v10; // eax
  TESObjectCELL *ParentCell; // [esp-4h] [ebp-18h]
  float v12; // [esp+0h] [ebp-14h]

  if ( !a2 )
    return 0;
  v6 = (NiPoint3 *)sub_6899C0(a2);
  TeleportData::SetTeleportPosition(a3, v6);
  if ( byte_B3C089 )
    return 1;
  if ( !a1 )
    return 0;
  if ( !MobileObject_GetCharProxy(a1) )
    return 0;
  process = (TESObjectREFRVtbl *)a1->process;
  if ( !process )
    return 0;
  if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))process->super.super.InitializeComponent + 2))(process) )
    return 1;
  v8 = 0;
  if ( sub_68CA20(a2) )
  {
    if ( sub_68CA80(a2) )
    {
      if ( sub_5E3400((Actor *)a1) )
        return 1;
      if ( !sub_68CAB0(a2) && Actor_IsCreature((Actor *)a1) )
      {
        v12 = flt_A3744C;
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
        v9 = sub_6899C0(a2);
        if ( !Actor_IsUnderwater__(a1, v9, (ExtraDataList *)ParentCell, v12) )
          return 1;
      }
    }
    else if ( !sub_5E1E90(a1) )
    {
      return 1;
    }
  }
  else
  {
    v10 = (NiPoint3 *)sub_6899C0(a2);
    return sub_686450(a1, v10, a3, a4, a5);
  }
  return v8;
}
