double __userpurge sub_6243D0@<st0>(
        Actor *this@<ecx>,
        double result@<st0>,
        void (__thiscall *a3)(BaseFormComponent *this),
        void (__thiscall *a4)(BaseFormComponent *this))
{
  TESObjectCELL *parentCell; // esi
  int v7; // ebp
  TESFormVtbl *vtbl; // eax
  TESObjectCELL *v9; // eax
  TESFormVtbl *v10; // esi
  void (__thiscall *v11)(BaseFormComponent *); // eax

  if ( a3 )
  {
    parentCell = this->members.super.super.parentCell;
    v7 = sub_6135F0((int)this);
    vtbl = parentCell->vtbl;
    if ( !parentCell->vtbl || *(_DWORD *)&parentCell->members.super.type )
    {
      do
      {
        v9 = *(TESObjectCELL **)&parentCell->members.super.type;
        if ( !v9 && !parentCell->vtbl )
          break;
        v10 = parentCell->vtbl;
        if ( v10->super.InitializeComponent == a3 && !LOBYTE(v10->super.CopyFromBase) )
        {
          v11 = (void (__thiscall *)(BaseFormComponent *))((char *)a4
                                                         + (LOBYTE(v10->super.CopyFromBase) != 0
                                                          ? iCombatHighPriorityModifier
                                                          : 0));
          if ( v10->super.ClearComponentReferences != v11 )
          {
            v10->super.ClearComponentReferences = v11;
            sub_619C90(this);
          }
          if ( v7 != sub_6135F0((int)this) )
            return sub_624030((int)this, this, result, 1);
          return result;
        }
        parentCell = v9;
      }
      while ( v9 );
    }
    else if ( vtbl->super.InitializeComponent == a3 && !LOBYTE(vtbl->super.CopyFromBase) )
    {
      vtbl->super.ClearComponentReferences = a4;
    }
  }
  return result;
}
