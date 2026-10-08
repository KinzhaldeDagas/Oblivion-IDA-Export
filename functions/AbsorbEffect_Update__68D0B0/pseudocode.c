int __usercall AbsorbEffect_Update@<eax>(ActiveEffect *a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5)
{
  MagicCaster *caster; // ecx
  char ParentActor; // bp
  MagicTarget *target; // ecx
  Actor *v10; // edi
  ActorVtbl *vtbl; // ebx
  ActiveEffect *v12; // eax
  double v13; // st7
  ActorVtbl *v14; // ebx
  ActiveEffect *v15; // eax
  int v17; // [esp+28h] [ebp+10h]

  ValueModifierEffect_UpdateEffect(a1, a3); /*0x68d0c0*/
  caster = a1->members.caster; /*0x68d0c5*/
  if ( caster ) /*0x68d0ca*/
    ParentActor = (unsigned __int8)MagicCaster_GetParentActor(caster); /*0x68d0d1*/
  else
    ParentActor = 0; /*0x68d0d5*/
  target = a1->members.target; /*0x68d0d7*/
  if ( target ) /*0x68d0dc*/
    v10 = MagicTarget_GetParentActor(target); /*0x68d0e3*/
  else
    v10 = 0; /*0x68d0e7*/
  if ( (a1->members.effectItem->setting->effectFlags & 2) != 0 || a1->members.duration <= 0.0 ) /*0x68d107*/
    JUMPOUT(0x68D1BD); /*0x68d1bd*/
  if ( ((int (__thiscall *)(ActiveEffect *, int))a1->vtbl[1].clone)(a1, a2) == 0xA ) /*0x68d11a*/
  {
    if ( v10 ) /*0x68d11e*/
    {
      vtbl = v10->vtbl; /*0x68d125*/
      v12 = a1->vtbl[1].clone(a1); /*0x68d129*/
      v17 = vtbl->GetActorValue(v10, (AVCode)v12); /*0x68d136*/
      v13 = (double)v17; /*0x68d13a*/
      if ( v13 < *(float *)&SrcStr ) /*0x68d149*/
      {
        if ( v10->vtbl->super.super.GetKnockedState((TESObjectREFR *)v10) ) /*0x68d155*/
          goto LABEL_16; /*0x68d159*/
      }
    }
AbsorbEffect_Update___ApplyToCaster:
    JUMPOUT(0x68D195); /*0x68d195*/
  }
  if ( !v10 ) /*0x68d15f*/
    goto AbsorbEffect_Update___ApplyToCaster; /*0x68d15f*/
  v14 = v10->vtbl; /*0x68d166*/
  v15 = a1->vtbl[1].clone(a1); /*0x68d16a*/
  v17 = v14->GetActorValue(v10, (AVCode)v15); /*0x68d177*/
  v13 = (double)v17; /*0x68d17b*/
  if ( v13 > *(float *)&SrcStr ) /*0x68d18a*/
    goto AbsorbEffect_Update___ApplyToCaster; /*0x68d18a*/
LABEL_16:
  ActiveEffect_Base_Remove(a1, ParentActor, v13, 0); /*0x68d18c*/
  return AbsorbEffect_Update_::ApplyToCaster(a3, a4, a5, v17);
}
