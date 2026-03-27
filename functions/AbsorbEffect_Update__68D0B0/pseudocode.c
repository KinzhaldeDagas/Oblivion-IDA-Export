int __usercall AbsorbEffect_Update@<eax>(ActiveEffect *a1@<ecx>, int a2@<ebx>, double a3@<st2>, int a4, int a5, int a6)
{
  MagicCaster *caster; // ecx
  char ParentActor; // bp
  MagicTarget *target; // ecx
  Actor *v10; // edi
  ActorVtbl *vtbl; // ebx
  int v12; // eax
  ActorVtbl *v13; // ebx
  int v14; // eax
  int v17; // [esp+28h] [ebp+10h]

  ValueModifierEffect_UpdateEffect(a1, a4);
  caster = a1->members.caster;
  if ( caster )
    ParentActor = (unsigned __int8)MagicCaster_GetParentActor(caster);
  else
    ParentActor = 0;
  target = a1->members.target;
  if ( target )
    v10 = MagicTarget_GetParentActor(target);
  else
    v10 = 0;
  if ( (a1->members.effectItem->setting->effectFlags & 2) != 0 || a1->members.duration <= 0.0 )
    JUMPOUT(0x68D1BD);
  if ( ((int (__thiscall *)(ActiveEffect *, int))a1->vtbl[0x11].noDef)(a1, a2) == 0xA )
  {
    if ( v10 )
    {
      vtbl = v10->vtbl;
      v12 = ((int (__thiscall *)(ActiveEffect *))a1->vtbl[0x11].noDef)(a1);
      v17 = vtbl->GetActorValue(v10, (AVCode)v12);
      if ( (double)v17 < *(float *)&SrcStr )
      {
        if ( v10->vtbl->super.super.GetKnockedState((TESObjectREFR *)v10) )
          goto LABEL_16;
      }
    }
AbsorbEffect_Update___ApplyToCaster:
    JUMPOUT(0x68D195);
  }
  if ( !v10 )
    goto AbsorbEffect_Update___ApplyToCaster;
  v13 = v10->vtbl;
  v14 = ((int (__thiscall *)(ActiveEffect *))a1->vtbl[0x11].noDef)(a1);
  v17 = v13->GetActorValue(v10, (AVCode)v14);
  if ( (double)v17 > *(float *)&SrcStr )
    goto AbsorbEffect_Update___ApplyToCaster;
LABEL_16:
  ActiveEffect_Base_Remove(a1, ParentActor, a3, 0);
  return AbsorbEffect_Update_::ApplyToCaster(a4, a5, a6, v17);
}
