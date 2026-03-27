void __usercall FrenzyEffect_RemoveEffect(_DWORD *this@<ecx>, double a2@<st0>)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // edi
  Actor *v5; // eax
  Actor *v6; // ebx
  Actor *vtbl; // esi
  bool v8; // zf

  ValueModifierEffect_Remove(a2);
  if ( !*((_BYTE *)this + 0x3C) )
  {
    v3 = (MagicTarget *)*(this + 8);
    if ( v3 )
    {
      ParentActor = MagicTarget_GetParentActor(v3);
      if ( ParentActor )
      {
        if ( ParentActor->vtbl->IsInCombat(ParentActor, 1) )
        {
          ((void (__thiscall *)(Actor *, _DWORD))ParentActor->vtbl->Unk_D0)(ParentActor, 0);
          v5 = sub_673A50(&ActorProcessManager_ptr, 0);
          v6 = sub_7616D0((ActorList *)v5);
          while ( v6 )
          {
            vtbl = (Actor *)v6->vtbl;
            v8 = v6->vtbl == (ActorVtbl *)ParentActor;
            v6 = *(Actor **)&v6->members.super.super.super.type;
            if ( !v8 )
            {
              if ( vtbl )
              {
                if ( vtbl->vtbl->super.super.IsActor((TESObjectREFR *)vtbl) )
                {
                  sub_5EFF30(vtbl, (int)v6, (int)vtbl, (int)ParentActor);
                  if ( vtbl->vtbl->IsInCombat(vtbl, 1) )
                    ((void (__thiscall *)(Actor *, Actor *))vtbl->vtbl->Unk_D0)(vtbl, ParentActor);
                }
              }
            }
          }
        }
      }
    }
  }
}
