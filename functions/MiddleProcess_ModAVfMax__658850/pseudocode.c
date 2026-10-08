void __thiscall MiddleProcess_ModAVfMax(MiddleLowProcess *self, int context, int actorValue, float delta)
{
  AVCollection_AdjustValue(&self->maxAVModifiers, actorValue, delta, 1u); /*0x658865*/
}
