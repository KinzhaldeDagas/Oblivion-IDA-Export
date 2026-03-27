void __thiscall sub_5F7EC0(Actor *a1)
{
  TESPackage *v4; // esi
  UInt32 DeadState; // eax
  TESPackage *v6; // edi
  TESPackage *v7; // eax
  TESPackage *v8; // esi
  _DWORD *v9; // eax

  v4 = a1->members.super.process->GetCurrentPackage(a1->members.super.process);
  if ( !a1->vtbl->GetMountedHorse(a1) )
  {
    DeadState = a1->members.DeadState;
    if ( DeadState != 5 && DeadState != 3 )
    {
      v6 = 0;
      if ( !v4 || v4->members.type != 0x15 )
      {
        v7 = (TESPackage *)FormHeapAlloc(0x3Cu);
        if ( v7 )
          v8 = TESPackage::TESPackage(v7);
        else
          v8 = 0;
        TESPackage_SetType_(v8, 0x15);
        v8->members.packageFlags = v8->members.packageFlags & 0xFFFFFFF9 | 4;
        v9 = (_DWORD *)FormHeapAlloc(0xCu);
        if ( v9 )
          v6 = (TESPackage *)TESPackage_LocationData_constr(v9);
        TESPackage_LocationData_SetType(v6, 0);
        TESPackage_LocationData_SetReference(v6, (int)a1);
        TESPackage_SetLocation(v8, (char *)v6);
        if ( v6 )
        {
          TESPackage_LocationData_destr(v6);
          FormHeapFree((unsigned int)v6);
        }
        v8->members.procedureArrayIndex = 0x15;
        a1->members.super.process->Unk_08(a1->members.super.process);
        Actor_AddPackage_(a1, v8, 1, 1);
      }
    }
  }
}
