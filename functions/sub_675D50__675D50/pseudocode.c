void __thiscall sub_675D50(ActorProcessManager *this, PlayerCharacter *a2, char a3)
{
  TESObjectREFRVtbl *process; // esi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // edi
  int v5; // eax
  ActorProcessManager *v6; // esi
  int i; // ebx
  Actor *v8; // eax
  Actor *j; // edi
  Actor *vtbl; // esi
  TESPackage *v11; // eax
  int v12; // [esp+0h] [ebp-14h]

  if ( a2 )
  {
    if ( a2->super.super.super.process )
    {
      process = (TESObjectREFRVtbl *)a2->super.super.super.process;
      InitializeComponent = process->super.super.InitializeComponent;
      v5 = (*((int (__thiscall **)(TESObjectREFRVtbl *))process->super.super.InitializeComponent + 0x111))(process);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, int))InitializeComponent + 0x112))(process, -v5);
      if ( a2 == TESDataHandler_g_PlayerRef )
        LOBYTE(TESDataHandler_g_PlayerRef->unk738) = 0;
    }
  }
  v6 = this;
  for ( i = 0; i < 4; ++i )
  {
    if ( i )
    {
      if ( i == 1 )
      {
        v8 = sub_673A50(v6, 1);
      }
      else if ( i == 2 )
      {
        v8 = sub_673A50(v6, 2);
      }
      else
      {
        v8 = sub_673A50(v6, 3);
      }
    }
    else
    {
      v8 = sub_673A50(v6, 0);
    }
    for ( j = sub_7616D0((ActorList *)v8); j; v6 = this )
    {
      if ( !j->vtbl )
        break;
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))j->vtbl->super.super.super.super.InitializeComponent + 0x64))(j->vtbl) )
      {
        vtbl = (Actor *)j->vtbl;
        if ( j->vtbl )
        {
          if ( vtbl->vtbl->IsInCombat(vtbl, 1) )
          {
            if ( i > 1 )
              sub_5EAE70(vtbl, i, (int)j, v12);
            else
              ((void (__thiscall *)(Actor *, PlayerCharacter *))vtbl->vtbl->Unk_D0)(vtbl, a2);
          }
          else if ( !a3 && sub_5E6BA0(vtbl) )
          {
            if ( sub_5E0380(vtbl)->members.target )
            {
              v11 = sub_5E0380(vtbl);
              if ( (PlayerCharacter *)sub_569E60(v11->members.target).form == a2 || !a2 )
              {
                sub_5EAE70(vtbl, i, (int)j, v12);
                vtbl->members.super.process->Unk_126(vtbl->members.super.process);
              }
            }
          }
        }
      }
      j = *(Actor **)&j->members.super.super.super.type;
    }
  }
}
