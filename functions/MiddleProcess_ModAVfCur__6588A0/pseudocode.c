void __thiscall MiddleProcess_ModAVfCur(MiddleLowProcess *self, int context, int actorValue, float delta)
{
  AVCollection_AdjustValue(&self->avDamageModifiers, actorValue, delta, 0); /*0x6588b2*/
}
