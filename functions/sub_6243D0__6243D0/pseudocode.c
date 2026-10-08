double __userpurge sub_6243D0@<st0>(
        Actor *this@<ecx>,
        double result@<st0>,
        void (__thiscall *a3)(BaseFormComponent *this),
        void (__thiscall *a4)(BaseFormComponent *this))
{
  TESObjectCELL *parentCell; // esi
  int v6; // ebp
  TESFormVtbl *vtbl; // eax
  TESObjectCELL *v8; // eax
  TESFormVtbl *v9; // esi
  char *v10; // eax

  if ( a3 )
  {
    parentCell = this->members.super.super.parentCell; /*0x6243e2*/
    v6 = CombatController_GetCurrentTarget((int)this); /*0x6243ea*/
    vtbl = parentCell->vtbl; /*0x6243ec*/
    if ( !parentCell->vtbl || *(_DWORD *)&parentCell->members.super.type )
    {
      do
      {
        v8 = *(TESObjectCELL **)&parentCell->members.super.type; /*0x624410*/
        if ( !v8 && !parentCell->vtbl ) /*0x624417*/
          break; /*0x624417*/
        v9 = parentCell->vtbl; /*0x62441b*/
        if ( v9->super.InitializeComponent == a3 && !LOBYTE(v9->super.CopyFromBase) )
        {
          v10 = (char *)a4
              + (LOBYTE(v9->super.CopyFromBase) != 0 ? LODWORD(g_GameSettingStringPointers_B36CD8[0x14E]) : 0);
          if ( (char *)v9->super.ClearComponentReferences != v10 ) /*0x62444a*/
          {
            v9->super.ClearComponentReferences = (void (__thiscall *)(BaseFormComponent *))v10; /*0x62444e*/
            CombatController_UpdateTargetRetentionAndSort(this); /*0x624451*/
          }
          if ( v6 != CombatController_GetCurrentTarget((int)this) ) /*0x62445f*/
            return CombatController_RefreshTacticalState((int)this, this, result, 1); /*0x624465*/
          return result; /*0x624465*/
        }
        parentCell = v8; /*0x624427*/
      }
      while ( v8 );
    }
    else if ( vtbl->super.InitializeComponent == a3 && !LOBYTE(vtbl->super.CopyFromBase) ) /*0x6243fc*/
    {
      vtbl->super.ClearComponentReferences = a4; /*0x624409*/
    }
  }
  return result; /*0x624408*/
}
