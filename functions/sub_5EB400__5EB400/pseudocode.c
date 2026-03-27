char __usercall sub_5EB400@<al>(Actor *this@<ecx>, double a2@<st1>)
{
  LowProcess *process; // eax
  TESPackage *editorPackage; // edi
  char v5; // al
  int v6; // eax
  char *location; // ecx
  int v8; // eax
  int *v9; // eax
  int v10; // edi
  int v11; // ebx
  float v12; // ebp
  TESObjectCELL *ParentCell; // eax
  int *v14; // eax
  int v16[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( !IsWeaponReady(this) )
    return 0;
  if ( sub_5E1E90(this) )
    return 0;
  process = this->members.super.process;
  if ( process )
  {
    editorPackage = process->editorPackage;
    if ( editorPackage )
    {
      sub_566DC0(editorPackage, flt_A30634, a2, this, 0, flt_A30634);
      if ( v5 )
      {
        if ( editorPackage->members.type == 6 )
        {
          if ( sub_566D00((char **)editorPackage, (int)this) )
          {
            v6 = sub_566D00((char **)editorPackage, (int)this);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x170))(v6) == TESDataHandler_g_XMarkerHeading )
              return 0;
          }
        }
        location = (char *)editorPackage->members.location;
        if ( location )
        {
          if ( sub_569740(location) == 3 )
          {
            sub_566DB0(editorPackage);
            if ( !v8 )
              return 0;
          }
        }
      }
    }
  }
  v9 = (int *)this->vtbl->super.super.GetPos((TESObjectREFR *)this);
  v10 = *v9;
  v11 = v9[1];
  v12 = *((float *)v9 + 2);
  if ( TESObjectREFR_GetParentCell((TESObjectREFR *)this) )
  {
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
    v14 = sub_5E2E20((TESObjectREFR *)this, v16, v10, v11, v12, ParentCell, 0.0, 0, 0);
    v10 = *v14;
    v11 = v14[1];
    v12 = *((float *)v14 + 2);
  }
  TESObjectREFR_SetPosition((TESObjectREFR *)this, *(float *)&v10, *(float *)&v11, v12);
  return 1;
}
