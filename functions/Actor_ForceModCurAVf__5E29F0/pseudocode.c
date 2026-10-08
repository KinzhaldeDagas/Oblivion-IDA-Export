// Verified collection relationship: modifies Actor+0x88 avModifiers through AdjustValue with allowPositive=1; then marks change mask0x200000. Distinct storage from process damage(+0x70) and max(+0x94) collections. Other hit/skill side effects are outside this pass.
int __thiscall Actor_ForceModCurAVf(Actor *self, int actorValue, float delta, int a4)
{
  int result; // eax
  float *ContainerChanges; // eax

  if ( actorValue != 0xA /*0x5e2a16*/
    || delta >= 0.0
    || (result = ((int (__thiscall *)(Actor *))self->vtbl->Unk_9E)(self), (_BYTE)result) )
  {
    AVCollection_AdjustValue(&self->members.avModifiers, actorValue, delta, 1u); /*0x5e2a2d*/
    if ( actorValue == 8 && delta < 0.0 ) /*0x5e2a46*/
      ((void (__thiscall *)(Actor *, int, _DWORD))self->vtbl->OnHealthDamage)(self, a4, LODWORD(delta)); /*0x5e2a5b*/
    self->vtbl->super.super.super.MarkAsModified((TESForm *)self, 0x200000); /*0x5e2a6d*/
    result = actorValue - 0xC; /*0x5e2a6f*/
    if ( (unsigned int)(actorValue - 0xC) <= 0x14 && (actorValue == 0x12 || actorValue == 0x1B) ) /*0x5e2a7f*/
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&self->members.super.super.baseExtraList); /*0x5e2a84*/
      if ( ContainerChanges ) /*0x5e2a8b*/
        sub_484310(ContainerChanges); /*0x5e2a8f*/
      return ((int (__thiscall *)(Actor *))self->vtbl->Unk_B0)(self); /*0x5e2a9e*/
    }
  }
  return result; /*0x5e2aa0*/
}
