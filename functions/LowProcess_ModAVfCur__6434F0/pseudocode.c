void __thiscall LowProcess_ModAVfCur(LowProcess *self, int context, int actorValue, float delta)
{
  if ( actorValue >= 8 && actorValue <= 0xA ) /*0x6434fc*/
    AVCollection_AdjustValue(&self->avDamageModifiers, actorValue, delta, 0); /*0x64350c*/
}
